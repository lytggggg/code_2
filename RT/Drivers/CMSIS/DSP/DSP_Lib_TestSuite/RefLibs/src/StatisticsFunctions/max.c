??# i n c l u d e   " r e f . h "  
  
 v o i d   r e f _ m a x _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     f l o a t 3 2 _ t   *   p R e s u l t ,  
     u i n t 3 2 _ t   *   p I n d e x )  
 {  
 	 u i n t 3 2 _ t   i ,   i n d = 0 ;  
 	 f l o a t 3 2 _ t   m a x = - F L T _ M A X ;  
 	  
 	 f o r ( i = 0 ; i < b l o c k S i z e ; i + + )  
 	 {  
 	 	 i f   ( m a x   <   p S r c [ i ] )  
 	 	 {  
 	 	 	 m a x   =   p S r c [ i ] ;  
 	 	 	 i n d   =   i ;  
 	 	 }  
 	 }  
 	 * p R e s u l t   =   m a x ;  
 	 * p I n d e x   =   i n d ;  
 }  
  
 v o i d   r e f _ m a x _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 3 1 _ t   *   p R e s u l t ,  
     u i n t 3 2 _ t   *   p I n d e x )  
 {  
 	 u i n t 3 2 _ t   i ,   i n d = 0 ;  
 	 q 3 1 _ t   m a x = I N T _ M I N ;  
 	  
 	 f o r ( i = 0 ; i < b l o c k S i z e ; i + + )  
 	 {  
 	 	 i f   ( m a x   <   p S r c [ i ] )  
 	 	 {  
 	 	 	 m a x   =   p S r c [ i ] ;  
 	 	 	 i n d   =   i ;  
 	 	 }  
 	 }  
 	 * p R e s u l t   =   m a x ;  
 	 * p I n d e x   =   i n d ;  
 }  
  
 v o i d   r e f _ m a x _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 1 5 _ t   *   p R e s u l t ,  
     u i n t 3 2 _ t   *   p I n d e x )  
 {  
 	 u i n t 3 2 _ t   i ,   i n d = 0 ;  
 	 q 1 5 _ t   m a x = S H R T _ M I N ;  
 	  
 	 f o r ( i = 0 ; i < b l o c k S i z e ; i + + )  
 	 {  
 	 	 i f   ( m a x   <   p S r c [ i ] )  
 	 	 {  
 	 	 	 m a x   =   p S r c [ i ] ;  
 	 	 	 i n d   =   i ;  
 	 	 }  
 	 }  
 	 * p R e s u l t   =   m a x ;  
 	 * p I n d e x   =   i n d ;  
 }  
  
 v o i d   r e f _ m a x _ q 7 (  
     q 7 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 7 _ t   *   p R e s u l t ,  
     u i n t 3 2 _ t   *   p I n d e x )  
 {  
 	 u i n t 3 2 _ t   i ,   i n d = 0 ;  
 	 q 7 _ t   m a x = S C H A R _ M I N ;  
 	  
 	 f o r ( i = 0 ; i < b l o c k S i z e ; i + + )  
 	 {  
 	 	 i f   ( m a x   <   p S r c [ i ] )  
 	 	 {  
 	 	 	 m a x   =   p S r c [ i ] ;  
 	 	 	 i n d   =   i ;  
 	 	 }  
 	 }  
 	 * p R e s u l t   =   m a x ;  
 	 * p I n d e x   =   i n d ;  
 }  