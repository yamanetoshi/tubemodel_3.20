*
* Generic triode model: 6AN8T
* Copyright 2003--2008 by Ayumi Nakabayashi, All rights reserved.
* Version 3.10, Generated on Sat Mar  8 22:39:05 2008
*             Plate
*             | Grid
*             | | Cathode
*             | | |
.SUBCKT 6AN8T A G K
BGG   GG   0 V=V(G,K)+0.60043597
BM1   M1   0 V=(0.041145821*(URAMP(V(A,K))+1e-10))**-1.4559246
BM2   M2   0 V=(0.50745543*(URAMP(V(GG)+URAMP(V(A,K))/11.970707)+1e-10))**2.9559246
BP    P    0 V=0.0016328391*(URAMP(V(GG)+URAMP(V(A,K))/23.589672)+1e-10)**1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0015634562*V(M1)*V(M2)
BIG   IG   0 V=0.00081641955*URAMP(V(G,K))**1.5*(URAMP(V(G,K))/(URAMP(V(A,K))+URAMP(V(G,K)))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00092133983*URAMP(V(A,K))**1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 1.5p
CGK   G    K 2p
CAK   A    K 0.3p
.ENDS
