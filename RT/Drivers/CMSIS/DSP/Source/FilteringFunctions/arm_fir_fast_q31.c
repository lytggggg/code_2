??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ f i r _ f a s t _ q 3 1 . c  
   *   D e s c r i p t i o n :     P r o c e s s i n g   f u n c t i o n   f o r   t h e   Q 3 1   F a s t   F I R   f i l t e r  
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
   *   @ a d d t o g r o u p   F I R  
   *   @ {  
   * /  
  
 / * *  
   *   @ p a r a m [ i n ]   * S   p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 3 1   s t r u c t u r e .  
   *   @ p a r a m [ i n ]   * p S r c   p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
   *   @ p a r a m [ o u t ]   * p D s t   p o i n t s   t o   t h e   b l o c k   o u t p u t   d a t a .  
   *   @ p a r a m [ i n ]   b l o c k S i z e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s   p e r   c a l l .  
   *   @ r e t u r n   n o n e .  
   *  
   *   < b > S c a l i n g   a n d   O v e r f l o w   B e h a v i o r : < / b >  
   *  
   *   \ p a r  
   *   T h i s   f u n c t i o n   i s   o p t i m i z e d   f o r   s p e e d   a t   t h e   e x p e n s e   o f   f i x e d - p o i n t   p r e c i s i o n   a n d   o v e r f l o w   p r o t e c t i o n .  
   *   T h e   r e s u l t   o f   e a c h   1 . 3 1   x   1 . 3 1   m u l t i p l i c a t i o n   i s   t r u n c a t e d   t o   2 . 3 0   f o r m a t .  
   *   T h e s e   i n t e r m e d i a t e   r e s u l t s   a r e   a d d e d   t o   a   2 . 3 0   a c c u m u l a t o r .  
   *   F i n a l l y ,   t h e   a c c u m u l a t o r   i s   s a t u r a t e d   a n d   c o n v e r t e d   t o   a   1 . 3 1   r e s u l t .  
   *   T h e   f a s t   v e r s i o n   h a s   t h e   s a m e   o v e r f l o w   b e h a v i o r   a s   t h e   s t a n d a r d   v e r s i o n   a n d   p r o v i d e s   l e s s   p r e c i s i o n   s i n c e   i t   d i s c a r d s   t h e   l o w   3 2   b i t s   o f   e a c h   m u l t i p l i c a t i o n   r e s u l t .  
   *   I n   o r d e r   t o   a v o i d   o v e r f l o w s   c o m p l e t e l y   t h e   i n p u t   s i g n a l   m u s t   b e   s c a l e d   d o w n   b y   l o g 2 ( n u m T a p s )   b i t s .  
   *  
   *   \ p a r  
   *   R e f e r   t o   t h e   f u n c t i o n   < c o d e > a r m _ f i r _ q 3 1 ( ) < / c o d e >   f o r   a   s l o w e r   i m p l e m e n t a t i o n   o f   t h i s   f u n c t i o n   w h i c h   u s e s   a   6 4 - b i t   a c c u m u l a t o r   t o   p r o v i d e   h i g h e r   p r e c i s i o n .     B o t h   t h e   s l o w   a n d   t h e   f a s t   v e r s i o n s   u s e   t h e   s a m e   i n s t a n c e   s t r u c t u r e .  
   *   U s e   t h e   f u n c t i o n   < c o d e > a r m _ f i r _ i n i t _ q 3 1 ( ) < / c o d e >   t o   i n i t i a l i z e   t h e   f i l t e r   s t r u c t u r e .  
   * /  
  
 I A R _ O N L Y _ L O W _ O P T I M I Z A T I O N _ E N T E R  
 v o i d   a r m _ f i r _ f a s t _ q 3 1 (  
     c o n s t   a r m _ f i r _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     q 3 1 _ t   * p S t a t e   =   S - > p S t a t e ;                                           / *   S t a t e   p o i n t e r   * /  
     q 3 1 _ t   * p C o e f f s   =   S - > p C o e f f s ;                                       / *   C o e f f i c i e n t   p o i n t e r   * /  
     q 3 1 _ t   * p S t a t e C u r n t ;                                                         / *   P o i n t s   t o   t h e   c u r r e n t   s a m p l e   o f   t h e   s t a t e   * /  
     q 3 1 _ t   x 0 ,   x 1 ,   x 2 ,   x 3 ;                                                     / *   T e m p o r a r y   v a r i a b l e s   t o   h o l d   s t a t e   * /  
     q 3 1 _ t   c 0 ;                                                                             / *   T e m p o r a r y   v a r i a b l e   t o   h o l d   c o e f f i c i e n t   v a l u e   * /  
     q 3 1 _ t   * p x ;                                                                           / *   T e m p o r a r y   p o i n t e r   f o r   s t a t e   * /  
     q 3 1 _ t   * p b ;                                                                           / *   T e m p o r a r y   p o i n t e r   f o r   c o e f f i c i e n t   b u f f e r   * /  
     q 3 1 _ t   a c c 0 ,   a c c 1 ,   a c c 2 ,   a c c 3 ;                                     / *   A c c u m u l a t o r s   * /  
     u i n t 3 2 _ t   n u m T a p s   =   S - > n u m T a p s ;                                   / *   N u m b e r   o f   f i l t e r   c o e f f i c i e n t s   i n   t h e   f i l t e r   * /  
     u i n t 3 2 _ t   i ,   t a p C n t ,   b l k C n t ;                                         / *   L o o p   c o u n t e r s   * /  
  
     / *   S - > p S t a t e   p o i n t s   t o   b u f f e r   w h i c h   c o n t a i n s   p r e v i o u s   f r a m e   ( n u m T a p s   -   1 )   s a m p l e s   * /  
     / *   p S t a t e C u r n t   p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   n e w   i n p u t   d a t a   s h o u l d   b e   w r i t t e n   * /  
     p S t a t e C u r n t   =   & ( S - > p S t a t e [ ( n u m T a p s   -   1 U ) ] ) ;  
  
     / *   A p p l y   l o o p   u n r o l l i n g   a n d   c o m p u t e   4   o u t p u t   v a l u e s   s i m u l t a n e o u s l y .  
       *   T h e   v a r i a b l e s   a c c 0   . . .   a c c 3   h o l d   o u t p u t   v a l u e s   t h a t   a r e   b e i n g   c o m p u t e d :  
       *  
       *         a c c 0   =     b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s - 1 ]   +   b [ n u m T a p s - 2 ]   *   x [ n - n u m T a p s - 2 ]   +   b [ n u m T a p s - 3 ]   *   x [ n - n u m T a p s - 3 ]   + . . . +   b [ 0 ]   *   x [ 0 ]  
       *         a c c 1   =     b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s ]   +       b [ n u m T a p s - 2 ]   *   x [ n - n u m T a p s - 1 ]   +   b [ n u m T a p s - 3 ]   *   x [ n - n u m T a p s - 2 ]   + . . . +   b [ 0 ]   *   x [ 1 ]  
       *         a c c 2   =     b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s + 1 ]   +   b [ n u m T a p s - 2 ]   *   x [ n - n u m T a p s ]   +       b [ n u m T a p s - 3 ]   *   x [ n - n u m T a p s - 1 ]   + . . . +   b [ 0 ]   *   x [ 2 ]  
       *         a c c 3   =     b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s + 2 ]   +   b [ n u m T a p s - 2 ]   *   x [ n - n u m T a p s + 1 ]   +   b [ n u m T a p s - 3 ]   *   x [ n - n u m T a p s ]       + . . . +   b [ 0 ]   *   x [ 3 ]  
       * /  
     b l k C n t   =   b l o c k S i z e   > >   2 ;  
  
     / *   F i r s t   p a r t   o f   t h e   p r o c e s s i n g   w i t h   l o o p   u n r o l l i n g .     C o m p u t e   4   o u t p u t s   a t   a   t i m e .  
       * *   a   s e c o n d   l o o p   b e l o w   c o m p u t e s   t h e   r e m a i n i n g   1   t o   3   s a m p l e s .   * /  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C o p y   f o u r   n e w   i n p u t   s a m p l e s   i n t o   t h e   s t a t e   b u f f e r   * /  
         * p S t a t e C u r n t + +   =   * p S r c + + ;  
         * p S t a t e C u r n t + +   =   * p S r c + + ;  
         * p S t a t e C u r n t + +   =   * p S r c + + ;  
         * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
         / *   S e t   a l l   a c c u m u l a t o r s   t o   z e r o   * /  
         a c c 0   =   0 ;  
         a c c 1   =   0 ;  
         a c c 2   =   0 ;  
         a c c 3   =   0 ;  
  
         / *   I n i t i a l i z e   s t a t e   p o i n t e r   * /  
         p x   =   p S t a t e ;  
  
         / *   I n i t i a l i z e   c o e f f i c i e n t   p o i n t e r   * /  
         p b   =   p C o e f f s ;  
  
         / *   R e a d   t h e   f i r s t   t h r e e   s a m p l e s   f r o m   t h e   s t a t e   b u f f e r :  
           *     x [ n - n u m T a p s ] ,   x [ n - n u m T a p s - 1 ] ,   x [ n - n u m T a p s - 2 ]   * /  
         x 0   =   * ( p x + + ) ;  
         x 1   =   * ( p x + + ) ;  
         x 2   =   * ( p x + + ) ;  
  
         / *   L o o p   u n r o l l i n g .     P r o c e s s   4   t a p s   a t   a   t i m e .   * /  
         t a p C n t   =   n u m T a p s   > >   2 ;  
         i   =   t a p C n t ;  
  
         w h i l e   ( i   >   0 U )  
         {  
             / *   R e a d   t h e   b [ n u m T a p s ]   c o e f f i c i e n t   * /  
             c 0   =   * p b ;  
  
             / *   R e a d   x [ n - n u m T a p s - 3 ]   s a m p l e   * /  
             x 3   =   * p x ;  
  
             / *   a c c 0   + =     b [ n u m T a p s ]   *   x [ n - n u m T a p s ]   * /  
             m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( a c c 0 ,   x 0 ,   c 0 ) ;  
  
             / *   a c c 1   + =     b [ n u m T a p s ]   *   x [ n - n u m T a p s - 1 ]   * /  
             m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( a c c 1 ,   x 1 ,   c 0 ) ;  
  
             / *   a c c 2   + =     b [ n u m T a p s ]   *   x [ n - n u m T a p s - 2 ]   * /  
             m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( a c c 2 ,   x 2 ,   c 0 ) ;  
  
             / *   a c c 3   + =     b [ n u m T a p s ]   *   x [ n - n u m T a p s - 3 ]   * /  
             m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( a c c 3 ,   x 3 ,   c 0 ) ;  
  
             / *   R e a d   t h e   b [ n u m T a p s - 1 ]   c o e f f i c i e n t   * /  
             c 0   =   * ( p b   +   1 U ) ;  
  
             / *   R e a d   x [ n - n u m T a p s - 4 ]   s a m p l e   * /  
             x 0   =   * ( p x   +   1 U ) ;  
  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
             m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( a c c 0 ,   x 1 ,   c 0 ) ;  
             m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( a c c 1 ,   x 2 ,   c 0 ) ;  
             m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( a c c 2 ,   x 3 ,   c 0 ) ;  
             m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( a c c 3 ,   x 0 ,   c 0 ) ;  
  
             / *   R e a d   t h e   b [ n u m T a p s - 2 ]   c o e f f i c i e n t   * /  
             c 0   =   * ( p b   +   2 U ) ;  
  
             / *   R e a d   x [ n - n u m T a p s - 5 ]   s a m p l e   * /  
             x 1   =   * ( p x   +   2 U ) ;  
  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
             m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( a c c 0 ,   x 2 ,   c 0 ) ;  
             m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( a c c 1 ,   x 3 ,   c 0 ) ;  
             m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( a c c 2 ,   x 0 ,   c 0 ) ;  
             m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( a c c 3 ,   x 1 ,   c 0 ) ;  
  
             / *   R e a d   t h e   b [ n u m T a p s - 3 ]   c o e f f i c i e n t s   * /  
             c 0   =   * ( p b   +   3 U ) ;  
  
             / *   R e a d   x [ n - n u m T a p s - 6 ]   s a m p l e   * /  
             x 2   =   * ( p x   +   3 U ) ;  
  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
             m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( a c c 0 ,   x 3 ,   c 0 ) ;  
             m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( a c c 1 ,   x 0 ,   c 0 ) ;  
             m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( a c c 2 ,   x 1 ,   c 0 ) ;  
             m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( a c c 3 ,   x 2 ,   c 0 ) ;  
  
             / *   u p d a t e   c o e f f i c i e n t   p o i n t e r   * /  
             p b   + =   4 U ;  
             p x   + =   4 U ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             i - - ;  
         }  
  
         / *   I f   t h e   f i l t e r   l e n g t h   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   t h e   r e m a i n i n g   f i l t e r   t a p s   * /  
  
         i   =   n u m T a p s   -   ( t a p C n t   *   4 U ) ;  
         w h i l e   ( i   >   0 U )  
         {  
             / *   R e a d   c o e f f i c i e n t s   * /  
             c 0   =   * ( p b + + ) ;  
  
             / *   F e t c h   1   s t a t e   v a r i a b l e   * /  
             x 3   =   * ( p x + + ) ;  
  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
             m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( a c c 0 ,   x 0 ,   c 0 ) ;  
             m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( a c c 1 ,   x 1 ,   c 0 ) ;  
             m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( a c c 2 ,   x 2 ,   c 0 ) ;  
             m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( a c c 3 ,   x 3 ,   c 0 ) ;  
  
             / *   R e u s e   t h e   p r e s e n t   s a m p l e   s t a t e s   f o r   n e x t   s a m p l e   * /  
             x 0   =   x 1 ;  
             x 1   =   x 2 ;  
             x 2   =   x 3 ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             i - - ;  
         }  
  
         / *   A d v a n c e   t h e   s t a t e   p o i n t e r   b y   4   t o   p r o c e s s   t h e   n e x t   g r o u p   o f   4   s a m p l e s   * /  
         p S t a t e   =   p S t a t e   +   4 ;  
  
         / *   T h e   r e s u l t s   i n   t h e   4   a c c u m u l a t o r s   a r e   i n   2 . 3 0   f o r m a t .     C o n v e r t   t o   1 . 3 1  
           * *   T h e n   s t o r e   t h e   4   o u t p u t s   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
         * p D s t + +   =   ( q 3 1 _ t )   ( a c c 0   < <   1 ) ;  
         * p D s t + +   =   ( q 3 1 _ t )   ( a c c 1   < <   1 ) ;  
         * p D s t + +   =   ( q 3 1 _ t )   ( a c c 2   < <   1 ) ;  
         * p D s t + +   =   ( q 3 1 _ t )   ( a c c 3   < <   1 ) ;  
  
         / *   D e c r e m e n t   t h e   s a m p l e s   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
  
     / *   I f   t h e   b l o c k S i z e   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   a n y   r e m a i n i n g   o u t p u t   s a m p l e s   h e r e .  
       * *   N o   l o o p   u n r o l l i n g   i s   u s e d .   * /  
     b l k C n t   =   b l o c k S i z e   %   4 U ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C o p y   o n e   s a m p l e   a t   a   t i m e   i n t o   s t a t e   b u f f e r   * /  
         * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
         / *   S e t   t h e   a c c u m u l a t o r   t o   z e r o   * /  
         a c c 0   =   0 ;  
  
         / *   I n i t i a l i z e   s t a t e   p o i n t e r   * /  
         p x   =   p S t a t e ;  
  
         / *   I n i t i a l i z e   C o e f f i c i e n t   p o i n t e r   * /  
         p b   =   ( p C o e f f s ) ;  
  
         i   =   n u m T a p s ;  
  
         / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
         d o  
         {  
             m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( a c c 0 ,   ( * p x + + ) ,   ( * ( p b + + ) ) ) ;  
             i - - ;  
         }   w h i l e   ( i   >   0 U ) ;  
  
         / *   T h e   r e s u l t   i s   i n   2 . 3 0   f o r m a t .     C o n v e r t   t o   1 . 3 1  
           * *   T h e n   s t o r e   t h e   o u t p u t   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
         * p D s t + +   =   ( q 3 1 _ t )   ( a c c 0   < <   1 ) ;  
  
         / *   A d v a n c e   s t a t e   p o i n t e r   b y   1   f o r   t h e   n e x t   s a m p l e   * /  
         p S t a t e   =   p S t a t e   +   1 ;  
  
         / *   D e c r e m e n t   t h e   s a m p l e s   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   P r o c e s s i n g   i s   c o m p l e t e .  
       * *   N o w   c o p y   t h e   l a s t   n u m T a p s   -   1   s a m p l e s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r .  
       * *   T h i s   p r e p a r e s   t h e   s t a t e   b u f f e r   f o r   t h e   n e x t   f u n c t i o n   c a l l .   * /  
  
     / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r   * /  
     p S t a t e C u r n t   =   S - > p S t a t e ;  
  
     / *   C a l c u l a t e   r e m a i n i n g   n u m b e r   o f   c o p i e s   * /  
     t a p C n t   =   ( n u m T a p s   -   1 U ) ;  
  
     / *   C o p y   t h e   r e m a i n i n g   q 3 1 _ t   d a t a   * /  
     w h i l e   ( t a p C n t   >   0 U )  
     {  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         t a p C n t - - ;  
     }  
  
  
 }  
 I A R _ O N L Y _ L O W _ O P T I M I Z A T I O N _ E X I T  
 / * *  
   *   @ }   e n d   o f   F I R   g r o u p  
   * /  