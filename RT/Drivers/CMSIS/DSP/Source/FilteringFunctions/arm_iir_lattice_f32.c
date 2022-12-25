�?/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ i i r _ l a t t i c e _ f 3 2 . c  
   *   D e s c r i p t i o n :     F l o a t i n g - p o i n t   I I R   L a t t i c e   f i l t e r   p r o c e s s i n g   f u n c t i o n  
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
   *   @ d e f g r o u p   I I R _ L a t t i c e   I n f i n i t e   I m p u l s e   R e s p o n s e   ( I I R )   L a t t i c e   F i l t e r s  
   *  
   *   T h i s   s e t   o f   f u n c t i o n s   i m p l e m e n t s   l a t t i c e   f i l t e r s  
   *   f o r   Q 1 5 ,   Q 3 1   a n d   f l o a t i n g - p o i n t   d a t a   t y p e s .     L a t t i c e   f i l t e r s   a r e   u s e d   i n   a  
   *   v a r i e t y   o f   a d a p t i v e   f i l t e r   a p p l i c a t i o n s .     T h e   f i l t e r   s t r u c t u r e   h a s   f e e d f o r w a r d   a n d  
   *   f e e d b a c k   c o m p o n e n t s   a n d   t h e   n e t   i m p u l s e   r e s p o n s e   i s   i n f i n i t e   l e n g t h .  
   *   T h e   f u n c t i o n s   o p e r a t e   o n   b l o c k s  
   *   o f   i n p u t   a n d   o u t p u t   d a t a   a n d   e a c h   c a l l   t o   t h e   f u n c t i o n   p r o c e s s e s  
   *   < c o d e > b l o c k S i z e < / c o d e >   s a m p l e s   t h r o u g h   t h e   f i l t e r .     < c o d e > p S r c < / c o d e >   a n d  
   *   < c o d e > p D s t < / c o d e >   p o i n t   t o   i n p u t   a n d   o u t p u t   a r r a y s   c o n t a i n i n g   < c o d e > b l o c k S i z e < / c o d e >   v a l u e s .  
  
   *   \ p a r   A l g o r i t h m :  
   *   \ i m a g e   h t m l   I I R L a t t i c e . g i f   " I n f i n i t e   I m p u l s e   R e s p o n s e   L a t t i c e   f i l t e r "  
   *   < p r e >  
   *         f N ( n )       =     x ( n )  
   *         f m - 1 ( n )   =   f m ( n )   -   k m   *   g m - 1 ( n - 1 )       f o r   m   =   N ,   N - 1 ,   . . . 1  
   *         g m ( n )       =   k m   *   f m - 1 ( n )   +   g m - 1 ( n - 1 )   f o r   m   =   N ,   N - 1 ,   . . . 1  
   *         y ( n )         =   v N   *   g N ( n )   +   v N - 1   *   g N - 1 ( n )   +   . . . +   v 0   *   g 0 ( n )  
   *   < / p r e >  
   *   \ p a r  
   *   < c o d e > p k C o e f f s < / c o d e >   p o i n t s   t o   a r r a y   o f   r e f l e c t i o n   c o e f f i c i e n t s   o f   s i z e   < c o d e > n u m S t a g e s < / c o d e > .  
   *   R e f l e c t i o n   c o e f f i c i e n t s   a r e   s t o r e d   i n   t i m e - r e v e r s e d   o r d e r .  
   *   \ p a r  
   *   < p r e >  
   *         { k N ,   k N - 1 ,   . . . . k 1 }  
   *   < / p r e >  
   *   < c o d e > p v C o e f f s < / c o d e >   p o i n t s   t o   t h e   a r r a y   o f   l a d d e r   c o e f f i c i e n t s   o f   s i z e   < c o d e > ( n u m S t a g e s + 1 ) < / c o d e > .  
   *   L a d d e r   c o e f f i c i e n t s   a r e   s t o r e d   i n   t i m e - r e v e r s e d   o r d e r .  
   *   \ p a r  
   *   < p r e >  
   *         { v N ,   v N - 1 ,   . . . v 0 }  
   *   < / p r e >  
   *   < c o d e > p S t a t e < / c o d e >   p o i n t s   t o   a   s t a t e   a r r a y   o f   s i z e   < c o d e > n u m S t a g e s   +   b l o c k S i z e < / c o d e > .  
   *   T h e   s t a t e   v a r i a b l e s   s h o w n   i n   t h e   f i g u r e   a b o v e   ( t h e   g   v a l u e s )   a r e   s t o r e d   i n   t h e   < c o d e > p S t a t e < / c o d e >   a r r a y .  
   *   T h e   s t a t e   v a r i a b l e s   a r e   u p d a t e d   a f t e r   e a c h   b l o c k   o f   d a t a   i s   p r o c e s s e d ;   t h e   c o e f f i c i e n t s   a r e   u n t o u c h e d .  
   *   \ p a r   I n s t a n c e   S t r u c t u r e  
   *   T h e   c o e f f i c i e n t s   a n d   s t a t e   v a r i a b l e s   f o r   a   f i l t e r   a r e   s t o r e d   t o g e t h e r   i n   a n   i n s t a n c e   d a t a   s t r u c t u r e .  
   *   A   s e p a r a t e   i n s t a n c e   s t r u c t u r e   m u s t   b e   d e f i n e d   f o r   e a c h   f i l t e r .  
   *   C o e f f i c i e n t   a r r a y s   m a y   b e   s h a r e d   a m o n g   s e v e r a l   i n s t a n c e s   w h i l e   s t a t e   v a r i a b l e   a r r a y s   c a n n o t   b e   s h a r e d .  
   *   T h e r e   a r e   s e p a r a t e   i n s t a n c e   s t r u c t u r e   d e c l a r a t i o n s   f o r   e a c h   o f   t h e   3   s u p p o r t e d   d a t a   t y p e s .  
     *  
   *   \ p a r   I n i t i a l i z a t i o n   F u n c t i o n s  
   *   T h e r e   i s   a l s o   a n   a s s o c i a t e d   i n i t i a l i z a t i o n   f u n c t i o n   f o r   e a c h   d a t a   t y p e .  
   *   T h e   i n i t i a l i z a t i o n   f u n c t i o n   p e r f o r m s   t h e   f o l l o w i n g   o p e r a t i o n s :  
   *   -   S e t s   t h e   v a l u e s   o f   t h e   i n t e r n a l   s t r u c t u r e   f i e l d s .  
   *   -   Z e r o s   o u t   t h e   v a l u e s   i n   t h e   s t a t e   b u f f e r .  
   *   T o   d o   t h i s   m a n u a l l y   w i t h o u t   c a l l i n g   t h e   i n i t   f u n c t i o n ,   a s s i g n   t h e   f o l l o w   s u b f i e l d s   o f   t h e   i n s t a n c e   s t r u c t u r e :  
   *   n u m S t a g e s ,   p k C o e f f s ,   p v C o e f f s ,   p S t a t e .   A l s o   s e t   a l l   o f   t h e   v a l u e s   i n   p S t a t e   t o   z e r o .  
   *  
   *   \ p a r  
   *   U s e   o f   t h e   i n i t i a l i z a t i o n   f u n c t i o n   i s   o p t i o n a l .  
   *   H o w e v e r ,   i f   t h e   i n i t i a l i z a t i o n   f u n c t i o n   i s   u s e d ,   t h e n   t h e   i n s t a n c e   s t r u c t u r e   c a n n o t   b e   p l a c e d   i n t o   a   c o n s t   d a t a   s e c t i o n .  
   *   T o   p l a c e   a n   i n s t a n c e   s t r u c t u r e   i n t o   a   c o n s t   d a t a   s e c t i o n ,   t h e   i n s t a n c e   s t r u c t u r e   m u s t   b e   m a n u a l l y   i n i t i a l i z e d .  
   *   S e t   t h e   v a l u e s   i n   t h e   s t a t e   b u f f e r   t o   z e r o s   a n d   t h e n   m a n u a l l y   i n i t i a l i z e   t h e   i n s t a n c e   s t r u c t u r e   a s   f o l l o w s :  
   *   < p r e >  
   * a r m _ i i r _ l a t t i c e _ i n s t a n c e _ f 3 2   S   =   { n u m S t a g e s ,   p S t a t e ,   p k C o e f f s ,   p v C o e f f s } ;  
   * a r m _ i i r _ l a t t i c e _ i n s t a n c e _ q 3 1   S   =   { n u m S t a g e s ,   p S t a t e ,   p k C o e f f s ,   p v C o e f f s } ;  
   * a r m _ i i r _ l a t t i c e _ i n s t a n c e _ q 1 5   S   =   { n u m S t a g e s ,   p S t a t e ,   p k C o e f f s ,   p v C o e f f s } ;  
   *   < / p r e >  
   *   \ p a r  
   *   w h e r e   < c o d e > n u m S t a g e s < / c o d e >   i s   t h e   n u m b e r   o f   s t a g e s   i n   t h e   f i l t e r ;   < c o d e > p S t a t e < / c o d e >   p o i n t s   t o   t h e   s t a t e   b u f f e r   a r r a y ;  
   *   < c o d e > p k C o e f f s < / c o d e >   p o i n t s   t o   a r r a y   o f   t h e   r e f l e c t i o n   c o e f f i c i e n t s ;   < c o d e > p v C o e f f s < / c o d e >   p o i n t s   t o   t h e   a r r a y   o f   l a d d e r   c o e f f i c i e n t s .  
   *   \ p a r   F i x e d - P o i n t   B e h a v i o r  
   *   C a r e   m u s t   b e   t a k e n   w h e n   u s i n g   t h e   f i x e d - p o i n t   v e r s i o n s   o f   t h e   I I R   l a t t i c e   f i l t e r   f u n c t i o n s .  
   *   I n   p a r t i c u l a r ,   t h e   o v e r f l o w   a n d   s a t u r a t i o n   b e h a v i o r   o f   t h e   a c c u m u l a t o r   u s e d   i n   e a c h   f u n c t i o n   m u s t   b e   c o n s i d e r e d .  
   *   R e f e r   t o   t h e   f u n c t i o n   s p e c i f i c   d o c u m e n t a t i o n   b e l o w   f o r   u s a g e   g u i d e l i n e s .  
   * /  
  
 / * *  
   *   @ a d d t o g r o u p   I I R _ L a t t i c e  
   *   @ {  
   * /  
  
 / * *  
   *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   I I R   l a t t i c e   f i l t e r .  
   *   @ p a r a m [ i n ]   * S   p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   I I R   l a t t i c e   s t r u c t u r e .  
   *   @ p a r a m [ i n ]   * p S r c   p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
   *   @ p a r a m [ o u t ]   * p D s t   p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
   *   @ p a r a m [ i n ]   b l o c k S i z e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
   *   @ r e t u r n   n o n e .  
   * /  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 3   * /  
  
 v o i d   a r m _ i i r _ l a t t i c e _ f 3 2 (  
     c o n s t   a r m _ i i r _ l a t t i c e _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     f l o a t 3 2 _ t   f n e x t 1 ,   g c u r r 1 ,   g n e x t ;                               / *   T e m p o r a r y   v a r i a b l e s   f o r   l a t t i c e   s t a g e s   * /  
     f l o a t 3 2 _ t   a c c ;                                                                   / *   A c c u m l a t o r   * /  
     u i n t 3 2 _ t   b l k C n t ,   t a p C n t ;                                               / *   t e m p o r a r y   v a r i a b l e s   f o r   c o u n t s   * /  
     f l o a t 3 2 _ t   * p x 1 ,   * p x 2 ,   * p k ,   * p v ;                                 / *   t e m p o r a r y   p o i n t e r s   f o r   s t a t e   a n d   c o e f   * /  
     u i n t 3 2 _ t   n u m S t a g e s   =   S - > n u m S t a g e s ;                           / *   n u m b e r   o f   s t a g e s   * /  
     f l o a t 3 2 _ t   * p S t a t e ;                                                           / *   S t a t e   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p S t a t e C u r n t ;                                                 / *   S t a t e   c u r r e n t   p o i n t e r   * /  
     f l o a t 3 2 _ t   k 1 ,   k 2 ;  
     f l o a t 3 2 _ t   v 1 ,   v 2 ,   v 3 ,   v 4 ;  
     f l o a t 3 2 _ t   g c u r r 2 ;  
     f l o a t 3 2 _ t   f n e x t 2 ;  
  
     / *   i n i t i a l i s e   l o o p   c o u n t   * /  
     b l k C n t   =   b l o c k S i z e ;  
  
     / *   i n i t i a l i s e   s t a t e   p o i n t e r   * /  
     p S t a t e   =   & S - > p S t a t e [ 0 ] ;  
  
     / *   S a m p l e   p r o c e s s i n g   * /  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   R e a d   S a m p l e   f r o m   i n p u t   b u f f e r   * /  
         / *   f N ( n )   =   x ( n )   * /  
         f n e x t 2   =   * p S r c + + ;  
  
         / *   I n i t i a l i z e   L a d d e r   c o e f f   p o i n t e r   * /  
         p v   =   & S - > p v C o e f f s [ 0 ] ;  
         / *   I n i t i a l i z e   R e f l e c t i o n   c o e f f   p o i n t e r   * /  
         p k   =   & S - > p k C o e f f s [ 0 ] ;  
  
         / *   I n i t i a l i z e   s t a t e   r e a d   p o i n t e r   * /  
         p x 1   =   p S t a t e ;  
         / *   I n i t i a l i z e   s t a t e   w r i t e   p o i n t e r   * /  
         p x 2   =   p S t a t e ;  
  
         / *   S e t   a c c u m u l a t o r   t o   z e r o   * /  
         a c c   =   0 . 0 ;  
  
         / *   L o o p   u n r o l l i n g .     P r o c e s s   4   t a p s   a t   a   t i m e .   * /  
         t a p C n t   =   ( n u m S t a g e s )   > >   2 ;  
  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
             / *   R e a d   g N - 1 ( n - 1 )   f r o m   s t a t e   b u f f e r   * /  
             g c u r r 1   =   * p x 1 ;  
  
             / *   r e a d   r e f l e c t i o n   c o e f f i c i e n t   k N   * /  
             k 1   =   * p k ;  
  
             / *   f N - 1 ( n )   =   f N ( n )   -   k N   *   g N - 1 ( n - 1 )   * /  
             f n e x t 1   =   f n e x t 2   -   ( k 1   *   g c u r r 1 ) ;  
  
             / *   r e a d   l a d d e r   c o e f f i c i e n t   v N   * /  
             v 1   =   * p v ;  
  
             / *   r e a d   n e x t   r e f l e c t i o n   c o e f f i c i e n t   k N - 1   * /  
             k 2   =   * ( p k   +   1 U ) ;  
  
             / *   R e a d   g N - 2 ( n - 1 )   f r o m   s t a t e   b u f f e r   * /  
             g c u r r 2   =   * ( p x 1   +   1 U ) ;  
  
             / *   r e a d   n e x t   l a d d e r   c o e f f i c i e n t   v N - 1   * /  
             v 2   =   * ( p v   +   1 U ) ;  
  
             / *   f N - 2 ( n )   =   f N - 1 ( n )   -   k N - 1   *   g N - 2 ( n - 1 )   * /  
             f n e x t 2   =   f n e x t 1   -   ( k 2   *   g c u r r 2 ) ;  
  
             / *   g N ( n )       =   k N   *   f N - 1 ( n )   +   g N - 1 ( n - 1 )   * /  
             g n e x t   =   g c u r r 1   +   ( k 1   *   f n e x t 1 ) ;  
  
             / *   r e a d   r e f l e c t i o n   c o e f f i c i e n t   k N - 2   * /  
             k 1   =   * ( p k   +   2 U ) ;  
  
             / *   w r i t e   g N ( n )   i n t o   s t a t e   f o r   n e x t   s a m p l e   p r o c e s s i n g   * /  
             * p x 2 + +   =   g n e x t ;  
  
             / *   R e a d   g N - 3 ( n - 1 )   f r o m   s t a t e   b u f f e r   * /  
             g c u r r 1   =   * ( p x 1   +   2 U ) ;  
  
             / *   y ( n )   + =   g N ( n )   *   v N     * /  
             a c c   + =   ( g n e x t   *   v 1 ) ;  
  
             / *   f N - 3 ( n )   =   f N - 2 ( n )   -   k N - 2   *   g N - 3 ( n - 1 )   * /  
             f n e x t 1   =   f n e x t 2   -   ( k 1   *   g c u r r 1 ) ;  
  
             / *   g N - 1 ( n )       =   k N - 1   *   f N - 2 ( n )   +   g N - 2 ( n - 1 )   * /  
             g n e x t   =   g c u r r 2   +   ( k 2   *   f n e x t 2 ) ;  
  
             / *   R e a d   g N - 4 ( n - 1 )   f r o m   s t a t e   b u f f e r   * /  
             g c u r r 2   =   * ( p x 1   +   3 U ) ;  
  
             / *   y ( n )   + =   g N - 1 ( n )   *   v N - 1     * /  
             a c c   + =   ( g n e x t   *   v 2 ) ;  
  
             / *   r e a d   r e f l e c t i o n   c o e f f i c i e n t   k N - 3   * /  
             k 2   =   * ( p k   +   3 U ) ;  
  
             / *   w r i t e   g N - 1 ( n )   i n t o   s t a t e   f o r   n e x t   s a m p l e   p r o c e s s i n g   * /  
             * p x 2 + +   =   g n e x t ;  
  
             / *   f N - 4 ( n )   =   f N - 3 ( n )   -   k N - 3   *   g N - 4 ( n - 1 )   * /  
             f n e x t 2   =   f n e x t 1   -   ( k 2   *   g c u r r 2 ) ;  
  
             / *   g N - 2 ( n )   =   k N - 2   *   f N - 3 ( n )   +   g N - 3 ( n - 1 )   * /  
             g n e x t   =   g c u r r 1   +   ( k 1   *   f n e x t 1 ) ;  
  
             / *   r e a d   l a d d e r   c o e f f i c i e n t   v N - 2   * /  
             v 3   =   * ( p v   +   2 U ) ;  
  
             / *   y ( n )   + =   g N - 2 ( n )   *   v N - 2     * /  
             a c c   + =   ( g n e x t   *   v 3 ) ;  
  
             / *   w r i t e   g N - 2 ( n )   i n t o   s t a t e   f o r   n e x t   s a m p l e   p r o c e s s i n g   * /  
             * p x 2 + +   =   g n e x t ;  
  
             / *   u p d a t e   p o i n t e r   * /  
             p k   + =   4 U ;  
  
             / *   g N - 3 ( n )   =   k N - 3   *   f N - 4 ( n )   +   g N - 4 ( n - 1 )   * /  
             g n e x t   =   ( f n e x t 2   *   k 2 )   +   g c u r r 2 ;  
  
             / *   r e a d   n e x t   l a d d e r   c o e f f i c i e n t   v N - 3   * /  
             v 4   =   * ( p v   +   3 U ) ;  
  
             / *   y ( n )   + =   g N - 4 ( n )   *   v N - 4     * /  
             a c c   + =   ( g n e x t   *   v 4 ) ;  
  
             / *   w r i t e   g N - 3 ( n )   i n t o   s t a t e   f o r   n e x t   s a m p l e   p r o c e s s i n g   * /  
             * p x 2 + +   =   g n e x t ;  
  
             / *   u p d a t e   p o i n t e r s   * /  
             p x 1   + =   4 U ;  
             p v   + =   4 U ;  
  
             t a p C n t - - ;  
  
         }  
  
         / *   I f   t h e   f i l t e r   l e n g t h   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   t h e   r e m a i n i n g   f i l t e r   t a p s   * /  
         t a p C n t   =   ( n u m S t a g e s )   %   0 x 4 U ;  
  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
             g c u r r 1   =   * p x 1 + + ;  
             / *   P r o c e s s   s a m p l e   f o r   l a s t   t a p s   * /  
             f n e x t 1   =   f n e x t 2   -   ( ( * p k )   *   g c u r r 1 ) ;  
             g n e x t   =   ( f n e x t 1   *   ( * p k + + ) )   +   g c u r r 1 ;  
             / *   O u t p u t   s a m p l e s   f o r   l a s t   t a p s   * /  
             a c c   + =   ( g n e x t   *   ( * p v + + ) ) ;  
             * p x 2 + +   =   g n e x t ;  
             f n e x t 2   =   f n e x t 1 ;  
  
             t a p C n t - - ;  
  
         }  
  
         / *   y ( n )   + =   g 0 ( n )   *   v 0   * /  
         a c c   + =   ( f n e x t 2   *   ( * p v ) ) ;  
  
         * p x 2 + +   =   f n e x t 2 ;  
  
         / *   w r i t e   o u t   i n t o   p D s t   * /  
         * p D s t + +   =   a c c ;  
  
         / *   A d v a n c e   t h e   s t a t e   p o i n t e r   b y   4   t o   p r o c e s s   t h e   n e x t   g r o u p   o f   4   s a m p l e s   * /  
         p S t a t e   =   p S t a t e   +   1 U ;  
  
         b l k C n t - - ;  
  
     }  
  
     / *   P r o c e s s i n g   i s   c o m p l e t e .   N o w   c o p y   l a s t   S - > n u m S t a g e s   s a m p l e s   t o   s t a r t   o f   t h e   b u f f e r  
           f o r   t h e   p r e p e r a t i o n   o f   n e x t   f r a m e   p r o c e s s   * /  
  
     / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r   * /  
     p S t a t e C u r n t   =   & S - > p S t a t e [ 0 ] ;  
     p S t a t e   =   & S - > p S t a t e [ b l o c k S i z e ] ;  
  
     t a p C n t   =   n u m S t a g e s   > >   2 U ;  
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
  
     }  
  
     / *   C a l c u l a t e   r e m a i n i n g   n u m b e r   o f   c o p i e s   * /  
     t a p C n t   =   ( n u m S t a g e s )   %   0 x 4 U ;  
  
     / *   C o p y   t h e   r e m a i n i n g   q 3 1 _ t   d a t a   * /  
     w h i l e   ( t a p C n t   >   0 U )  
     {  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         t a p C n t - - ;  
     }  
 }  
  
 # e l s e  
  
 v o i d   a r m _ i i r _ l a t t i c e _ f 3 2 (  
     c o n s t   a r m _ i i r _ l a t t i c e _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     f l o a t 3 2 _ t   f c u r r ,   f n e x t   =   0 ,   g c u r r ,   g n e x t ;             / *   T e m p o r a r y   v a r i a b l e s   f o r   l a t t i c e   s t a g e s   * /  
     f l o a t 3 2 _ t   a c c ;                                                                   / *   A c c u m l a t o r   * /  
     u i n t 3 2 _ t   b l k C n t ,   t a p C n t ;                                               / *   t e m p o r a r y   v a r i a b l e s   f o r   c o u n t s   * /  
     f l o a t 3 2 _ t   * p x 1 ,   * p x 2 ,   * p k ,   * p v ;                                 / *   t e m p o r a r y   p o i n t e r s   f o r   s t a t e   a n d   c o e f   * /  
     u i n t 3 2 _ t   n u m S t a g e s   =   S - > n u m S t a g e s ;                           / *   n u m b e r   o f   s t a g e s   * /  
     f l o a t 3 2 _ t   * p S t a t e ;                                                           / *   S t a t e   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p S t a t e C u r n t ;                                                 / *   S t a t e   c u r r e n t   p o i n t e r   * /  
  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 0   * /  
  
     b l k C n t   =   b l o c k S i z e ;  
  
     p S t a t e   =   & S - > p S t a t e [ 0 ] ;  
  
     / *   S a m p l e   p r o c e s s i n g   * /  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   R e a d   S a m p l e   f r o m   i n p u t   b u f f e r   * /  
         / *   f N ( n )   =   x ( n )   * /  
         f c u r r   =   * p S r c + + ;  
  
         / *   I n i t i a l i z e   s t a t e   r e a d   p o i n t e r   * /  
         p x 1   =   p S t a t e ;  
         / *   I n i t i a l i z e   s t a t e   w r i t e   p o i n t e r   * /  
         p x 2   =   p S t a t e ;  
         / *   S e t   a c c u m u l a t o r   t o   z e r o   * /  
         a c c   =   0 . 0 f ;  
         / *   I n i t i a l i z e   L a d d e r   c o e f f   p o i n t e r   * /  
         p v   =   & S - > p v C o e f f s [ 0 ] ;  
         / *   I n i t i a l i z e   R e f l e c t i o n   c o e f f   p o i n t e r   * /  
         p k   =   & S - > p k C o e f f s [ 0 ] ;  
  
  
         / *   P r o c e s s   s a m p l e   f o r   n u m S t a g e s   * /  
         t a p C n t   =   n u m S t a g e s ;  
  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
             g c u r r   =   * p x 1 + + ;  
             / *   P r o c e s s   s a m p l e   f o r   l a s t   t a p s   * /  
             f n e x t   =   f c u r r   -   ( ( * p k )   *   g c u r r ) ;  
             g n e x t   =   ( f n e x t   *   ( * p k + + ) )   +   g c u r r ;  
  
             / *   O u t p u t   s a m p l e s   f o r   l a s t   t a p s   * /  
             a c c   + =   ( g n e x t   *   ( * p v + + ) ) ;  
             * p x 2 + +   =   g n e x t ;  
             f c u r r   =   f n e x t ;  
  
             / *   D e c r e m e n t i n g   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
  
         }  
  
         / *   y ( n )   + =   g 0 ( n )   *   v 0   * /  
         a c c   + =   ( f n e x t   *   ( * p v ) ) ;  
  
         * p x 2 + +   =   f n e x t ;  
  
         / *   w r i t e   o u t   i n t o   p D s t   * /  
         * p D s t + +   =   a c c ;  
  
         / *   A d v a n c e   t h e   s t a t e   p o i n t e r   b y   1   t o   p r o c e s s   t h e   n e x t   g r o u p   o f   s a m p l e s   * /  
         p S t a t e   =   p S t a t e   +   1 U ;  
         b l k C n t - - ;  
  
     }  
  
     / *   P r o c e s s i n g   i s   c o m p l e t e .   N o w   c o p y   l a s t   S - > n u m S t a g e s   s a m p l e s   t o   s t a r t   o f   t h e   b u f f e r  
           f o r   t h e   p r e p e r a t i o n   o f   n e x t   f r a m e   p r o c e s s   * /  
  
     / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r   * /  
     p S t a t e C u r n t   =   & S - > p S t a t e [ 0 ] ;  
     p S t a t e   =   & S - > p S t a t e [ b l o c k S i z e ] ;  
  
     t a p C n t   =   n u m S t a g e s ;  
  
     / *   C o p y   t h e   d a t a   * /  
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
  
 / * *  
   *   @ }   e n d   o f   I I R _ L a t t i c e   g r o u p  
   * /  