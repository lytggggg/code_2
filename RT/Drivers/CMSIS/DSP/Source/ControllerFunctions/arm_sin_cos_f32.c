??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ s i n _ c o s _ f 3 2 . c  
   *   D e s c r i p t i o n :     S i n e   a n d   C o s i n e   c a l c u l a t i o n   f o r   f l o a t i n g - p o i n t   v a l u e s  
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
   *   @ i n g r o u p   g r o u p C o n t r o l l e r  
   * /  
  
 / * *  
   *   @ d e f g r o u p   S i n C o s   S i n e   C o s i n e  
   *  
   *   C o m p u t e s   t h e   t r i g o n o m e t r i c   s i n e   a n d   c o s i n e   v a l u e s   u s i n g   a   c o m b i n a t i o n   o f   t a b l e   l o o k u p  
   *   a n d   l i n e a r   i n t e r p o l a t i o n .  
   *   T h e r e   a r e   s e p a r a t e   f u n c t i o n s   f o r   Q 3 1   a n d   f l o a t i n g - p o i n t   d a t a   t y p e s .  
   *   T h e   i n p u t   t o   t h e   f l o a t i n g - p o i n t   v e r s i o n   i s   i n   d e g r e e s   w h i l e   t h e  
   *   f i x e d - p o i n t   Q 3 1   h a v e   a   s c a l e d   i n p u t   w i t h   t h e   r a n g e  
   *   [ - 1   0 . 9 9 9 9 ]   m a p p i n g   t o   [ - 1 8 0   + 1 8 0 ]   d e g r e e s .  
   *  
   *   T h e   f l o a t i n g   p o i n t   f u n c t i o n   a l s o   a l l o w s   v a l u e s   t h a t   a r e   o u t   o f   t h e   u s u a l   r a n g e .   W h e n   t h i s   h a p p e n s ,   t h e   f u n c t i o n   w i l l  
   *   t a k e   e x t r a   t i m e   t o   a d j u s t   t h e   i n p u t   v a l u e   t o   t h e   r a n g e   o f   [ - 1 8 0   1 8 0 ] .  
   *  
   *   T h e   r e s u l t   i s   a c c u r a t e   t o   5   d i g i t s   a f t e r   t h e   d e c i m a l   p o i n t .  
   *  
   *   T h e   i m p l e m e n t a t i o n   i s   b a s e d   o n   t a b l e   l o o k u p   u s i n g   3 6 0   v a l u e s   t o g e t h e r   w i t h   l i n e a r   i n t e r p o l a t i o n .  
   *   T h e   s t e p s   u s e d   a r e :  
   *     - #   C a l c u l a t i o n   o f   t h e   n e a r e s t   i n t e g e r   t a b l e   i n d e x .  
   *     - #   C o m p u t e   t h e   f r a c t i o n a l   p o r t i o n   ( f r a c t )   o f   t h e   i n p u t .  
   *     - #   F e t c h   t h e   v a l u e   c o r r e s p o n d i n g   t o   \ c   i n d e x   f r o m   s i n e   t a b l e   t o   \ c   y 0   a n d   a l s o   v a l u e   f r o m   \ c   i n d e x + 1   t o   \ c   y 1 .  
   *     - #   S i n e   v a l u e   i s   c o m p u t e d   a s   < c o d e >   * p s i n V a l   =   y 0   +   ( f r a c t   *   ( y 1   -   y 0 ) ) < / c o d e > .  
   *     - #   F e t c h   t h e   v a l u e   c o r r e s p o n d i n g   t o   \ c   i n d e x   f r o m   c o s i n e   t a b l e   t o   \ c   y 0   a n d   a l s o   v a l u e   f r o m   \ c   i n d e x + 1   t o   \ c   y 1 .  
   *     - #   C o s i n e   v a l u e   i s   c o m p u t e d   a s   < c o d e >   * p c o s V a l   =   y 0   +   ( f r a c t   *   ( y 1   -   y 0 ) ) < / c o d e > .  
   * /  
  
   / * *  
   *   @ a d d t o g r o u p   S i n C o s  
   *   @ {  
   * /  
  
 / * *  
   *   @ b r i e f     F l o a t i n g - p o i n t   s i n _ c o s   f u n c t i o n .  
   *   @ p a r a m [ i n ]     t h e t a         i n p u t   v a l u e   i n   d e g r e e s  
   *   @ p a r a m [ o u t ]   * p S i n V a l   p o i n t s   t o   t h e   p r o c e s s e d   s i n e   o u t p u t .  
   *   @ p a r a m [ o u t ]   * p C o s V a l   p o i n t s   t o   t h e   p r o c e s s e d   c o s   o u t p u t .  
   *   @ r e t u r n   n o n e .  
   * /  
  
 v o i d   a r m _ s i n _ c o s _ f 3 2 (  
                                             f l o a t 3 2 _ t   t h e t a ,  
                                             f l o a t 3 2 _ t   *   p S i n V a l ,  
                                             f l o a t 3 2 _ t   *   p C o s V a l )  
 {  
         f l o a t 3 2 _ t   f r a c t ,   i n ;                                                           / *   T e m p o r a r y   v a r i a b l e s   f o r   i n p u t ,   o u t p u t   * /  
         u i n t 1 6 _ t   i n d e x S ,   i n d e x C ;                                                   / *   I n d e x   v a r i a b l e   * /  
         f l o a t 3 2 _ t   f 1 ,   f 2 ,   d 1 ,   d 2 ;                                                 / *   T w o   n e a r e s t   o u t p u t   v a l u e s   * /  
         f l o a t 3 2 _ t   f i n d e x ,   D n ,   D f ,   t e m p ;  
  
         / *   i n p u t   x   i s   i n   d e g r e e s   * /  
         / *   S c a l e   t h e   i n p u t ,   d i v i d e   i n p u t   b y   3 6 0 ,   f o r   c o s i n e   a d d   0 . 2 5   ( p i / 2 )   t o   r e a d   s i n e   t a b l e   * /  
         i n   =   t h e t a   *   0 . 0 0 2 7 7 7 7 7 7 7 7 7 7 8 f ;  
  
         i f   ( i n   <   0 . 0 f )  
         {  
                 i n   =   - i n ;  
         }  
  
         i n   =   i n   -   ( i n t 3 2 _ t ) i n ;  
  
         / *   C a l c u l a t i o n   o f   i n d e x   o f   t h e   t a b l e   * /  
         f i n d e x   =   ( f l o a t 3 2 _ t )   F A S T _ M A T H _ T A B L E _ S I Z E   *   i n ;  
         i n d e x S   =   ( ( u i n t 1 6 _ t ) f i n d e x )   &   0 x 1 f f ;  
         i n d e x C   =   ( i n d e x S   +   ( F A S T _ M A T H _ T A B L E _ S I Z E   /   4 ) )   &   0 x 1 f f ;  
  
         / *   f r a c t i o n a l   v a l u e   c a l c u l a t i o n   * /  
         f r a c t   =   f i n d e x   -   ( f l o a t 3 2 _ t )   i n d e x S ;  
  
         / *   R e a d   t w o   n e a r e s t   v a l u e s   o f   i n p u t   v a l u e   f r o m   t h e   c o s   &   s i n   t a b l e s   * /  
         f 1   =   s i n T a b l e _ f 3 2 [ i n d e x C + 0 ] ;  
         f 2   =   s i n T a b l e _ f 3 2 [ i n d e x C + 1 ] ;  
         d 1   =   - s i n T a b l e _ f 3 2 [ i n d e x S + 0 ] ;  
         d 2   =   - s i n T a b l e _ f 3 2 [ i n d e x S + 1 ] ;  
  
         t e m p   =   ( 1 . 0 f   -   f r a c t )   *   f 1   +   f r a c t   *   f 2 ;  
  
         D n   =   0 . 0 1 2 2 7 1 8 4 6 3 0 3 0 f ;   / /   d e l t a   b e t w e e n   t h e   t w o   p o i n t s   ( f i x e d ) ,   i n   t h i s   c a s e   2 * p i / F A S T _ M A T H _ T A B L E _ S I Z E  
         D f   =   f 2   -   f 1 ;                     / /   d e l t a   b e t w e e n   t h e   v a l u e s   o f   t h e   f u n c t i o n s  
  
         t e m p   =   D n   * ( d 1   +   d 2 )   -   2   *   D f ;  
         t e m p   =   f r a c t   *   t e m p   +   ( 3   *   D f   -   ( d 2   +   2   *   d 1 )   *   D n ) ;  
         t e m p   =   f r a c t   *   t e m p   +   d 1   *   D n ;  
  
         / *   C a l c u l a t i o n   o f   c o s i n e   v a l u e   * /  
         * p C o s V a l   =   f r a c t   *   t e m p   +   f 1 ;  
  
         / *   R e a d   t w o   n e a r e s t   v a l u e s   o f   i n p u t   v a l u e   f r o m   t h e   c o s   &   s i n   t a b l e s   * /  
         f 1   =   s i n T a b l e _ f 3 2 [ i n d e x S + 0 ] ;  
         f 2   =   s i n T a b l e _ f 3 2 [ i n d e x S + 1 ] ;  
         d 1   =   s i n T a b l e _ f 3 2 [ i n d e x C + 0 ] ;  
         d 2   =   s i n T a b l e _ f 3 2 [ i n d e x C + 1 ] ;  
  
         t e m p   =   ( 1 . 0 f   -   f r a c t )   *   f 1   +   f r a c t   *   f 2 ;  
  
         D f   =   f 2   -   f 1 ;   / /   d e l t a   b e t w e e n   t h e   v a l u e s   o f   t h e   f u n c t i o n s  
         t e m p   =   D n * ( d 1   +   d 2 )   -   2 * D f ;  
         t e m p   =   f r a c t * t e m p   +   ( 3 * D f   -   ( d 2   +   2 * d 1 ) * D n ) ;  
         t e m p   =   f r a c t * t e m p   +   d 1 * D n ;  
  
         / *   C a l c u l a t i o n   o f   s i n e   v a l u e   * /  
         * p S i n V a l   =   f r a c t * t e m p   +   f 1 ;  
  
         i f   ( t h e t a   <   0 . 0 f )  
         {  
                 * p S i n V a l   =   - * p S i n V a l ;  
         }  
 }  
 / * *  
   *   @ }   e n d   o f   S i n C o s   g r o u p  
   * /  