??# i n c l u d e   " r e f . h "  
  
 f l o a t 3 2 _ t   s c r a t c h A r r a y [ 8 1 9 2 * 2 ] ;    
  
 a r m _ c f f t _ i n s t a n c e _ f 3 2   r e f _ c f f t _ s R _ f 3 2 _ l e n 8 1 9 2   =   {   8 1 9 2 ,   0 ,   0 ,   0   } ;  
 	  
 q 3 1 _ t   r e f _ s a t _ n ( q 3 1 _ t   n u m ,   u i n t 3 2 _ t   b i t s )  
 {  
 	 i n t 3 2 _ t   p o s M a x ,   n e g M i n ;  
 	 u i n t 3 2 _ t   i ;  
  
 	 p o s M a x   =   1 ;  
 	 f o r   ( i   =   0 ;   i   <   ( b i t s   -   1 ) ;   i + + )  
 	 {  
 	 	 p o s M a x   =   p o s M a x   *   2 ;  
 	 }  
  
 	 i f   ( n u m   >   0 )  
 	 {  
 	 	 p o s M a x   =   ( p o s M a x   -   1 ) ;  
  
 	 	 i f   ( n u m   >   p o s M a x )  
 	 	 {  
 	 	 	 n u m   =   p o s M a x ;  
 	 	 }  
 	 }  
 	 e l s e  
 	 {  
 	 	 n e g M i n   =   - p o s M a x ;  
  
 	 	 i f   ( n u m   <   n e g M i n )  
 	 	 {  
 	 	 	 n u m   =   n e g M i n ;  
 	 	 }  
 	 }  
 	 r e t u r n   ( n u m ) ;  
 }  
  
 q 3 1 _ t   r e f _ s a t _ q 3 1 ( q 6 3 _ t   n u m )  
 {  
 	 i f   ( n u m   >   ( q 6 3 _ t ) I N T _ M A X )  
 	 {  
 	 	 r e t u r n   I N T _ M A X ;  
 	 }  
 	 e l s e   i f   ( n u m   <   ( q 6 3 _ t ) 0 x f f f f f f f f 8 0 0 0 0 0 0 0 l l )  
 	 {  
 	 	 r e t u r n   I N T _ M I N ;  
 	 }  
 	 e l s e  
 	 {  
 	 	 r e t u r n   ( q 3 1 _ t ) n u m ;  
 	 }  
 }  
  
 q 1 5 _ t   r e f _ s a t _ q 1 5 ( q 3 1 _ t   n u m )  
 {  
 	 i f   ( n u m   >   ( q 3 1 _ t ) S H R T _ M A X )  
 	 {  
 	 	 r e t u r n   S H R T _ M A X ;  
 	 }  
 	 e l s e   i f   ( n u m   <   ( q 3 1 _ t ) 0 x f f f f 8 0 0 0 )  
 	 {  
 	 	 r e t u r n   S H R T _ M I N ;  
 	 }  
 	 e l s e  
 	 {  
 	 	 r e t u r n   ( q 1 5 _ t ) n u m ;  
 	 }  
 }  
  
 q 7 _ t   r e f _ s a t _ q 7 ( q 1 5 _ t   n u m )  
 {  
 	 i f   ( n u m   >   ( q 1 5 _ t ) S C H A R _ M A X )  
 	 {  
 	 	 r e t u r n   S C H A R _ M A X ;  
 	 }  
 	 e l s e   i f   ( n u m   <   ( q 1 5 _ t ) 0 x f f 8 0 )  
 	 {  
 	 	 r e t u r n   S C H A R _ M I N ;  
 	 }  
 	 e l s e  
 	 {  
 	 	 r e t u r n   ( q 7 _ t ) n u m ;  
 	 }  
 }  
  
 f l o a t 3 2 _ t   r e f _ p o w ( f l o a t 3 2 _ t   a ,   u i n t 3 2 _ t   b )  
 {  
 	 u i n t 3 2 _ t   i ;  
 	 f l o a t 3 2 _ t   r   =   a ;  
 	  
 	 f o r ( i = 1 ; i < b ; i + + )    
 	 {  
 	 	 r   * =   a ;  
 	 }  
 	  
 	 i f   (   b   = =   0 )  
 	 {  
 	 	 r e t u r n   1 ;  
 	 }  
 	  
 	 r e t u r n   r ;  
 }  