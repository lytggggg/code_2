??# i n c l u d e   " r e f . h "  
  
 a r m _ s t a t u s   r e f _ m a t _ m u l t _ f 3 2 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p D s t )  
 {  
 	 u i n t 3 2 _ t   r , c , i , o u t R , o u t C , i n n e r S i z e ;  
 	 f l o a t 3 2 _ t   s u m ;  
 	  
 	 o u t R   =   p S r c A - > n u m R o w s ;  
 	 o u t C   =   p S r c B - > n u m C o l s ;  
 	 i n n e r S i z e   =   p S r c A - > n u m C o l s ;  
 	  
 	 f o r ( r = 0 ; r < o u t R ; r + + )  
 	 {  
 	 	 f o r ( c = 0 ; c < o u t C ; c + + )  
 	 	 {  
 	 	 	 s u m   =   0 ;  
 	 	 	  
 	 	 	 f o r ( i = 0 ; i < i n n e r S i z e ; i + + )  
 	 	 	 {  
 	 	 	 	 s u m   + =   p S r c A - > p D a t a [ r * i n n e r S i z e   +   i ]   *   p S r c B - > p D a t a [ i * o u t C   +   c ] ;  
 	 	 	 }  
 	 	 	  
 	 	 	 p D s t - > p D a t a [ r * o u t C   +   c ]   =   s u m ;  
 	 	 }  
 	 }  
 	  
 	 r e t u r n   A R M _ M A T H _ S U C C E S S ;  
 }  
  
 a r m _ s t a t u s   r e f _ m a t _ m u l t _ q 3 1 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p D s t )  
 {  
 	 u i n t 3 2 _ t   r , c , i , o u t R , o u t C , i n n e r S i z e ;  
 	 q 6 3 _ t   s u m ;  
 	  
 	 o u t R   =   p S r c A - > n u m R o w s ;  
 	 o u t C   =   p S r c B - > n u m C o l s ;  
 	 i n n e r S i z e   =   p S r c A - > n u m C o l s ;  
 	  
 	 f o r ( r = 0 ; r < o u t R ; r + + )  
 	 {  
 	 	 f o r ( c = 0 ; c < o u t C ; c + + )  
 	 	 {  
 	 	 	 s u m   =   0 ;  
 	 	 	  
 	 	 	 f o r ( i = 0 ; i < i n n e r S i z e ; i + + )  
 	 	 	 {  
 	 	 	 	 s u m   + =   ( q 6 3 _ t ) ( p S r c A - > p D a t a [ r * i n n e r S i z e   +   i ] )   *   p S r c B - > p D a t a [ i * o u t C   +   c ] ;  
 	 	 	 }  
 	 	 	  
 	 	 	 p D s t - > p D a t a [ r * o u t C   +   c ]   =   r e f _ s a t _ q 3 1 ( s u m   > >   3 1 ) ;  
 	 	 }  
 	 }  
 	  
 	 r e t u r n   A R M _ M A T H _ S U C C E S S ;  
 }  
  
 a r m _ s t a t u s   r e f _ m a t _ m u l t _ q 1 5 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p D s t )  
 {  
 	 u i n t 3 2 _ t   r , c , i , o u t R , o u t C , i n n e r S i z e ;  
 	 q 6 3 _ t   s u m ;  
 	  
 	 o u t R   =   p S r c A - > n u m R o w s ;  
 	 o u t C   =   p S r c B - > n u m C o l s ;  
 	 i n n e r S i z e   =   p S r c A - > n u m C o l s ;  
 	  
 	 f o r ( r = 0 ; r < o u t R ; r + + )  
 	 {  
 	 	 f o r ( c = 0 ; c < o u t C ; c + + )  
 	 	 {  
 	 	 	 s u m   =   0 ;  
 	 	 	  
 	 	 	 f o r ( i = 0 ; i < i n n e r S i z e ; i + + )  
 	 	 	 {  
 	 	 	 	 s u m   + =   ( q 3 1 _ t ) ( p S r c A - > p D a t a [ r * i n n e r S i z e   +   i ] )   *   p S r c B - > p D a t a [ i * o u t C   +   c ] ;  
 	 	 	 }  
 	 	 	  
 	 	 	 p D s t - > p D a t a [ r * o u t C   +   c ]   =   r e f _ s a t _ q 1 5 ( s u m   > >   1 5 ) ;  
 	 	 }  
 	 }  
 	  
 	 r e t u r n   A R M _ M A T H _ S U C C E S S ;  
 }  