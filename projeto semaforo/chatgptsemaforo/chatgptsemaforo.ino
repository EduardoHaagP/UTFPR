#include <Bounce2.h>

// Definindo as variáveis
int semaforoViaVermelho = 3; // LED Vermelho da via no Pino 4
int semaforoViaAmarelo = 4; // LED Amarelo da via no Pino 3
int semaforoViaVerde = 5; // LED Verde da via no Pino 2
int semaforoPedestreVermelho = 6; // LED Vermelho do pedestre no Pino 6
int semaforoPedestreVerde = 7; // LED Verde do pedestre no Pino 5
int botaoPedestre = 2; // Botão do pedestre no Pino 7

Bounce debouncer = Bounce(); // Instância do debouncer

enum Estado {CARRO_PASSA, PEDESTRE_PASSA, ESPERA};
Estado estadoAtual = CARRO_PASSA;

unsigned long tempoAnterior = 0;

void setup() {
  pinMode(semaforoViaVerde, OUTPUT);
  pinMode(semaforoViaAmarelo, OUTPUT);
  pinMode(semaforoViaVermelho, OUTPUT);
  pinMode(semaforoPedestreVerde, OUTPUT);
  pinMode(semaforoPedestreVermelho, OUTPUT);
  pinMode(botaoPedestre, INPUT);

  debouncer.attach(botaoPedestre);
  debouncer.interval(5); // intervalo em ms

  digitalWrite(semaforoViaVerde, HIGH);
  digitalWrite(semaforoPedestreVermelho, HIGH);
}

void loop() {
  debouncer.update();
  int valorBotao = debouncer.read();

  unsigned long tempoAtual = millis();

  switch (estadoAtual) {
    case CARRO_PASSA:
      if (valorBotao == LOW) {
        estadoAtual = PEDESTRE_PASSA;
        tempoAnterior = tempoAtual;
      }
      break;
    case PEDESTRE_PASSA:
      if (tempoAtual - tempoAnterior < 3000) {
        digitalWrite(semaforoViaVerde, LOW);
        digitalWrite(semaforoViaAmarelo, HIGH);
      } else if (tempoAtual - tempoAnterior < 5000) {
        digitalWrite(semaforoViaAmarelo, LOW);
        digitalWrite(semaforoViaVermelho, HIGH);
      } else if (tempoAtual - tempoAnterior < 10000) {
        digitalWrite(semaforoPedestreVermelho, LOW);
        digitalWrite(semaforoPedestreVerde, HIGH);
      } else if (tempoAtual - tempoAnterior < 16000) {
        if ((tempoAtual / 500) % 2 == 0) {
          digitalWrite(semaforoPedestreVerde, HIGH);
        } else {
          digitalWrite(semaforoPedestreVerde, LOW);
        }
      } else {
        estadoAtual = ESPERA;
        tempoAnterior = tempoAtual;
      }
      break;
    case ESPERA:
      if (tempoAtual - tempoAnterior >= 5000) {
        estadoAtual = CARRO_PASSA;
        digitalWrite(semaforoViaVerde, HIGH);
        digitalWrite(semaforoViaVermelho, LOW);
        digitalWrite(semaforoPedestreVerde, LOW);
        digitalWrite(semaforoPedestreVermelho, HIGH);
      }
      break;
  }
}
