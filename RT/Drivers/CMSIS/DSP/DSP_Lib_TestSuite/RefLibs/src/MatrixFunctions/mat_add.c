�?# i n c l u d e   " r e f . h "  
  
 a r m _ s t a t u s   r e f _ m a t _ a d d _ f 3 2 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p D s t )  
 {  
 	 u i n t 3 2 _ t   i ;  
     u i n t 3 2 _ t   n u m S a m p l e s ;                                                       / *   t o t a l   n u m b e r   o f   e l e m e n t s   i n   t h e   m a t r i x     * /  
  
 	 / *   T o t a l   n u m b e r   o f   s a m p l e s   i n   t h e   i n p u t   m a t r i x   * /  
 	 n u m S a m p l e s   =   ( u i n t 3 2 _ t )   p S r c A - > n u m R o w s   *   p S r c A - > n u m C o l s ;  
 	  
 	 f o r ( i = 0 ; i < n u m S a m p l e s ; i + + )  
 	 {  
 	 	 p D s t - > p D a t a [ i ]   =   p S r c A - > p D a t a [ i ]   +   p S r c B - > p D a t a [ i ] ;  
 	 }  
 	  
 	 r e t u r n   A R M _ M A T H _ S U C C E S S ;  
 }  
  
 a r m _ s t a t u s   r e f _ m a t _ a d d _ q 3 1 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p D s t )  
 {  
 	 u i n t 3 2 _ t   i ;  
     u i n t 3 2 _ t   n u m S a m p l e s ;                                                       / *   t o t a l   n u m b e r   o f   e l e m e n t s   i n   t h e   m a t r i x     * /  
  
 	 / *   T o t a l   n u m b e r   o f   s a m p l e s   i n   t h e   i n p u t   m a t r i x   * /  
 	 n u m S a m p l e s   =   ( u i n t 3 2 _ t )   p S r c A - > n u m R o w s   *   p S r c A - > n u m C o l s ;  
 	  
 	 f o r ( i = 0 ; i < n u m S a m p l e s ; i + + )  
 	 {  
 	 	 p D s t - > p D a t a [ i ]   =   r e f _ s a t _ q 3 1 (   ( q 6 3 _ t ) p S r c A - > p D a t a [ i ]   +   p S r c B - > p D a t a [ i ] ) ;  
 	 }  
 	  
 	 r e t u r n   A R M _ M A T H _ S U C C E S S ;  
 }  
  
 a r m _ s t a t u s   r e f _ m a t _ a d d _ q 1 5 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p D s t )  
 {  
 	 u i n t 3 2 _ t   i ;  
     u i n t 3 2 _ t   n u m S a m p l e s ;                                                       / *   t o t a l   n u m b e r   o f   e l e m e n t s   i n   t h e   m a t r i x     * /  
  
 	 / *   T o t a l   n u m b e r   o f   s a m p l e s   i n   t h e   i n p u t   m a t r i x   * /  
 	 n u m S a m p l e s   =   ( u i n t 3 2 _ t )   p S r c A - > n u m R o w s   *   p S r c A - > n u m C o l s ;  
 	  
 	 f o r ( i = 0 ; i < n u m S a m p l e s ; i + + )  
 	 {  
 	 	 p D s t - > p D a t a [ i ]   =   r e f _ s a t _ q 1 5 (   ( q 3 1 _ t ) p S r c A - > p D a t a [ i ]   +   p S r c B - > p D a t a [ i ] ) ;  
 	 }  
 	  
 	 r e t u r n   A R M _ M A T H _ S U C C E S S ;  
 }  