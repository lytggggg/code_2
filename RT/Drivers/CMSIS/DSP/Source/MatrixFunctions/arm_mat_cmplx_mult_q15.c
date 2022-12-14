??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ c m p l x _ m a t _ m u l t _ q 1 5 . c  
   *   D e s c r i p t i o n :     Q 1 5   c o m p l e x   m a t r i x   m u l t i p l i c a t i o n  
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
   *   @ a d d t o g r o u p   C m p l x M a t r i x M u l t  
   *   @ {  
   * /  
  
  
 / * *  
   *   @ b r i e f   Q 1 5   C o m p l e x   m a t r i x   m u l t i p l i c a t i o n  
   *   @ p a r a m [ i n ]               * p S r c A   p o i n t s   t o   t h e   f i r s t   i n p u t   c o m p l e x   m a t r i x   s t r u c t u r e  
   *   @ p a r a m [ i n ]               * p S r c B   p o i n t s   t o   t h e   s e c o n d   i n p u t   c o m p l e x   m a t r i x   s t r u c t u r e  
   *   @ p a r a m [ o u t ]             * p D s t   p o i n t s   t o   o u t p u t   c o m p l e x   m a t r i x   s t r u c t u r e  
   *   @ p a r a m [ i n ] 	 	 * p S c r a t c h   p o i n t s   t o   t h e   a r r a y   f o r   s t o r i n g   i n t e r m e d i a t e   r e s u l t s  
   *   @ r e t u r n           	 	 T h e   f u n c t i o n   r e t u r n s   e i t h e r  
   *   < c o d e > A R M _ M A T H _ S I Z E _ M I S M A T C H < / c o d e >   o r   < c o d e > A R M _ M A T H _ S U C C E S S < / c o d e >   b a s e d   o n   t h e   o u t c o m e   o f   s i z e   c h e c k i n g .  
   *  
   *   \ p a r   C o n d i t i o n s   f o r   o p t i m u m   p e r f o r m a n c e  
   *     I n p u t ,   o u t p u t   a n d   s t a t e   b u f f e r s   s h o u l d   b e   a l i g n e d   b y   3 2 - b i t  
   *  
   *   \ p a r   R e s t r i c t i o n s  
   *     I f   t h e   s i l i c o n   d o e s   n o t   s u p p o r t   u n a l i g n e d   m e m o r y   a c c e s s   e n a b l e   t h e   m a c r o   U N A L I G N E D _ S U P P O R T _ D I S A B L E  
   * 	 I n   t h i s   c a s e   i n p u t ,   o u t p u t ,   s c r a t c h   b u f f e r s   s h o u l d   b e   a l i g n e d   b y   3 2 - b i t  
   *  
   *   @ d e t a i l s  
   *   < b > S c a l i n g   a n d   O v e r f l o w   B e h a v i o r : < / b >  
   *  
   *   \ p a r  
   *   T h e   f u n c t i o n   i s   i m p l e m e n t e d   u s i n g   a   6 4 - b i t   i n t e r n a l   a c c u m u l a t o r .   T h e   i n p u t s   t o   t h e  
   *   m u l t i p l i c a t i o n s   a r e   i n   1 . 1 5   f o r m a t   a n d   m u l t i p l i c a t i o n s   y i e l d   a   2 . 3 0   r e s u l t .  
   *   T h e   2 . 3 0   i n t e r m e d i a t e  
   *   r e s u l t s   a r e   a c c u m u l a t e d   i n   a   6 4 - b i t   a c c u m u l a t o r   i n   3 4 . 3 0   f o r m a t .   T h i s   a p p r o a c h  
   *   p r o v i d e s   3 3   g u a r d   b i t s   a n d   t h e r e   i s   n o   r i s k   o f   o v e r f l o w .   T h e   3 4 . 3 0   r e s u l t   i s   t h e n  
   *   t r u n c a t e d   t o   3 4 . 1 5   f o r m a t   b y   d i s c a r d i n g   t h e   l o w   1 5   b i t s   a n d   t h e n   s a t u r a t e d   t o  
   *   1 . 1 5   f o r m a t .  
   *  
   *   \ p a r  
   *   R e f e r   t o   < c o d e > a r m _ m a t _ m u l t _ f a s t _ q 1 5 ( ) < / c o d e >   f o r   a   f a s t e r   b u t   l e s s   p r e c i s e   v e r s i o n   o f   t h i s   f u n c t i o n .  
   *  
   * /  
  
  
  
  
 a r m _ s t a t u s   a r m _ m a t _ c m p l x _ m u l t _ q 1 5 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p D s t ,  
     q 1 5 _ t   *   p S c r a t c h )  
 {  
     / *   a c c u m u l a t o r   * /  
     q 1 5 _ t   * p S r c B T   =   p S c r a t c h ;                                             / *   i n p u t   d a t a   m a t r i x   p o i n t e r   f o r   t r a n s p o s e   * /  
     q 1 5 _ t   * p I n A   =   p S r c A - > p D a t a ;                                         / *   i n p u t   d a t a   m a t r i x   p o i n t e r   A   o f   Q 1 5   t y p e   * /  
     q 1 5 _ t   * p I n B   =   p S r c B - > p D a t a ;                                         / *   i n p u t   d a t a   m a t r i x   p o i n t e r   B   o f   Q 1 5   t y p e   * /  
     q 1 5 _ t   * p x ;                                                                           / *   T e m p o r a r y   o u t p u t   d a t a   m a t r i x   p o i n t e r   * /  
     u i n t 1 6 _ t   n u m R o w s A   =   p S r c A - > n u m R o w s ;                         / *   n u m b e r   o f   r o w s   o f   i n p u t   m a t r i x   A         * /  
     u i n t 1 6 _ t   n u m C o l s B   =   p S r c B - > n u m C o l s ;                         / *   n u m b e r   o f   c o l u m n s   o f   i n p u t   m a t r i x   B   * /  
     u i n t 1 6 _ t   n u m C o l s A   =   p S r c A - > n u m C o l s ;                         / *   n u m b e r   o f   c o l u m n s   o f   i n p u t   m a t r i x   A   * /  
     u i n t 1 6 _ t   n u m R o w s B   =   p S r c B - > n u m R o w s ;                         / *   n u m b e r   o f   r o w s   o f   i n p u t   m a t r i x   A         * /  
     u i n t 1 6 _ t   c o l ,   i   =   0 U ,   r o w   =   n u m R o w s B ,   c o l C n t ;     / *   l o o p   c o u n t e r s   * /  
     a r m _ s t a t u s   s t a t u s ;                                                           / *   s t a t u s   o f   m a t r i x   m u l t i p l i c a t i o n   * /  
     q 6 3 _ t   s u m R e a l ,   s u m I m a g ;  
  
 # i f d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E  
     q 1 5 _ t   i n ;                                                                             / *   T e m p o r a r y   v a r i a b l e   t o   h o l d   t h e   i n p u t   v a l u e   * /  
     q 1 5 _ t   a ,   b ,   c ,   d ;  
 # e l s e  
     q 3 1 _ t   i n ;                                                                             / *   T e m p o r a r y   v a r i a b l e   t o   h o l d   t h e   i n p u t   v a l u e   * /  
     q 3 1 _ t   p r o d 1 ,   p r o d 2 ;  
     q 3 1 _ t   p S o u r c e A ,   p S o u r c e B ;  
 # e n d i f  
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
 # i f d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E  
                 / *   R e a d   t w o   e l e m e n t s   f r o m   t h e   r o w   * /  
                 i n   =   * p I n B + + ;  
                 * p x   =   i n ;  
                 i n   =   * p I n B + + ;  
                 p x [ 1 ]   =   i n ;  
  
                 / *   U p d a t e   t h e   p o i n t e r   p x   t o   p o i n t   t o   t h e   n e x t   r o w   o f   t h e   t r a n s p o s e d   m a t r i x   * /  
                 p x   + =   n u m R o w s B   *   2 ;  
  
                 / *   R e a d   t w o   e l e m e n t s   f r o m   t h e   r o w   * /  
                 i n   =   * p I n B + + ;  
                 * p x   =   i n ;  
                 i n   =   * p I n B + + ;  
                 p x [ 1 ]   =   i n ;  
  
                 / *   U p d a t e   t h e   p o i n t e r   p x   t o   p o i n t   t o   t h e   n e x t   r o w   o f   t h e   t r a n s p o s e d   m a t r i x   * /  
                 p x   + =   n u m R o w s B   *   2 ;  
  
                 / *   R e a d   t w o   e l e m e n t s   f r o m   t h e   r o w   * /  
                 i n   =   * p I n B + + ;  
                 * p x   =   i n ;  
                 i n   =   * p I n B + + ;  
                 p x [ 1 ]   =   i n ;  
  
                 / *   U p d a t e   t h e   p o i n t e r   p x   t o   p o i n t   t o   t h e   n e x t   r o w   o f   t h e   t r a n s p o s e d   m a t r i x   * /  
                 p x   + =   n u m R o w s B   *   2 ;  
  
                 / *   R e a d   t w o   e l e m e n t s   f r o m   t h e   r o w   * /  
                 i n   =   * p I n B + + ;  
                 * p x   =   i n ;  
                 i n   =   * p I n B + + ;  
                 p x [ 1 ]   =   i n ;  
  
                 / *   U p d a t e   t h e   p o i n t e r   p x   t o   p o i n t   t o   t h e   n e x t   r o w   o f   t h e   t r a n s p o s e d   m a t r i x   * /  
                 p x   + =   n u m R o w s B   *   2 ;  
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
                 / *   R e a d   t w o   e l e m e n t s   f r o m   t h e   r o w   * /  
                 i n   =   * p I n B + + ;  
                 * p x   =   i n ;  
                 i n   =   * p I n B + + ;  
                 p x [ 1 ]   =   i n ;  
 # e l s e  
  
                 / *   R e a d   t w o   e l e m e n t s   f r o m   t h e   r o w   * /  
                 i n   =   * _ _ S I M D 3 2 ( p I n B ) + + ;  
  
                 * _ _ S I M D 3 2 ( p x )   =   i n ;  
  
                 / *   U p d a t e   t h e   p o i n t e r   p x   t o   p o i n t   t o   t h e   n e x t   r o w   o f   t h e   t r a n s p o s e d   m a t r i x   * /  
                 p x   + =   n u m R o w s B   *   2 ;  
  
  
                 / *   R e a d   t w o   e l e m e n t s   f r o m   t h e   r o w   * /  
                 i n   =   * _ _ S I M D 3 2 ( p I n B ) + + ;  
  
                 * _ _ S I M D 3 2 ( p x )   =   i n ;  
  
                 / *   U p d a t e   t h e   p o i n t e r   p x   t o   p o i n t   t o   t h e   n e x t   r o w   o f   t h e   t r a n s p o s e d   m a t r i x   * /  
                 p x   + =   n u m R o w s B   *   2 ;  
  
                 / *   R e a d   t w o   e l e m e n t s   f r o m   t h e   r o w   * /  
                 i n   =   * _ _ S I M D 3 2 ( p I n B ) + + ;  
  
                 * _ _ S I M D 3 2 ( p x )   =   i n ;  
  
                 / *   U p d a t e   t h e   p o i n t e r   p x   t o   p o i n t   t o   t h e   n e x t   r o w   o f   t h e   t r a n s p o s e d   m a t r i x   * /  
                 p x   + =   n u m R o w s B   *   2 ;  
  
                 / *   R e a d   t w o   e l e m e n t s   f r o m   t h e   r o w   * /  
                 i n   =   * _ _ S I M D 3 2 ( p I n B ) + + ;  
  
                 * _ _ S I M D 3 2 ( p x )   =   i n ;  
  
                 / *   U p d a t e   t h e   p o i n t e r   p x   t o   p o i n t   t o   t h e   n e x t   r o w   o f   t h e   t r a n s p o s e d   m a t r i x   * /  
                 p x   + =   n u m R o w s B   *   2 ;  
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
                 / *   R e a d   t w o   e l e m e n t s   f r o m   t h e   r o w   * /  
                 i n   =   * _ _ S I M D 3 2 ( p I n B ) + + ;  
  
                 * _ _ S I M D 3 2 ( p x )   =   i n ;  
 # e n d i f  
  
                 / *   U p d a t e   t h e   p o i n t e r   p x   t o   p o i n t   t o   t h e   n e x t   r o w   o f   t h e   t r a n s p o s e d   m a t r i x   * /  
                 p x   + =   n u m R o w s B   *   2 ;  
  
                 / *   D e c r e m e n t   t h e   c o l u m n   l o o p   c o u n t e r   * /  
                 c o l - - ;  
             }  
  
             i   =   i   +   2 U ;  
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
         / *   T h e   f o l l o w i n g   l o o p   p e r f o r m s   t h e   d o t - p r o d u c t   o f   e a c h   r o w   i n   p S r c A   w i t h   e a c h   c o l u m n   i n   p S r c B   * /  
         / *   r o w   l o o p   * /  
         d o  
         {  
             / *   F o r   e v e r y   r o w   w i s e   p r o c e s s ,   t h e   c o l u m n   l o o p   c o u n t e r   i s   t o   b e   i n i t i a t e d   * /  
             c o l   =   n u m C o l s B ;  
  
             / *   F o r   e v e r y   r o w   w i s e   p r o c e s s ,   t h e   p I n 2   p o i n t e r   i s   s e t  
               * *   t o   t h e   s t a r t i n g   a d d r e s s   o f   t h e   t r a n s p o s e d   p S r c B   d a t a   * /  
             p I n B   =   p S r c B T ;  
  
             / *   c o l u m n   l o o p   * /  
             d o  
             {  
                 / *   S e t   t h e   v a r i a b l e   s u m ,   t h a t   a c t s   a s   a c c u m u l a t o r ,   t o   z e r o   * /  
                 s u m R e a l   =   0 ;  
                 s u m I m a g   =   0 ;  
  
                 / *   A p p l y   l o o p   u n r o l l i n g   a n d   c o m p u t e   2   M A C s   s i m u l t a n e o u s l y .   * /  
                 c o l C n t   =   n u m C o l s A   > >   1 ;  
  
                 / *   I n i t i a t e   t h e   p o i n t e r   p I n 1   t o   p o i n t   t o   t h e   s t a r t i n g   a d d r e s s   o f   t h e   c o l u m n   b e i n g   p r o c e s s e d   * /  
                 p I n A   =   p S r c A - > p D a t a   +   i   *   2 ;  
  
  
                 / *   m a t r i x   m u l t i p l i c a t i o n   * /  
                 w h i l e   ( c o l C n t   >   0 U )  
                 {  
                     / *   c ( m , n )   =   a ( 1 , 1 ) * b ( 1 , 1 )   +   a ( 1 , 2 )   *   b ( 2 , 1 )   +   . . . .   +   a ( m , p ) * b ( p , n )   * /  
  
 # i f d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E  
  
                     / *   r e a d   r e a l   a n d   i m a g   v a l u e s   f r o m   p S r c A   b u f f e r   * /  
                     a   =   * p I n A ;  
                     b   =   * ( p I n A   +   1 U ) ;  
                     / *   r e a d   r e a l   a n d   i m a g   v a l u e s   f r o m   p S r c B   b u f f e r   * /  
                     c   =   * p I n B ;  
                     d   =   * ( p I n B   +   1 U ) ;  
  
                     / *   M u l t i p l y   a n d   A c c u m l a t e s   * /  
                     s u m R e a l   + =   ( q 3 1 _ t )   a   * c ;  
                     s u m I m a g   + =   ( q 3 1 _ t )   a   * d ;  
                     s u m R e a l   - =   ( q 3 1 _ t )   b   * d ;  
                     s u m I m a g   + =   ( q 3 1 _ t )   b   * c ;  
  
                     / *   r e a d   n e x t   r e a l   a n d   i m a g   v a l u e s   f r o m   p S r c A   b u f f e r   * /  
                     a   =   * ( p I n A   +   2 U ) ;  
                     b   =   * ( p I n A   +   3 U ) ;  
                     / *   r e a d   n e x t   r e a l   a n d   i m a g   v a l u e s   f r o m   p S r c B   b u f f e r   * /  
                     c   =   * ( p I n B   +   2 U ) ;  
                     d   =   * ( p I n B   +   3 U ) ;  
  
                     / *   u p d a t e   p o i n t e r   * /  
                     p I n A   + =   4 U ;  
  
                     / *   M u l t i p l y   a n d   A c c u m l a t e s   * /  
                     s u m R e a l   + =   ( q 3 1 _ t )   a   * c ;  
                     s u m I m a g   + =   ( q 3 1 _ t )   a   * d ;  
                     s u m R e a l   - =   ( q 3 1 _ t )   b   * d ;  
                     s u m I m a g   + =   ( q 3 1 _ t )   b   * c ;  
                     / *   u p d a t e   p o i n t e r   * /  
                     p I n B   + =   4 U ;  
 # e l s e  
                     / *   r e a d   r e a l   a n d   i m a g   v a l u e s   f r o m   p S r c A   a n d   p S r c B   b u f f e r   * /  
                     p S o u r c e A   =   * _ _ S I M D 3 2 ( p I n A ) + + ;  
                     p S o u r c e B   =   * _ _ S I M D 3 2 ( p I n B ) + + ;  
  
                     / *   M u l t i p l y   a n d   A c c u m l a t e s   * /  
 # i f d e f   A R M _ M A T H _ B I G _ E N D I A N  
                     p r o d 1   =   - _ _ S M U S D ( p S o u r c e A ,   p S o u r c e B ) ;  
 # e l s e  
                     p r o d 1   =   _ _ S M U S D ( p S o u r c e A ,   p S o u r c e B ) ;  
 # e n d i f  
                     p r o d 2   =   _ _ S M U A D X ( p S o u r c e A ,   p S o u r c e B ) ;  
                     s u m R e a l   + =   ( q 6 3 _ t )   p r o d 1 ;  
                     s u m I m a g   + =   ( q 6 3 _ t )   p r o d 2 ;  
  
                     / *   r e a d   r e a l   a n d   i m a g   v a l u e s   f r o m   p S r c A   a n d   p S r c B   b u f f e r   * /  
                     p S o u r c e A   =   * _ _ S I M D 3 2 ( p I n A ) + + ;  
                     p S o u r c e B   =   * _ _ S I M D 3 2 ( p I n B ) + + ;  
  
                     / *   M u l t i p l y   a n d   A c c u m l a t e s   * /  
 # i f d e f   A R M _ M A T H _ B I G _ E N D I A N  
                     p r o d 1   =   - _ _ S M U S D ( p S o u r c e A ,   p S o u r c e B ) ;  
 # e l s e  
                     p r o d 1   =   _ _ S M U S D ( p S o u r c e A ,   p S o u r c e B ) ;  
 # e n d i f  
                     p r o d 2   =   _ _ S M U A D X ( p S o u r c e A ,   p S o u r c e B ) ;  
                     s u m R e a l   + =   ( q 6 3 _ t )   p r o d 1 ;  
                     s u m I m a g   + =   ( q 6 3 _ t )   p r o d 2 ;  
  
 # e n d i f   / *             # i f d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E   * /  
  
                     / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                     c o l C n t - - ;  
                 }  
  
                 / *   p r o c e s s   o d d   c o l u m n   s a m p l e s   * /  
                 i f   ( ( n u m C o l s A   &   0 x 1 U )   >   0 U )  
                 {  
                     / *   c ( m , n )   =   a ( 1 , 1 ) * b ( 1 , 1 )   +   a ( 1 , 2 )   *   b ( 2 , 1 )   +   . . . .   +   a ( m , p ) * b ( p , n )   * /  
  
 # i f d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E  
  
                     / *   r e a d   r e a l   a n d   i m a g   v a l u e s   f r o m   p S r c A   a n d   p S r c B   b u f f e r   * /  
                     a   =   * p I n A + + ;  
                     b   =   * p I n A + + ;  
                     c   =   * p I n B + + ;  
                     d   =   * p I n B + + ;  
  
                     / *   M u l t i p l y   a n d   A c c u m l a t e s   * /  
                     s u m R e a l   + =   ( q 3 1 _ t )   a   * c ;  
                     s u m I m a g   + =   ( q 3 1 _ t )   a   * d ;  
                     s u m R e a l   - =   ( q 3 1 _ t )   b   * d ;  
                     s u m I m a g   + =   ( q 3 1 _ t )   b   * c ;  
  
 # e l s e  
                     / *   r e a d   r e a l   a n d   i m a g   v a l u e s   f r o m   p S r c A   a n d   p S r c B   b u f f e r   * /  
                     p S o u r c e A   =   * _ _ S I M D 3 2 ( p I n A ) + + ;  
                     p S o u r c e B   =   * _ _ S I M D 3 2 ( p I n B ) + + ;  
  
                     / *   M u l t i p l y   a n d   A c c u m l a t e s   * /  
 # i f d e f   A R M _ M A T H _ B I G _ E N D I A N  
                     p r o d 1   =   - _ _ S M U S D ( p S o u r c e A ,   p S o u r c e B ) ;  
 # e l s e  
                     p r o d 1   =   _ _ S M U S D ( p S o u r c e A ,   p S o u r c e B ) ;  
 # e n d i f  
                     p r o d 2   =   _ _ S M U A D X ( p S o u r c e A ,   p S o u r c e B ) ;  
                     s u m R e a l   + =   ( q 6 3 _ t )   p r o d 1 ;  
                     s u m I m a g   + =   ( q 6 3 _ t )   p r o d 2 ;  
  
 # e n d i f   / *             # i f d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E   * /  
  
                 }  
  
                 / *   S a t u r a t e   a n d   s t o r e   t h e   r e s u l t   i n   t h e   d e s t i n a t i o n   b u f f e r   * /  
  
                 * p x + +   =   ( q 1 5 _ t )   ( _ _ S S A T ( s u m R e a l   > >   1 5 ,   1 6 ) ) ;  
                 * p x + +   =   ( q 1 5 _ t )   ( _ _ S S A T ( s u m I m a g   > >   1 5 ,   1 6 ) ) ;  
  
                 / *   D e c r e m e n t   t h e   c o l u m n   l o o p   c o u n t e r   * /  
                 c o l - - ;  
  
             }   w h i l e   ( c o l   >   0 U ) ;  
  
             i   =   i   +   n u m C o l s A ;  
  
             / *   D e c r e m e n t   t h e   r o w   l o o p   c o u n t e r   * /  
             r o w - - ;  
  
         }   w h i l e   ( r o w   >   0 U ) ;  
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