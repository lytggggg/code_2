??# i n c l u d e   " r e f . h "  
  
  
 ; / *          
 ; *   @ b r i e f     I n - p l a c e   b i t   r e v e r s a l   f u n c t i o n .        
 ; *   @ p a r a m [ i n ,   o u t ]   * p S r c                 p o i n t s   t o   t h e   i n - p l a c e   b u f f e r   o f   u n k n o w n   3 2 - b i t   d a t a   t y p e .    
 ; *   @ p a r a m [ i n ]             b i t R e v L e n         b i t   r e v e r s a l   t a b l e   l e n g t h  
 ; *   @ p a r a m [ i n ]             * p B i t R e v T a b     p o i n t s   t o   b i t   r e v e r s a l   t a b l e .        
 ; *   @ r e t u r n   n o n e .        
 ; * /  
 v o i d   a r m _ b i t r e v e r s a l _ 3 2 ( u i n t 3 2 _ t   * p S r c ,   u i n t 3 2 _ t   b i t R e v L e n ,   u i n t 3 2 _ t   * p B i t R e v T a b )  
 {  
 	 u i n t 3 2 _ t   a , b , i , t m p ;  
 	  
 	 f o r ( i = 0 ;   i < b i t R e v L e n ;   i + + )    
 	 {  
 	 	   a   =   p B i t R e v T a b [ 2 * i ] ;  
 	 	   b   =   p B i t R e v T a b [ 2 * i   +   1 ] ;  
  
 	 / / r e a l  
 	 	   t m p   =   p S r c [ a ] ;  
 	 	   p S r c [ a ]   =   p S r c [ b ] ;  
 	 	   p S r c [ b ]   =   t m p ;  
  
 	 / / c o m p l e x  
 	 	   t m p   =   p S r c [ a + 1 ] ;  
 	 	   p S r c [ a + 1 ]   =   p S r c [ b + 1 ] ;  
 	 	   p S r c [ b + 1 ]   =   t m p ;  
 	 }  
 }  