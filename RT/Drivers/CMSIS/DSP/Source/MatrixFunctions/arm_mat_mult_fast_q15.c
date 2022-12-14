??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ m a t _ m u l t _ f a s t _ q 1 5 . c  
   *   D e s c r i p t i o n :     Q 1 5   m a t r i x   m u l t i p l i c a t i o n   ( f a s t   v a r i a n t )  
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
  
 / * *  
   *   @ i n g r o u p   g r o u p M a t r i x  
   * /  
  
 / * *  
   *   @ a d d t o g r o u p   M a t r i x M u l t  
   *   @ {  
   * /  
  
  
 / * *  
   *   @ b r i e f   Q 1 5   m a t r i x   m u l t i p l i c a t i o n   ( f a s t   v a r i a n t )   f o r   C o r t e x - M 3   a n d   C o r t e x - M 4  
   *   @ p a r a m [ i n ]               * p S r c A   p o i n t s   t o   t h e   f i r s t   i n p u t   m a t r i x   s t r u c t u r e  
   *   @ p a r a m [ i n ]               * p S r c B   p o i n t s   t o   t h e   s e c o n d   i n p u t   m a t r i x   s t r u c t u r e  
   *   @ p a r a m [ o u t ]             * p D s t   p o i n t s   t o   o u t p u t   m a t r i x   s t r u c t u r e  
   *   @ p a r a m [ i n ]               * p S t a t e   p o i n t s   t o   t h e   a r r a y   f o r   s t o r i n g   i n t e r m e d i a t e   r e s u l t s  
   *   @ r e t u r n                     T h e   f u n c t i o n   r e t u r n s   e i t h e r  
   *   < c o d e > A R M _ M A T H _ S I Z E _ M I S M A T C H < / c o d e >   o r   < c o d e > A R M _ M A T H _ S U C C E S S < / c o d e >   b a s e d   o n   t h e   o u t c o m e   o f   s i z e   c h e c k i n g .  
   *  
   *   @ d e t a i l s  
   *   < b > S c a l i n g   a n d   O v e r f l o w   B e h a v i o r : < / b >  
   *  
   *   \ p a r  
   *   T h e   d i f f e r e n c e   b e t w e e n   t h e   f u n c t i o n   a r m _ m a t _ m u l t _ q 1 5 ( )   a n d   t h i s   f a s t   v a r i a n t   i s   t h a t  
   *   t h e   f a s t   v a r i a n t   u s e   a   3 2 - b i t   r a t h e r   t h a n   a   6 4 - b i t   a c c u m u l a t o r .  
   *   T h e   r e s u l t   o f   e a c h   1 . 1 5   x   1 . 1 5   m u l t i p l i c a t i o n   i s   t r u n c a t e d   t o  
   *   2 . 3 0   f o r m a t .   T h e s e   i n t e r m e d i a t e   r e s u l t s   a r e   a c c u m u l a t e d   i n   a   3 2 - b i t   r e g i s t e r   i n   2 . 3 0  
   *   f o r m a t .   F i n a l l y ,   t h e   a c c u m u l a t o r   i s   s a t u r a t e d   a n d   c o n v e r t e d   t o   a   1 . 1 5   r e s u l t .  
   *  
   *   \ p a r  
   *   T h e   f a s t   v e r s i o n   h a s   t h e   s a m e   o v e r f l o w   b e h a v i o r   a s   t h e   s t a n d a r d   v e r s i o n   b u t   p r o v i d e s  
   *   l e s s   p r e c i s i o n   s i n c e   i t   d i s c a r d s   t h e   l o w   1 6   b i t s   o f   e a c h   m u l t i p l i c a t i o n   r e s u l t .  
   *   I n   o r d e r   t o   a v o i d   o v e r f l o w s   c o m p l e t e l y   t h e   i n p u t   s i g n a l s   m u s t   b e   s c a l e d   d o w n .  
   *   S c a l e   d o w n   o n e   o f   t h e   i n p u t   m a t r i c e s   b y   l o g 2 ( n u m C o l s A )   b i t s   t o  
   *   a v o i d   o v e r f l o w s ,   a s   a   t o t a l   o f   n u m C o l s A   a d d i t i o n s   a r e   c o m p u t e d   i n t e r n a l l y   f o r   e a c h  
   *   o u t p u t   e l e m e n t .  
   *  
   *   \ p a r  
   *   S e e   < c o d e > a r m _ m a t _ m u l t _ q 1 5 ( ) < / c o d e >   f o r   a   s l o w e r   i m p l e m e n t a t i o n   o f   t h i s   f u n c t i o n  
   *   w h i c h   u s e s   6 4 - b i t   a c c u m u l a t i o n   t o   p r o v i d e   h i g h e r   p r e c i s i o n .  
   * /  
  
 a r m _ s t a t u s   a r m _ m a t _ m u l t _ f a s t _ q 1 5 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p D s t ,  
     q 1 5 _ t   *   p S t a t e )  
 {  
     q 3 1 _ t   s u m ;                                                                           / *   a c c u m u l a t o r   * /  
     q 1 5 _ t   * p S r c B T   =   p S t a t e ;                                                 / *   i n p u t   d a t a   m a t r i x   p o i n t e r   f o r   t r a n s p o s e   * /  
     q 1 5 _ t   * p I n A   =   p S r c A - > p D a t a ;                                         / *   i n p u t   d a t a   m a t r i x   p o i n t e r   A   o f   Q 1 5   t y p e   * /  
     q 1 5 _ t   * p I n B   =   p S r c B - > p D a t a ;                                         / *   i n p u t   d a t a   m a t r i x   p o i n t e r   B   o f   Q 1 5   t y p e   * /  
     q 1 5 _ t   * p x ;                                                                           / *   T e m p o r a r y   o u t p u t   d a t a   m a t r i x   p o i n t e r   * /  
     u i n t 1 6 _ t   n u m R o w s A   =   p S r c A - > n u m R o w s ;                         / *   n u m b e r   o f   r o w s   o f   i n p u t   m a t r i x   A         * /  
     u i n t 1 6 _ t   n u m C o l s B   =   p S r c B - > n u m C o l s ;                         / *   n u m b e r   o f   c o l u m n s   o f   i n p u t   m a t r i x   B   * /  
     u i n t 1 6 _ t   n u m C o l s A   =   p S r c A - > n u m C o l s ;                         / *   n u m b e r   o f   c o l u m n s   o f   i n p u t   m a t r i x   A   * /  
     u i n t 1 6 _ t   n u m R o w s B   =   p S r c B - > n u m R o w s ;                         / *   n u m b e r   o f   r o w s   o f   i n p u t   m a t r i x   A         * /  
     u i n t 3 2 _ t   c o l ,   i   =   0 U ,   r o w   =   n u m R o w s B ,   c o l C n t ;     / *   l o o p   c o u n t e r s   * /  
     a r m _ s t a t u s   s t a t u s ;                                                           / *   s t a t u s   o f   m a t r i x   m u l t i p l i c a t i o n   * /  
  
 # i f n d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E  
  
     q 3 1 _ t   i n ;                                                                             / *   T e m p o r a r y   v a r i a b l e   t o   h o l d   t h e   i n p u t   v a l u e   * /  
     q 3 1 _ t   i n A 1 ,   i n A 2 ,   i n B 1 ,   i n B 2 ;  
     q 3 1 _ t   s u m 2 ,   s u m 3 ,   s u m 4 ;  
     q 1 5 _ t   * p I n A 2 ,   * p I n B 2 ,   * p x 2 ;  
     u i n t 3 2 _ t   j   =   0 ;  
  
 # e l s e  
  
     q 1 5 _ t   i n ;                                                                             / *   T e m p o r a r y   v a r i a b l e   t o   h o l d   t h e   i n p u t   v a l u e   * /  
     q 1 5 _ t   i n A 1 ,   i n A 2 ,   i n B 1 ,   i n B 2 ;  
  
 # e n d i f   / *   # i f n d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E   * /  
  
 # i f d e f   A R M _ M A T H _ M A T R I X _ C H E C K  
     / *   C h e c k   f o r   m a t r i x   m i s m a t c h   c o n d i t i o n   * /  
     i f   ( ( p S r c A - > n u m C o l s   ! =   p S r c B - > n u m R o w s )   | |  
           ( p S r c A - > n u m R o w s   ! =   p D s t - > n u m R o w s )   | |   ( p S r c B - > n u m C o l s   ! =   p D s t - > n u m C o l s ) )  
     {  
         / *   S e t   s t a t u s   a s   A R M _ M A T H _ S I Z E _ M I S M A T C H   * /  
         s t a t u s   =   A R M _ M A T H _ S I Z E _ M I S M A T C H ;  
     }  
     e l s e  
 # e n d i f  
     {  
         / *   M a t r i x   t r a n s p o s e   * /  
         d o  
         {  
             / *   A p p l y   l o o p   u n r o l l i n g   a n d   e x c h a n g e   t h e   c o l u m n s   w i t h   r o w   e l e m e n t s   * /  
             c o l   =   n u m C o l s B   > >   2 ;  
  
             / *   T h e   p o i n t e r   p x   i s   s e t   t o   s t a r t i n g   a d d r e s s   o f   t h e   c o l u m n   b e i n g   p r o c e s s e d   * /  
             p x   =   p S r c B T   +   i ;  
  
             / *   F i r s t   p a r t   o f   t h e   p r o c e s s i n g   w i t h   l o o p   u n r o l l i n g .     C o m p u t e   4   o u t p u t s   a t   a   t i m e .  
               * *   a   s e c o n d   l o o p   b e l o w   c o m p u t e s   t h e   r e m a i n i n g   1   t o   3   s a m p l e s .   * /  
             w h i l e   ( c o l   >   0 U )  
             {  
 # i f n d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E  
                 / *   R e a d   t w o   e l e m e n t s   f r o m   t h e   r o w   * /  
                 i n   =   * _ _ S I M D 3 2 ( p I n B ) + + ;  
  
                 / *   U n p a c k   a n d   s t o r e   o n e   e l e m e n t   i n   t h e   d e s t i n a t i o n   * /  
 # i f n d e f   A R M _ M A T H _ B I G _ E N D I A N  
  
                 * p x   =   ( q 1 5 _ t )   i n ;  
  
 # e l s e  
  
                 * p x   =   ( q 1 5 _ t )   ( ( i n   &   ( q 3 1 _ t )   0 x f f f f 0 0 0 0 )   > >   1 6 ) ;  
  
 # e n d i f   / *         # i f n d e f   A R M _ M A T H _ B I G _ E N D I A N         * /  
  
                 / *   U p d a t e   t h e   p o i n t e r   p x   t o   p o i n t   t o   t h e   n e x t   r o w   o f   t h e   t r a n s p o s e d   m a t r i x   * /  
                 p x   + =   n u m R o w s B ;  
  
                 / *   U n p a c k   a n d   s t o r e   t h e   s e c o n d   e l e m e n t   i n   t h e   d e s t i n a t i o n   * /  
 # i f n d e f   A R M _ M A T H _ B I G _ E N D I A N  
  
                 * p x   =   ( q 1 5 _ t )   ( ( i n   &   ( q 3 1 _ t )   0 x f f f f 0 0 0 0 )   > >   1 6 ) ;  
  
 # e l s e  
  
                 * p x   =   ( q 1 5 _ t )   i n ;  
  
 # e n d i f   / *         # i f n d e f   A R M _ M A T H _ B I G _ E N D I A N         * /  
  
                 / *   U p d a t e   t h e   p o i n t e r   p x   t o   p o i n t   t o   t h e   n e x t   r o w   o f   t h e   t r a n s p o s e d   m a t r i x   * /  
                 p x   + =   n u m R o w s B ;  
  
                 / *   R e a d   t w o   e l e m e n t s   f r o m   t h e   r o w   * /  
                 i n   =   * _ _ S I M D 3 2 ( p I n B ) + + ;  
  
                 / *   U n p a c k   a n d   s t o r e   o n e   e l e m e n t   i n   t h e   d e s t i n a t i o n   * /  
 # i f n d e f   A R M _ M A T H _ B I G _ E N D I A N  
  
                 * p x   =   ( q 1 5 _ t )   i n ;  
  
 # e l s e  
  
                 * p x   =   ( q 1 5 _ t )   ( ( i n   &   ( q 3 1 _ t )   0 x f f f f 0 0 0 0 )   > >   1 6 ) ;  
  
 # e n d i f   / *         # i f n d e f   A R M _ M A T H _ B I G _ E N D I A N         * /  
  
                 / *   U p d a t e   t h e   p o i n t e r   p x   t o   p o i n t   t o   t h e   n e x t   r o w   o f   t h e   t r a n s p o s e d   m a t r i x   * /  
                 p x   + =   n u m R o w s B ;  
  
                 / *   U n p a c k   a n d   s t o r e   t h e   s e c o n d   e l e m e n t   i n   t h e   d e s t i n a t i o n   * /  
  
 # i f n d e f   A R M _ M A T H _ B I G _ E N D I A N  
  
                 * p x   =   ( q 1 5 _ t )   ( ( i n   &   ( q 3 1 _ t )   0 x f f f f 0 0 0 0 )   > >   1 6 ) ;  
  
 # e l s e  
  
                 * p x   =   ( q 1 5 _ t )   i n ;  
  
 # e n d i f   / *         # i f n d e f   A R M _ M A T H _ B I G _ E N D I A N         * /  
  
 # e l s e  
  
                 / *   R e a d   o n e   e l e m e n t   f r o m   t h e   r o w   * /  
                 i n   =   * p I n B + + ;  
  
                 / *   S t o r e   o n e   e l e m e n t   i n   t h e   d e s t i n a t i o n   * /  
                 * p x   =   i n ;  
  
                 / *   U p d a t e   t h e   p o i n t e r   p x   t o   p o i n t   t o   t h e   n e x t   r o w   o f   t h e   t r a n s p o s e d   m a t r i x   * /  
                 p x   + =   n u m R o w s B ;  
  
                 / *   R e a d   o n e   e l e m e n t   f r o m   t h e   r o w   * /  
                 i n   =   * p I n B + + ;  
  
                 / *   S t o r e   o n e   e l e m e n t   i n   t h e   d e s t i n a t i o n   * /  
                 * p x   =   i n ;  
  
                 / *   U p d a t e   t h e   p o i n t e r   p x   t o   p o i n t   t o   t h e   n e x t   r o w   o f   t h e   t r a n s p o s e d   m a t r i x   * /  
                 p x   + =   n u m R o w s B ;  
  
                 / *   R e a d   o n e   e l e m e n t   f r o m   t h e   r o w   * /  
                 i n   =   * p I n B + + ;  
  
                 / *   S t o r e   o n e   e l e m e n t   i n   t h e   d e s t i n a t i o n   * /  
                 * p x   =   i n ;  
  
                 / *   U p d a t e   t h e   p o i n t e r   p x   t o   p o i n t   t o   t h e   n e x t   r o w   o f   t h e   t r a n s p o s e d   m a t r i x   * /  
                 p x   + =   n u m R o w s B ;  
  
                 / *   R e a d   o n e   e l e m e n t   f r o m   t h e   r o w   * /  
                 i n   =   * p I n B + + ;  
  
                 / *   S t o r e   o n e   e l e m e n t   i n   t h e   d e s t i n a t i o n   * /  
                 * p x   =   i n ;  
  
 # e n d i f   / *   # i f n d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E   * /  
  
                 / *   U p d a t e   t h e   p o i n t e r   p x   t o   p o i n t   t o   t h e   n e x t   r o w   o f   t h e   t r a n s p o s e d   m a t r i x   * /  
                 p x   + =   n u m R o w s B ;  
  
                 / *   D e c r e m e n t   t h e   c o l u m n   l o o p   c o u n t e r   * /  
                 c o l - - ;  
             }  
  
             / *   I f   t h e   c o l u m n s   o f   p S r c B   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   a n y   r e m a i n i n g   o u t p u t   s a m p l e s   h e r e .  
               * *   N o   l o o p   u n r o l l i n g   i s   u s e d .   * /  
             c o l   =   n u m C o l s B   %   0 x 4 U ;  
  
             w h i l e   ( c o l   >   0 U )  
             {  
                 / *   R e a d   a n d   s t o r e   t h e   i n p u t   e l e m e n t   i n   t h e   d e s t i n a t i o n   * /  
                 * p x   =   * p I n B + + ;  
  
                 / *   U p d a t e   t h e   p o i n t e r   p x   t o   p o i n t   t o   t h e   n e x t   r o w   o f   t h e   t r a n s p o s e d   m a t r i x   * /  
                 p x   + =   n u m R o w s B ;  
  
                 / *   D e c r e m e n t   t h e   c o l u m n   l o o p   c o u n t e r   * /  
                 c o l - - ;  
             }  
  
             i + + ;  
  
             / *   D e c r e m e n t   t h e   r o w   l o o p   c o u n t e r   * /  
             r o w - - ;  
  
         }   w h i l e   ( r o w   >   0 U ) ;  
  
         / *   R e s e t   t h e   v a r i a b l e s   f o r   t h e   u s a g e   i n   t h e   f o l l o w i n g   m u l t i p l i c a t i o n   p r o c e s s   * /  
         r o w   =   n u m R o w s A ;  
         i   =   0 U ;  
         p x   =   p D s t - > p D a t a ;  
  
 # i f n d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E  
         / *   P r o c e s s   t w o   r o w s   f r o m   m a t r i x   A   a t   a   t i m e   a n d   o u t p u t   t w o   r o w s   a t   a   t i m e   * /  
         r o w   =   r o w   > >   1 ;  
         p x 2   =   p x   +   n u m C o l s B ;  
 # e n d i f  
  
         / *   T h e   f o l l o w i n g   l o o p   p e r f o r m s   t h e   d o t - p r o d u c t   o f   e a c h   r o w   i n   p S r c A   w i t h   e a c h   c o l u m n   i n   p S r c B   * /  
         / *   r o w   l o o p   * /  
         w h i l e   ( r o w   >   0 U )  
         {  
             / *   F o r   e v e r y   r o w   w i s e   p r o c e s s ,   t h e   c o l u m n   l o o p   c o u n t e r   i s   t o   b e   i n i t i a t e d   * /  
             c o l   =   n u m C o l s B ;  
  
             / *   F o r   e v e r y   r o w   w i s e   p r o c e s s ,   t h e   p I n 2   p o i n t e r   i s   s e t  
               * *   t o   t h e   s t a r t i n g   a d d r e s s   o f   t h e   t r a n s p o s e d   p S r c B   d a t a   * /  
             p I n B   =   p S r c B T ;  
  
 # i f n d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E  
             / *   P r o c e s s   t w o   ( t r a n s p o s e d )   c o l u m n s   f r o m   m a t r i x   B   a t   a   t i m e   * /  
             c o l   =   c o l   > >   1 ;  
             j   =   0 ;  
 # e n d i f  
  
             / *   c o l u m n   l o o p   * /  
             w h i l e   ( c o l   >   0 U )  
             {  
                 / *   S e t   t h e   v a r i a b l e   s u m ,   t h a t   a c t s   a s   a c c u m u l a t o r ,   t o   z e r o   * /  
                 s u m   =   0 ;  
  
                 / *   I n i t i a t e   t h e   p o i n t e r   p I n A   t o   p o i n t   t o   t h e   s t a r t i n g   a d d r e s s   o f   t h e   c o l u m n   b e i n g   p r o c e s s e d   * /  
                 p I n A   =   p S r c A - > p D a t a   +   i ;  
  
 # i f n d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E  
                 s u m 2   =   0 ;  
                 s u m 3   =   0 ;  
                 s u m 4   =   0 ;  
                 p I n B     =   p S r c B T   +   j ;  
                 p I n A 2   =   p I n A   +   n u m C o l s A ;  
                 p I n B 2   =   p I n B   +   n u m R o w s B ;  
  
                 / *   R e a d   i n   t w o   e l e m e n t s   a t   o n c e   -   a l o w s   d u a l   M A C   i n s t r u c t i o n   * /  
                 c o l C n t   =   n u m C o l s A   > >   1 ;  
 # e l s e  
                 c o l C n t   =   n u m C o l s A   > >   2 ;  
 # e n d i f  
  
                 / *   m a t r i x   m u l t i p l i c a t i o n   * /  
                 w h i l e   ( c o l C n t   >   0 U )  
                 {  
                     / *   c ( m , n )   =   a ( 1 , 1 ) * b ( 1 , 1 )   +   a ( 1 , 2 )   *   b ( 2 , 1 )   +   . . . .   +   a ( m , p ) * b ( p , n )   * /  
 # i f n d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E  
  
                     i n A 1   =   * _ _ S I M D 3 2 ( p I n A ) + + ;  
                     i n B 1   =   * _ _ S I M D 3 2 ( p I n B ) + + ;  
                     i n A 2   =   * _ _ S I M D 3 2 ( p I n A 2 ) + + ;  
                     i n B 2   =   * _ _ S I M D 3 2 ( p I n B 2 ) + + ;  
  
                     s u m     =   _ _ S M L A D ( i n A 1 ,   i n B 1 ,   s u m ) ;  
                     s u m 2   =   _ _ S M L A D ( i n A 1 ,   i n B 2 ,   s u m 2 ) ;  
                     s u m 3   =   _ _ S M L A D ( i n A 2 ,   i n B 1 ,   s u m 3 ) ;  
                     s u m 4   =   _ _ S M L A D ( i n A 2 ,   i n B 2 ,   s u m 4 ) ;  
  
 # e l s e  
  
                     i n A 1   =   * p I n A ;  
                     i n B 1   =   * p I n B ;  
                     s u m   + =   i n A 1   *   i n B 1 ;  
  
                     i n A 2   =   p I n A [ 1 ] ;  
                     i n B 2   =   p I n B [ 1 ] ;  
                     s u m   + =   i n A 2   *   i n B 2 ;  
  
                     i n A 1   =   p I n A [ 2 ] ;  
                     i n B 1   =   p I n B [ 2 ] ;  
                     s u m   + =   i n A 1   *   i n B 1 ;  
  
                     i n A 2   =   p I n A [ 3 ] ;  
                     i n B 2   =   p I n B [ 3 ] ;  
                     s u m   + =   i n A 2   *   i n B 2 ;  
  
                     p I n A   + =   4 ;  
                     p I n B   + =   4 ;  
  
 # e n d i f   / *   # i f n d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E   * /  
  
                     / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                     c o l C n t - - ;  
                 }  
  
                 / *   p r o c e s s   o d d   c o l u m n   s a m p l e s   * /  
 # i f n d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E  
                 i f   ( n u m C o l s A   &   1 U )   {  
                     i n A 1   =   * p I n A + + ;  
                     i n B 1   =   * p I n B + + ;  
                     i n A 2   =   * p I n A 2 + + ;  
                     i n B 2   =   * p I n B 2 + + ;  
                     s u m     + =   i n A 1   *   i n B 1 ;  
                     s u m 2   + =   i n A 1   *   i n B 2 ;  
                     s u m 3   + =   i n A 2   *   i n B 1 ;  
                     s u m 4   + =   i n A 2   *   i n B 2 ;  
                 }  
 # e l s e  
                 c o l C n t   =   n u m C o l s A   %   0 x 4 U ;  
  
                 w h i l e   ( c o l C n t   >   0 U )  
                 {  
                     / *   c ( m , n )   =   a ( 1 , 1 ) * b ( 1 , 1 )   +   a ( 1 , 2 )   *   b ( 2 , 1 )   +   . . . .   +   a ( m , p ) * b ( p , n )   * /  
                     s u m   + =   ( q 3 1 _ t )   ( * p I n A + + )   *   ( * p I n B + + ) ;  
  
                     c o l C n t - - ;  
                 }  
 # e n d i f  
  
                 / *   S a t u r a t e   a n d   s t o r e   t h e   r e s u l t   i n   t h e   d e s t i n a t i o n   b u f f e r   * /  
                 * p x + +     =   ( q 1 5 _ t )   ( s u m   > >   1 5 ) ;  
  
 # i f n d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E  
                 * p x + +     =   ( q 1 5 _ t )   ( s u m 2   > >   1 5 ) ;  
                 * p x 2 + +   =   ( q 1 5 _ t )   ( s u m 3   > >   1 5 ) ;  
                 * p x 2 + +   =   ( q 1 5 _ t )   ( s u m 4   > >   1 5 ) ;  
                 j   + =   n u m R o w s B   *   2 ;  
 # e n d i f  
  
                 / *   D e c r e m e n t   t h e   c o l u m n   l o o p   c o u n t e r   * /  
                 c o l - - ;  
  
             }  
  
             i   =   i   +   n u m C o l s A ;  
  
 # i f n d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E  
             i   =   i   +   n u m C o l s A ;  
             p x   =   p x 2   +   ( n u m C o l s B   &   1 U ) ;  
             p x 2   =   p x   +   n u m C o l s B ;  
 # e n d i f  
  
             / *   D e c r e m e n t   t h e   r o w   l o o p   c o u n t e r   * /  
             r o w - - ;  
  
         }  
  
         / *   C o m p u t e   a n y   r e m a i n i n g   o d d   r o w / c o l u m n   b e l o w   * /  
  
 # i f n d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E  
  
         / *   C o m p u t e   r e m a i n i n g   o u t p u t   c o l u m n   * /  
         i f   ( n u m C o l s B   &   1 U )   {  
  
             / *   A v o i d   r e d u n d a n t   c o m p u t a t i o n   o f   l a s t   e l e m e n t   * /  
             r o w   =   n u m R o w s A   &   ( ~ 0 x 1 ) ;  
  
             / *   P o i n t   t o   r e m a i n i n g   u n f i l l e d   c o l u m n   i n   o u t p u t   m a t r i x   * /  
             p x   =   p D s t - > p D a t a + n u m C o l s B - 1 ;  
             p I n A   =   p S r c A - > p D a t a ;  
  
             / *   r o w   l o o p   * /  
             w h i l e   ( r o w   >   0 )  
             {  
  
                 / *   p o i n t   t o   l a s t   c o l u m n   i n   m a t r i x   B   * /  
                 p I n B     =   p S r c B T   +   n u m R o w s B * ( n u m C o l s B - 1 ) ;  
  
                 / *   S e t   t h e   v a r i a b l e   s u m ,   t h a t   a c t s   a s   a c c u m u l a t o r ,   t o   z e r o   * /  
                 s u m     =   0 ;  
  
                 / *   C o m p u t e   4   c o l u m n s   a t   o n c e   * /  
                 c o l C n t   =   n u m C o l s A   > >   2 ;  
  
                 / *   m a t r i x   m u l t i p l i c a t i o n   * /  
                 w h i l e   ( c o l C n t   >   0 U )  
                 {  
                     i n A 1   =   * _ _ S I M D 3 2 ( p I n A ) + + ;  
                     i n A 2   =   * _ _ S I M D 3 2 ( p I n A ) + + ;  
                     i n B 1   =   * _ _ S I M D 3 2 ( p I n B ) + + ;  
                     i n B 2   =   * _ _ S I M D 3 2 ( p I n B ) + + ;  
  
                     s u m     =   _ _ S M L A D ( i n A 1 ,   i n B 1 ,   s u m ) ;  
                     s u m     =   _ _ S M L A D ( i n A 2 ,   i n B 2 ,   s u m ) ;  
  
                     / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                     c o l C n t - - ;  
                 }  
  
                 c o l C n t   =   n u m C o l s A   &   3 U ;  
                 w h i l e   ( c o l C n t   >   0 U )   {  
                     s u m   + =   ( q 3 1 _ t )   ( * p I n A + + )   *   ( * p I n B + + ) ;  
                     c o l C n t - - ;  
                 }  
  
                 / *   S t o r e   t h e   r e s u l t   i n   t h e   d e s t i n a t i o n   b u f f e r   * /  
                 * p x     =   ( q 1 5 _ t )   ( s u m     > >   1 5 ) ;  
                 p x   + =   n u m C o l s B ;  
  
                 / *   D e c r e m e n t   t h e   r o w   l o o p   c o u n t e r   * /  
                 r o w - - ;  
             }  
         }  
  
         / *   C o m p u t e   r e m a i n i n g   o u t p u t   r o w   * /  
         i f   ( n u m R o w s A   &   1 U )   {  
  
             / *   p o i n t   t o   l a s t   r o w   i n   o u t p u t   m a t r i x   * /  
             p x   =   p D s t - > p D a t a + ( n u m C o l s B ) * ( n u m R o w s A - 1 ) ;  
  
             p I n B     =   p S r c B T ;  
             c o l   =   n u m C o l s B ;  
             i   =   0 U ;  
  
             / *   c o l   l o o p   * /  
             w h i l e   ( c o l   >   0 )  
             {  
  
                 / *   p o i n t   t o   l a s t   r o w   i n   m a t r i x   A   * /  
                 p I n A   =   p S r c A - > p D a t a   +   ( n u m R o w s A - 1 ) * n u m C o l s A ;  
  
                 / *   S e t   t h e   v a r i a b l e   s u m ,   t h a t   a c t s   a s   a c c u m u l a t o r ,   t o   z e r o   * /  
                 s u m     =   0 ;  
  
                 / *   C o m p u t e   4   c o l u m n s   a t   o n c e   * /  
                 c o l C n t   =   n u m C o l s A   > >   2 ;  
  
                 / *   m a t r i x   m u l t i p l i c a t i o n   * /  
                 w h i l e   ( c o l C n t   >   0 U )  
                 {  
                     i n A 1   =   * _ _ S I M D 3 2 ( p I n A ) + + ;  
                     i n A 2   =   * _ _ S I M D 3 2 ( p I n A ) + + ;  
                     i n B 1   =   * _ _ S I M D 3 2 ( p I n B ) + + ;  
                     i n B 2   =   * _ _ S I M D 3 2 ( p I n B ) + + ;  
  
                     s u m     =   _ _ S M L A D ( i n A 1 ,   i n B 1 ,   s u m ) ;  
                     s u m     =   _ _ S M L A D ( i n A 2 ,   i n B 2 ,   s u m ) ;  
  
                     / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                     c o l C n t - - ;  
                 }  
  
                 c o l C n t   =   n u m C o l s A   &   3 U ;  
                 w h i l e   ( c o l C n t   >   0 U )   {  
                     s u m   + =   ( q 3 1 _ t )   ( * p I n A + + )   *   ( * p I n B + + ) ;  
                     c o l C n t - - ;  
                 }  
  
                 / *   S t o r e   t h e   r e s u l t   i n   t h e   d e s t i n a t i o n   b u f f e r   * /  
                 * p x + +     =   ( q 1 5 _ t )   ( s u m     > >   1 5 ) ;  
  
                 / *   D e c r e m e n t   t h e   c o l   l o o p   c o u n t e r   * /  
                 c o l - - ;  
             }  
         }  
  
 # e n d i f   / *   # i f n d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E   * /  
  
         / *   s e t   s t a t u s   a s   A R M _ M A T H _ S U C C E S S   * /  
         s t a t u s   =   A R M _ M A T H _ S U C C E S S ;  
     }  
  
     / *   R e t u r n   t o   a p p l i c a t i o n   * /  
     r e t u r n   ( s t a t u s ) ;  
 }  
  
 / * *  
   *   @ }   e n d   o f   M a t r i x M u l t   g r o u p  
   * /  