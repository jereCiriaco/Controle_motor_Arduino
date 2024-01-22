# Robô Seguidor de Linha 🤖🔍

## Descrição 📝
Este código em Arduino foi desenvolvido para controlar o motor de um robô seguidor de linha da equipe AsimUFF da UFF. O robô utiliza sensores para seguir uma linha específica e realizar movimentos pré-definidos.

## Pinagem dos Motores 🤖
- **Motor A:**
  - AI2: Pino de controle para a direção do motor A.
  - AI1: Pino de controle para a direção do motor A.
  - PWM_A: Pino PWM para controlar a velocidade do motor A.

- **Motor B:**
  - BI2: Pino de controle para a direção do motor B.
  - BI1: Pino de controle para a direção do motor B.
  - PWM_B: Pino PWM para controlar a velocidade do motor B.

## Setup do Arduino 🛠️
- **AI2, AI1, BI2, BI1:**
  - Configurados como saídas (OUTPUT) para controlar a direção dos motores.

- **PWM_A, PWM_B:**
  - Configurados como saídas (OUTPUT) para controlar a velocidade dos motores usando PWM.

## Loop Principal 🔄
O loop principal do código realiza movimentos específicos com intervalos de tempo. O robô segue os seguintes passos:
1. Avança por 2 segundos.
2. Para por 3 segundos.
3. Gira à esquerda por 2 segundos.
4. Para por 5 segundos.

Esses movimentos são repetidos no loop, proporcionando um comportamento de "avançar e girar" para o robô seguidor de linha.

---

