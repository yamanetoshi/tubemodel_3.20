*
* Generic triode model: 10
* Copyright 2003--2008 by Ayumi Nakabayashi, All rights reserved.
* Version 3.10, Generated on Sat Mar  8 22:41:25 2008
*          Plate
*          | Grid
*          | | Cathode
*          | | |
.SUBCKT 10 A G K
BGG   GG   0 V=V(G,K)+-0.99999237
BM1   M1   0 V=(0.0096683582*(URAMP(V(A,K))+1e-10))**-0.12233483
BM2   M2   0 V=(0.92459336*(URAMP(V(GG)+URAMP(V(A,K))/7.7993226)+1e-10))**1.6223348
BP    P    0 V=0.00027480869*(URAMP(V(GG)+URAMP(V(A,K))/8.4354085)+1e-10)**1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00020223856*V(M1)*V(M2)
BIG   IG   0 V=0.00013740434*URAMP(V(G,K))**1.5*(URAMP(V(G,K))/(URAMP(V(A,K))+URAMP(V(G,K)))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00018769219*URAMP(V(A,K))**1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 7p
CGK   G    K 4p
CAK   A    K 3p
.ENDS
