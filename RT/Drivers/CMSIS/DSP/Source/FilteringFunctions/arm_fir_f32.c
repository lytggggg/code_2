??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ f i r _ f 3 2 . c  
   *   D e s c r i p t i o n :     F l o a t i n g - p o i n t   F I R   f i l t e r   p r o c e s s i n g   f u n c t i o n  
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
 *   @ i n g r o u p   g r o u p F i l t e r s  
 * /  
  
 / * *  
 *   @ d e f g r o u p   F I R   F i n i t e   I m p u l s e   R e s p o n s e   ( F I R )   F i l t e r s  
 *  
 *   T h i s   s e t   o f   f u n c t i o n s   i m p l e m e n t s   F i n i t e   I m p u l s e   R e s p o n s e   ( F I R )   f i l t e r s  
 *   f o r   Q 7 ,   Q 1 5 ,   Q 3 1 ,   a n d   f l o a t i n g - p o i n t   d a t a   t y p e s .     F a s t   v e r s i o n s   o f   Q 1 5   a n d   Q 3 1   a r e   a l s o   p r o v i d e d .  
 *   T h e   f u n c t i o n s   o p e r a t e   o n   b l o c k s   o f   i n p u t   a n d   o u t p u t   d a t a   a n d   e a c h   c a l l   t o   t h e   f u n c t i o n   p r o c e s s e s  
 *   < c o d e > b l o c k S i z e < / c o d e >   s a m p l e s   t h r o u g h   t h e   f i l t e r .     < c o d e > p S r c < / c o d e >   a n d  
 *   < c o d e > p D s t < / c o d e >   p o i n t s   t o   i n p u t   a n d   o u t p u t   a r r a y s   c o n t a i n i n g   < c o d e > b l o c k S i z e < / c o d e >   v a l u e s .  
 *  
 *   \ p a r   A l g o r i t h m :  
 *   T h e   F I R   f i l t e r   a l g o r i t h m   i s   b a s e d   u p o n   a   s e q u e n c e   o f   m u l t i p l y - a c c u m u l a t e   ( M A C )   o p e r a t i o n s .  
 *   E a c h   f i l t e r   c o e f f i c i e n t   < c o d e > b [ n ] < / c o d e >   i s   m u l t i p l i e d   b y   a   s t a t e   v a r i a b l e   w h i c h   e q u a l s   a   p r e v i o u s   i n p u t   s a m p l e   < c o d e > x [ n ] < / c o d e > .  
 *   < p r e >  
 *         y [ n ]   =   b [ 0 ]   *   x [ n ]   +   b [ 1 ]   *   x [ n - 1 ]   +   b [ 2 ]   *   x [ n - 2 ]   +   . . . +   b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s + 1 ]  
 *   < / p r e >  
 *   \ p a r  
 *   \ i m a g e   h t m l   F I R . g i f   " F i n i t e   I m p u l s e   R e s p o n s e   f i l t e r "  
 *   \ p a r  
 *   < c o d e > p C o e f f s < / c o d e >   p o i n t s   t o   a   c o e f f i c i e n t   a r r a y   o f   s i z e   < c o d e > n u m T a p s < / c o d e > .  
 *   C o e f f i c i e n t s   a r e   s t o r e d   i n   t i m e   r e v e r s e d   o r d e r .  
 *   \ p a r  
 *   < p r e >  
 *         { b [ n u m T a p s - 1 ] ,   b [ n u m T a p s - 2 ] ,   b [ N - 2 ] ,   . . . ,   b [ 1 ] ,   b [ 0 ] }  
 *   < / p r e >  
 *   \ p a r  
 *   < c o d e > p S t a t e < / c o d e >   p o i n t s   t o   a   s t a t e   a r r a y   o f   s i z e   < c o d e > n u m T a p s   +   b l o c k S i z e   -   1 < / c o d e > .  
 *   S a m p l e s   i n   t h e   s t a t e   b u f f e r   a r e   s t o r e d   i n   t h e   f o l l o w i n g   o r d e r .  
 *   \ p a r  
 *   < p r e >  
 *         { x [ n - n u m T a p s + 1 ] ,   x [ n - n u m T a p s ] ,   x [ n - n u m T a p s - 1 ] ,   x [ n - n u m T a p s - 2 ] . . . . x [ 0 ] ,   x [ 1 ] ,   . . . ,   x [ b l o c k S i z e - 1 ] }  
 *   < / p r e >  
 *   \ p a r  
 *   N o t e   t h a t   t h e   l e n g t h   o f   t h e   s t a t e   b u f f e r   e x c e e d s   t h e   l e n g t h   o f   t h e   c o e f f i c i e n t   a r r a y   b y   < c o d e > b l o c k S i z e - 1 < / c o d e > .  
 *   T h e   i n c r e a s e d   s t a t e   b u f f e r   l e n g t h   a l l o w s   c i r c u l a r   a d d r e s s i n g ,   w h i c h   i s   t r a d i t i o n a l l y   u s e d   i n   t h e   F I R   f i l t e r s ,  
 *   t o   b e   a v o i d e d   a n d   y i e l d s   a   s i g n i f i c a n t   s p e e d   i m p r o v e m e n t .  
 *   T h e   s t a t e   v a r i a b l e s   a r e   u p d a t e d   a f t e r   e a c h   b l o c k   o f   d a t a   i s   p r o c e s s e d ;   t h e   c o e f f i c i e n t s   a r e   u n t o u c h e d .  
 *   \ p a r   I n s t a n c e   S t r u c t u r e  
 *   T h e   c o e f f i c i e n t s   a n d   s t a t e   v a r i a b l e s   f o r   a   f i l t e r   a r e   s t o r e d   t o g e t h e r   i n   a n   i n s t a n c e   d a t a   s t r u c t u r e .  
 *   A   s e p a r a t e   i n s t a n c e   s t r u c t u r e   m u s t   b e   d e f i n e d   f o r   e a c h   f i l t e r .  
 *   C o e f f i c i e n t   a r r a y s   m a y   b e   s h a r e d   a m o n g   s e v e r a l   i n s t a n c e s   w h i l e   s t a t e   v a r i a b l e   a r r a y s   c a n n o t   b e   s h a r e d .  
 *   T h e r e   a r e   s e p a r a t e   i n s t a n c e   s t r u c t u r e   d e c l a r a t i o n s   f o r   e a c h   o f   t h e   4   s u p p o r t e d   d a t a   t y p e s .  
 *  
 *   \ p a r   I n i t i a l i z a t i o n   F u n c t i o n s  
 *   T h e r e   i s   a l s o   a n   a s s o c i a t e d   i n i t i a l i z a t i o n   f u n c t i o n   f o r   e a c h   d a t a   t y p e .  
 *   T h e   i n i t i a l i z a t i o n   f u n c t i o n   p e r f o r m s   t h e   f o l l o w i n g   o p e r a t i o n s :  
 *   -   S e t s   t h e   v a l u e s   o f   t h e   i n t e r n a l   s t r u c t u r e   f i e l d s .  
 *   -   Z e r o s   o u t   t h e   v a l u e s   i n   t h e   s t a t e   b u f f e r .  
 *   T o   d o   t h i s   m a n u a l l y   w i t h o u t   c a l l i n g   t h e   i n i t   f u n c t i o n ,   a s s i g n   t h e   f o l l o w   s u b f i e l d s   o f   t h e   i n s t a n c e   s t r u c t u r e :  
 *   n u m T a p s ,   p C o e f f s ,   p S t a t e .   A l s o   s e t   a l l   o f   t h e   v a l u e s   i n   p S t a t e   t o   z e r o .  
 *  
 *   \ p a r  
 *   U s e   o f   t h e   i n i t i a l i z a t i o n   f u n c t i o n   i s   o p t i o n a l .  
 *   H o w e v e r ,   i f   t h e   i n i t i a l i z a t i o n   f u n c t i o n   i s   u s e d ,   t h e n   t h e   i n s t a n c e   s t r u c t u r e   c a n n o t   b e   p l a c e d   i n t o   a   c o n s t   d a t a   s e c t i o n .  
 *   T o   p l a c e   a n   i n s t a n c e   s t r u c t u r e   i n t o   a   c o n s t   d a t a   s e c t i o n ,   t h e   i n s t a n c e   s t r u c t u r e   m u s t   b e   m a n u a l l y   i n i t i a l i z e d .  
 *   S e t   t h e   v a l u e s   i n   t h e   s t a t e   b u f f e r   t o   z e r o s   b e f o r e   s t a t i c   i n i t i a l i z a t i o n .  
 *   T h e   c o d e   b e l o w   s t a t i c a l l y   i n i t i a l i z e s   e a c h   o f   t h e   4   d i f f e r e n t   d a t a   t y p e   f i l t e r   i n s t a n c e   s t r u c t u r e s  
 *   < p r e >  
 * a r m _ f i r _ i n s t a n c e _ f 3 2   S   =   { n u m T a p s ,   p S t a t e ,   p C o e f f s } ;  
 * a r m _ f i r _ i n s t a n c e _ q 3 1   S   =   { n u m T a p s ,   p S t a t e ,   p C o e f f s } ;  
 * a r m _ f i r _ i n s t a n c e _ q 1 5   S   =   { n u m T a p s ,   p S t a t e ,   p C o e f f s } ;  
 * a r m _ f i r _ i n s t a n c e _ q 7   S   =     { n u m T a p s ,   p S t a t e ,   p C o e f f s } ;  
 *   < / p r e >  
 *  
 *   w h e r e   < c o d e > n u m T a p s < / c o d e >   i s   t h e   n u m b e r   o f   f i l t e r   c o e f f i c i e n t s   i n   t h e   f i l t e r ;   < c o d e > p S t a t e < / c o d e >   i s   t h e   a d d r e s s   o f   t h e   s t a t e   b u f f e r ;  
 *   < c o d e > p C o e f f s < / c o d e >   i s   t h e   a d d r e s s   o f   t h e   c o e f f i c i e n t   b u f f e r .  
 *  
 *   \ p a r   F i x e d - P o i n t   B e h a v i o r  
 *   C a r e   m u s t   b e   t a k e n   w h e n   u s i n g   t h e   f i x e d - p o i n t   v e r s i o n s   o f   t h e   F I R   f i l t e r   f u n c t i o n s .  
 *   I n   p a r t i c u l a r ,   t h e   o v e r f l o w   a n d   s a t u r a t i o n   b e h a v i o r   o f   t h e   a c c u m u l a t o r   u s e d   i n   e a c h   f u n c t i o n   m u s t   b e   c o n s i d e r e d .  
 *   R e f e r   t o   t h e   f u n c t i o n   s p e c i f i c   d o c u m e n t a t i o n   b e l o w   f o r   u s a g e   g u i d e l i n e s .  
 * /  
  
 / * *  
 *   @ a d d t o g r o u p   F I R  
 *   @ {  
 * /  
  
 / * *  
 *  
 *   @ p a r a m [ i n ]     * S   p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   F I R   f i l t e r   s t r u c t u r e .  
 *   @ p a r a m [ i n ]     * p S r c   p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
 *   @ p a r a m [ o u t ]   * p D s t   p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
 *   @ p a r a m [ i n ]     b l o c k S i z e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s   p e r   c a l l .  
 *   @ r e t u r n           n o n e .  
 *  
 * /  
  
 # i f   d e f i n e d ( A R M _ M A T H _ C M 7 )  
  
 v o i d   a r m _ f i r _ f 3 2 (  
 c o n s t   a r m _ f i r _ i n s t a n c e _ f 3 2   *   S ,  
 f l o a t 3 2 _ t   *   p S r c ,  
 f l o a t 3 2 _ t   *   p D s t ,  
 u i n t 3 2 _ t   b l o c k S i z e )  
 {  
       f l o a t 3 2 _ t   * p S t a t e   =   S - > p S t a t e ;                                   / *   S t a t e   p o i n t e r   * /  
       f l o a t 3 2 _ t   * p C o e f f s   =   S - > p C o e f f s ;                               / *   C o e f f i c i e n t   p o i n t e r   * /  
       f l o a t 3 2 _ t   * p S t a t e C u r n t ;                                                 / *   P o i n t s   t o   t h e   c u r r e n t   s a m p l e   o f   t h e   s t a t e   * /  
       f l o a t 3 2 _ t   * p x ,   * p b ;                                                         / *   T e m p o r a r y   p o i n t e r s   f o r   s t a t e   a n d   c o e f f i c i e n t   b u f f e r s   * /  
       f l o a t 3 2 _ t   a c c 0 ,   a c c 1 ,   a c c 2 ,   a c c 3 ,   a c c 4 ,   a c c 5 ,   a c c 6 ,   a c c 7 ;           / *   A c c u m u l a t o r s   * /  
       f l o a t 3 2 _ t   x 0 ,   x 1 ,   x 2 ,   x 3 ,   x 4 ,   x 5 ,   x 6 ,   x 7 ,   c 0 ;     / *   T e m p o r a r y   v a r i a b l e s   t o   h o l d   s t a t e   a n d   c o e f f i c i e n t   v a l u e s   * /  
       u i n t 3 2 _ t   n u m T a p s   =   S - > n u m T a p s ;                                   / *   N u m b e r   o f   f i l t e r   c o e f f i c i e n t s   i n   t h e   f i l t e r   * /  
       u i n t 3 2 _ t   i ,   t a p C n t ,   b l k C n t ;                                         / *   L o o p   c o u n t e r s   * /  
  
       / *   S - > p S t a t e   p o i n t s   t o   s t a t e   a r r a y   w h i c h   c o n t a i n s   p r e v i o u s   f r a m e   ( n u m T a p s   -   1 )   s a m p l e s   * /  
       / *   p S t a t e C u r n t   p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   n e w   i n p u t   d a t a   s h o u l d   b e   w r i t t e n   * /  
       p S t a t e C u r n t   =   & ( S - > p S t a t e [ ( n u m T a p s   -   1 U ) ] ) ;  
  
       / *   A p p l y   l o o p   u n r o l l i n g   a n d   c o m p u t e   8   o u t p u t   v a l u e s   s i m u l t a n e o u s l y .  
         *   T h e   v a r i a b l e s   a c c 0   . . .   a c c 7   h o l d   o u t p u t   v a l u e s   t h a t   a r e   b e i n g   c o m p u t e d :  
         *  
         *         a c c 0   =     b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s - 1 ]   +   b [ n u m T a p s - 2 ]   *   x [ n - n u m T a p s - 2 ]   +   b [ n u m T a p s - 3 ]   *   x [ n - n u m T a p s - 3 ]   + . . . +   b [ 0 ]   *   x [ 0 ]  
         *         a c c 1   =     b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s ]   +       b [ n u m T a p s - 2 ]   *   x [ n - n u m T a p s - 1 ]   +   b [ n u m T a p s - 3 ]   *   x [ n - n u m T a p s - 2 ]   + . . . +   b [ 0 ]   *   x [ 1 ]  
         *         a c c 2   =     b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s + 1 ]   +   b [ n u m T a p s - 2 ]   *   x [ n - n u m T a p s ]   +       b [ n u m T a p s - 3 ]   *   x [ n - n u m T a p s - 1 ]   + . . . +   b [ 0 ]   *   x [ 2 ]  
         *         a c c 3   =     b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s + 2 ]   +   b [ n u m T a p s - 2 ]   *   x [ n - n u m T a p s + 1 ]   +   b [ n u m T a p s - 3 ]   *   x [ n - n u m T a p s ]       + . . . +   b [ 0 ]   *   x [ 3 ]  
         * /  
       b l k C n t   =   b l o c k S i z e   > >   3 ;  
  
       / *   F i r s t   p a r t   o f   t h e   p r o c e s s i n g   w i t h   l o o p   u n r o l l i n g .     C o m p u t e   8   o u t p u t s   a t   a   t i m e .  
       * *   a   s e c o n d   l o o p   b e l o w   c o m p u t e s   t h e   r e m a i n i n g   1   t o   7   s a m p l e s .   * /  
       w h i l e   ( b l k C n t   >   0 U )  
       {  
             / *   C o p y   f o u r   n e w   i n p u t   s a m p l e s   i n t o   t h e   s t a t e   b u f f e r   * /  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
             / *   S e t   a l l   a c c u m u l a t o r s   t o   z e r o   * /  
             a c c 0   =   0 . 0 f ;  
             a c c 1   =   0 . 0 f ;  
             a c c 2   =   0 . 0 f ;  
             a c c 3   =   0 . 0 f ;  
             a c c 4   =   0 . 0 f ;  
             a c c 5   =   0 . 0 f ;  
             a c c 6   =   0 . 0 f ;  
             a c c 7   =   0 . 0 f ;  
  
             / *   I n i t i a l i z e   s t a t e   p o i n t e r   * /  
             p x   =   p S t a t e ;  
  
             / *   I n i t i a l i z e   c o e f f   p o i n t e r   * /  
             p b   =   ( p C o e f f s ) ;  
  
             / *   T h i s   i s   s e p a r a t e d   f r o m   t h e   o t h e r s   t o   a v o i d  
               *   a   c a l l   t o   _ _ a e a b i _ m e m m o v e   w h i c h   w o u l d   b e   s l o w e r  
               * /  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
             / *   R e a d   t h e   f i r s t   s e v e n   s a m p l e s   f r o m   t h e   s t a t e   b u f f e r :     x [ n - n u m T a p s ] ,   x [ n - n u m T a p s - 1 ] ,   x [ n - n u m T a p s - 2 ]   * /  
             x 0   =   * p x + + ;  
             x 1   =   * p x + + ;  
             x 2   =   * p x + + ;  
             x 3   =   * p x + + ;  
             x 4   =   * p x + + ;  
             x 5   =   * p x + + ;  
             x 6   =   * p x + + ;  
  
             / *   L o o p   u n r o l l i n g .     P r o c e s s   8   t a p s   a t   a   t i m e .   * /  
             t a p C n t   =   n u m T a p s   > >   3 U ;  
  
             / *   L o o p   o v e r   t h e   n u m b e r   o f   t a p s .     U n r o l l   b y   a   f a c t o r   o f   8 .  
               * *   R e p e a t   u n t i l   w e ' v e   c o m p u t e d   n u m T a p s - 8   c o e f f i c i e n t s .   * /  
             w h i l e   ( t a p C n t   >   0 U )  
             {  
                   / *   R e a d   t h e   b [ n u m T a p s - 1 ]   c o e f f i c i e n t   * /  
                   c 0   =   * ( p b + + ) ;  
  
                   / *   R e a d   x [ n - n u m T a p s - 3 ]   s a m p l e   * /  
                   x 7   =   * ( p x + + ) ;  
  
                   / *   a c c 0   + =     b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s ]   * /  
                   a c c 0   + =   x 0   *   c 0 ;  
  
                   / *   a c c 1   + =     b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s - 1 ]   * /  
                   a c c 1   + =   x 1   *   c 0 ;  
  
                   / *   a c c 2   + =     b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s - 2 ]   * /  
                   a c c 2   + =   x 2   *   c 0 ;  
  
                   / *   a c c 3   + =     b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s - 3 ]   * /  
                   a c c 3   + =   x 3   *   c 0 ;  
  
                   / *   a c c 4   + =     b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s - 4 ]   * /  
                   a c c 4   + =   x 4   *   c 0 ;  
  
                   / *   a c c 1   + =     b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s - 5 ]   * /  
                   a c c 5   + =   x 5   *   c 0 ;  
  
                   / *   a c c 2   + =     b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s - 6 ]   * /  
                   a c c 6   + =   x 6   *   c 0 ;  
  
                   / *   a c c 3   + =     b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s - 7 ]   * /  
                   a c c 7   + =   x 7   *   c 0 ;  
  
                   / *   R e a d   t h e   b [ n u m T a p s - 2 ]   c o e f f i c i e n t   * /  
                   c 0   =   * ( p b + + ) ;  
  
                   / *   R e a d   x [ n - n u m T a p s - 4 ]   s a m p l e   * /  
                   x 0   =   * ( p x + + ) ;  
  
                   / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
                   a c c 0   + =   x 1   *   c 0 ;  
                   a c c 1   + =   x 2   *   c 0 ;  
                   a c c 2   + =   x 3   *   c 0 ;  
                   a c c 3   + =   x 4   *   c 0 ;  
                   a c c 4   + =   x 5   *   c 0 ;  
                   a c c 5   + =   x 6   *   c 0 ;  
                   a c c 6   + =   x 7   *   c 0 ;  
                   a c c 7   + =   x 0   *   c 0 ;  
  
                   / *   R e a d   t h e   b [ n u m T a p s - 3 ]   c o e f f i c i e n t   * /  
                   c 0   =   * ( p b + + ) ;  
  
                   / *   R e a d   x [ n - n u m T a p s - 5 ]   s a m p l e   * /  
                   x 1   =   * ( p x + + ) ;  
  
                   / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
                   a c c 0   + =   x 2   *   c 0 ;  
                   a c c 1   + =   x 3   *   c 0 ;  
                   a c c 2   + =   x 4   *   c 0 ;  
                   a c c 3   + =   x 5   *   c 0 ;  
                   a c c 4   + =   x 6   *   c 0 ;  
                   a c c 5   + =   x 7   *   c 0 ;  
                   a c c 6   + =   x 0   *   c 0 ;  
                   a c c 7   + =   x 1   *   c 0 ;  
  
                   / *   R e a d   t h e   b [ n u m T a p s - 4 ]   c o e f f i c i e n t   * /  
                   c 0   =   * ( p b + + ) ;  
  
                   / *   R e a d   x [ n - n u m T a p s - 6 ]   s a m p l e   * /  
                   x 2   =   * ( p x + + ) ;  
  
                   / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
                   a c c 0   + =   x 3   *   c 0 ;  
                   a c c 1   + =   x 4   *   c 0 ;  
                   a c c 2   + =   x 5   *   c 0 ;  
                   a c c 3   + =   x 6   *   c 0 ;  
                   a c c 4   + =   x 7   *   c 0 ;  
                   a c c 5   + =   x 0   *   c 0 ;  
                   a c c 6   + =   x 1   *   c 0 ;  
                   a c c 7   + =   x 2   *   c 0 ;  
  
                   / *   R e a d   t h e   b [ n u m T a p s - 4 ]   c o e f f i c i e n t   * /  
                   c 0   =   * ( p b + + ) ;  
  
                   / *   R e a d   x [ n - n u m T a p s - 6 ]   s a m p l e   * /  
                   x 3   =   * ( p x + + ) ;  
                   / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
                   a c c 0   + =   x 4   *   c 0 ;  
                   a c c 1   + =   x 5   *   c 0 ;  
                   a c c 2   + =   x 6   *   c 0 ;  
                   a c c 3   + =   x 7   *   c 0 ;  
                   a c c 4   + =   x 0   *   c 0 ;  
                   a c c 5   + =   x 1   *   c 0 ;  
                   a c c 6   + =   x 2   *   c 0 ;  
                   a c c 7   + =   x 3   *   c 0 ;  
  
                   / *   R e a d   t h e   b [ n u m T a p s - 4 ]   c o e f f i c i e n t   * /  
                   c 0   =   * ( p b + + ) ;  
  
                   / *   R e a d   x [ n - n u m T a p s - 6 ]   s a m p l e   * /  
                   x 4   =   * ( p x + + ) ;  
  
                   / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
                   a c c 0   + =   x 5   *   c 0 ;  
                   a c c 1   + =   x 6   *   c 0 ;  
                   a c c 2   + =   x 7   *   c 0 ;  
                   a c c 3   + =   x 0   *   c 0 ;  
                   a c c 4   + =   x 1   *   c 0 ;  
                   a c c 5   + =   x 2   *   c 0 ;  
                   a c c 6   + =   x 3   *   c 0 ;  
                   a c c 7   + =   x 4   *   c 0 ;  
  
                   / *   R e a d   t h e   b [ n u m T a p s - 4 ]   c o e f f i c i e n t   * /  
                   c 0   =   * ( p b + + ) ;  
  
                   / *   R e a d   x [ n - n u m T a p s - 6 ]   s a m p l e   * /  
                   x 5   =   * ( p x + + ) ;  
  
                   / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
                   a c c 0   + =   x 6   *   c 0 ;  
                   a c c 1   + =   x 7   *   c 0 ;  
                   a c c 2   + =   x 0   *   c 0 ;  
                   a c c 3   + =   x 1   *   c 0 ;  
                   a c c 4   + =   x 2   *   c 0 ;  
                   a c c 5   + =   x 3   *   c 0 ;  
                   a c c 6   + =   x 4   *   c 0 ;  
                   a c c 7   + =   x 5   *   c 0 ;  
  
                   / *   R e a d   t h e   b [ n u m T a p s - 4 ]   c o e f f i c i e n t   * /  
                   c 0   =   * ( p b + + ) ;  
  
                   / *   R e a d   x [ n - n u m T a p s - 6 ]   s a m p l e   * /  
                   x 6   =   * ( p x + + ) ;  
  
                   / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
                   a c c 0   + =   x 7   *   c 0 ;  
                   a c c 1   + =   x 0   *   c 0 ;  
                   a c c 2   + =   x 1   *   c 0 ;  
                   a c c 3   + =   x 2   *   c 0 ;  
                   a c c 4   + =   x 3   *   c 0 ;  
                   a c c 5   + =   x 4   *   c 0 ;  
                   a c c 6   + =   x 5   *   c 0 ;  
                   a c c 7   + =   x 6   *   c 0 ;  
  
                   t a p C n t - - ;  
             }  
  
             / *   I f   t h e   f i l t e r   l e n g t h   i s   n o t   a   m u l t i p l e   o f   8 ,   c o m p u t e   t h e   r e m a i n i n g   f i l t e r   t a p s   * /  
             t a p C n t   =   n u m T a p s   %   0 x 8 U ;  
  
             w h i l e   ( t a p C n t   >   0 U )  
             {  
                   / *   R e a d   c o e f f i c i e n t s   * /  
                   c 0   =   * ( p b + + ) ;  
  
                   / *   F e t c h   1   s t a t e   v a r i a b l e   * /  
                   x 7   =   * ( p x + + ) ;  
  
                   / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
                   a c c 0   + =   x 0   *   c 0 ;  
                   a c c 1   + =   x 1   *   c 0 ;  
                   a c c 2   + =   x 2   *   c 0 ;  
                   a c c 3   + =   x 3   *   c 0 ;  
                   a c c 4   + =   x 4   *   c 0 ;  
                   a c c 5   + =   x 5   *   c 0 ;  
                   a c c 6   + =   x 6   *   c 0 ;  
                   a c c 7   + =   x 7   *   c 0 ;  
  
                   / *   R e u s e   t h e   p r e s e n t   s a m p l e   s t a t e s   f o r   n e x t   s a m p l e   * /  
                   x 0   =   x 1 ;  
                   x 1   =   x 2 ;  
                   x 2   =   x 3 ;  
                   x 3   =   x 4 ;  
                   x 4   =   x 5 ;  
                   x 5   =   x 6 ;  
                   x 6   =   x 7 ;  
  
                   / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                   t a p C n t - - ;  
             }  
  
             / *   A d v a n c e   t h e   s t a t e   p o i n t e r   b y   8   t o   p r o c e s s   t h e   n e x t   g r o u p   o f   8   s a m p l e s   * /  
             p S t a t e   =   p S t a t e   +   8 ;  
  
             / *   T h e   r e s u l t s   i n   t h e   8   a c c u m u l a t o r s ,   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
             * p D s t + +   =   a c c 0 ;  
             * p D s t + +   =   a c c 1 ;  
             * p D s t + +   =   a c c 2 ;  
             * p D s t + +   =   a c c 3 ;  
             * p D s t + +   =   a c c 4 ;  
             * p D s t + +   =   a c c 5 ;  
             * p D s t + +   =   a c c 6 ;  
             * p D s t + +   =   a c c 7 ;  
  
             b l k C n t - - ;  
       }  
  
       / *   I f   t h e   b l o c k S i z e   i s   n o t   a   m u l t i p l e   o f   8 ,   c o m p u t e   a n y   r e m a i n i n g   o u t p u t   s a m p l e s   h e r e .  
       * *   N o   l o o p   u n r o l l i n g   i s   u s e d .   * /  
       b l k C n t   =   b l o c k S i z e   %   0 x 8 U ;  
  
       w h i l e   ( b l k C n t   >   0 U )  
       {  
             / *   C o p y   o n e   s a m p l e   a t   a   t i m e   i n t o   s t a t e   b u f f e r   * /  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
             / *   S e t   t h e   a c c u m u l a t o r   t o   z e r o   * /  
             a c c 0   =   0 . 0 f ;  
  
             / *   I n i t i a l i z e   s t a t e   p o i n t e r   * /  
             p x   =   p S t a t e ;  
  
             / *   I n i t i a l i z e   C o e f f i c i e n t   p o i n t e r   * /  
             p b   =   ( p C o e f f s ) ;  
  
             i   =   n u m T a p s ;  
  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
             d o  
             {  
                   a c c 0   + =   * p x + +   *   * p b + + ;  
                   i - - ;  
  
             }   w h i l e   ( i   >   0 U ) ;  
  
             / *   T h e   r e s u l t   i s   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
             * p D s t + +   =   a c c 0 ;  
  
             / *   A d v a n c e   s t a t e   p o i n t e r   b y   1   f o r   t h e   n e x t   s a m p l e   * /  
             p S t a t e   =   p S t a t e   +   1 ;  
  
             b l k C n t - - ;  
       }  
  
       / *   P r o c e s s i n g   i s   c o m p l e t e .  
       * *   N o w   c o p y   t h e   l a s t   n u m T a p s   -   1   s a m p l e s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r .  
       * *   T h i s   p r e p a r e s   t h e   s t a t e   b u f f e r   f o r   t h e   n e x t   f u n c t i o n   c a l l .   * /  
  
       / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r   * /  
       p S t a t e C u r n t   =   S - > p S t a t e ;  
  
       t a p C n t   =   ( n u m T a p s   -   1 U )   > >   2 U ;  
  
       / *   c o p y   d a t a   * /  
       w h i l e   ( t a p C n t   >   0 U )  
       {  
             * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
             * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
             * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
             * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
       }  
  
       / *   C a l c u l a t e   r e m a i n i n g   n u m b e r   o f   c o p i e s   * /  
       t a p C n t   =   ( n u m T a p s   -   1 U )   %   0 x 4 U ;  
  
       / *   C o p y   t h e   r e m a i n i n g   q 3 1 _ t   d a t a   * /  
       w h i l e   ( t a p C n t   >   0 U )  
       {  
             * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
       }  
 }  
  
 # e l i f   d e f i n e d ( A R M _ M A T H _ C M 0 _ F A M I L Y )  
  
 v o i d   a r m _ f i r _ f 3 2 (  
 c o n s t   a r m _ f i r _ i n s t a n c e _ f 3 2   *   S ,  
 f l o a t 3 2 _ t   *   p S r c ,  
 f l o a t 3 2 _ t   *   p D s t ,  
 u i n t 3 2 _ t   b l o c k S i z e )  
 {  
       f l o a t 3 2 _ t   * p S t a t e   =   S - > p S t a t e ;                                   / *   S t a t e   p o i n t e r   * /  
       f l o a t 3 2 _ t   * p C o e f f s   =   S - > p C o e f f s ;                               / *   C o e f f i c i e n t   p o i n t e r   * /  
       f l o a t 3 2 _ t   * p S t a t e C u r n t ;                                                 / *   P o i n t s   t o   t h e   c u r r e n t   s a m p l e   o f   t h e   s t a t e   * /  
       f l o a t 3 2 _ t   * p x ,   * p b ;                                                         / *   T e m p o r a r y   p o i n t e r s   f o r   s t a t e   a n d   c o e f f i c i e n t   b u f f e r s   * /  
       u i n t 3 2 _ t   n u m T a p s   =   S - > n u m T a p s ;                                   / *   N u m b e r   o f   f i l t e r   c o e f f i c i e n t s   i n   t h e   f i l t e r   * /  
       u i n t 3 2 _ t   i ,   t a p C n t ,   b l k C n t ;                                         / *   L o o p   c o u n t e r s   * /  
  
       / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 0   * /  
  
       f l o a t 3 2 _ t   a c c ;  
  
       / *   S - > p S t a t e   p o i n t s   t o   s t a t e   a r r a y   w h i c h   c o n t a i n s   p r e v i o u s   f r a m e   ( n u m T a p s   -   1 )   s a m p l e s   * /  
       / *   p S t a t e C u r n t   p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   n e w   i n p u t   d a t a   s h o u l d   b e   w r i t t e n   * /  
       p S t a t e C u r n t   =   & ( S - > p S t a t e [ ( n u m T a p s   -   1 U ) ] ) ;  
  
       / *   I n i t i a l i z e   b l k C n t   w i t h   b l o c k S i z e   * /  
       b l k C n t   =   b l o c k S i z e ;  
  
       w h i l e   ( b l k C n t   >   0 U )  
       {  
             / *   C o p y   o n e   s a m p l e   a t   a   t i m e   i n t o   s t a t e   b u f f e r   * /  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
             / *   S e t   t h e   a c c u m u l a t o r   t o   z e r o   * /  
             a c c   =   0 . 0 f ;  
  
             / *   I n i t i a l i z e   s t a t e   p o i n t e r   * /  
             p x   =   p S t a t e ;  
  
             / *   I n i t i a l i z e   C o e f f i c i e n t   p o i n t e r   * /  
             p b   =   p C o e f f s ;  
  
             i   =   n u m T a p s ;  
  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
             d o  
             {  
                   / *   a c c   =     b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s - 1 ]   +   b [ n u m T a p s - 2 ]   *   x [ n - n u m T a p s - 2 ]   +   b [ n u m T a p s - 3 ]   *   x [ n - n u m T a p s - 3 ]   + . . . +   b [ 0 ]   *   x [ 0 ]   * /  
                   a c c   + =   * p x + +   *   * p b + + ;  
                   i - - ;  
  
             }   w h i l e   ( i   >   0 U ) ;  
  
             / *   T h e   r e s u l t   i s   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
             * p D s t + +   =   a c c ;  
  
             / *   A d v a n c e   s t a t e   p o i n t e r   b y   1   f o r   t h e   n e x t   s a m p l e   * /  
             p S t a t e   =   p S t a t e   +   1 ;  
  
             b l k C n t - - ;  
       }  
  
       / *   P r o c e s s i n g   i s   c o m p l e t e .  
       * *   N o w   c o p y   t h e   l a s t   n u m T a p s   -   1   s a m p l e s   t o   t h e   s t a r t i n g   o f   t h e   s t a t e   b u f f e r .  
       * *   T h i s   p r e p a r e s   t h e   s t a t e   b u f f e r   f o r   t h e   n e x t   f u n c t i o n   c a l l .   * /  
  
       / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r   * /  
       p S t a t e C u r n t   =   S - > p S t a t e ;  
  
       / *   C o p y   n u m T a p s   n u m b e r   o f   v a l u e s   * /  
       t a p C n t   =   n u m T a p s   -   1 U ;  
  
       / *   C o p y   d a t a   * /  
       w h i l e   ( t a p C n t   >   0 U )  
       {  
             * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
       }  
  
 }  
  
 # e l s e  
  
 / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 3   * /  
  
 v o i d   a r m _ f i r _ f 3 2 (  
 c o n s t   a r m _ f i r _ i n s t a n c e _ f 3 2   *   S ,  
 f l o a t 3 2 _ t   *   p S r c ,  
 f l o a t 3 2 _ t   *   p D s t ,  
 u i n t 3 2 _ t   b l o c k S i z e )  
 {  
       f l o a t 3 2 _ t   * p S t a t e   =   S - > p S t a t e ;                                   / *   S t a t e   p o i n t e r   * /  
       f l o a t 3 2 _ t   * p C o e f f s   =   S - > p C o e f f s ;                               / *   C o e f f i c i e n t   p o i n t e r   * /  
       f l o a t 3 2 _ t   * p S t a t e C u r n t ;                                                 / *   P o i n t s   t o   t h e   c u r r e n t   s a m p l e   o f   t h e   s t a t e   * /  
       f l o a t 3 2 _ t   * p x ,   * p b ;                                                         / *   T e m p o r a r y   p o i n t e r s   f o r   s t a t e   a n d   c o e f f i c i e n t   b u f f e r s   * /  
       f l o a t 3 2 _ t   a c c 0 ,   a c c 1 ,   a c c 2 ,   a c c 3 ,   a c c 4 ,   a c c 5 ,   a c c 6 ,   a c c 7 ;           / *   A c c u m u l a t o r s   * /  
       f l o a t 3 2 _ t   x 0 ,   x 1 ,   x 2 ,   x 3 ,   x 4 ,   x 5 ,   x 6 ,   x 7 ,   c 0 ;     / *   T e m p o r a r y   v a r i a b l e s   t o   h o l d   s t a t e   a n d   c o e f f i c i e n t   v a l u e s   * /  
       u i n t 3 2 _ t   n u m T a p s   =   S - > n u m T a p s ;                                   / *   N u m b e r   o f   f i l t e r   c o e f f i c i e n t s   i n   t h e   f i l t e r   * /  
       u i n t 3 2 _ t   i ,   t a p C n t ,   b l k C n t ;                                         / *   L o o p   c o u n t e r s   * /  
       f l o a t 3 2 _ t   p 0 , p 1 , p 2 , p 3 , p 4 , p 5 , p 6 , p 7 ;                           / *   T e m p o r a r y   p r o d u c t   v a l u e s   * /  
  
       / *   S - > p S t a t e   p o i n t s   t o   s t a t e   a r r a y   w h i c h   c o n t a i n s   p r e v i o u s   f r a m e   ( n u m T a p s   -   1 )   s a m p l e s   * /  
       / *   p S t a t e C u r n t   p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   n e w   i n p u t   d a t a   s h o u l d   b e   w r i t t e n   * /  
       p S t a t e C u r n t   =   & ( S - > p S t a t e [ ( n u m T a p s   -   1 U ) ] ) ;  
  
       / *   A p p l y   l o o p   u n r o l l i n g   a n d   c o m p u t e   8   o u t p u t   v a l u e s   s i m u l t a n e o u s l y .  
         *   T h e   v a r i a b l e s   a c c 0   . . .   a c c 7   h o l d   o u t p u t   v a l u e s   t h a t   a r e   b e i n g   c o m p u t e d :  
         *  
         *         a c c 0   =     b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s - 1 ]   +   b [ n u m T a p s - 2 ]   *   x [ n - n u m T a p s - 2 ]   +   b [ n u m T a p s - 3 ]   *   x [ n - n u m T a p s - 3 ]   + . . . +   b [ 0 ]   *   x [ 0 ]  
         *         a c c 1   =     b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s ]   +       b [ n u m T a p s - 2 ]   *   x [ n - n u m T a p s - 1 ]   +   b [ n u m T a p s - 3 ]   *   x [ n - n u m T a p s - 2 ]   + . . . +   b [ 0 ]   *   x [ 1 ]  
         *         a c c 2   =     b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s + 1 ]   +   b [ n u m T a p s - 2 ]   *   x [ n - n u m T a p s ]   +       b [ n u m T a p s - 3 ]   *   x [ n - n u m T a p s - 1 ]   + . . . +   b [ 0 ]   *   x [ 2 ]  
         *         a c c 3   =     b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s + 2 ]   +   b [ n u m T a p s - 2 ]   *   x [ n - n u m T a p s + 1 ]   +   b [ n u m T a p s - 3 ]   *   x [ n - n u m T a p s ]       + . . . +   b [ 0 ]   *   x [ 3 ]  
         * /  
       b l k C n t   =   b l o c k S i z e   > >   3 ;  
  
       / *   F i r s t   p a r t   o f   t h e   p r o c e s s i n g   w i t h   l o o p   u n r o l l i n g .     C o m p u t e   8   o u t p u t s   a t   a   t i m e .  
       * *   a   s e c o n d   l o o p   b e l o w   c o m p u t e s   t h e   r e m a i n i n g   1   t o   7   s a m p l e s .   * /  
       w h i l e   ( b l k C n t   >   0 U )  
       {  
             / *   C o p y   f o u r   n e w   i n p u t   s a m p l e s   i n t o   t h e   s t a t e   b u f f e r   * /  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
             / *   S e t   a l l   a c c u m u l a t o r s   t o   z e r o   * /  
             a c c 0   =   0 . 0 f ;  
             a c c 1   =   0 . 0 f ;  
             a c c 2   =   0 . 0 f ;  
             a c c 3   =   0 . 0 f ;  
             a c c 4   =   0 . 0 f ;  
             a c c 5   =   0 . 0 f ;  
             a c c 6   =   0 . 0 f ;  
             a c c 7   =   0 . 0 f ;  
  
             / *   I n i t i a l i z e   s t a t e   p o i n t e r   * /  
             p x   =   p S t a t e ;  
  
             / *   I n i t i a l i z e   c o e f f   p o i n t e r   * /  
             p b   =   ( p C o e f f s ) ;  
  
             / *   T h i s   i s   s e p a r a t e d   f r o m   t h e   o t h e r s   t o   a v o i d  
               *   a   c a l l   t o   _ _ a e a b i _ m e m m o v e   w h i c h   w o u l d   b e   s l o w e r  
               * /  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
             / *   R e a d   t h e   f i r s t   s e v e n   s a m p l e s   f r o m   t h e   s t a t e   b u f f e r :     x [ n - n u m T a p s ] ,   x [ n - n u m T a p s - 1 ] ,   x [ n - n u m T a p s - 2 ]   * /  
             x 0   =   * p x + + ;  
             x 1   =   * p x + + ;  
             x 2   =   * p x + + ;  
             x 3   =   * p x + + ;  
             x 4   =   * p x + + ;  
             x 5   =   * p x + + ;  
             x 6   =   * p x + + ;  
  
             / *   L o o p   u n r o l l i n g .     P r o c e s s   8   t a p s   a t   a   t i m e .   * /  
             t a p C n t   =   n u m T a p s   > >   3 U ;  
  
             / *   L o o p   o v e r   t h e   n u m b e r   o f   t a p s .     U n r o l l   b y   a   f a c t o r   o f   8 .  
               * *   R e p e a t   u n t i l   w e ' v e   c o m p u t e d   n u m T a p s - 8   c o e f f i c i e n t s .   * /  
             w h i l e   ( t a p C n t   >   0 U )  
             {  
                   / *   R e a d   t h e   b [ n u m T a p s - 1 ]   c o e f f i c i e n t   * /  
                   c 0   =   * ( p b + + ) ;  
  
                   / *   R e a d   x [ n - n u m T a p s - 3 ]   s a m p l e   * /  
                   x 7   =   * ( p x + + ) ;  
  
                   / *   a c c 0   + =     b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s ]   * /  
                   p 0   =   x 0   *   c 0 ;  
  
                   / *   a c c 1   + =     b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s - 1 ]   * /  
                   p 1   =   x 1   *   c 0 ;  
  
                   / *   a c c 2   + =     b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s - 2 ]   * /  
                   p 2   =   x 2   *   c 0 ;  
  
                   / *   a c c 3   + =     b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s - 3 ]   * /  
                   p 3   =   x 3   *   c 0 ;  
  
                   / *   a c c 4   + =     b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s - 4 ]   * /  
                   p 4   =   x 4   *   c 0 ;  
  
                   / *   a c c 1   + =     b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s - 5 ]   * /  
                   p 5   =   x 5   *   c 0 ;  
  
                   / *   a c c 2   + =     b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s - 6 ]   * /  
                   p 6   =   x 6   *   c 0 ;  
  
                   / *   a c c 3   + =     b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s - 7 ]   * /  
                   p 7   =   x 7   *   c 0 ;  
  
                   / *   R e a d   t h e   b [ n u m T a p s - 2 ]   c o e f f i c i e n t   * /  
                   c 0   =   * ( p b + + ) ;  
  
                   / *   R e a d   x [ n - n u m T a p s - 4 ]   s a m p l e   * /  
                   x 0   =   * ( p x + + ) ;  
  
                   a c c 0   + =   p 0 ;  
                   a c c 1   + =   p 1 ;  
                   a c c 2   + =   p 2 ;  
                   a c c 3   + =   p 3 ;  
                   a c c 4   + =   p 4 ;  
                   a c c 5   + =   p 5 ;  
                   a c c 6   + =   p 6 ;  
                   a c c 7   + =   p 7 ;  
  
  
                   / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
                   p 0   =   x 1   *   c 0 ;  
                   p 1   =   x 2   *   c 0 ;  
                   p 2   =   x 3   *   c 0 ;  
                   p 3   =   x 4   *   c 0 ;  
                   p 4   =   x 5   *   c 0 ;  
                   p 5   =   x 6   *   c 0 ;  
                   p 6   =   x 7   *   c 0 ;  
                   p 7   =   x 0   *   c 0 ;  
  
                   / *   R e a d   t h e   b [ n u m T a p s - 3 ]   c o e f f i c i e n t   * /  
                   c 0   =   * ( p b + + ) ;  
  
                   / *   R e a d   x [ n - n u m T a p s - 5 ]   s a m p l e   * /  
                   x 1   =   * ( p x + + ) ;  
  
                   a c c 0   + =   p 0 ;  
                   a c c 1   + =   p 1 ;  
                   a c c 2   + =   p 2 ;  
                   a c c 3   + =   p 3 ;  
                   a c c 4   + =   p 4 ;  
                   a c c 5   + =   p 5 ;  
                   a c c 6   + =   p 6 ;  
                   a c c 7   + =   p 7 ;  
  
                   / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
                   p 0   =   x 2   *   c 0 ;  
                   p 1   =   x 3   *   c 0 ;  
                   p 2   =   x 4   *   c 0 ;  
                   p 3   =   x 5   *   c 0 ;  
                   p 4   =   x 6   *   c 0 ;  
                   p 5   =   x 7   *   c 0 ;  
                   p 6   =   x 0   *   c 0 ;  
                   p 7   =   x 1   *   c 0 ;  
  
                   / *   R e a d   t h e   b [ n u m T a p s - 4 ]   c o e f f i c i e n t   * /  
                   c 0   =   * ( p b + + ) ;  
  
                   / *   R e a d   x [ n - n u m T a p s - 6 ]   s a m p l e   * /  
                   x 2   =   * ( p x + + ) ;  
  
                   a c c 0   + =   p 0 ;  
                   a c c 1   + =   p 1 ;  
                   a c c 2   + =   p 2 ;  
                   a c c 3   + =   p 3 ;  
                   a c c 4   + =   p 4 ;  
                   a c c 5   + =   p 5 ;  
                   a c c 6   + =   p 6 ;  
                   a c c 7   + =   p 7 ;  
  
                   / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
                   p 0   =   x 3   *   c 0 ;  
                   p 1   =   x 4   *   c 0 ;  
                   p 2   =   x 5   *   c 0 ;  
                   p 3   =   x 6   *   c 0 ;  
                   p 4   =   x 7   *   c 0 ;  
                   p 5   =   x 0   *   c 0 ;  
                   p 6   =   x 1   *   c 0 ;  
                   p 7   =   x 2   *   c 0 ;  
  
                   / *   R e a d   t h e   b [ n u m T a p s - 4 ]   c o e f f i c i e n t   * /  
                   c 0   =   * ( p b + + ) ;  
  
                   / *   R e a d   x [ n - n u m T a p s - 6 ]   s a m p l e   * /  
                   x 3   =   * ( p x + + ) ;  
  
                   a c c 0   + =   p 0 ;  
                   a c c 1   + =   p 1 ;  
                   a c c 2   + =   p 2 ;  
                   a c c 3   + =   p 3 ;  
                   a c c 4   + =   p 4 ;  
                   a c c 5   + =   p 5 ;  
                   a c c 6   + =   p 6 ;  
                   a c c 7   + =   p 7 ;  
  
                   / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
                   p 0   =   x 4   *   c 0 ;  
                   p 1   =   x 5   *   c 0 ;  
                   p 2   =   x 6   *   c 0 ;  
                   p 3   =   x 7   *   c 0 ;  
                   p 4   =   x 0   *   c 0 ;  
                   p 5   =   x 1   *   c 0 ;  
                   p 6   =   x 2   *   c 0 ;  
                   p 7   =   x 3   *   c 0 ;  
  
                   / *   R e a d   t h e   b [ n u m T a p s - 4 ]   c o e f f i c i e n t   * /  
                   c 0   =   * ( p b + + ) ;  
  
                   / *   R e a d   x [ n - n u m T a p s - 6 ]   s a m p l e   * /  
                   x 4   =   * ( p x + + ) ;  
  
                   a c c 0   + =   p 0 ;  
                   a c c 1   + =   p 1 ;  
                   a c c 2   + =   p 2 ;  
                   a c c 3   + =   p 3 ;  
                   a c c 4   + =   p 4 ;  
                   a c c 5   + =   p 5 ;  
                   a c c 6   + =   p 6 ;  
                   a c c 7   + =   p 7 ;  
  
                   / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
                   p 0   =   x 5   *   c 0 ;  
                   p 1   =   x 6   *   c 0 ;  
                   p 2   =   x 7   *   c 0 ;  
                   p 3   =   x 0   *   c 0 ;  
                   p 4   =   x 1   *   c 0 ;  
                   p 5   =   x 2   *   c 0 ;  
                   p 6   =   x 3   *   c 0 ;  
                   p 7   =   x 4   *   c 0 ;  
  
                   / *   R e a d   t h e   b [ n u m T a p s - 4 ]   c o e f f i c i e n t   * /  
                   c 0   =   * ( p b + + ) ;  
  
                   / *   R e a d   x [ n - n u m T a p s - 6 ]   s a m p l e   * /  
                   x 5   =   * ( p x + + ) ;  
  
                   a c c 0   + =   p 0 ;  
                   a c c 1   + =   p 1 ;  
                   a c c 2   + =   p 2 ;  
                   a c c 3   + =   p 3 ;  
                   a c c 4   + =   p 4 ;  
                   a c c 5   + =   p 5 ;  
                   a c c 6   + =   p 6 ;  
                   a c c 7   + =   p 7 ;  
  
                   / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
                   p 0   =   x 6   *   c 0 ;  
                   p 1   =   x 7   *   c 0 ;  
                   p 2   =   x 0   *   c 0 ;  
                   p 3   =   x 1   *   c 0 ;  
                   p 4   =   x 2   *   c 0 ;  
                   p 5   =   x 3   *   c 0 ;  
                   p 6   =   x 4   *   c 0 ;  
                   p 7   =   x 5   *   c 0 ;  
  
                   / *   R e a d   t h e   b [ n u m T a p s - 4 ]   c o e f f i c i e n t   * /  
                   c 0   =   * ( p b + + ) ;  
  
                   / *   R e a d   x [ n - n u m T a p s - 6 ]   s a m p l e   * /  
                   x 6   =   * ( p x + + ) ;  
  
                   a c c 0   + =   p 0 ;  
                   a c c 1   + =   p 1 ;  
                   a c c 2   + =   p 2 ;  
                   a c c 3   + =   p 3 ;  
                   a c c 4   + =   p 4 ;  
                   a c c 5   + =   p 5 ;  
                   a c c 6   + =   p 6 ;  
                   a c c 7   + =   p 7 ;  
  
                   / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
                   p 0   =   x 7   *   c 0 ;  
                   p 1   =   x 0   *   c 0 ;  
                   p 2   =   x 1   *   c 0 ;  
                   p 3   =   x 2   *   c 0 ;  
                   p 4   =   x 3   *   c 0 ;  
                   p 5   =   x 4   *   c 0 ;  
                   p 6   =   x 5   *   c 0 ;  
                   p 7   =   x 6   *   c 0 ;  
  
                   t a p C n t - - ;  
  
                   a c c 0   + =   p 0 ;  
                   a c c 1   + =   p 1 ;  
                   a c c 2   + =   p 2 ;  
                   a c c 3   + =   p 3 ;  
                   a c c 4   + =   p 4 ;  
                   a c c 5   + =   p 5 ;  
                   a c c 6   + =   p 6 ;  
                   a c c 7   + =   p 7 ;  
             }  
  
             / *   I f   t h e   f i l t e r   l e n g t h   i s   n o t   a   m u l t i p l e   o f   8 ,   c o m p u t e   t h e   r e m a i n i n g   f i l t e r   t a p s   * /  
             t a p C n t   =   n u m T a p s   %   0 x 8 U ;  
  
             w h i l e   ( t a p C n t   >   0 U )  
             {  
                   / *   R e a d   c o e f f i c i e n t s   * /  
                   c 0   =   * ( p b + + ) ;  
  
                   / *   F e t c h   1   s t a t e   v a r i a b l e   * /  
                   x 7   =   * ( p x + + ) ;  
  
                   / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
                   p 0   =   x 0   *   c 0 ;  
                   p 1   =   x 1   *   c 0 ;  
                   p 2   =   x 2   *   c 0 ;  
                   p 3   =   x 3   *   c 0 ;  
                   p 4   =   x 4   *   c 0 ;  
                   p 5   =   x 5   *   c 0 ;  
                   p 6   =   x 6   *   c 0 ;  
                   p 7   =   x 7   *   c 0 ;  
  
                   / *   R e u s e   t h e   p r e s e n t   s a m p l e   s t a t e s   f o r   n e x t   s a m p l e   * /  
                   x 0   =   x 1 ;  
                   x 1   =   x 2 ;  
                   x 2   =   x 3 ;  
                   x 3   =   x 4 ;  
                   x 4   =   x 5 ;  
                   x 5   =   x 6 ;  
                   x 6   =   x 7 ;  
  
                   a c c 0   + =   p 0 ;  
                   a c c 1   + =   p 1 ;  
                   a c c 2   + =   p 2 ;  
                   a c c 3   + =   p 3 ;  
                   a c c 4   + =   p 4 ;  
                   a c c 5   + =   p 5 ;  
                   a c c 6   + =   p 6 ;  
                   a c c 7   + =   p 7 ;  
  
                   / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                   t a p C n t - - ;  
             }  
  
             / *   A d v a n c e   t h e   s t a t e   p o i n t e r   b y   8   t o   p r o c e s s   t h e   n e x t   g r o u p   o f   8   s a m p l e s   * /  
             p S t a t e   =   p S t a t e   +   8 ;  
  
             / *   T h e   r e s u l t s   i n   t h e   8   a c c u m u l a t o r s ,   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
             * p D s t + +   =   a c c 0 ;  
             * p D s t + +   =   a c c 1 ;  
             * p D s t + +   =   a c c 2 ;  
             * p D s t + +   =   a c c 3 ;  
             * p D s t + +   =   a c c 4 ;  
             * p D s t + +   =   a c c 5 ;  
             * p D s t + +   =   a c c 6 ;  
             * p D s t + +   =   a c c 7 ;  
  
             b l k C n t - - ;  
       }  
  
       / *   I f   t h e   b l o c k S i z e   i s   n o t   a   m u l t i p l e   o f   8 ,   c o m p u t e   a n y   r e m a i n i n g   o u t p u t   s a m p l e s   h e r e .  
       * *   N o   l o o p   u n r o l l i n g   i s   u s e d .   * /  
       b l k C n t   =   b l o c k S i z e   %   0 x 8 U ;  
  
       w h i l e   ( b l k C n t   >   0 U )  
       {  
             / *   C o p y   o n e   s a m p l e   a t   a   t i m e   i n t o   s t a t e   b u f f e r   * /  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
             / *   S e t   t h e   a c c u m u l a t o r   t o   z e r o   * /  
             a c c 0   =   0 . 0 f ;  
  
             / *   I n i t i a l i z e   s t a t e   p o i n t e r   * /  
             p x   =   p S t a t e ;  
  
             / *   I n i t i a l i z e   C o e f f i c i e n t   p o i n t e r   * /  
             p b   =   ( p C o e f f s ) ;  
  
             i   =   n u m T a p s ;  
  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
             d o  
             {  
                   a c c 0   + =   * p x + +   *   * p b + + ;  
                   i - - ;  
  
             }   w h i l e   ( i   >   0 U ) ;  
  
             / *   T h e   r e s u l t   i s   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
             * p D s t + +   =   a c c 0 ;  
  
             / *   A d v a n c e   s t a t e   p o i n t e r   b y   1   f o r   t h e   n e x t   s a m p l e   * /  
             p S t a t e   =   p S t a t e   +   1 ;  
  
             b l k C n t - - ;  
       }  
  
       / *   P r o c e s s i n g   i s   c o m p l e t e .  
       * *   N o w   c o p y   t h e   l a s t   n u m T a p s   -   1   s a m p l e s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r .  
       * *   T h i s   p r e p a r e s   t h e   s t a t e   b u f f e r   f o r   t h e   n e x t   f u n c t i o n   c a l l .   * /  
  
       / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r   * /  
       p S t a t e C u r n t   =   S - > p S t a t e ;  
  
       t a p C n t   =   ( n u m T a p s   -   1 U )   > >   2 U ;  
  
       / *   c o p y   d a t a   * /  
       w h i l e   ( t a p C n t   >   0 U )  
       {  
             * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
             * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
             * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
             * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
       }  
  
       / *   C a l c u l a t e   r e m a i n i n g   n u m b e r   o f   c o p i e s   * /  
       t a p C n t   =   ( n u m T a p s   -   1 U )   %   0 x 4 U ;  
  
       / *   C o p y   t h e   r e m a i n i n g   q 3 1 _ t   d a t a   * /  
       w h i l e   ( t a p C n t   >   0 U )  
       {  
             * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
       }  
 }  
  
 # e n d i f  
  
 / * *  
 *   @ }   e n d   o f   F I R   g r o u p  
 * /  