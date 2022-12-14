??# i n c l u d e   " r e f . h "  
 # i n c l u d e   " a r m _ c o n s t _ s t r u c t s . h "  
 	    
 v o i d   r e f _ c f f t _ f 3 2 (  
       c o n s t   a r m _ c f f t _ i n s t a n c e _ f 3 2   *   S ,    
       f l o a t 3 2 _ t   *   p 1 ,  
       u i n t 8 _ t   i f f t F l a g ,  
       u i n t 8 _ t   b i t R e v e r s e F l a g )  
 {  
 	 i n t   n ,   m m a x ,   m ,   j ,   i s t e p ,   i ;  
 	 f l o a t 3 2 _ t   w t e m p ,   w r ,   w p r ,   w p i ,   w i ,   t h e t a ;  
 	 f l o a t 3 2 _ t   t e m p r ,   t e m p i ;  
 	 f l o a t 3 2 _ t   *     d a t a   =   p 1 ;  
 	 u i n t 3 2 _ t   N   =   S - > f f t L e n ;  
 	 i n t 3 2 _ t   d i r   =   ( i f f t F l a g )   ?   - 1   :   1 ;  
  
 	 / /   d e c r e m e n t   p o i n t e r   s i n c e   t h e   o r i g i n a l   v e r s i o n   u s e d   f o r t r a n   s t y l e   i n d e x i n g .  
 	 d a t a - - ;  
  
 	 n   =   N   < <   1 ;  
 	 j   =   1 ;  
 	 f o r   ( i   =   1 ;   i   <   n ;   i   + =   2 )   {  
 	 	 i f   ( j   >   i )   {  
 	 	 	 t e m p r   =   d a t a [ j ] ;           d a t a [ j ]   =   d a t a [ i ] ;           d a t a [ i ]   =   t e m p r ;  
 	 	 	 t e m p r   =   d a t a [ j + 1 ] ;   d a t a [ j + 1 ]   =   d a t a [ i + 1 ] ;   d a t a [ i + 1 ]   =   t e m p r ;  
 	 	 }  
 	 	 m   =   n   > >   1 ;  
 	 	 w h i l e   ( m   > =   2   & &   j   >   m )   {  
 	 	 	 j   - =   m ;  
 	 	 	 m   > > =   1 ;  
 	 	 }  
 	 	 j   + =   m ;  
 	 }  
 	 m m a x   =   2 ;  
 	 w h i l e   ( n   >   m m a x )   {  
 	 	 i s t e p   =   2 * m m a x ;  
 	 	 t h e t a   =   - 6 . 2 8 3 1 8 5 3 0 7 1 7 9 5 8 6 f / ( d i r * m m a x ) ;  
 	 	 w t e m p   =   s i n f ( 0 . 5 f * t h e t a ) ;  
 	 	 w p r   =   - 2 . 0 f * w t e m p * w t e m p ;  
 	 	 w p i   =   s i n f ( t h e t a ) ;  
 	 	 w r   =   1 . 0 f ;  
 	 	 w i   =   0 . 0 f ;  
 	 	 f o r   ( m   =   1 ;   m   <   m m a x ;   m   + =   2 )   {  
 	 	 	 f o r   ( i   =   m ;   i   < =   n ;   i   + =   i s t e p )   {  
 	 	 	 	 j   = i   +   m m a x ;  
 	 	 	 	 t e m p r   =   w r * d a t a [ j ]       -   w i * d a t a [ j + 1 ] ;  
 	 	 	 	 t e m p i   =   w r * d a t a [ j + 1 ]   +   w i * d a t a [ j ] ;  
 	 	 	 	 d a t a [ j ]       =   d a t a [ i ]       -   t e m p r ;  
 	 	 	 	 d a t a [ j + 1 ]   =   d a t a [ i + 1 ]   -   t e m p i ;  
 	 	 	 	 d a t a [ i ]   + =   t e m p r ;  
 	 	 	 	 d a t a [ i + 1 ]   + =   t e m p i ;  
 	 	 	 }  
 	 	 	 w r   =   ( w t e m p   =   w r ) * w p r   -   w i * w p i   +   w r ;  
 	 	 	 w i   =   w i * w p r   +   w t e m p * w p i   +   w i ;  
 	 	 }  
 	 	 m m a x   =   i s t e p ;  
 	 }  
  
 	 / /   I n v e r s e   t r a n s f o r m   i s   s c a l e d   b y   1 / N  
 	 i f   ( i f f t F l a g )  
 	 {  
 	 	 d a t a + + ;  
 	 	 f o r ( i   =   0 ;   i < 2 * N ;   i + + )  
 	 	 {  
 	 	 	 d a t a [ i ]   / =   N ;  
 	 	 }  
 	 }  
 }  
  
 v o i d   r e f _ c f f t _ q 3 1 (  
 	 c o n s t   a r m _ c f f t _ i n s t a n c e _ q 3 1   *   S ,  
         q 3 1 _ t   *   p 1 ,  
         u i n t 8 _ t   i f f t F l a g ,  
         u i n t 8 _ t   b i t R e v e r s e F l a g )  
 {  
 	 u i n t 3 2 _ t   i ;  
 	 f l o a t 3 2 _ t   * f S r c   =   ( f l o a t 3 2 _ t * ) p 1 ;  
 	  
 	 f o r ( i = 0 ; i < S - > f f t L e n * 2 ; i + + )  
 	 {  
 	 	 / / r e a d   t h e   q 3 1   d a t a ,   c a s t   t o   f l o a t ,   s c a l e   d o w n   f o r   f l o a t  
 	 	 f S r c [ i ]   =   ( f l o a t 3 2 _ t ) p 1 [ i ]   /   2 1 4 7 4 8 3 6 4 8 . 0 f ;  
 	 }  
 	  
 	 s w i t c h ( S - > f f t L e n )  
 	 {  
       c a s e   1 6 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 1 6 ,   f S r c ,   i f f t F l a g ,   b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   3 2 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 3 2 ,   f S r c ,   i f f t F l a g ,   b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   6 4 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 6 4 ,   f S r c ,   i f f t F l a g ,   b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   1 2 8 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 1 2 8 ,   f S r c ,   i f f t F l a g ,   b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   2 5 6 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 2 5 6 ,   f S r c ,   i f f t F l a g ,   b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   5 1 2 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 5 1 2 ,   f S r c ,   i f f t F l a g ,   b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   1 0 2 4 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 1 0 2 4 ,   f S r c ,   i f f t F l a g ,   b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   2 0 4 8 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 2 0 4 8 ,   f S r c ,   i f f t F l a g ,   b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   4 0 9 6 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 4 0 9 6 ,   f S r c ,   i f f t F l a g ,   b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
 	 }  
 	  
 	 i f   ( i f f t F l a g )  
 	 {  
 	 	 f o r ( i = 0 ; i < S - > f f t L e n * 2 ; i + + )  
 	 	 {  
 	 	 	 / / r e a d   t h e   f l o a t   d a t a ,   s c a l e   u p   f o r   q 3 1 ,   c a s t   t o   q 3 1  
 	 	 	 p 1 [ i ]   =   ( q 3 1 _ t ) (   f S r c [ i ]   *   2 1 4 7 4 8 3 6 4 8 . 0 f   ) ;  
 	 	 }  
 	 }  
 	 e l s e  
 	 {  
 	 	 f o r ( i = 0 ; i < S - > f f t L e n * 2 ; i + + )  
 	 	 {  
 	 	 	 / / r e a d   t h e   f l o a t   d a t a ,   s c a l e   u p   f o r   q 3 1 ,   c a s t   t o   q 3 1  
 	 	 	 p 1 [ i ]   =   ( q 3 1 _ t ) (   f S r c [ i ]   *   2 1 4 7 4 8 3 6 4 8 . 0 f   /   ( f l o a t 3 2 _ t ) S - > f f t L e n ) ;  
 	 	 }  
 	 }  
 }  
  
 v o i d   r e f _ c f f t _ q 1 5 (  
 	 c o n s t   a r m _ c f f t _ i n s t a n c e _ q 1 5   *   S ,  
         q 1 5 _ t   *   p S r c ,  
         u i n t 8 _ t   i f f t F l a g ,  
         u i n t 8 _ t   b i t R e v e r s e F l a g )  
 {  
 	 u i n t 3 2 _ t   i ;  
 	 f l o a t 3 2 _ t   * f S r c   =   ( f l o a t 3 2 _ t * ) p S r c ;  
 	  
 	 f o r ( i = 0 ; i < S - > f f t L e n * 2 ; i + + )  
 	 {  
 	 	 / / r e a d   t h e   q 1 5   d a t a ,   c a s t   t o   f l o a t ,   s c a l e   d o w n   f o r   f l o a t ,   p l a c e   i n   t e m p o r a r y   b u f f e r  
 	 	 s c r a t c h A r r a y [ i ]   =   ( f l o a t 3 2 _ t ) p S r c [ i ]   /   3 2 7 6 8 . 0 f ;  
 	 }  
 	  
 	 f o r ( i = 0 ; i < S - > f f t L e n * 2 ; i + + )  
 	 {  
 	 	 / / c o p y   f r o m   t e m p   b u f f e r   t o   f i n a l   b u f f e r  
 	 	 f S r c [ i ]   =   s c r a t c h A r r a y [ i ] ;  
 	 }  
 	  
 	 s w i t c h ( S - > f f t L e n )  
 	 {  
       c a s e   1 6 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 1 6 ,   f S r c ,   i f f t F l a g ,   b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   3 2 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 3 2 ,   f S r c ,   i f f t F l a g ,   b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   6 4 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 6 4 ,   f S r c ,   i f f t F l a g ,   b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   1 2 8 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 1 2 8 ,   f S r c ,   i f f t F l a g ,   b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   2 5 6 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 2 5 6 ,   f S r c ,   i f f t F l a g ,   b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   5 1 2 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 5 1 2 ,   f S r c ,   i f f t F l a g ,   b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   1 0 2 4 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 1 0 2 4 ,   f S r c ,   i f f t F l a g ,   b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   2 0 4 8 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 2 0 4 8 ,   f S r c ,   i f f t F l a g ,   b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   4 0 9 6 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 4 0 9 6 ,   f S r c ,   i f f t F l a g ,   b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
 	 }  
 	  
 	 i f   ( i f f t F l a g )  
 	 {  
 	 	 f o r ( i = 0 ; i < S - > f f t L e n * 2 ; i + + )  
 	 	 {  
 	 	 	 / / r e a d   t h e   f l o a t   d a t a ,   s c a l e   u p   f o r   q 1 5 ,   c a s t   t o   q 1 5  
 	 	 	 p S r c [ i ]   =   ( q 1 5 _ t ) (   f S r c [ i ]   *   3 2 7 6 8 . 0 f   ) ;  
 	 	 }  
 	 }  
 	 e l s e  
 	 {  
 	 	 f o r ( i = 0 ; i < S - > f f t L e n * 2 ; i + + )  
 	 	 {  
 	 	 	 / / r e a d   t h e   f l o a t   d a t a ,   s c a l e   u p   f o r   q 1 5 ,   c a s t   t o   q 1 5  
 	 	 	 p S r c [ i ]   =   ( q 1 5 _ t ) (   f S r c [ i ]   *   3 2 7 6 8 . 0 f   /   ( f l o a t 3 2 _ t ) S - > f f t L e n ) ;  
 	 	 }  
 	 }  
 }  
  
 v o i d   r e f _ c f f t _ r a d i x 2 _ f 3 2 (  
 	 c o n s t   a r m _ c f f t _ r a d i x 2 _ i n s t a n c e _ f 3 2   *   S ,  
 	 f l o a t 3 2 _ t   *   p S r c )  
 {  
 	 s w i t c h ( S - > f f t L e n )  
 	 {  
       c a s e   1 6 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 1 6 ,   p S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   3 2 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 3 2 ,   p S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   6 4 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 6 4 ,   p S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   1 2 8 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 1 2 8 ,   p S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   2 5 6 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 2 5 6 ,   p S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   5 1 2 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 5 1 2 ,   p S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   1 0 2 4 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 1 0 2 4 ,   p S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   2 0 4 8 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 2 0 4 8 ,   p S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   4 0 9 6 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 4 0 9 6 ,   p S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
 	 }  
 }  
  
 v o i d   r e f _ c f f t _ r a d i x 2 _ q 3 1 (  
 	 c o n s t   a r m _ c f f t _ r a d i x 2 _ i n s t a n c e _ q 3 1   *   S ,  
 	 q 3 1 _ t   *   p S r c )  
 {  
 	 u i n t 3 2 _ t   i ;  
 	 f l o a t 3 2 _ t   * f S r c   =   ( f l o a t 3 2 _ t * ) p S r c ;  
 	  
 	 f o r ( i = 0 ; i < S - > f f t L e n * 2 ; i + + )  
 	 {  
 	 	 / / r e a d   t h e   q 3 1   d a t a ,   c a s t   t o   f l o a t ,   s c a l e   d o w n   f o r   f l o a t  
 	 	 f S r c [ i ]   =   ( f l o a t 3 2 _ t ) p S r c [ i ]   /   2 1 4 7 4 8 3 6 4 8 . 0 f ;  
 	 }  
 	  
 	 s w i t c h ( S - > f f t L e n )  
 	 {  
       c a s e   1 6 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 1 6 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   3 2 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 3 2 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   6 4 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 6 4 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   1 2 8 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 1 2 8 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   2 5 6 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 2 5 6 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   5 1 2 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 5 1 2 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   1 0 2 4 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 1 0 2 4 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   2 0 4 8 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 2 0 4 8 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   4 0 9 6 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 4 0 9 6 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
 	 }  
 	  
 	 i f   ( S - > i f f t F l a g )  
 	 {  
 	 	 f o r ( i = 0 ; i < S - > f f t L e n * 2 ; i + + )  
 	 	 {  
 	 	 	 / / r e a d   t h e   f l o a t   d a t a ,   s c a l e   u p   f o r   q 3 1 ,   c a s t   t o   q 3 1  
 	 	 	 p S r c [ i ]   =   ( q 3 1 _ t ) (   f S r c [ i ]   *   2 1 4 7 4 8 3 6 4 8 . 0 f   ) ;  
 	 	 }  
 	 }  
 	 e l s e  
 	 {  
 	 	 f o r ( i = 0 ; i < S - > f f t L e n * 2 ; i + + )  
 	 	 {  
 	 	 	 / / r e a d   t h e   f l o a t   d a t a ,   s c a l e   u p   f o r   q 3 1 ,   c a s t   t o   q 3 1  
 	 	 	 p S r c [ i ]   =   ( q 3 1 _ t ) (   f S r c [ i ]   *   2 1 4 7 4 8 3 6 4 8 . 0 f   /   ( f l o a t 3 2 _ t ) S - > f f t L e n ) ;  
 	 	 }  
 	 }  
 }  
  
 v o i d   r e f _ c f f t _ r a d i x 2 _ q 1 5 (  
 	 c o n s t   a r m _ c f f t _ r a d i x 2 _ i n s t a n c e _ q 1 5   *   S ,  
 	 q 1 5 _ t   *   p S r c )  
 {  
 	 u i n t 3 2 _ t   i ;  
 	 f l o a t 3 2 _ t   * f S r c   =   ( f l o a t 3 2 _ t * ) p S r c ;  
 	  
 	 f o r ( i = 0 ; i < S - > f f t L e n * 2 ; i + + )  
 	 {  
 	 	 / / r e a d   t h e   q 1 5   d a t a ,   c a s t   t o   f l o a t ,   s c a l e   d o w n   f o r   f l o a t ,   p l a c e   i n   t e m p o r a r y   b u f f e r  
 	 	 s c r a t c h A r r a y [ i ]   =   ( f l o a t 3 2 _ t ) p S r c [ i ]   /   3 2 7 6 8 . 0 f ;  
 	 }  
 	  
 	 f o r ( i = 0 ; i < S - > f f t L e n * 2 ; i + + )  
 	 {  
 	 	 / / c o p y   f r o m   t e m p   b u f f e r   t o   f i n a l   b u f f e r  
 	 	 f S r c [ i ]   =   s c r a t c h A r r a y [ i ] ;  
 	 }  
 	  
 	 s w i t c h ( S - > f f t L e n )  
 	 {  
       c a s e   1 6 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 1 6 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   3 2 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 3 2 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   6 4 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 6 4 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   1 2 8 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 1 2 8 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   2 5 6 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 2 5 6 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   5 1 2 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 5 1 2 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   1 0 2 4 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 1 0 2 4 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   2 0 4 8 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 2 0 4 8 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   4 0 9 6 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 4 0 9 6 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
 	 }  
 	  
 	 i f   ( S - > i f f t F l a g )  
 	 {  
 	 	 f o r ( i = 0 ; i < S - > f f t L e n * 2 ; i + + )  
 	 	 {  
 	 	 / / r e a d   t h e   f l o a t   d a t a ,   s c a l e   u p   f o r   q 1 5 ,   c a s t   t o   q 1 5  
 	 	 p S r c [ i ]   =   ( q 1 5 _ t ) (   f S r c [ i ]   *   3 2 7 6 8 . 0 f   ) ;  
 	 	 }  
 	 }  
 	 e l s e  
 	 {  
 	 	 f o r ( i = 0 ; i < S - > f f t L e n * 2 ; i + + )  
 	 	 {  
 	 	 / / r e a d   t h e   f l o a t   d a t a ,   s c a l e   u p   f o r   q 1 5 ,   c a s t   t o   q 1 5  
 	 	 p S r c [ i ]   =   ( q 1 5 _ t ) (   f S r c [ i ]   *   3 2 7 6 8 . 0 f   /   ( f l o a t 3 2 _ t ) S - > f f t L e n ) ;  
 	 	 }  
 	 }  
 }  
  
 v o i d   r e f _ c f f t _ r a d i x 4 _ f 3 2 (  
 	 c o n s t   a r m _ c f f t _ r a d i x 4 _ i n s t a n c e _ f 3 2   *   S ,  
 	 f l o a t 3 2 _ t   *   p S r c )  
 { 	 	  
 	 s w i t c h ( S - > f f t L e n )  
 	 {  
       c a s e   1 6 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 1 6 ,   p S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   3 2 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 3 2 ,   p S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   6 4 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 6 4 ,   p S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   1 2 8 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 1 2 8 ,   p S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   2 5 6 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 2 5 6 ,   p S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   5 1 2 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 5 1 2 ,   p S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   1 0 2 4 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 1 0 2 4 ,   p S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   2 0 4 8 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 2 0 4 8 ,   p S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   4 0 9 6 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 4 0 9 6 ,   p S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
 	 }  
 }  
  
 v o i d   r e f _ c f f t _ r a d i x 4 _ q 3 1 (  
 	 c o n s t   a r m _ c f f t _ r a d i x 4 _ i n s t a n c e _ q 3 1   *   S ,  
 	 q 3 1 _ t   *   p S r c )  
 {  
 	 u i n t 3 2 _ t   i ;  
 	 f l o a t 3 2 _ t   * f S r c   =   ( f l o a t 3 2 _ t * ) p S r c ;  
 	  
 	 f o r ( i = 0 ; i < S - > f f t L e n * 2 ; i + + )  
 	 {  
 	 	 / / r e a d   t h e   q 3 1   d a t a ,   c a s t   t o   f l o a t ,   s c a l e   d o w n   f o r   f l o a t  
 	 	 f S r c [ i ]   =   ( f l o a t 3 2 _ t ) p S r c [ i ]   /   2 1 4 7 4 8 3 6 4 8 . 0 f ;  
 	 }  
 	  
 	 s w i t c h ( S - > f f t L e n )  
 	 {  
       c a s e   1 6 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 1 6 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   3 2 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 3 2 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   6 4 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 6 4 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   1 2 8 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 1 2 8 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   2 5 6 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 2 5 6 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   5 1 2 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 5 1 2 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   1 0 2 4 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 1 0 2 4 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   2 0 4 8 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 2 0 4 8 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   4 0 9 6 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 4 0 9 6 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
 	 }  
 	  
 	 i f   ( S - > i f f t F l a g )  
 	 {  
 	 	 f o r ( i = 0 ; i < S - > f f t L e n * 2 ; i + + )  
 	 	 {  
 	 	 	 / / r e a d   t h e   f l o a t   d a t a ,   s c a l e   u p   f o r   q 3 1 ,   c a s t   t o   q 3 1  
 	 	 	 p S r c [ i ]   =   ( q 3 1 _ t ) (   f S r c [ i ]   *   2 1 4 7 4 8 3 6 4 8 . 0 f   ) ;  
 	 	 }  
 	 }  
 	 e l s e  
 	 {  
 	 	 f o r ( i = 0 ; i < S - > f f t L e n * 2 ; i + + )  
 	 	 {  
 	 	 	 / / r e a d   t h e   f l o a t   d a t a ,   s c a l e   u p   f o r   q 3 1 ,   c a s t   t o   q 3 1  
 	 	 	 p S r c [ i ]   =   ( q 3 1 _ t ) (   f S r c [ i ]   *   2 1 4 7 4 8 3 6 4 8 . 0 f   /   ( f l o a t 3 2 _ t ) S - > f f t L e n ) ;  
 	 	 }  
 	 }  
 }  
  
 v o i d   r e f _ c f f t _ r a d i x 4 _ q 1 5 (  
 	 c o n s t   a r m _ c f f t _ r a d i x 4 _ i n s t a n c e _ q 1 5   *   S ,  
 	 q 1 5 _ t   *   p S r c )  
 {  
 	 u i n t 3 2 _ t   i ;  
 	 f l o a t 3 2 _ t   * f S r c   =   ( f l o a t 3 2 _ t * ) p S r c ;  
 	  
 	 f o r ( i = 0 ; i < S - > f f t L e n * 2 ; i + + )  
 	 {  
 	 	 / / r e a d   t h e   q 1 5   d a t a ,   c a s t   t o   f l o a t ,   s c a l e   d o w n   f o r   f l o a t ,   p l a c e   i n   t e m p o r a r y   b u f f e r  
 	 	 s c r a t c h A r r a y [ i ]   =   ( f l o a t 3 2 _ t ) p S r c [ i ]   /   3 2 7 6 8 . 0 f ;  
 	 }  
 	  
 	 f o r ( i = 0 ; i < S - > f f t L e n * 2 ; i + + )  
 	 {  
 	 	 / / c o p y   f r o m   t e m p   b u f f e r   t o   f i n a l   b u f f e r  
 	 	 f S r c [ i ]   =   s c r a t c h A r r a y [ i ] ;  
 	 }  
 	  
 	 s w i t c h ( S - > f f t L e n )  
 	 {  
       c a s e   1 6 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 1 6 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   3 2 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 3 2 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   6 4 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 6 4 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   1 2 8 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 1 2 8 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   2 5 6 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 2 5 6 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   5 1 2 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 5 1 2 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   1 0 2 4 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 1 0 2 4 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   2 0 4 8 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 2 0 4 8 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
        
       c a s e   4 0 9 6 :    
 	 	   r e f _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 4 0 9 6 ,   f S r c ,   S - > i f f t F l a g ,   S - > b i t R e v e r s e F l a g ) ;  
 	 	   b r e a k ;  
 	 }  
 	  
 	 i f   ( S - > i f f t F l a g )  
 	 {  
 	 	 f o r ( i = 0 ; i < S - > f f t L e n * 2 ; i + + )  
 	 	 {  
 	 	 / / r e a d   t h e   f l o a t   d a t a ,   s c a l e   u p   f o r   q 1 5 ,   c a s t   t o   q 1 5  
 	 	 p S r c [ i ]   =   ( q 1 5 _ t ) (   f S r c [ i ]   *   3 2 7 6 8 . 0 f   ) ;  
 	 	 }  
 	 }  
 	 e l s e  
 	 {  
 	 	 f o r ( i = 0 ; i < S - > f f t L e n * 2 ; i + + )  
 	 	 {  
 	 	 / / r e a d   t h e   f l o a t   d a t a ,   s c a l e   u p   f o r   q 1 5 ,   c a s t   t o   q 1 5  
 	 	 p S r c [ i ]   =   ( q 1 5 _ t ) (   f S r c [ i ]   *   3 2 7 6 8 . 0 f   /   ( f l o a t 3 2 _ t ) S - > f f t L e n ) ;  
 	 	 }  
 	 }  
 }  