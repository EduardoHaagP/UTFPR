//Eduardo Haag Piassa da Silva a2669463
//Gabriel Mancuso Bonfim a2669498
//Felipe Kenzo Higashi a2669986
//Fabio Emanuel Martelli de Souza Canabrava Coimbra a2669978

//define os pinos das peças do arduino
#define botao 2
#define ledrc 3
#define ledyc 4
#define ledgc 5
#define ledrp 6
#define ledgp 7

//variaveis globais
bool cicloPedestreAtivo = false;
bool bloqueio = false;
unsigned long tempoInicio = 0;
unsigned long tempoBloqueioInicio = 0;
unsigned long tempoPassado = 0;

void setup() {
  pinMode(botao, INPUT);
  pinMode(ledrc, OUTPUT);
  pinMode(ledyc, OUTPUT);
  pinMode(ledgc, OUTPUT);
  pinMode(ledrp, OUTPUT);
  pinMode(ledgp, OUTPUT);

  // Inicializar LEDs
  digitalWrite(ledgc, HIGH);  // Verde da via
  digitalWrite(ledyc, LOW);   // Amarelo da via
  digitalWrite(ledrc, LOW);   // Vermelho da via
  digitalWrite(ledrp, HIGH);  // Vermelho do pedestre
  digitalWrite(ledgp, LOW);   // Verde do pedestre

  attachInterrupt(digitalPinToInterrupt(botao), iniciarCicloPedestre, FALLING);
}  //setup

void loop() {
  if (cicloPedestreAtivo) {
    tempoPassado = millis() - tempoInicio;  //inicia/recomeça o tempo do ciclo pedestre

    if (tempoPassado < 3000) {
      // Semáforo da via amarelo por 3 segundos
      digitalWrite(ledgc, LOW);
      digitalWrite(ledyc, HIGH);
      digitalWrite(ledrc, LOW);
      digitalWrite(ledrp, HIGH);
      digitalWrite(ledgp, LOW);
    }  //if
    else if (tempoPassado < 5000) {
      // Semáforo da via vermelho por 2 segundos
      digitalWrite(ledgc, LOW);
      digitalWrite(ledyc, LOW);
      digitalWrite(ledrc, HIGH);
      digitalWrite(ledrp, HIGH);
      digitalWrite(ledgp, LOW);
    }  //else if
    else if (tempoPassado < 10000) {
      // Semáforo do pedestre verde por 5 segundos
      digitalWrite(ledgc, LOW);
      digitalWrite(ledyc, LOW);
      digitalWrite(ledrc, HIGH);
      digitalWrite(ledrp, LOW);
      digitalWrite(ledgp, HIGH);
    }  //else if
    else if (tempoPassado < 16000) {
      // Semáforo do pedestre piscando por 6 segundos
      if ((tempoPassado / 500) % 2 == 0) {
        digitalWrite(ledgp, HIGH);
      }  //if
      else {
        digitalWrite(ledgp, LOW);
      }  //else
      digitalWrite(ledrc, HIGH);
      digitalWrite(ledrp, LOW);
    }  //else if
    else {
      // Fim do ciclo de pedestre
      cicloPedestreAtivo = false;
      bloqueio = true;                 //inicia o "bloqueio"/periodo de latencia
      tempoBloqueioInicio = millis();  //começa/reinicia a contagem do periodo de latencia
    }                                  //else
  } else if (bloqueio) {
    if (millis() - tempoBloqueioInicio < 5000) {
      // Período de latência de 5 segundos
      //impede de entrar no cilco pedestre
      digitalWrite(ledgc, HIGH);
      digitalWrite(ledyc, LOW);
      digitalWrite(ledrc, LOW);
      digitalWrite(ledrp, HIGH);
      digitalWrite(ledgp, LOW);
    } else {
      bloqueio = false;
    }  //if
  } else {
    // Modo passagem de veículos
    digitalWrite(ledgc, HIGH);
    digitalWrite(ledyc, LOW);
    digitalWrite(ledrc, LOW);
    digitalWrite(ledrp, HIGH);
    digitalWrite(ledgp, LOW);
  }  //else
}  //void loop

void iniciarCicloPedestre() {
  //inicia o ciclo do de passagem do pedestre
  if (!cicloPedestreAtivo && !bloqueio) {
    cicloPedestreAtivo = true;
    tempoInicio = millis();  //começa/reinicia o tempo para quando o botao for apertado
  } //if
}