??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ f i r _ i n t e r p o l a t e _ q 3 1 . c  
   *   D e s c r i p t i o n :     Q 3 1   F I R   i n t e r p o l a t i o n  
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
   *   @ i n g r o u p   g r o u p F i l t e r s  
   * /  
  
 / * *  
   *   @ a d d t o g r o u p   F I R _ I n t e r p o l a t e  
   *   @ {  
   * /  
  
 / * *  
   *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   Q 3 1   F I R   i n t e r p o l a t o r .  
   *   @ p a r a m [ i n ]   * S                 p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 3 1   F I R   i n t e r p o l a t o r   s t r u c t u r e .  
   *   @ p a r a m [ i n ]   * p S r c           p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
   *   @ p a r a m [ o u t ]   * p D s t         p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
   *   @ p a r a m [ i n ]   b l o c k S i z e   n u m b e r   o f   i n p u t   s a m p l e s   t o   p r o c e s s   p e r   c a l l .  
   *   @ r e t u r n   n o n e .  
   *  
   *   < b > S c a l i n g   a n d   O v e r f l o w   B e h a v i o r : < / b >  
   *   \ p a r  
   *   T h e   f u n c t i o n   i s   i m p l e m e n t e d   u s i n g   a n   i n t e r n a l   6 4 - b i t   a c c u m u l a t o r .  
   *   T h e   a c c u m u l a t o r   h a s   a   2 . 6 2   f o r m a t   a n d   m a i n t a i n s   f u l l   p r e c i s i o n   o f   t h e   i n t e r m e d i a t e   m u l t i p l i c a t i o n   r e s u l t s   b u t   p r o v i d e s   o n l y   a   s i n g l e   g u a r d   b i t .  
   *   T h u s ,   i f   t h e   a c c u m u l a t o r   r e s u l t   o v e r f l o w s   i t   w r a p s   a r o u n d   r a t h e r   t h a n   c l i p .  
   *   I n   o r d e r   t o   a v o i d   o v e r f l o w s   c o m p l e t e l y   t h e   i n p u t   s i g n a l   m u s t   b e   s c a l e d   d o w n   b y   < c o d e > 1 / ( n u m T a p s / L ) < / c o d e > .  
   *   s i n c e   < c o d e > n u m T a p s / L < / c o d e >   a d d i t i o n s   o c c u r   p e r   o u t p u t   s a m p l e .  
   *   A f t e r   a l l   m u l t i p l y - a c c u m u l a t e s   a r e   p e r f o r m e d ,   t h e   2 . 6 2   a c c u m u l a t o r   i s   t r u n c a t e d   t o   1 . 3 2   f o r m a t   a n d   t h e n   s a t u r a t e d   t o   1 . 3 1   f o r m a t .  
   * /  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 3   * /  
  
 v o i d   a r m _ f i r _ i n t e r p o l a t e _ q 3 1 (  
     c o n s t   a r m _ f i r _ i n t e r p o l a t e _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     q 3 1 _ t   * p S t a t e   =   S - > p S t a t e ;                                           / *   S t a t e   p o i n t e r   * /  
     q 3 1 _ t   * p C o e f f s   =   S - > p C o e f f s ;                                       / *   C o e f f i c i e n t   p o i n t e r   * /  
     q 3 1 _ t   * p S t a t e C u r n t ;                                                         / *   P o i n t s   t o   t h e   c u r r e n t   s a m p l e   o f   t h e   s t a t e   * /  
     q 3 1 _ t   * p t r 1 ,   * p t r 2 ;                                                         / *   T e m p o r a r y   p o i n t e r s   f o r   s t a t e   a n d   c o e f f i c i e n t   b u f f e r s   * /  
     q 6 3 _ t   s u m 0 ;                                                                         / *   A c c u m u l a t o r s   * /  
     q 3 1 _ t   x 0 ,   c 0 ;                                                                     / *   T e m p o r a r y   v a r i a b l e s   t o   h o l d   s t a t e   a n d   c o e f f i c i e n t   v a l u e s   * /  
     u i n t 3 2 _ t   i ,   b l k C n t ,   j ;                                                   / *   L o o p   c o u n t e r s   * /  
     u i n t 1 6 _ t   p h a s e L e n   =   S - > p h a s e L e n g t h ,   t a p C n t ;         / *   L e n g t h   o f   e a c h   p o l y p h a s e   f i l t e r   c o m p o n e n t   * /  
  
     u i n t 3 2 _ t   b l k C n t N 2 ;  
     q 6 3 _ t   a c c 0 ,   a c c 1 ;  
     q 3 1 _ t   x 1 ;  
  
     / *   S - > p S t a t e   b u f f e r   c o n t a i n s   p r e v i o u s   f r a m e   ( p h a s e L e n   -   1 )   s a m p l e s   * /  
     / *   p S t a t e C u r n t   p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   n e w   i n p u t   d a t a   s h o u l d   b e   w r i t t e n   * /  
     p S t a t e C u r n t   =   S - > p S t a t e   +   ( ( q 3 1 _ t )   p h a s e L e n   -   1 ) ;  
  
     / *   I n i t i a l i s e     b l k C n t   * /  
     b l k C n t   =   b l o c k S i z e   /   2 ;  
     b l k C n t N 2   =   b l o c k S i z e   -   ( 2   *   b l k C n t ) ;  
  
     / *   S a m p l e s   l o o p   u n r o l l e d   b y   2   * /  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C o p y   n e w   i n p u t   s a m p l e   i n t o   t h e   s t a t e   b u f f e r   * /  
         * p S t a t e C u r n t + +   =   * p S r c + + ;  
         * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
         / *   A d d r e s s   m o d i f i e r   i n d e x   o f   c o e f f i c i e n t   b u f f e r   * /  
         j   =   1 U ;  
  
         / *   L o o p   o v e r   t h e   I n t e r p o l a t i o n   f a c t o r .   * /  
         i   =   ( S - > L ) ;  
  
         w h i l e   ( i   >   0 U )  
         {  
             / *   S e t   a c c u m u l a t o r   t o   z e r o   * /  
             a c c 0   =   0 ;  
             a c c 1   =   0 ;  
  
             / *   I n i t i a l i z e   s t a t e   p o i n t e r   * /  
             p t r 1   =   p S t a t e ;  
  
             / *   I n i t i a l i z e   c o e f f i c i e n t   p o i n t e r   * /  
             p t r 2   =   p C o e f f s   +   ( S - > L   -   j ) ;  
  
             / *   L o o p   o v e r   t h e   p o l y P h a s e   l e n g t h .   U n r o l l   b y   a   f a c t o r   o f   4 .  
               * *   R e p e a t   u n t i l   w e ' v e   c o m p u t e d   n u m T a p s - ( 4 * S - > L )   c o e f f i c i e n t s .   * /  
             t a p C n t   =   p h a s e L e n   > >   2 U ;  
  
             x 0   =   * ( p t r 1 + + ) ;  
  
             w h i l e   ( t a p C n t   >   0 U )  
             {  
  
                 / *   R e a d   t h e   i n p u t   s a m p l e   * /  
                 x 1   =   * ( p t r 1 + + ) ;  
  
                 / *   R e a d   t h e   c o e f f i c i e n t   * /  
                 c 0   =   * ( p t r 2 ) ;  
  
                 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
                 a c c 0   + =   ( q 6 3 _ t )   x 0   * c 0 ;  
                 a c c 1   + =   ( q 6 3 _ t )   x 1   * c 0 ;  
  
  
                 / *   R e a d   t h e   c o e f f i c i e n t   * /  
                 c 0   =   * ( p t r 2   +   S - > L ) ;  
  
                 / *   R e a d   t h e   i n p u t   s a m p l e   * /  
                 x 0   =   * ( p t r 1 + + ) ;  
  
                 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
                 a c c 0   + =   ( q 6 3 _ t )   x 1   * c 0 ;  
                 a c c 1   + =   ( q 6 3 _ t )   x 0   * c 0 ;  
  
  
                 / *   R e a d   t h e   c o e f f i c i e n t   * /  
                 c 0   =   * ( p t r 2   +   S - > L   *   2 ) ;  
  
                 / *   R e a d   t h e   i n p u t   s a m p l e   * /  
                 x 1   =   * ( p t r 1 + + ) ;  
  
                 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
                 a c c 0   + =   ( q 6 3 _ t )   x 0   * c 0 ;  
                 a c c 1   + =   ( q 6 3 _ t )   x 1   * c 0 ;  
  
                 / *   R e a d   t h e   c o e f f i c i e n t   * /  
                 c 0   =   * ( p t r 2   +   S - > L   *   3 ) ;  
  
                 / *   R e a d   t h e   i n p u t   s a m p l e   * /  
                 x 0   =   * ( p t r 1 + + ) ;  
  
                 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
                 a c c 0   + =   ( q 6 3 _ t )   x 1   * c 0 ;  
                 a c c 1   + =   ( q 6 3 _ t )   x 0   * c 0 ;  
  
  
                 / *   U p s a m p l i n g   i s   d o n e   b y   s t u f f i n g   L - 1   z e r o s   b e t w e e n   e a c h   s a m p l e .  
                   *   S o   i n s t e a d   o f   m u l t i p l y i n g   z e r o s   w i t h   c o e f f i c i e n t s ,  
                   *   I n c r e m e n t   t h e   c o e f f i c i e n t   p o i n t e r   b y   i n t e r p o l a t i o n   f a c t o r   t i m e s .   * /  
                 p t r 2   + =   4   *   S - > L ;  
  
                 / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                 t a p C n t - - ;  
             }  
  
             / *   I f   t h e   p o l y P h a s e   l e n g t h   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   t h e   r e m a i n i n g   f i l t e r   t a p s   * /  
             t a p C n t   =   p h a s e L e n   %   0 x 4 U ;  
  
             w h i l e   ( t a p C n t   >   0 U )  
             {  
  
                 / *   R e a d   t h e   i n p u t   s a m p l e   * /  
                 x 1   =   * ( p t r 1 + + ) ;  
  
                 / *   R e a d   t h e   c o e f f i c i e n t   * /  
                 c 0   =   * ( p t r 2 ) ;  
  
                 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
                 a c c 0   + =   ( q 6 3 _ t )   x 0   * c 0 ;  
                 a c c 1   + =   ( q 6 3 _ t )   x 1   * c 0 ;  
  
                 / *   I n c r e m e n t   t h e   c o e f f i c i e n t   p o i n t e r   b y   i n t e r p o l a t i o n   f a c t o r   t i m e s .   * /  
                 p t r 2   + =   S - > L ;  
  
                 / *   u p d a t e   s t a t e s   f o r   n e x t   s a m p l e   p r o c e s s i n g   * /  
                 x 0   =   x 1 ;  
  
                 / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                 t a p C n t - - ;  
             }  
  
             / *   T h e   r e s u l t   i s   i n   t h e   a c c u m u l a t o r ,   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
             * p D s t   =   ( q 3 1 _ t )   ( a c c 0   > >   3 1 ) ;  
             * ( p D s t   +   S - > L )   =   ( q 3 1 _ t )   ( a c c 1   > >   3 1 ) ;  
  
  
             p D s t + + ;  
  
             / *   I n c r e m e n t   t h e   a d d r e s s   m o d i f i e r   i n d e x   o f   c o e f f i c i e n t   b u f f e r   * /  
             j + + ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             i - - ;  
         }  
  
         / *   A d v a n c e   t h e   s t a t e   p o i n t e r   b y   1  
           *   t o   p r o c e s s   t h e   n e x t   g r o u p   o f   i n t e r p o l a t i o n   f a c t o r   n u m b e r   s a m p l e s   * /  
         p S t a t e   =   p S t a t e   +   2 ;  
  
         p D s t   + =   S - > L ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   I f   t h e   b l o c k S i z e   i s   n o t   a   m u l t i p l e   o f   2 ,   c o m p u t e   a n y   r e m a i n i n g   o u t p u t   s a m p l e s   h e r e .  
       * *   N o   l o o p   u n r o l l i n g   i s   u s e d .   * /  
     b l k C n t   =   b l k C n t N 2 ;  
  
     / *   L o o p   o v e r   t h e   b l o c k S i z e .   * /  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C o p y   n e w   i n p u t   s a m p l e   i n t o   t h e   s t a t e   b u f f e r   * /  
         * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
         / *   A d d r e s s   m o d i f i e r   i n d e x   o f   c o e f f i c i e n t   b u f f e r   * /  
         j   =   1 U ;  
  
         / *   L o o p   o v e r   t h e   I n t e r p o l a t i o n   f a c t o r .   * /  
         i   =   S - > L ;  
         w h i l e   ( i   >   0 U )  
         {  
             / *   S e t   a c c u m u l a t o r   t o   z e r o   * /  
             s u m 0   =   0 ;  
  
             / *   I n i t i a l i z e   s t a t e   p o i n t e r   * /  
             p t r 1   =   p S t a t e ;  
  
             / *   I n i t i a l i z e   c o e f f i c i e n t   p o i n t e r   * /  
             p t r 2   =   p C o e f f s   +   ( S - > L   -   j ) ;  
  
             / *   L o o p   o v e r   t h e   p o l y P h a s e   l e n g t h .   U n r o l l   b y   a   f a c t o r   o f   4 .  
               * *   R e p e a t   u n t i l   w e ' v e   c o m p u t e d   n u m T a p s - ( 4 * S - > L )   c o e f f i c i e n t s .   * /  
             t a p C n t   =   p h a s e L e n   > >   2 ;  
             w h i l e   ( t a p C n t   >   0 U )  
             {  
  
                 / *   R e a d   t h e   c o e f f i c i e n t   * /  
                 c 0   =   * ( p t r 2 ) ;  
  
                 / *   U p s a m p l i n g   i s   d o n e   b y   s t u f f i n g   L - 1   z e r o s   b e t w e e n   e a c h   s a m p l e .  
                   *   S o   i n s t e a d   o f   m u l t i p l y i n g   z e r o s   w i t h   c o e f f i c i e n t s ,  
                   *   I n c r e m e n t   t h e   c o e f f i c i e n t   p o i n t e r   b y   i n t e r p o l a t i o n   f a c t o r   t i m e s .   * /  
                 p t r 2   + =   S - > L ;  
  
                 / *   R e a d   t h e   i n p u t   s a m p l e   * /  
                 x 0   =   * ( p t r 1 + + ) ;  
  
                 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
                 s u m 0   + =   ( q 6 3 _ t )   x 0   * c 0 ;  
  
                 / *   R e a d   t h e   c o e f f i c i e n t   * /  
                 c 0   =   * ( p t r 2 ) ;  
  
                 / *   I n c r e m e n t   t h e   c o e f f i c i e n t   p o i n t e r   b y   i n t e r p o l a t i o n   f a c t o r   t i m e s .   * /  
                 p t r 2   + =   S - > L ;  
  
                 / *   R e a d   t h e   i n p u t   s a m p l e   * /  
                 x 0   =   * ( p t r 1 + + ) ;  
  
                 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
                 s u m 0   + =   ( q 6 3 _ t )   x 0   * c 0 ;  
  
                 / *   R e a d   t h e   c o e f f i c i e n t   * /  
                 c 0   =   * ( p t r 2 ) ;  
  
                 / *   I n c r e m e n t   t h e   c o e f f i c i e n t   p o i n t e r   b y   i n t e r p o l a t i o n   f a c t o r   t i m e s .   * /  
                 p t r 2   + =   S - > L ;  
  
                 / *   R e a d   t h e   i n p u t   s a m p l e   * /  
                 x 0   =   * ( p t r 1 + + ) ;  
  
                 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
                 s u m 0   + =   ( q 6 3 _ t )   x 0   * c 0 ;  
  
                 / *   R e a d   t h e   c o e f f i c i e n t   * /  
                 c 0   =   * ( p t r 2 ) ;  
  
                 / *   I n c r e m e n t   t h e   c o e f f i c i e n t   p o i n t e r   b y   i n t e r p o l a t i o n   f a c t o r   t i m e s .   * /  
                 p t r 2   + =   S - > L ;  
  
                 / *   R e a d   t h e   i n p u t   s a m p l e   * /  
                 x 0   =   * ( p t r 1 + + ) ;  
  
                 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
                 s u m 0   + =   ( q 6 3 _ t )   x 0   * c 0 ;  
  
                 / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                 t a p C n t - - ;  
             }  
  
             / *   I f   t h e   p o l y P h a s e   l e n g t h   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   t h e   r e m a i n i n g   f i l t e r   t a p s   * /  
             t a p C n t   =   p h a s e L e n   &   0 x 3 U ;  
  
             w h i l e   ( t a p C n t   >   0 U )  
             {  
                 / *   R e a d   t h e   c o e f f i c i e n t   * /  
                 c 0   =   * ( p t r 2 ) ;  
  
                 / *   I n c r e m e n t   t h e   c o e f f i c i e n t   p o i n t e r   b y   i n t e r p o l a t i o n   f a c t o r   t i m e s .   * /  
                 p t r 2   + =   S - > L ;  
  
                 / *   R e a d   t h e   i n p u t   s a m p l e   * /  
                 x 0   =   * ( p t r 1 + + ) ;  
  
                 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
                 s u m 0   + =   ( q 6 3 _ t )   x 0   * c 0 ;  
  
                 / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                 t a p C n t - - ;  
             }  
  
             / *   T h e   r e s u l t   i s   i n   t h e   a c c u m u l a t o r ,   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
             * p D s t + +   =   ( q 3 1 _ t )   ( s u m 0   > >   3 1 ) ;  
  
             / *   I n c r e m e n t   t h e   a d d r e s s   m o d i f i e r   i n d e x   o f   c o e f f i c i e n t   b u f f e r   * /  
             j + + ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             i - - ;  
         }  
  
         / *   A d v a n c e   t h e   s t a t e   p o i n t e r   b y   1  
           *   t o   p r o c e s s   t h e   n e x t   g r o u p   o f   i n t e r p o l a t i o n   f a c t o r   n u m b e r   s a m p l e s   * /  
         p S t a t e   =   p S t a t e   +   1 ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   P r o c e s s i n g   i s   c o m p l e t e .  
       * *   N o w   c o p y   t h e   l a s t   p h a s e L e n   -   1   s a m p l e s   t o   t h e   s a t r t   o f   t h e   s t a t e   b u f f e r .  
       * *   T h i s   p r e p a r e s   t h e   s t a t e   b u f f e r   f o r   t h e   n e x t   f u n c t i o n   c a l l .   * /  
  
     / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r   * /  
     p S t a t e C u r n t   =   S - > p S t a t e ;  
  
     t a p C n t   =   ( p h a s e L e n   -   1 U )   > >   2 U ;  
  
     / *   c o p y   d a t a   * /  
     w h i l e   ( t a p C n t   >   0 U )  
     {  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         t a p C n t - - ;  
     }  
  
     t a p C n t   =   ( p h a s e L e n   -   1 U )   %   0 x 0 4 U ;  
  
     / *   c o p y   d a t a   * /  
     w h i l e   ( t a p C n t   >   0 U )  
     {  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         t a p C n t - - ;  
     }  
  
 }  
  
  
 # e l s e  
  
 v o i d   a r m _ f i r _ i n t e r p o l a t e _ q 3 1 (  
     c o n s t   a r m _ f i r _ i n t e r p o l a t e _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     q 3 1 _ t   * p S t a t e   =   S - > p S t a t e ;                                           / *   S t a t e   p o i n t e r   * /  
     q 3 1 _ t   * p C o e f f s   =   S - > p C o e f f s ;                                       / *   C o e f f i c i e n t   p o i n t e r   * /  
     q 3 1 _ t   * p S t a t e C u r n t ;                                                         / *   P o i n t s   t o   t h e   c u r r e n t   s a m p l e   o f   t h e   s t a t e   * /  
     q 3 1 _ t   * p t r 1 ,   * p t r 2 ;                                                         / *   T e m p o r a r y   p o i n t e r s   f o r   s t a t e   a n d   c o e f f i c i e n t   b u f f e r s   * /  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 0   * /  
  
     q 6 3 _ t   s u m ;                                                                           / *   A c c u m u l a t o r   * /  
     q 3 1 _ t   x 0 ,   c 0 ;                                                                     / *   T e m p o r a r y   v a r i a b l e s   t o   h o l d   s t a t e   a n d   c o e f f i c i e n t   v a l u e s   * /  
     u i n t 3 2 _ t   i ,   b l k C n t ;                                                         / *   L o o p   c o u n t e r s   * /  
     u i n t 1 6 _ t   p h a s e L e n   =   S - > p h a s e L e n g t h ,   t a p C n t ;         / *   L e n g t h   o f   e a c h   p o l y p h a s e   f i l t e r   c o m p o n e n t   * /  
  
  
     / *   S - > p S t a t e   b u f f e r   c o n t a i n s   p r e v i o u s   f r a m e   ( p h a s e L e n   -   1 )   s a m p l e s   * /  
     / *   p S t a t e C u r n t   p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   n e w   i n p u t   d a t a   s h o u l d   b e   w r i t t e n   * /  
     p S t a t e C u r n t   =   S - > p S t a t e   +   ( ( q 3 1 _ t )   p h a s e L e n   -   1 ) ;  
  
     / *   T o t a l   n u m b e r   o f   i n t p u t   s a m p l e s   * /  
     b l k C n t   =   b l o c k S i z e ;  
  
     / *   L o o p   o v e r   t h e   b l o c k S i z e .   * /  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C o p y   n e w   i n p u t   s a m p l e   i n t o   t h e   s t a t e   b u f f e r   * /  
         * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
         / *   L o o p   o v e r   t h e   I n t e r p o l a t i o n   f a c t o r .   * /  
         i   =   S - > L ;  
  
         w h i l e   ( i   >   0 U )  
         {  
             / *   S e t   a c c u m u l a t o r   t o   z e r o   * /  
             s u m   =   0 ;  
  
             / *   I n i t i a l i z e   s t a t e   p o i n t e r   * /  
             p t r 1   =   p S t a t e ;  
  
             / *   I n i t i a l i z e   c o e f f i c i e n t   p o i n t e r   * /  
             p t r 2   =   p C o e f f s   +   ( i   -   1 U ) ;  
  
             t a p C n t   =   p h a s e L e n ;  
  
             w h i l e   ( t a p C n t   >   0 U )  
             {  
                 / *   R e a d   t h e   c o e f f i c i e n t   * /  
                 c 0   =   * ( p t r 2 ) ;  
  
                 / *   I n c r e m e n t   t h e   c o e f f i c i e n t   p o i n t e r   b y   i n t e r p o l a t i o n   f a c t o r   t i m e s .   * /  
                 p t r 2   + =   S - > L ;  
  
                 / *   R e a d   t h e   i n p u t   s a m p l e   * /  
                 x 0   =   * p t r 1 + + ;  
  
                 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
                 s u m   + =   ( q 6 3 _ t )   x 0   * c 0 ;  
  
                 / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                 t a p C n t - - ;  
             }  
  
             / *   T h e   r e s u l t   i s   i n   t h e   a c c u m u l a t o r ,   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
             * p D s t + +   =   ( q 3 1 _ t )   ( s u m   > >   3 1 ) ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             i - - ;  
         }  
  
         / *   A d v a n c e   t h e   s t a t e   p o i n t e r   b y   1  
           *   t o   p r o c e s s   t h e   n e x t   g r o u p   o f   i n t e r p o l a t i o n   f a c t o r   n u m b e r   s a m p l e s   * /  
         p S t a t e   =   p S t a t e   +   1 ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   P r o c e s s i n g   i s   c o m p l e t e .  
       * *   N o w   c o p y   t h e   l a s t   p h a s e L e n   -   1   s a m p l e s   t o   t h e   s a t r t   o f   t h e   s t a t e   b u f f e r .  
       * *   T h i s   p r e p a r e s   t h e   s t a t e   b u f f e r   f o r   t h e   n e x t   f u n c t i o n   c a l l .   * /  
  
     / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r   * /  
     p S t a t e C u r n t   =   S - > p S t a t e ;  
  
     t a p C n t   =   p h a s e L e n   -   1 U ;  
  
     / *   c o p y   d a t a   * /  
     w h i l e   ( t a p C n t   >   0 U )  
     {  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         t a p C n t - - ;  
     }  
  
 }  
  
 # e n d i f   / *       # i f   d e f i n e d   ( A R M _ M A T H _ D S P )   * /  
  
   / * *  
     *   @ }   e n d   o f   F I R _ I n t e r p o l a t e   g r o u p  
     * /  