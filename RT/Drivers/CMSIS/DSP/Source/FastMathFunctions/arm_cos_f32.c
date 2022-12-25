�?/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ c o s _ f 3 2 . c  
   *   D e s c r i p t i o n :     F a s t   c o s i n e   c a l c u l a t i o n   f o r   f l o a t i n g - p o i n t   v a l u e s  
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
 / * *  
   *   @ i n g r o u p   g r o u p F a s t M a t h  
   * /  
  
 / * *  
   *   @ d e f g r o u p   c o s   C o s i n e  
   *  
   *   C o m p u t e s   t h e   t r i g o n o m e t r i c   c o s i n e   f u n c t i o n   u s i n g   a   c o m b i n a t i o n   o f   t a b l e   l o o k u p  
   *   a n d   l i n e a r   i n t e r p o l a t i o n .     T h e r e   a r e   s e p a r a t e   f u n c t i o n s   f o r  
   *   Q 1 5 ,   Q 3 1 ,   a n d   f l o a t i n g - p o i n t   d a t a   t y p e s .  
   *   T h e   i n p u t   t o   t h e   f l o a t i n g - p o i n t   v e r s i o n   i s   i n   r a d i a n s   a n d   i n   t h e   r a n g e   [ 0   2 * p i )   w h i l e   t h e  
   *   f i x e d - p o i n t   Q 1 5   a n d   Q 3 1   h a v e   a   s c a l e d   i n p u t   w i t h   t h e   r a n g e  
   *   [ 0   + 0 . 9 9 9 9 ]   m a p p i n g   t o   [ 0   2 * p i ) .     T h e   f i x e d - p o i n t   r a n g e   i s   c h o s e n   s o   t h a t   a  
   *   v a l u e   o f   2 * p i   w r a p s   a r o u n d   t o   0 .  
   *  
   *   T h e   i m p l e m e n t a t i o n   i s   b a s e d   o n   t a b l e   l o o k u p   u s i n g   2 5 6   v a l u e s   t o g e t h e r   w i t h   l i n e a r   i n t e r p o l a t i o n .  
   *   T h e   s t e p s   u s e d   a r e :  
   *     - #   C a l c u l a t i o n   o f   t h e   n e a r e s t   i n t e g e r   t a b l e   i n d e x  
   *     - #   C o m p u t e   t h e   f r a c t i o n a l   p o r t i o n   ( f r a c t )   o f   t h e   t a b l e   i n d e x .  
   *     - #   T h e   f i n a l   r e s u l t   e q u a l s   < c o d e > ( 1 . 0 f - f r a c t ) * a   +   f r a c t * b ; < / c o d e >  
   *  
   *   w h e r e  
   *   < p r e >  
   *         b = T a b l e [ i n d e x + 0 ] ;  
   *         c = T a b l e [ i n d e x + 1 ] ;  
   *   < / p r e >  
   * /  
  
   / * *  
   *   @ a d d t o g r o u p   c o s  
   *   @ {  
   * /  
  
 / * *  
   *   @ b r i e f     F a s t   a p p r o x i m a t i o n   t o   t h e   t r i g o n o m e t r i c   c o s i n e   f u n c t i o n   f o r   f l o a t i n g - p o i n t   d a t a .  
   *   @ p a r a m [ i n ]   x   i n p u t   v a l u e   i n   r a d i a n s .  
   *   @ r e t u r n   c o s ( x ) .  
   * /  
  
 f l o a t 3 2 _ t   a r m _ c o s _ f 3 2 (  
     f l o a t 3 2 _ t   x )  
 {  
     f l o a t 3 2 _ t   c o s V a l ,   f r a c t ,   i n ;                                       / *   T e m p o r a r y   v a r i a b l e s   f o r   i n p u t ,   o u t p u t   * /  
     u i n t 1 6 _ t   i n d e x ;                                                                 / *   I n d e x   v a r i a b l e   * /  
     f l o a t 3 2 _ t   a ,   b ;                                                                 / *   T w o   n e a r e s t   o u t p u t   v a l u e s   * /  
     i n t 3 2 _ t   n ;  
     f l o a t 3 2 _ t   f i n d e x ;  
  
     / *   i n p u t   x   i s   i n   r a d i a n s   * /  
     / *   S c a l e   t h e   i n p u t   t o   [ 0   1 ]   r a n g e   f r o m   [ 0   2 * P I ]   ,   d i v i d e   i n p u t   b y   2 * p i ,   a d d   0 . 2 5   ( p i / 2 )   t o   r e a d   s i n e   t a b l e   * /  
     i n   =   x   *   0 . 1 5 9 1 5 4 9 4 3 0 9 2 f   +   0 . 2 5 f ;  
  
     / *   C a l c u l a t i o n   o f   f l o o r   v a l u e   o f   i n p u t   * /  
     n   =   ( i n t 3 2 _ t )   i n ;  
  
     / *   M a k e   n e g a t i v e   v a l u e s   t o w a r d s   - i n f i n i t y   * /  
     i f   ( i n   <   0 . 0 f )  
     {  
         n - - ;  
     }  
  
     / *   M a p   i n p u t   v a l u e   t o   [ 0   1 ]   * /  
     i n   =   i n   -   ( f l o a t 3 2 _ t )   n ;  
  
     / *   C a l c u l a t i o n   o f   i n d e x   o f   t h e   t a b l e   * /  
     f i n d e x   =   ( f l o a t 3 2 _ t )   F A S T _ M A T H _ T A B L E _ S I Z E   *   i n ;  
     i n d e x   =   ( ( u i n t 1 6 _ t ) f i n d e x )   &   0 x 1 f f ;  
  
     / *   f r a c t i o n a l   v a l u e   c a l c u l a t i o n   * /  
     f r a c t   =   f i n d e x   -   ( f l o a t 3 2 _ t )   i n d e x ;  
  
     / *   R e a d   t w o   n e a r e s t   v a l u e s   o f   i n p u t   v a l u e   f r o m   t h e   c o s   t a b l e   * /  
     a   =   s i n T a b l e _ f 3 2 [ i n d e x ] ;  
     b   =   s i n T a b l e _ f 3 2 [ i n d e x + 1 ] ;  
  
     / *   L i n e a r   i n t e r p o l a t i o n   p r o c e s s   * /  
     c o s V a l   =   ( 1 . 0 f - f r a c t ) * a   +   f r a c t * b ;  
  
     / *   R e t u r n   t h e   o u t p u t   v a l u e   * /  
     r e t u r n   ( c o s V a l ) ;  
 }  
  
 / * *  
   *   @ }   e n d   o f   c o s   g r o u p  
   * /  