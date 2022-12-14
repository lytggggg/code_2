??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ f i r _ l a t t i c e _ f 3 2 . c  
   *   D e s c r i p t i o n :     P r o c e s s i n g   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   F I R   L a t t i c e   f i l t e r  
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
   *   @ d e f g r o u p   F I R _ L a t t i c e   F i n i t e   I m p u l s e   R e s p o n s e   ( F I R )   L a t t i c e   F i l t e r s  
   *  
   *   T h i s   s e t   o f   f u n c t i o n s   i m p l e m e n t s   F i n i t e   I m p u l s e   R e s p o n s e   ( F I R )   l a t t i c e   f i l t e r s  
   *   f o r   Q 1 5 ,   Q 3 1   a n d   f l o a t i n g - p o i n t   d a t a   t y p e s .     L a t t i c e   f i l t e r s   a r e   u s e d   i n   a  
   *   v a r i e t y   o f   a d a p t i v e   f i l t e r   a p p l i c a t i o n s .     T h e   f i l t e r   s t r u c t u r e   i s   f e e d f o r w a r d   a n d  
   *   t h e   n e t   i m p u l s e   r e s p o n s e   i s   f i n i t e   l e n g t h .  
   *   T h e   f u n c t i o n s   o p e r a t e   o n   b l o c k s  
   *   o f   i n p u t   a n d   o u t p u t   d a t a   a n d   e a c h   c a l l   t o   t h e   f u n c t i o n   p r o c e s s e s  
   *   < c o d e > b l o c k S i z e < / c o d e >   s a m p l e s   t h r o u g h   t h e   f i l t e r .     < c o d e > p S r c < / c o d e >   a n d  
   *   < c o d e > p D s t < / c o d e >   p o i n t   t o   i n p u t   a n d   o u t p u t   a r r a y s   c o n t a i n i n g   < c o d e > b l o c k S i z e < / c o d e >   v a l u e s .  
   *  
   *   \ p a r   A l g o r i t h m :  
   *   \ i m a g e   h t m l   F I R L a t t i c e . g i f   " F i n i t e   I m p u l s e   R e s p o n s e   L a t t i c e   f i l t e r "  
   *   T h e   f o l l o w i n g   d i f f e r e n c e   e q u a t i o n   i s   i m p l e m e n t e d :  
   *   < p r e >  
   *         f 0 [ n ]   =   g 0 [ n ]   =   x [ n ]  
   *         f m [ n ]   =   f m - 1 [ n ]   +   k m   *   g m - 1 [ n - 1 ]   f o r   m   =   1 ,   2 ,   . . . M  
   *         g m [ n ]   =   k m   *   f m - 1 [ n ]   +   g m - 1 [ n - 1 ]   f o r   m   =   1 ,   2 ,   . . . M  
   *         y [ n ]   =   f M [ n ]  
   *   < / p r e >  
   *   \ p a r  
   *   < c o d e > p C o e f f s < / c o d e >   p o i n t s   t o   t h a   a r r a y   o f   r e f l e c t i o n   c o e f f i c i e n t s   o f   s i z e   < c o d e > n u m S t a g e s < / c o d e > .  
   *   R e f l e c t i o n   C o e f f i c i e n t s   a r e   s t o r e d   i n   t h e   f o l l o w i n g   o r d e r .  
   *   \ p a r  
   *   < p r e >  
   *         { k 1 ,   k 2 ,   . . . ,   k M }  
   *   < / p r e >  
   *   w h e r e   M   i s   n u m b e r   o f   s t a g e s  
   *   \ p a r  
   *   < c o d e > p S t a t e < / c o d e >   p o i n t s   t o   a   s t a t e   a r r a y   o f   s i z e   < c o d e > n u m S t a g e s < / c o d e > .  
   *   T h e   s t a t e   v a r i a b l e s   ( g   v a l u e s )   h o l d   p r e v i o u s   i n p u t s   a n d   a r e   s t o r e d   i n   t h e   f o l l o w i n g   o r d e r .  
   *   < p r e >  
   *         { g 0 [ n ] ,   g 1 [ n ] ,   g 2 [ n ]   . . . g M - 1 [ n ] }  
   *   < / p r e >  
   *   T h e   s t a t e   v a r i a b l e s   a r e   u p d a t e d   a f t e r   e a c h   b l o c k   o f   d a t a   i s   p r o c e s s e d ;   t h e   c o e f f i c i e n t s   a r e   u n t o u c h e d .  
   *   \ p a r   I n s t a n c e   S t r u c t u r e  
   *   T h e   c o e f f i c i e n t s   a n d   s t a t e   v a r i a b l e s   f o r   a   f i l t e r   a r e   s t o r e d   t o g e t h e r   i n   a n   i n s t a n c e   d a t a   s t r u c t u r e .  
   *   A   s e p a r a t e   i n s t a n c e   s t r u c t u r e   m u s t   b e   d e f i n e d   f o r   e a c h   f i l t e r .  
   *   C o e f f i c i e n t   a r r a y s   m a y   b e   s h a r e d   a m o n g   s e v e r a l   i n s t a n c e s   w h i l e   s t a t e   v a r i a b l e   a r r a y s   c a n n o t   b e   s h a r e d .  
   *   T h e r e   a r e   s e p a r a t e   i n s t a n c e   s t r u c t u r e   d e c l a r a t i o n s   f o r   e a c h   o f   t h e   3   s u p p o r t e d   d a t a   t y p e s .  
   *  
   *   \ p a r   I n i t i a l i z a t i o n   F u n c t i o n s  
   *   T h e r e   i s   a l s o   a n   a s s o c i a t e d   i n i t i a l i z a t i o n   f u n c t i o n   f o r   e a c h   d a t a   t y p e .  
   *   T h e   i n i t i a l i z a t i o n   f u n c t i o n   p e r f o r m s   t h e   f o l l o w i n g   o p e r a t i o n s :  
   *   -   S e t s   t h e   v a l u e s   o f   t h e   i n t e r n a l   s t r u c t u r e   f i e l d s .  
   *   -   Z e r o s   o u t   t h e   v a l u e s   i n   t h e   s t a t e   b u f f e r .  
   *   T o   d o   t h i s   m a n u a l l y   w i t h o u t   c a l l i n g   t h e   i n i t   f u n c t i o n ,   a s s i g n   t h e   f o l l o w   s u b f i e l d s   o f   t h e   i n s t a n c e   s t r u c t u r e :  
   *   n u m S t a g e s ,   p C o e f f s ,   p S t a t e .   A l s o   s e t   a l l   o f   t h e   v a l u e s   i n   p S t a t e   t o   z e r o .  
   *  
   *   \ p a r  
   *   U s e   o f   t h e   i n i t i a l i z a t i o n   f u n c t i o n   i s   o p t i o n a l .  
   *   H o w e v e r ,   i f   t h e   i n i t i a l i z a t i o n   f u n c t i o n   i s   u s e d ,   t h e n   t h e   i n s t a n c e   s t r u c t u r e   c a n n o t   b e   p l a c e d   i n t o   a   c o n s t   d a t a   s e c t i o n .  
   *   T o   p l a c e   a n   i n s t a n c e   s t r u c t u r e   i n t o   a   c o n s t   d a t a   s e c t i o n ,   t h e   i n s t a n c e   s t r u c t u r e   m u s t   b e   m a n u a l l y   i n i t i a l i z e d .  
   *   S e t   t h e   v a l u e s   i n   t h e   s t a t e   b u f f e r   t o   z e r o s   a n d   t h e n   m a n u a l l y   i n i t i a l i z e   t h e   i n s t a n c e   s t r u c t u r e   a s   f o l l o w s :  
   *   < p r e >  
   * a r m _ f i r _ l a t t i c e _ i n s t a n c e _ f 3 2   S   =   { n u m S t a g e s ,   p S t a t e ,   p C o e f f s } ;  
   * a r m _ f i r _ l a t t i c e _ i n s t a n c e _ q 3 1   S   =   { n u m S t a g e s ,   p S t a t e ,   p C o e f f s } ;  
   * a r m _ f i r _ l a t t i c e _ i n s t a n c e _ q 1 5   S   =   { n u m S t a g e s ,   p S t a t e ,   p C o e f f s } ;  
   *   < / p r e >  
   *   \ p a r  
   *   w h e r e   < c o d e > n u m S t a g e s < / c o d e >   i s   t h e   n u m b e r   o f   s t a g e s   i n   t h e   f i l t e r ;   < c o d e > p S t a t e < / c o d e >   i s   t h e   a d d r e s s   o f   t h e   s t a t e   b u f f e r ;  
   *   < c o d e > p C o e f f s < / c o d e >   i s   t h e   a d d r e s s   o f   t h e   c o e f f i c i e n t   b u f f e r .  
   *   \ p a r   F i x e d - P o i n t   B e h a v i o r  
   *   C a r e   m u s t   b e   t a k e n   w h e n   u s i n g   t h e   f i x e d - p o i n t   v e r s i o n s   o f   t h e   F I R   L a t t i c e   f i l t e r   f u n c t i o n s .  
   *   I n   p a r t i c u l a r ,   t h e   o v e r f l o w   a n d   s a t u r a t i o n   b e h a v i o r   o f   t h e   a c c u m u l a t o r   u s e d   i n   e a c h   f u n c t i o n   m u s t   b e   c o n s i d e r e d .  
   *   R e f e r   t o   t h e   f u n c t i o n   s p e c i f i c   d o c u m e n t a t i o n   b e l o w   f o r   u s a g e   g u i d e l i n e s .  
   * /  
  
 / * *  
   *   @ a d d t o g r o u p   F I R _ L a t t i c e  
   *   @ {  
   * /  
  
  
     / * *  
       *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   F I R   l a t t i c e   f i l t e r .  
       *   @ p a r a m [ i n ]     * S                 p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   F I R   l a t t i c e   s t r u c t u r e .  
       *   @ p a r a m [ i n ]     * p S r c           p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
       *   @ p a r a m [ o u t ]   * p D s t           p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a  
       *   @ p a r a m [ i n ]     b l o c k S i z e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
       *   @ r e t u r n   n o n e .  
       * /  
  
 v o i d   a r m _ f i r _ l a t t i c e _ f 3 2 (  
     c o n s t   a r m _ f i r _ l a t t i c e _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     f l o a t 3 2 _ t   * p S t a t e ;                                                           / *   S t a t e   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p C o e f f s   =   S - > p C o e f f s ;                               / *   C o e f f i c i e n t   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p x ;                                                                   / *   t e m p o r a r y   s t a t e   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p k ;                                                                   / *   t e m p o r a r y   c o e f f i c i e n t   p o i n t e r   * /  
  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 3   * /  
  
     f l o a t 3 2 _ t   f c u r r 1 ,   f n e x t 1 ,   g c u r r 1 ,   g n e x t 1 ;             / *   t e m p o r a r y   v a r i a b l e s   f o r   f i r s t   s a m p l e   i n   l o o p   u n r o l l i n g   * /  
     f l o a t 3 2 _ t   f c u r r 2 ,   f n e x t 2 ,   g n e x t 2 ;                             / *   t e m p o r a r y   v a r i a b l e s   f o r   s e c o n d   s a m p l e   i n   l o o p   u n r o l l i n g   * /  
     f l o a t 3 2 _ t   f c u r r 3 ,   f n e x t 3 ,   g n e x t 3 ;                             / *   t e m p o r a r y   v a r i a b l e s   f o r   t h i r d   s a m p l e   i n   l o o p   u n r o l l i n g   * /  
     f l o a t 3 2 _ t   f c u r r 4 ,   f n e x t 4 ,   g n e x t 4 ;                             / *   t e m p o r a r y   v a r i a b l e s   f o r   f o u r t h   s a m p l e   i n   l o o p   u n r o l l i n g   * /  
     u i n t 3 2 _ t   n u m S t a g e s   =   S - > n u m S t a g e s ;                           / *   N u m b e r   o f   s t a g e s   i n   t h e   f i l t e r   * /  
     u i n t 3 2 _ t   b l k C n t ,   s t a g e C n t ;                                           / *   t e m p o r a r y   v a r i a b l e s   f o r   c o u n t s   * /  
  
     g c u r r 1   =   0 . 0 f ;  
     p S t a t e   =   & S - > p S t a t e [ 0 ] ;  
  
     b l k C n t   =   b l o c k S i z e   > >   2 ;  
  
     / *   F i r s t   p a r t   o f   t h e   p r o c e s s i n g   w i t h   l o o p   u n r o l l i n g .     C o m p u t e   4   o u t p u t s   a t   a   t i m e .  
           a   s e c o n d   l o o p   b e l o w   c o m p u t e s   t h e   r e m a i n i n g   1   t o   3   s a m p l e s .   * /  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
  
         / *   R e a d   t w o   s a m p l e s   f r o m   i n p u t   b u f f e r   * /  
         / *   f 0 ( n )   =   x ( n )   * /  
         f c u r r 1   =   * p S r c + + ;  
         f c u r r 2   =   * p S r c + + ;  
  
         / *   I n i t i a l i z e   c o e f f   p o i n t e r   * /  
         p k   =   ( p C o e f f s ) ;  
  
         / *   I n i t i a l i z e   s t a t e   p o i n t e r   * /  
         p x   =   p S t a t e ;  
  
         / *   R e a d   g 0 ( n - 1 )   f r o m   s t a t e   * /  
         g c u r r 1   =   * p x ;  
  
         / *   P r o c e s s   f i r s t   s a m p l e   f o r   f i r s t   t a p   * /  
         / *   f 1 ( n )   =   f 0 ( n )   +     K 1   *   g 0 ( n - 1 )   * /  
         f n e x t 1   =   f c u r r 1   +   ( ( * p k )   *   g c u r r 1 ) ;  
         / *   g 1 ( n )   =   f 0 ( n )   *   K 1     +     g 0 ( n - 1 )   * /  
         g n e x t 1   =   ( f c u r r 1   *   ( * p k ) )   +   g c u r r 1 ;  
  
         / *   P r o c e s s   s e c o n d   s a m p l e   f o r   f i r s t   t a p   * /  
         / *   f o r   s a m p l e   2   p r o c e s s i n g   * /  
         f n e x t 2   =   f c u r r 2   +   ( ( * p k )   *   f c u r r 1 ) ;  
         g n e x t 2   =   ( f c u r r 2   *   ( * p k ) )   +   f c u r r 1 ;  
  
         / *   R e a d   n e x t   t w o   s a m p l e s   f r o m   i n p u t   b u f f e r   * /  
         / *   f 0 ( n + 2 )   =   x ( n + 2 )   * /  
         f c u r r 3   =   * p S r c + + ;  
         f c u r r 4   =   * p S r c + + ;  
  
         / *   C o p y   o n l y   l a s t   i n p u t   s a m p l e s   i n t o   t h e   s t a t e   b u f f e r  
               w h i c h   w i l l   b e   u s e d   f o r   n e x t   f o u r   s a m p l e s   p r o c e s s i n g   * /  
         * p x + +   =   f c u r r 4 ;  
  
         / *   P r o c e s s   t h i r d   s a m p l e   f o r   f i r s t   t a p   * /  
         f n e x t 3   =   f c u r r 3   +   ( ( * p k )   *   f c u r r 2 ) ;  
         g n e x t 3   =   ( f c u r r 3   *   ( * p k ) )   +   f c u r r 2 ;  
  
         / *   P r o c e s s   f o u r t h   s a m p l e   f o r   f i r s t   t a p   * /  
         f n e x t 4   =   f c u r r 4   +   ( ( * p k )   *   f c u r r 3 ) ;  
         g n e x t 4   =   ( f c u r r 4   *   ( * p k + + ) )   +   f c u r r 3 ;  
  
         / *   U p d a t e   o f   f   v a l u e s   f o r   n e x t   c o e f f i c i e n t   s e t   p r o c e s s i n g   * /  
         f c u r r 1   =   f n e x t 1 ;  
         f c u r r 2   =   f n e x t 2 ;  
         f c u r r 3   =   f n e x t 3 ;  
         f c u r r 4   =   f n e x t 4 ;  
  
         / *   L o o p   u n r o l l i n g .     P r o c e s s   4   t a p s   a t   a   t i m e   .   * /  
         s t a g e C n t   =   ( n u m S t a g e s   -   1 U )   > >   2 U ;  
  
         / *   L o o p   o v e r   t h e   n u m b e r   o f   t a p s .     U n r o l l   b y   a   f a c t o r   o f   4 .  
           * *   R e p e a t   u n t i l   w e ' v e   c o m p u t e d   n u m S t a g e s - 3   c o e f f i c i e n t s .   * /  
  
         / *   P r o c e s s   2 n d ,   3 r d ,   4 t h   a n d   5 t h   t a p s   . . .   h e r e   * /  
         w h i l e   ( s t a g e C n t   >   0 U )  
         {  
             / *   R e a d   g 1 ( n - 1 ) ,   g 3 ( n - 1 )   . . . .   f r o m   s t a t e   * /  
             g c u r r 1   =   * p x ;  
  
             / *   s a v e   g 1 ( n )   i n   s t a t e   b u f f e r   * /  
             * p x + +   =   g n e x t 4 ;  
  
             / *   P r o c e s s   f i r s t   s a m p l e   f o r   2 n d ,   6 t h   . .   t a p   * /  
             / *   S a m p l e   p r o c e s s i n g   f o r   K 2 ,   K 6 . . . .   * /  
             / *   f 2 ( n )   =   f 1 ( n )   +     K 2   *   g 1 ( n - 1 )   * /  
             f n e x t 1   =   f c u r r 1   +   ( ( * p k )   *   g c u r r 1 ) ;  
             / *   P r o c e s s   s e c o n d   s a m p l e   f o r   2 n d ,   6 t h   . .   t a p   * /  
             / *   f o r   s a m p l e   2   p r o c e s s i n g   * /  
             f n e x t 2   =   f c u r r 2   +   ( ( * p k )   *   g n e x t 1 ) ;  
             / *   P r o c e s s   t h i r d   s a m p l e   f o r   2 n d ,   6 t h   . .   t a p   * /  
             f n e x t 3   =   f c u r r 3   +   ( ( * p k )   *   g n e x t 2 ) ;  
             / *   P r o c e s s   f o u r t h   s a m p l e   f o r   2 n d ,   6 t h   . .   t a p   * /  
             f n e x t 4   =   f c u r r 4   +   ( ( * p k )   *   g n e x t 3 ) ;  
  
             / *   g 2 ( n )   =   f 1 ( n )   *   K 2     +     g 1 ( n - 1 )   * /  
             / *   C a l c u l a t i o n   o f   s t a t e   v a l u e s   f o r   n e x t   s t a g e   * /  
             g n e x t 4   =   ( f c u r r 4   *   ( * p k ) )   +   g n e x t 3 ;  
             g n e x t 3   =   ( f c u r r 3   *   ( * p k ) )   +   g n e x t 2 ;  
             g n e x t 2   =   ( f c u r r 2   *   ( * p k ) )   +   g n e x t 1 ;  
             g n e x t 1   =   ( f c u r r 1   *   ( * p k + + ) )   +   g c u r r 1 ;  
  
  
             / *   R e a d   g 2 ( n - 1 ) ,   g 4 ( n - 1 )   . . . .   f r o m   s t a t e   * /  
             g c u r r 1   =   * p x ;  
  
             / *   s a v e   g 2 ( n )   i n   s t a t e   b u f f e r   * /  
             * p x + +   =   g n e x t 4 ;  
  
             / *   S a m p l e   p r o c e s s i n g   f o r   K 3 ,   K 7 . . . .   * /  
             / *   P r o c e s s   f i r s t   s a m p l e   f o r   3 r d ,   7 t h   . .   t a p   * /  
             / *   f 3 ( n )   =   f 2 ( n )   +     K 3   *   g 2 ( n - 1 )   * /  
             f c u r r 1   =   f n e x t 1   +   ( ( * p k )   *   g c u r r 1 ) ;  
             / *   P r o c e s s   s e c o n d   s a m p l e   f o r   3 r d ,   7 t h   . .   t a p   * /  
             f c u r r 2   =   f n e x t 2   +   ( ( * p k )   *   g n e x t 1 ) ;  
             / *   P r o c e s s   t h i r d   s a m p l e   f o r   3 r d ,   7 t h   . .   t a p   * /  
             f c u r r 3   =   f n e x t 3   +   ( ( * p k )   *   g n e x t 2 ) ;  
             / *   P r o c e s s   f o u r t h   s a m p l e   f o r   3 r d ,   7 t h   . .   t a p   * /  
             f c u r r 4   =   f n e x t 4   +   ( ( * p k )   *   g n e x t 3 ) ;  
  
             / *   C a l c u l a t i o n   o f   s t a t e   v a l u e s   f o r   n e x t   s t a g e   * /  
             / *   g 3 ( n )   =   f 2 ( n )   *   K 3     +     g 2 ( n - 1 )   * /  
             g n e x t 4   =   ( f n e x t 4   *   ( * p k ) )   +   g n e x t 3 ;  
             g n e x t 3   =   ( f n e x t 3   *   ( * p k ) )   +   g n e x t 2 ;  
             g n e x t 2   =   ( f n e x t 2   *   ( * p k ) )   +   g n e x t 1 ;  
             g n e x t 1   =   ( f n e x t 1   *   ( * p k + + ) )   +   g c u r r 1 ;  
  
  
             / *   R e a d   g 1 ( n - 1 ) ,   g 3 ( n - 1 )   . . . .   f r o m   s t a t e   * /  
             g c u r r 1   =   * p x ;  
  
             / *   s a v e   g 3 ( n )   i n   s t a t e   b u f f e r   * /  
             * p x + +   =   g n e x t 4 ;  
  
             / *   S a m p l e   p r o c e s s i n g   f o r   K 4 ,   K 8 . . . .   * /  
             / *   P r o c e s s   f i r s t   s a m p l e   f o r   4 t h ,   8 t h   . .   t a p   * /  
             / *   f 4 ( n )   =   f 3 ( n )   +     K 4   *   g 3 ( n - 1 )   * /  
             f n e x t 1   =   f c u r r 1   +   ( ( * p k )   *   g c u r r 1 ) ;  
             / *   P r o c e s s   s e c o n d   s a m p l e   f o r   4 t h ,   8 t h   . .   t a p   * /  
             / *   f o r   s a m p l e   2   p r o c e s s i n g   * /  
             f n e x t 2   =   f c u r r 2   +   ( ( * p k )   *   g n e x t 1 ) ;  
             / *   P r o c e s s   t h i r d   s a m p l e   f o r   4 t h ,   8 t h   . .   t a p   * /  
             f n e x t 3   =   f c u r r 3   +   ( ( * p k )   *   g n e x t 2 ) ;  
             / *   P r o c e s s   f o u r t h   s a m p l e   f o r   4 t h ,   8 t h   . .   t a p   * /  
             f n e x t 4   =   f c u r r 4   +   ( ( * p k )   *   g n e x t 3 ) ;  
  
             / *   g 4 ( n )   =   f 3 ( n )   *   K 4     +     g 3 ( n - 1 )   * /  
             / *   C a l c u l a t i o n   o f   s t a t e   v a l u e s   f o r   n e x t   s t a g e   * /  
             g n e x t 4   =   ( f c u r r 4   *   ( * p k ) )   +   g n e x t 3 ;  
             g n e x t 3   =   ( f c u r r 3   *   ( * p k ) )   +   g n e x t 2 ;  
             g n e x t 2   =   ( f c u r r 2   *   ( * p k ) )   +   g n e x t 1 ;  
             g n e x t 1   =   ( f c u r r 1   *   ( * p k + + ) )   +   g c u r r 1 ;  
  
             / *   R e a d   g 2 ( n - 1 ) ,   g 4 ( n - 1 )   . . . .   f r o m   s t a t e   * /  
             g c u r r 1   =   * p x ;  
  
             / *   s a v e   g 4 ( n )   i n   s t a t e   b u f f e r   * /  
             * p x + +   =   g n e x t 4 ;  
  
             / *   S a m p l e   p r o c e s s i n g   f o r   K 5 ,   K 9 . . . .   * /  
             / *   P r o c e s s   f i r s t   s a m p l e   f o r   5 t h ,   9 t h   . .   t a p   * /  
             / *   f 5 ( n )   =   f 4 ( n )   +     K 5   *   g 4 ( n - 1 )   * /  
             f c u r r 1   =   f n e x t 1   +   ( ( * p k )   *   g c u r r 1 ) ;  
             / *   P r o c e s s   s e c o n d   s a m p l e   f o r   5 t h ,   9 t h   . .   t a p   * /  
             f c u r r 2   =   f n e x t 2   +   ( ( * p k )   *   g n e x t 1 ) ;  
             / *   P r o c e s s   t h i r d   s a m p l e   f o r   5 t h ,   9 t h   . .   t a p   * /  
             f c u r r 3   =   f n e x t 3   +   ( ( * p k )   *   g n e x t 2 ) ;  
             / *   P r o c e s s   f o u r t h   s a m p l e   f o r   5 t h ,   9 t h   . .   t a p   * /  
             f c u r r 4   =   f n e x t 4   +   ( ( * p k )   *   g n e x t 3 ) ;  
  
             / *   C a l c u l a t i o n   o f   s t a t e   v a l u e s   f o r   n e x t   s t a g e   * /  
             / *   g 5 ( n )   =   f 4 ( n )   *   K 5     +     g 4 ( n - 1 )   * /  
             g n e x t 4   =   ( f n e x t 4   *   ( * p k ) )   +   g n e x t 3 ;  
             g n e x t 3   =   ( f n e x t 3   *   ( * p k ) )   +   g n e x t 2 ;  
             g n e x t 2   =   ( f n e x t 2   *   ( * p k ) )   +   g n e x t 1 ;  
             g n e x t 1   =   ( f n e x t 1   *   ( * p k + + ) )   +   g c u r r 1 ;  
  
             s t a g e C n t - - ;  
         }  
  
         / *   I f   t h e   ( f i l t e r   l e n g t h   - 1 )   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   t h e   r e m a i n i n g   f i l t e r   t a p s   * /  
         s t a g e C n t   =   ( n u m S t a g e s   -   1 U )   %   0 x 4 U ;  
  
         w h i l e   ( s t a g e C n t   >   0 U )  
         {  
             g c u r r 1   =   * p x ;  
  
             / *   s a v e   g   v a l u e   i n   s t a t e   b u f f e r   * /  
             * p x + +   =   g n e x t 4 ;  
  
             / *   P r o c e s s   f o u r   s a m p l e s   f o r   l a s t   t h r e e   t a p s   h e r e   * /  
             f n e x t 1   =   f c u r r 1   +   ( ( * p k )   *   g c u r r 1 ) ;  
             f n e x t 2   =   f c u r r 2   +   ( ( * p k )   *   g n e x t 1 ) ;  
             f n e x t 3   =   f c u r r 3   +   ( ( * p k )   *   g n e x t 2 ) ;  
             f n e x t 4   =   f c u r r 4   +   ( ( * p k )   *   g n e x t 3 ) ;  
  
             / *   g 1 ( n )   =   f 0 ( n )   *   K 1     +     g 0 ( n - 1 )   * /  
             g n e x t 4   =   ( f c u r r 4   *   ( * p k ) )   +   g n e x t 3 ;  
             g n e x t 3   =   ( f c u r r 3   *   ( * p k ) )   +   g n e x t 2 ;  
             g n e x t 2   =   ( f c u r r 2   *   ( * p k ) )   +   g n e x t 1 ;  
             g n e x t 1   =   ( f c u r r 1   *   ( * p k + + ) )   +   g c u r r 1 ;  
  
             / *   U p d a t e   o f   f   v a l u e s   f o r   n e x t   c o e f f i c i e n t   s e t   p r o c e s s i n g   * /  
             f c u r r 1   =   f n e x t 1 ;  
             f c u r r 2   =   f n e x t 2 ;  
             f c u r r 3   =   f n e x t 3 ;  
             f c u r r 4   =   f n e x t 4 ;  
  
             s t a g e C n t - - ;  
  
         }  
  
         / *   T h e   r e s u l t s   i n   t h e   4   a c c u m u l a t o r s ,   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
         / *   y ( n )   =   f N ( n )   * /  
         * p D s t + +   =   f c u r r 1 ;  
         * p D s t + +   =   f c u r r 2 ;  
         * p D s t + +   =   f c u r r 3 ;  
         * p D s t + +   =   f c u r r 4 ;  
  
         b l k C n t - - ;  
     }  
  
     / *   I f   t h e   b l o c k S i z e   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   a n y   r e m a i n i n g   o u t p u t   s a m p l e s   h e r e .  
       * *   N o   l o o p   u n r o l l i n g   i s   u s e d .   * /  
     b l k C n t   =   b l o c k S i z e   %   0 x 4 U ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   f 0 ( n )   =   x ( n )   * /  
         f c u r r 1   =   * p S r c + + ;  
  
         / *   I n i t i a l i z e   c o e f f   p o i n t e r   * /  
         p k   =   ( p C o e f f s ) ;  
  
         / *   I n i t i a l i z e   s t a t e   p o i n t e r   * /  
         p x   =   p S t a t e ;  
  
         / *   r e a d   g 2 ( n )   f r o m   s t a t e   b u f f e r   * /  
         g c u r r 1   =   * p x ;  
  
         / *   f o r   s a m p l e   1   p r o c e s s i n g   * /  
         / *   f 1 ( n )   =   f 0 ( n )   +     K 1   *   g 0 ( n - 1 )   * /  
         f n e x t 1   =   f c u r r 1   +   ( ( * p k )   *   g c u r r 1 ) ;  
         / *   g 1 ( n )   =   f 0 ( n )   *   K 1     +     g 0 ( n - 1 )   * /  
         g n e x t 1   =   ( f c u r r 1   *   ( * p k + + ) )   +   g c u r r 1 ;  
  
         / *   s a v e   g 1 ( n )   i n   s t a t e   b u f f e r   * /  
         * p x + +   =   f c u r r 1 ;  
  
         / *   f 1 ( n )   i s   s a v e d   i n   f c u r r 1  
               f o r   n e x t   s t a g e   p r o c e s s i n g   * /  
         f c u r r 1   =   f n e x t 1 ;  
  
         s t a g e C n t   =   ( n u m S t a g e s   -   1 U ) ;  
  
         / *   s t a g e   l o o p   * /  
         w h i l e   ( s t a g e C n t   >   0 U )  
         {  
             / *   r e a d   g 2 ( n )   f r o m   s t a t e   b u f f e r   * /  
             g c u r r 1   =   * p x ;  
  
             / *   s a v e   g 1 ( n )   i n   s t a t e   b u f f e r   * /  
             * p x + +   =   g n e x t 1 ;  
  
             / *   S a m p l e   p r o c e s s i n g   f o r   K 2 ,   K 3 . . . .   * /  
             / *   f 2 ( n )   =   f 1 ( n )   +     K 2   *   g 1 ( n - 1 )   * /  
             f n e x t 1   =   f c u r r 1   +   ( ( * p k )   *   g c u r r 1 ) ;  
             / *   g 2 ( n )   =   f 1 ( n )   *   K 2     +     g 1 ( n - 1 )   * /  
             g n e x t 1   =   ( f c u r r 1   *   ( * p k + + ) )   +   g c u r r 1 ;  
  
             / *   f 1 ( n )   i s   s a v e d   i n   f c u r r 1  
                   f o r   n e x t   s t a g e   p r o c e s s i n g   * /  
             f c u r r 1   =   f n e x t 1 ;  
  
             s t a g e C n t - - ;  
  
         }  
  
         / *   y ( n )   =   f N ( n )   * /  
         * p D s t + +   =   f c u r r 1 ;  
  
         b l k C n t - - ;  
  
     }  
  
 # e l s e  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 0   * /  
  
     f l o a t 3 2 _ t   f c u r r ,   f n e x t ,   g c u r r ,   g n e x t ;                     / *   t e m p o r a r y   v a r i a b l e s   * /  
     u i n t 3 2 _ t   n u m S t a g e s   =   S - > n u m S t a g e s ;                           / *   L e n g t h   o f   t h e   f i l t e r   * /  
     u i n t 3 2 _ t   b l k C n t ,   s t a g e C n t ;                                           / *   t e m p o r a r y   v a r i a b l e s   f o r   c o u n t s   * /  
  
     p S t a t e   =   & S - > p S t a t e [ 0 ] ;  
  
     b l k C n t   =   b l o c k S i z e ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   f 0 ( n )   =   x ( n )   * /  
         f c u r r   =   * p S r c + + ;  
  
         / *   I n i t i a l i z e   c o e f f   p o i n t e r   * /  
         p k   =   p C o e f f s ;  
  
         / *   I n i t i a l i z e   s t a t e   p o i n t e r   * /  
         p x   =   p S t a t e ;  
  
         / *   r e a d   g 0 ( n - 1 )   f r o m   s t a t e   b u f f e r   * /  
         g c u r r   =   * p x ;  
  
         / *   f o r   s a m p l e   1   p r o c e s s i n g   * /  
         / *   f 1 ( n )   =   f 0 ( n )   +     K 1   *   g 0 ( n - 1 )   * /  
         f n e x t   =   f c u r r   +   ( ( * p k )   *   g c u r r ) ;  
         / *   g 1 ( n )   =   f 0 ( n )   *   K 1     +     g 0 ( n - 1 )   * /  
         g n e x t   =   ( f c u r r   *   ( * p k + + ) )   +   g c u r r ;  
  
         / *   s a v e   f 0 ( n )   i n   s t a t e   b u f f e r   * /  
         * p x + +   =   f c u r r ;  
  
         / *   f 1 ( n )   i s   s a v e d   i n   f c u r r  
               f o r   n e x t   s t a g e   p r o c e s s i n g   * /  
         f c u r r   =   f n e x t ;  
  
         s t a g e C n t   =   ( n u m S t a g e s   -   1 U ) ;  
  
         / *   s t a g e   l o o p   * /  
         w h i l e   ( s t a g e C n t   >   0 U )  
         {  
             / *   r e a d   g 2 ( n )   f r o m   s t a t e   b u f f e r   * /  
             g c u r r   =   * p x ;  
  
             / *   s a v e   g 1 ( n )   i n   s t a t e   b u f f e r   * /  
             * p x + +   =   g n e x t ;  
  
             / *   S a m p l e   p r o c e s s i n g   f o r   K 2 ,   K 3 . . . .   * /  
             / *   f 2 ( n )   =   f 1 ( n )   +     K 2   *   g 1 ( n - 1 )   * /  
             f n e x t   =   f c u r r   +   ( ( * p k )   *   g c u r r ) ;  
             / *   g 2 ( n )   =   f 1 ( n )   *   K 2     +     g 1 ( n - 1 )   * /  
             g n e x t   =   ( f c u r r   *   ( * p k + + ) )   +   g c u r r ;  
  
             / *   f 1 ( n )   i s   s a v e d   i n   f c u r r 1  
                   f o r   n e x t   s t a g e   p r o c e s s i n g   * /  
             f c u r r   =   f n e x t ;  
  
             s t a g e C n t - - ;  
  
         }  
  
         / *   y ( n )   =   f N ( n )   * /  
         * p D s t + +   =   f c u r r ;  
  
         b l k C n t - - ;  
  
     }  
  
 # e n d i f   / *       # i f   d e f i n e d   ( A R M _ M A T H _ D S P )   * /  
  
 }  
  
 / * *  
   *   @ }   e n d   o f   F I R _ L a t t i c e   g r o u p  
   * /  