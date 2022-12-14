??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ c f f t _ r a d i x 2 _ i n i t _ q 3 1 . c  
   *   D e s c r i p t i o n :     R a d i x - 2   D e c i m a t i o n   i n   F r e q u e n c y   F i x e d - p o i n t   C F F T   &   C I F F T   I n i t i a l i z a t i o n   f u n c t i o n  
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
   *   @ a d d t o g r o u p   C o m p l e x F F T  
   *   @ {  
   * /  
  
  
 / * *  
 *  
 *   @ b r i e f     I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   Q 3 1   C F F T / C I F F T .  
 *   @ d e p r e c a t e d   D o   n o t   u s e   t h i s   f u n c t i o n .     I t   h a s   b e e n   s u p e r s e d e d   b y   \ r e f   a r m _ c f f t _ q 3 1   a n d   w i l l   b e   r e m o v e d  
 *   @ p a r a m [ i n , o u t ]   * S                           p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 3 1   C F F T / C I F F T   s t r u c t u r e .  
 *   @ p a r a m [ i n ]           f f t L e n                   l e n g t h   o f   t h e   F F T .  
 *   @ p a r a m [ i n ]           i f f t F l a g               f l a g   t h a t   s e l e c t s   f o r w a r d   ( i f f t F l a g = 0 )   o r   i n v e r s e   ( i f f t F l a g = 1 )   t r a n s f o r m .  
 *   @ p a r a m [ i n ]           b i t R e v e r s e F l a g   f l a g   t h a t   e n a b l e s   ( b i t R e v e r s e F l a g = 1 )   o r   d i s a b l e s   ( b i t R e v e r s e F l a g = 0 )   b i t   r e v e r s a l   o f   o u t p u t .  
 *   @ r e t u r n                 T h e   f u n c t i o n   r e t u r n s   A R M _ M A T H _ S U C C E S S   i f   i n i t i a l i z a t i o n   i s   s u c c e s s f u l   o r   A R M _ M A T H _ A R G U M E N T _ E R R O R   i f   < c o d e > f f t L e n < / c o d e >   i s   n o t   a   s u p p o r t e d   v a l u e .  
 *  
 *   \ p a r   D e s c r i p t i o n :  
 *   \ p a r  
 *   T h e   p a r a m e t e r   < c o d e > i f f t F l a g < / c o d e >   c o n t r o l s   w h e t h e r   a   f o r w a r d   o r   i n v e r s e   t r a n s f o r m   i s   c o m p u t e d .  
 *   S e t ( = 1 )   i f f t F l a g   f o r   c a l c u l a t i o n   o f   C I F F T   o t h e r w i s e     C F F T   i s   c a l c u l a t e d  
 *   \ p a r  
 *   T h e   p a r a m e t e r   < c o d e > b i t R e v e r s e F l a g < / c o d e >   c o n t r o l s   w h e t h e r   o u t p u t   i s   i n   n o r m a l   o r d e r   o r   b i t   r e v e r s e d   o r d e r .  
 *   S e t ( = 1 )   b i t R e v e r s e F l a g   f o r   o u t p u t   t o   b e   i n   n o r m a l   o r d e r   o t h e r w i s e   o u t p u t   i s   i n   b i t   r e v e r s e d   o r d e r .  
 *   \ p a r  
 *   T h e   p a r a m e t e r   < c o d e > f f t L e n < / c o d e > 	 S p e c i f i e s   l e n g t h   o f   C F F T / C I F F T   p r o c e s s .   S u p p o r t e d   F F T   L e n g t h s   a r e   1 6 ,   6 4 ,   2 5 6 ,   1 0 2 4 .  
 *   \ p a r  
 *   T h i s   F u n c t i o n   a l s o   i n i t i a l i z e s   T w i d d l e   f a c t o r   t a b l e   p o i n t e r   a n d   B i t   r e v e r s a l   t a b l e   p o i n t e r .  
 * /  
  
 a r m _ s t a t u s   a r m _ c f f t _ r a d i x 2 _ i n i t _ q 3 1 (  
     a r m _ c f f t _ r a d i x 2 _ i n s t a n c e _ q 3 1   *   S ,  
     u i n t 1 6 _ t   f f t L e n ,  
     u i n t 8 _ t   i f f t F l a g ,  
     u i n t 8 _ t   b i t R e v e r s e F l a g )  
 {  
     / *     I n i t i a l i s e   t h e   d e f a u l t   a r m   s t a t u s   * /  
     a r m _ s t a t u s   s t a t u s   =   A R M _ M A T H _ S U C C E S S ;  
  
     / *     I n i t i a l i s e   t h e   F F T   l e n g t h   * /  
     S - > f f t L e n   =   f f t L e n ;  
  
     / *     I n i t i a l i s e   t h e   T w i d d l e   c o e f f i c i e n t   p o i n t e r   * /  
     S - > p T w i d d l e   =   ( q 3 1 _ t   * )   t w i d d l e C o e f _ 4 0 9 6 _ q 3 1 ;  
     / *     I n i t i a l i s e   t h e   F l a g   f o r   s e l e c t i o n   o f   C F F T   o r   C I F F T   * /  
     S - > i f f t F l a g   =   i f f t F l a g ;  
     / *     I n i t i a l i s e   t h e   F l a g   f o r   c a l c u l a t i o n   B i t   r e v e r s a l   o r   n o t   * /  
     S - > b i t R e v e r s e F l a g   =   b i t R e v e r s e F l a g ;  
  
     / *     I n i t i a l i z a t i o n s   o f   I n s t a n c e   s t r u c t u r e   d e p e n d i n g   o n   t h e   F F T   l e n g t h   * /  
     s w i t c h   ( S - > f f t L e n )  
     {  
         / *     I n i t i a l i z a t i o n s   o f   s t r u c t u r e   p a r a m e t e r s   f o r   4 0 9 6   p o i n t   F F T   * /  
     c a s e   4 0 9 6 U :  
         / *     I n i t i a l i s e   t h e   t w i d d l e   c o e f   m o d i f i e r   v a l u e   * /  
         S - > t w i d C o e f M o d i f i e r   =   1 U ;  
         / *     I n i t i a l i s e   t h e   b i t   r e v e r s a l   t a b l e   m o d i f i e r   * /  
         S - > b i t R e v F a c t o r   =   1 U ;  
         / *     I n i t i a l i s e   t h e   b i t   r e v e r s a l   t a b l e   p o i n t e r   * /  
         S - > p B i t R e v T a b l e   =   ( u i n t 1 6 _ t   * )   a r m B i t R e v T a b l e ;  
         b r e a k ;  
  
         / *     I n i t i a l i z a t i o n s   o f   s t r u c t u r e   p a r a m e t e r s   f o r   2 0 4 8   p o i n t   F F T   * /  
     c a s e   2 0 4 8 U :  
         / *     I n i t i a l i s e   t h e   t w i d d l e   c o e f   m o d i f i e r   v a l u e   * /  
         S - > t w i d C o e f M o d i f i e r   =   2 U ;  
         / *     I n i t i a l i s e   t h e   b i t   r e v e r s a l   t a b l e   m o d i f i e r   * /  
         S - > b i t R e v F a c t o r   =   2 U ;  
         / *     I n i t i a l i s e   t h e   b i t   r e v e r s a l   t a b l e   p o i n t e r   * /  
         S - > p B i t R e v T a b l e   =   ( u i n t 1 6 _ t   * )   &   a r m B i t R e v T a b l e [ 1 ] ;  
         b r e a k ;  
  
         / *     I n i t i a l i z a t i o n s   o f   s t r u c t u r e   p a r a m e t e r s   f o r   1 0 2 4   p o i n t   F F T   * /  
     c a s e   1 0 2 4 U :  
         / *     I n i t i a l i s e   t h e   t w i d d l e   c o e f   m o d i f i e r   v a l u e   * /  
         S - > t w i d C o e f M o d i f i e r   =   4 U ;  
         / *     I n i t i a l i s e   t h e   b i t   r e v e r s a l   t a b l e   m o d i f i e r   * /  
         S - > b i t R e v F a c t o r   =   4 U ;  
         / *     I n i t i a l i s e   t h e   b i t   r e v e r s a l   t a b l e   p o i n t e r   * /  
         S - > p B i t R e v T a b l e   =   ( u i n t 1 6 _ t   * )   &   a r m B i t R e v T a b l e [ 3 ] ;  
         b r e a k ;  
  
         / *     I n i t i a l i z a t i o n s   o f   s t r u c t u r e   p a r a m e t e r s   f o r   5 1 2   p o i n t   F F T   * /  
     c a s e   5 1 2 U :  
         / *     I n i t i a l i s e   t h e   t w i d d l e   c o e f   m o d i f i e r   v a l u e   * /  
         S - > t w i d C o e f M o d i f i e r   =   8 U ;  
         / *     I n i t i a l i s e   t h e   b i t   r e v e r s a l   t a b l e   m o d i f i e r   * /  
         S - > b i t R e v F a c t o r   =   8 U ;  
         / *     I n i t i a l i s e   t h e   b i t   r e v e r s a l   t a b l e   p o i n t e r   * /  
         S - > p B i t R e v T a b l e   =   ( u i n t 1 6 _ t   * )   &   a r m B i t R e v T a b l e [ 7 ] ;  
         b r e a k ;  
  
     c a s e   2 5 6 U :  
         / *     I n i t i a l i z a t i o n s   o f   s t r u c t u r e   p a r a m e t e r s   f o r   2 5 6   p o i n t   F F T   * /  
         S - > t w i d C o e f M o d i f i e r   =   1 6 U ;  
         S - > b i t R e v F a c t o r   =   1 6 U ;  
         S - > p B i t R e v T a b l e   =   ( u i n t 1 6 _ t   * )   &   a r m B i t R e v T a b l e [ 1 5 ] ;  
         b r e a k ;  
  
     c a s e   1 2 8 U :  
         / *     I n i t i a l i z a t i o n s   o f   s t r u c t u r e   p a r a m e t e r s   f o r   1 2 8   p o i n t   F F T   * /  
         S - > t w i d C o e f M o d i f i e r   =   3 2 U ;  
         S - > b i t R e v F a c t o r   =   3 2 U ;  
         S - > p B i t R e v T a b l e   =   ( u i n t 1 6 _ t   * )   &   a r m B i t R e v T a b l e [ 3 1 ] ;  
         b r e a k ;  
  
     c a s e   6 4 U :  
         / *     I n i t i a l i z a t i o n s   o f   s t r u c t u r e   p a r a m e t e r s   f o r   6 4   p o i n t   F F T   * /  
         S - > t w i d C o e f M o d i f i e r   =   6 4 U ;  
         S - > b i t R e v F a c t o r   =   6 4 U ;  
         S - > p B i t R e v T a b l e   =   ( u i n t 1 6 _ t   * )   &   a r m B i t R e v T a b l e [ 6 3 ] ;  
         b r e a k ;  
  
     c a s e   3 2 U :  
         / *     I n i t i a l i z a t i o n s   o f   s t r u c t u r e   p a r a m e t e r s   f o r   3 2   p o i n t   F F T   * /  
         S - > t w i d C o e f M o d i f i e r   =   1 2 8 U ;  
         S - > b i t R e v F a c t o r   =   1 2 8 U ;  
         S - > p B i t R e v T a b l e   =   ( u i n t 1 6 _ t   * )   &   a r m B i t R e v T a b l e [ 1 2 7 ] ;  
         b r e a k ;  
  
     c a s e   1 6 U :  
         / *     I n i t i a l i z a t i o n s   o f   s t r u c t u r e   p a r a m e t e r s   f o r   1 6   p o i n t   F F T   * /  
         S - > t w i d C o e f M o d i f i e r   =   2 5 6 U ;  
         S - > b i t R e v F a c t o r   =   2 5 6 U ;  
         S - > p B i t R e v T a b l e   =   ( u i n t 1 6 _ t   * )   &   a r m B i t R e v T a b l e [ 2 5 5 ] ;  
         b r e a k ;  
  
  
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
   *   @ }   e n d   o f   C o m p l e x F F T   g r o u p  
   * /  