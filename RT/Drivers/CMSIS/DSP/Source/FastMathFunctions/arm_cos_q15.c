??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ c o s _ q 1 5 . c  
   *   D e s c r i p t i o n :     F a s t   c o s i n e   c a l c u l a t i o n   f o r   Q 1 5   v a l u e s  
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
   *   @ i n g r o u p   g r o u p F a s t M a t h  
   * /  
  
   / * *  
   *   @ a d d t o g r o u p   c o s  
   *   @ {  
   * /  
  
 / * *  
   *   @ b r i e f   F a s t   a p p r o x i m a t i o n   t o   t h e   t r i g o n o m e t r i c   c o s i n e   f u n c t i o n   f o r   Q 1 5   d a t a .  
   *   @ p a r a m [ i n ]   x   S c a l e d   i n p u t   v a l u e   i n   r a d i a n s .  
   *   @ r e t u r n     c o s ( x ) .  
   *  
   *   T h e   Q 1 5   i n p u t   v a l u e   i s   i n   t h e   r a n g e   [ 0   + 0 . 9 9 9 9 ]   a n d   i s   m a p p e d   t o   a   r a d i a n  
   *   v a l u e   i n   t h e   r a n g e   [ 0   2 * p i ) .  
   * /  
  
 q 1 5 _ t   a r m _ c o s _ q 1 5 (  
     q 1 5 _ t   x )  
 {  
     q 1 5 _ t   c o s V a l ;                                                                     / *   T e m p o r a r y   v a r i a b l e s   f o r   i n p u t ,   o u t p u t   * /  
     i n t 3 2 _ t   i n d e x ;                                                                   / *   I n d e x   v a r i a b l e s   * /  
     q 1 5 _ t   a ,   b ;                                                                         / *   F o u r   n e a r e s t   o u t p u t   v a l u e s   * /  
     q 1 5 _ t   f r a c t ;                                                                       / *   T e m p o r a r y   v a l u e s   f o r   f r a c t i o n a l   v a l u e s   * /  
  
     / *   a d d   0 . 2 5   ( p i / 2 )   t o   r e a d   s i n e   t a b l e   * /  
     x   =   ( u i n t 1 6 _ t ) x   +   0 x 2 0 0 0 ;  
     i f   ( x   <   0 )  
     {       / *   c o n v e r t   n e g a t i v e   n u m b e r s   t o   c o r r e s p o n d i n g   p o s i t i v e   o n e s   * /  
             x   =   ( u i n t 1 6 _ t ) x   +   0 x 8 0 0 0 ;  
     }  
  
     / *   C a l c u l a t e   t h e   n e a r e s t   i n d e x   * /  
     i n d e x   =   ( u i n t 3 2 _ t ) x   > >   F A S T _ M A T H _ Q 1 5 _ S H I F T ;  
  
     / *   C a l c u l a t i o n   o f   f r a c t i o n a l   v a l u e   * /  
     f r a c t   =   ( x   -   ( i n d e x   < <   F A S T _ M A T H _ Q 1 5 _ S H I F T ) )   < <   9 ;  
  
     / *   R e a d   t w o   n e a r e s t   v a l u e s   o f   i n p u t   v a l u e   f r o m   t h e   s i n   t a b l e   * /  
     a   =   s i n T a b l e _ q 1 5 [ i n d e x ] ;  
     b   =   s i n T a b l e _ q 1 5 [ i n d e x + 1 ] ;  
  
     / *   L i n e a r   i n t e r p o l a t i o n   p r o c e s s   * /  
     c o s V a l   =   ( q 3 1 _ t ) ( 0 x 8 0 0 0 - f r a c t ) * a   > >   1 6 ;  
     c o s V a l   =   ( q 1 5 _ t ) ( ( ( ( q 3 1 _ t ) c o s V a l   < <   1 6 )   +   ( ( q 3 1 _ t ) f r a c t * b ) )   > >   1 6 ) ;  
  
     r e t u r n   c o s V a l   < <   1 ;  
 }  
  
 / * *  
   *   @ }   e n d   o f   c o s   g r o u p  
   * /  