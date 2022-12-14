??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ c f f t _ i n i t _ f 3 2 . c  
   *   D e s c r i p t i o n :     S p l i t   R a d i x   D e c i m a t i o n   i n   F r e q u e n c y   C F F T   F l o a t i n g   p o i n t   p r o c e s s i n g   f u n c t i o n  
   *  
   *   $ D a t e :                 2 7 .   J a n u a r y   2 0 1 7  
   *   $ R e v i s i o n :         V . 1 . 5 . 1  
   *  
   *   T a r g e t   P r o c e s s o r :   C o r t e x - M   c o r e s  
   *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
 / *  
   *   C o p y r i g h t   ( C )   2 0 1 0 - 2 0 1 7   A R M   L i m i t e d   o r   i t s   a f f i l i a t e s .   A l l   r i g h t s   r e s e r v e d .  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   L i c e n s e d   u n d e r   t h e   A p a c h e   L i c e n s e ,   V e r s i o n   2 . 0   ( t h e   L i c e n s e ) ;   y o u   m a y  
   *   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e   L i c e n s e .  
   *   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t  
   *  
   *   w w w . a p a c h e . o r g / l i c e n s e s / L I C E N S E - 2 . 0  
   *  
   *   U n l e s s   r e q u i r e d   b y   a p p l i c a b l e   l a w   o r   a g r e e d   t o   i n   w r i t i n g ,   s o f t w a r e  
   *   d i s t r i b u t e d   u n d e r   t h e   L i c e n s e   i s   d i s t r i b u t e d   o n   a n   A S   I S   B A S I S ,   W I T H O U T  
   *   W A R R A N T I E S   O R   C O N D I T I O N S   O F   A N Y   K I N D ,   e i t h e r   e x p r e s s   o r   i m p l i e d .  
   *   S e e   t h e   L i c e n s e   f o r   t h e   s p e c i f i c   l a n g u a g e   g o v e r n i n g   p e r m i s s i o n s   a n d  
   *   l i m i t a t i o n s   u n d e r   t h e   L i c e n s e .  
   * /  
  
 # i n c l u d e   " a r m _ m a t h . h "  
 # i n c l u d e   " a r m _ c o m m o n _ t a b l e s . h "  
  
 / * *  
   *   @ i n g r o u p   g r o u p T r a n s f o r m s  
   * /  
  
 / * *  
   *   @ a d d t o g r o u p   R e a l F F T  
   *   @ {  
   * /  
  
 / * *  
 *   @ b r i e f     I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   r e a l   F F T .  
 *   @ p a r a m [ i n , o u t ]   * S                           p o i n t s   t o   a n   a r m _ r f f t _ f a s t _ i n s t a n c e _ f 3 2   s t r u c t u r e .  
 *   @ p a r a m [ i n ]           f f t L e n                   l e n g t h   o f   t h e   R e a l   S e q u e n c e .  
 *   @ r e t u r n                 T h e   f u n c t i o n   r e t u r n s   A R M _ M A T H _ S U C C E S S   i f   i n i t i a l i z a t i o n   i s   s u c c e s s f u l   o r   A R M _ M A T H _ A R G U M E N T _ E R R O R   i f   < c o d e > f f t L e n < / c o d e >   i s   n o t   a   s u p p o r t e d   v a l u e .  
 *  
 *   \ p a r   D e s c r i p t i o n :  
 *   \ p a r  
 *   T h e   p a r a m e t e r   < c o d e > f f t L e n < / c o d e > 	 S p e c i f i e s   l e n g t h   o f   R F F T / C I F F T   p r o c e s s .   S u p p o r t e d   F F T   L e n g t h s   a r e   3 2 ,   6 4 ,   1 2 8 ,   2 5 6 ,   5 1 2 ,   1 0 2 4 ,   2 0 4 8 ,   4 0 9 6 .  
 *   \ p a r  
 *   T h i s   F u n c t i o n   a l s o   i n i t i a l i z e s   T w i d d l e   f a c t o r   t a b l e   p o i n t e r   a n d   B i t   r e v e r s a l   t a b l e   p o i n t e r .  
 * /  
 a r m _ s t a t u s   a r m _ r f f t _ f a s t _ i n i t _ f 3 2 (  
     a r m _ r f f t _ f a s t _ i n s t a n c e _ f 3 2   *   S ,  
     u i n t 1 6 _ t   f f t L e n )  
 {  
     a r m _ c f f t _ i n s t a n c e _ f 3 2   *   S i n t ;  
     / *     I n i t i a l i s e   t h e   d e f a u l t   a r m   s t a t u s   * /  
     a r m _ s t a t u s   s t a t u s   =   A R M _ M A T H _ S U C C E S S ;  
     / *     I n i t i a l i s e   t h e   F F T   l e n g t h   * /  
     S i n t   =   & ( S - > S i n t ) ;  
     S i n t - > f f t L e n   =   f f t L e n / 2 ;  
     S - > f f t L e n R F F T   =   f f t L e n ;  
  
     / *     I n i t i a l i z a t i o n s   o f   s t r u c t u r e   p a r a m e t e r s   d e p e n d i n g   o n   t h e   F F T   l e n g t h   * /  
     s w i t c h   ( S i n t - > f f t L e n )  
     {  
     c a s e   2 0 4 8 U :  
         / *     I n i t i a l i z a t i o n s   o f   s t r u c t u r e   p a r a m e t e r s   f o r   2 0 4 8   p o i n t   F F T   * /  
         / *     I n i t i a l i s e   t h e   b i t   r e v e r s a l   t a b l e   l e n g t h   * /  
         S i n t - > b i t R e v L e n g t h   =   A R M B I T R E V I N D E X T A B L E _ 2 0 4 8 _ T A B L E _ L E N G T H ;  
         / *     I n i t i a l i s e   t h e   b i t   r e v e r s a l   t a b l e   p o i n t e r   * /  
         S i n t - > p B i t R e v T a b l e   =   ( u i n t 1 6 _ t   * ) a r m B i t R e v I n d e x T a b l e 2 0 4 8 ;  
         / *     I n i t i a l i s e   t h e   T w i d d l e   c o e f f i c i e n t   p o i n t e r s   * /  
 	 	 S i n t - > p T w i d d l e           =   ( f l o a t 3 2 _ t   * )   t w i d d l e C o e f _ 2 0 4 8 ;  
 	 	 S - > p T w i d d l e R F F T         =   ( f l o a t 3 2 _ t   * )   t w i d d l e C o e f _ r f f t _ 4 0 9 6 ;  
         b r e a k ;  
     c a s e   1 0 2 4 U :  
         S i n t - > b i t R e v L e n g t h   =   A R M B I T R E V I N D E X T A B L E _ 1 0 2 4 _ T A B L E _ L E N G T H ;  
         S i n t - > p B i t R e v T a b l e   =   ( u i n t 1 6 _ t   * ) a r m B i t R e v I n d e x T a b l e 1 0 2 4 ;  
 	 	 S i n t - > p T w i d d l e           =   ( f l o a t 3 2 _ t   * )   t w i d d l e C o e f _ 1 0 2 4 ;  
 	 	 S - > p T w i d d l e R F F T         =   ( f l o a t 3 2 _ t   * )   t w i d d l e C o e f _ r f f t _ 2 0 4 8 ;  
         b r e a k ;  
     c a s e   5 1 2 U :  
         S i n t - > b i t R e v L e n g t h   =   A R M B I T R E V I N D E X T A B L E _ 5 1 2 _ T A B L E _ L E N G T H ;  
         S i n t - > p B i t R e v T a b l e   =   ( u i n t 1 6 _ t   * ) a r m B i t R e v I n d e x T a b l e 5 1 2 ;  
 	 	 S i n t - > p T w i d d l e           =   ( f l o a t 3 2 _ t   * )   t w i d d l e C o e f _ 5 1 2 ;  
 	 	 S - > p T w i d d l e R F F T         =   ( f l o a t 3 2 _ t   * )   t w i d d l e C o e f _ r f f t _ 1 0 2 4 ;  
         b r e a k ;  
     c a s e   2 5 6 U :  
         S i n t - > b i t R e v L e n g t h   =   A R M B I T R E V I N D E X T A B L E _ 2 5 6 _ T A B L E _ L E N G T H ;  
         S i n t - > p B i t R e v T a b l e   =   ( u i n t 1 6 _ t   * ) a r m B i t R e v I n d e x T a b l e 2 5 6 ;  
 	 	 S i n t - > p T w i d d l e           =   ( f l o a t 3 2 _ t   * )   t w i d d l e C o e f _ 2 5 6 ;  
 	 	 S - > p T w i d d l e R F F T         =   ( f l o a t 3 2 _ t   * )   t w i d d l e C o e f _ r f f t _ 5 1 2 ;  
         b r e a k ;  
     c a s e   1 2 8 U :  
         S i n t - > b i t R e v L e n g t h   =   A R M B I T R E V I N D E X T A B L E _ 1 2 8 _ T A B L E _ L E N G T H ;  
         S i n t - > p B i t R e v T a b l e   =   ( u i n t 1 6 _ t   * ) a r m B i t R e v I n d e x T a b l e 1 2 8 ;  
 	 	 S i n t - > p T w i d d l e           =   ( f l o a t 3 2 _ t   * )   t w i d d l e C o e f _ 1 2 8 ;  
 	 	 S - > p T w i d d l e R F F T         =   ( f l o a t 3 2 _ t   * )   t w i d d l e C o e f _ r f f t _ 2 5 6 ;  
         b r e a k ;  
     c a s e   6 4 U :  
         S i n t - > b i t R e v L e n g t h   =   A R M B I T R E V I N D E X T A B L E _ 6 4 _ T A B L E _ L E N G T H ;  
         S i n t - > p B i t R e v T a b l e   =   ( u i n t 1 6 _ t   * ) a r m B i t R e v I n d e x T a b l e 6 4 ;  
 	 	 S i n t - > p T w i d d l e           =   ( f l o a t 3 2 _ t   * )   t w i d d l e C o e f _ 6 4 ;  
 	 	 S - > p T w i d d l e R F F T         =   ( f l o a t 3 2 _ t   * )   t w i d d l e C o e f _ r f f t _ 1 2 8 ;  
         b r e a k ;  
     c a s e   3 2 U :  
         S i n t - > b i t R e v L e n g t h   =   A R M B I T R E V I N D E X T A B L E _ 3 2 _ T A B L E _ L E N G T H ;  
         S i n t - > p B i t R e v T a b l e   =   ( u i n t 1 6 _ t   * ) a r m B i t R e v I n d e x T a b l e 3 2 ;  
 	 	 S i n t - > p T w i d d l e           =   ( f l o a t 3 2 _ t   * )   t w i d d l e C o e f _ 3 2 ;  
 	 	 S - > p T w i d d l e R F F T         =   ( f l o a t 3 2 _ t   * )   t w i d d l e C o e f _ r f f t _ 6 4 ;  
         b r e a k ;  
     c a s e   1 6 U :  
         S i n t - > b i t R e v L e n g t h   =   A R M B I T R E V I N D E X T A B L E _ 1 6 _ T A B L E _ L E N G T H ;  
         S i n t - > p B i t R e v T a b l e   =   ( u i n t 1 6 _ t   * ) a r m B i t R e v I n d e x T a b l e 1 6 ;  
 	 	 S i n t - > p T w i d d l e           =   ( f l o a t 3 2 _ t   * )   t w i d d l e C o e f _ 1 6 ;  
 	 	 S - > p T w i d d l e R F F T         =   ( f l o a t 3 2 _ t   * )   t w i d d l e C o e f _ r f f t _ 3 2 ;  
         b r e a k ;  
     d e f a u l t :  
         / *     R e p o r t i n g   a r g u m e n t   e r r o r   i f   f f t S i z e   i s   n o t   v a l i d   v a l u e   * /  
         s t a t u s   =   A R M _ M A T H _ A R G U M E N T _ E R R O R ;  
         b r e a k ;  
     }  
  
     r e t u r n   ( s t a t u s ) ;  
 }  
  
 / * *  
   *   @ }   e n d   o f   R e a l F F T   g r o u p  
   * /  