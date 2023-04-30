typedef enum { IZQUIERDA, CENTRO_H, DERECHA } AlineacionHorizontal; //funciona perfectamente, izquierda = 0 y el resto lo siguen 
typedef enum { ARRIBA=1, CENTRO_V, ABAJO } AlineacionVertical; //funciona tambien perfectamente,.
typedef enum { DOS=2, CERO=0, UNO, MENOS_UNO=-1, OTRO } Numeros;// funciona perfectamente dos(2), cero(0), uno(1), menos_uno(-1) y otro(0)
typedef enum { LET_A = "A", LET_B, LET_Z = "Z" } Letras; //esti tipo de enum no funciona ya que los valores entre "" no simples equivalen a strings y no son oridanles.
typedef enum { LETRA_A = 'A', LETRA_B, LETRA_Z = 'Z' } Letras2; //funciona perfectamente LETRA_A(A), LETRA_B(B), LETRA_Z(Z).