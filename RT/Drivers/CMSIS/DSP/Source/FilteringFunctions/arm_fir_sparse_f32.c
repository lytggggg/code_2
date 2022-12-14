??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ f i r _ s p a r s e _ f 3 2 . c  
   *   D e s c r i p t i o n :     F l o a t i n g - p o i n t   s p a r s e   F I R   f i l t e r   p r o c e s s i n g   f u n c t i o n  
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
   *   @ d e f g r o u p   F I R _ S p a r s e   F i n i t e   I m p u l s e   R e s p o n s e   ( F I R )   S p a r s e   F i l t e r s  
   *  
   *   T h i s   g r o u p   o f   f u n c t i o n s   i m p l e m e n t s   s p a r s e   F I R   f i l t e r s .  
   *   S p a r s e   F I R   f i l t e r s   a r e   e q u i v a l e n t   t o   s t a n d a r d   F I R   f i l t e r s   e x c e p t   t h a t   m o s t   o f   t h e   c o e f f i c i e n t s   a r e   e q u a l   t o   z e r o .  
   *   S p a r s e   f i l t e r s   a r e   u s e d   f o r   s i m u l a t i n g   r e f l e c t i o n s   i n   c o m m u n i c a t i o n s   a n d   a u d i o   a p p l i c a t i o n s .  
   *  
   *   T h e r e   a r e   s e p a r a t e   f u n c t i o n s   f o r   Q 7 ,   Q 1 5 ,   Q 3 1 ,   a n d   f l o a t i n g - p o i n t   d a t a   t y p e s .  
   *   T h e   f u n c t i o n s   o p e r a t e   o n   b l o c k s     o f   i n p u t   a n d   o u t p u t   d a t a   a n d   e a c h   c a l l   t o   t h e   f u n c t i o n   p r o c e s s e s  
   *   < c o d e > b l o c k S i z e < / c o d e >   s a m p l e s   t h r o u g h   t h e   f i l t e r .     < c o d e > p S r c < / c o d e >   a n d  
   *   < c o d e > p D s t < / c o d e >   p o i n t s   t o   i n p u t   a n d   o u t p u t   a r r a y s   r e s p e c t i v e l y   c o n t a i n i n g   < c o d e > b l o c k S i z e < / c o d e >   v a l u e s .  
   *  
   *   \ p a r   A l g o r i t h m :  
   *   T h e   s p a r s e   f i l t e r   i n s t a n t   s t r u c t u r e   c o n t a i n s   a n   a r r a y   o f   t a p   i n d i c e s   < c o d e > p T a p D e l a y < / c o d e >   w h i c h   s p e c i f i e s   t h e   l o c a t i o n s   o f   t h e   n o n - z e r o   c o e f f i c i e n t s .  
   *   T h i s   i s   i n   a d d i t i o n   t o   t h e   c o e f f i c i e n t   a r r a y   < c o d e > b < / c o d e > .  
   *   T h e   i m p l e m e n t a t i o n   e s s e n t i a l l y   s k i p s   t h e   m u l t i p l i c a t i o n s   b y   z e r o   a n d   l e a d s   t o   a n   e f f i c i e n t   r e a l i z a t i o n .  
   *   < p r e >  
   *           y [ n ]   =   b [ 0 ]   *   x [ n - p T a p D e l a y [ 0 ] ]   +   b [ 1 ]   *   x [ n - p T a p D e l a y [ 1 ] ]   +   b [ 2 ]   *   x [ n - p T a p D e l a y [ 2 ] ]   +   . . . +   b [ n u m T a p s - 1 ]   *   x [ n - p T a p D e l a y [ n u m T a p s - 1 ] ]  
   *   < / p r e >  
   *   \ p a r  
   *   \ i m a g e   h t m l   F I R S p a r s e . g i f   " S p a r s e   F I R   f i l t e r .     b [ n ]   r e p r e s e n t s   t h e   f i l t e r   c o e f f i c i e n t s "  
   *   \ p a r  
   *   < c o d e > p C o e f f s < / c o d e >   p o i n t s   t o   a   c o e f f i c i e n t   a r r a y   o f   s i z e   < c o d e > n u m T a p s < / c o d e > ;  
   *   < c o d e > p T a p D e l a y < / c o d e >   p o i n t s   t o   a n   a r r a y   o f   n o n z e r o   i n d i c e s   a n d   i s   a l s o   o f   s i z e   < c o d e > n u m T a p s < / c o d e > ;  
   *   < c o d e > p S t a t e < / c o d e >   p o i n t s   t o   a   s t a t e   a r r a y   o f   s i z e   < c o d e > m a x D e l a y   +   b l o c k S i z e < / c o d e > ,   w h e r e  
   *   < c o d e > m a x D e l a y < / c o d e >   i s   t h e   l a r g e s t   o f f s e t   v a l u e   t h a t   i s   e v e r   u s e d   i n   t h e   < c o d e > p T a p D e l a y < / c o d e >   a r r a y .  
   *   S o m e   o f   t h e   p r o c e s s i n g   f u n c t i o n s   a l s o   r e q u i r e   t e m p o r a r y   w o r k i n g   b u f f e r s .  
   *  
   *   \ p a r   I n s t a n c e   S t r u c t u r e  
   *   T h e   c o e f f i c i e n t s   a n d   s t a t e   v a r i a b l e s   f o r   a   f i l t e r   a r e   s t o r e d   t o g e t h e r   i n   a n   i n s t a n c e   d a t a   s t r u c t u r e .  
   *   A   s e p a r a t e   i n s t a n c e   s t r u c t u r e   m u s t   b e   d e f i n e d   f o r   e a c h   f i l t e r .  
   *   C o e f f i c i e n t   a n d   o f f s e t   a r r a y s   m a y   b e   s h a r e d   a m o n g   s e v e r a l   i n s t a n c e s   w h i l e   s t a t e   v a r i a b l e   a r r a y s   c a n n o t   b e   s h a r e d .  
   *   T h e r e   a r e   s e p a r a t e   i n s t a n c e   s t r u c t u r e   d e c l a r a t i o n s   f o r   e a c h   o f   t h e   4   s u p p o r t e d   d a t a   t y p e s .  
   *  
   *   \ p a r   I n i t i a l i z a t i o n   F u n c t i o n s  
   *   T h e r e   i s   a l s o   a n   a s s o c i a t e d   i n i t i a l i z a t i o n   f u n c t i o n   f o r   e a c h   d a t a   t y p e .  
   *   T h e   i n i t i a l i z a t i o n   f u n c t i o n   p e r f o r m s   t h e   f o l l o w i n g   o p e r a t i o n s :  
   *   -   S e t s   t h e   v a l u e s   o f   t h e   i n t e r n a l   s t r u c t u r e   f i e l d s .  
   *   -   Z e r o s   o u t   t h e   v a l u e s   i n   t h e   s t a t e   b u f f e r .  
   *   T o   d o   t h i s   m a n u a l l y   w i t h o u t   c a l l i n g   t h e   i n i t   f u n c t i o n ,   a s s i g n   t h e   f o l l o w   s u b f i e l d s   o f   t h e   i n s t a n c e   s t r u c t u r e :  
   *   n u m T a p s ,   p C o e f f s ,   p T a p D e l a y ,   m a x D e l a y ,   s t a t e I n d e x ,   p S t a t e .   A l s o   s e t   a l l   o f   t h e   v a l u e s   i n   p S t a t e   t o   z e r o .  
   *  
   *   \ p a r  
   *   U s e   o f   t h e   i n i t i a l i z a t i o n   f u n c t i o n   i s   o p t i o n a l .  
   *   H o w e v e r ,   i f   t h e   i n i t i a l i z a t i o n   f u n c t i o n   i s   u s e d ,   t h e n   t h e   i n s t a n c e   s t r u c t u r e   c a n n o t   b e   p l a c e d   i n t o   a   c o n s t   d a t a   s e c t i o n .  
   *   T o   p l a c e   a n   i n s t a n c e   s t r u c t u r e   i n t o   a   c o n s t   d a t a   s e c t i o n ,   t h e   i n s t a n c e   s t r u c t u r e   m u s t   b e   m a n u a l l y   i n i t i a l i z e d .  
   *   S e t   t h e   v a l u e s   i n   t h e   s t a t e   b u f f e r   t o   z e r o s   b e f o r e   s t a t i c   i n i t i a l i z a t i o n .  
   *   T h e   c o d e   b e l o w   s t a t i c a l l y   i n i t i a l i z e s   e a c h   o f   t h e   4   d i f f e r e n t   d a t a   t y p e   f i l t e r   i n s t a n c e   s t r u c t u r e s  
   *   < p r e >  
   * a r m _ f i r _ s p a r s e _ i n s t a n c e _ f 3 2   S   =   { n u m T a p s ,   0 ,   p S t a t e ,   p C o e f f s ,   m a x D e l a y ,   p T a p D e l a y } ;  
   * a r m _ f i r _ s p a r s e _ i n s t a n c e _ q 3 1   S   =   { n u m T a p s ,   0 ,   p S t a t e ,   p C o e f f s ,   m a x D e l a y ,   p T a p D e l a y } ;  
   * a r m _ f i r _ s p a r s e _ i n s t a n c e _ q 1 5   S   =   { n u m T a p s ,   0 ,   p S t a t e ,   p C o e f f s ,   m a x D e l a y ,   p T a p D e l a y } ;  
   * a r m _ f i r _ s p a r s e _ i n s t a n c e _ q 7   S   =     { n u m T a p s ,   0 ,   p S t a t e ,   p C o e f f s ,   m a x D e l a y ,   p T a p D e l a y } ;  
   *   < / p r e >  
   *   \ p a r  
   *  
   *   \ p a r   F i x e d - P o i n t   B e h a v i o r  
   *   C a r e   m u s t   b e   t a k e n   w h e n   u s i n g   t h e   f i x e d - p o i n t   v e r s i o n s   o f   t h e   s p a r s e   F I R   f i l t e r   f u n c t i o n s .  
   *   I n   p a r t i c u l a r ,   t h e   o v e r f l o w   a n d   s a t u r a t i o n   b e h a v i o r   o f   t h e   a c c u m u l a t o r   u s e d   i n   e a c h   f u n c t i o n   m u s t   b e   c o n s i d e r e d .  
   *   R e f e r   t o   t h e   f u n c t i o n   s p e c i f i c   d o c u m e n t a t i o n   b e l o w   f o r   u s a g e   g u i d e l i n e s .  
   * /  
  
 / * *  
   *   @ a d d t o g r o u p   F I R _ S p a r s e  
   *   @ {  
   * /  
  
 / * *  
   *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   s p a r s e   F I R   f i l t e r .  
   *   @ p a r a m [ i n ]     * S                     p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   s p a r s e   F I R   s t r u c t u r e .  
   *   @ p a r a m [ i n ]     * p S r c               p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
   *   @ p a r a m [ o u t ]   * p D s t               p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a  
   *   @ p a r a m [ i n ]     * p S c r a t c h I n   p o i n t s   t o   a   t e m p o r a r y   b u f f e r   o f   s i z e   b l o c k S i z e .  
   *   @ p a r a m [ i n ]     b l o c k S i z e       n u m b e r   o f   i n p u t   s a m p l e s   t o   p r o c e s s   p e r   c a l l .  
   *   @ r e t u r n   n o n e .  
   * /  
  
 v o i d   a r m _ f i r _ s p a r s e _ f 3 2 (  
     a r m _ f i r _ s p a r s e _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     f l o a t 3 2 _ t   *   p S c r a t c h I n ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
  
     f l o a t 3 2 _ t   * p S t a t e   =   S - > p S t a t e ;                                   / *   S t a t e   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p C o e f f s   =   S - > p C o e f f s ;                               / *   C o e f f i c i e n t   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p x ;                                                                   / *   S c r a t c h   b u f f e r   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p y   =   p S t a t e ;                                                 / *   T e m p o r a r y   p o i n t e r s   f o r   s t a t e   b u f f e r   * /  
     f l o a t 3 2 _ t   * p b   =   p S c r a t c h I n ;                                         / *   T e m p o r a r y   p o i n t e r s   f o r   s c r a t c h   b u f f e r   * /  
     f l o a t 3 2 _ t   * p O u t ;                                                               / *   D e s t i n a t i o n   p o i n t e r   * /  
     i n t 3 2 _ t   * p T a p D e l a y   =   S - > p T a p D e l a y ;                           / *   P o i n t e r   t o   t h e   a r r a y   c o n t a i n i n g   o f f s e t   o f   t h e   n o n - z e r o   t a p   v a l u e s .   * /  
     u i n t 3 2 _ t   d e l a y S i z e   =   S - > m a x D e l a y   +   b l o c k S i z e ;     / *   s t a t e   l e n g t h   * /  
     u i n t 1 6 _ t   n u m T a p s   =   S - > n u m T a p s ;                                   / *   N u m b e r   o f   f i l t e r   c o e f f i c i e n t s   i n   t h e   f i l t e r     * /  
     i n t 3 2 _ t   r e a d I n d e x ;                                                           / *   R e a d   i n d e x   o f   t h e   s t a t e   b u f f e r   * /  
     u i n t 3 2 _ t   t a p C n t ,   b l k C n t ;                                               / *   l o o p   c o u n t e r s   * /  
     f l o a t 3 2 _ t   c o e f f   =   * p C o e f f s + + ;                                     / *   R e a d   t h e   f i r s t   c o e f f i c i e n t   v a l u e   * /  
  
  
  
     / *   B l o c k S i z e   o f   I n p u t   s a m p l e s   a r e   c o p i e d   i n t o   t h e   s t a t e   b u f f e r   * /  
     / *   S t a t e I n d e x   p o i n t s   t o   t h e   s t a r t i n g   p o s i t i o n   t o   w r i t e   i n   t h e   s t a t e   b u f f e r   * /  
     a r m _ c i r c u l a r W r i t e _ f 3 2 ( ( i n t 3 2 _ t   * )   p y ,   d e l a y S i z e ,   & S - > s t a t e I n d e x ,   1 ,  
                                                 ( i n t 3 2 _ t   * )   p S r c ,   1 ,   b l o c k S i z e ) ;  
  
  
     / *   R e a d   I n d e x ,   f r o m   w h e r e   t h e   s t a t e   b u f f e r   s h o u l d   b e   r e a d ,   i s   c a l c u l a t e d .   * /  
     r e a d I n d e x   =   ( ( i n t 3 2 _ t )   S - > s t a t e I n d e x   -   ( i n t 3 2 _ t )   b l o c k S i z e )   -   * p T a p D e l a y + + ;  
  
     / *   W r a p a r o u n d   o f   r e a d I n d e x   * /  
     i f   ( r e a d I n d e x   <   0 )  
     {  
         r e a d I n d e x   + =   ( i n t 3 2 _ t )   d e l a y S i z e ;  
     }  
  
     / *   W o r k i n g   p o i n t e r   f o r   s t a t e   b u f f e r   i s   u p d a t e d   * /  
     p y   =   p S t a t e ;  
  
     / *   b l o c k S i z e   s a m p l e s   a r e   r e a d   f r o m   t h e   s t a t e   b u f f e r   * /  
     a r m _ c i r c u l a r R e a d _ f 3 2 ( ( i n t 3 2 _ t   * )   p y ,   d e l a y S i z e ,   & r e a d I n d e x ,   1 ,  
                                               ( i n t 3 2 _ t   * )   p b ,   ( i n t 3 2 _ t   * )   p b ,   b l o c k S i z e ,   1 ,  
                                               b l o c k S i z e ) ;  
  
     / *   W o r k i n g   p o i n t e r   f o r   t h e   s c r a t c h   b u f f e r   * /  
     p x   =   p b ;  
  
     / *   W o r k i n g   p o i n t e r   f o r   d e s t i n a t i o n   b u f f e r   * /  
     p O u t   =   p D s t ;  
  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 3   * /  
  
     / *   L o o p   o v e r   t h e   b l o c k S i z e .   U n r o l l   b y   a   f a c t o r   o f   4 .  
       *   C o m p u t e   4   M u l t i p l i c a t i o n s   a t   a   t i m e .   * /  
     b l k C n t   =   b l o c k S i z e   > >   2 U ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   P e r f o r m   M u l t i p l i c a t i o n s   a n d   s t o r e   i n   d e s t i n a t i o n   b u f f e r   * /  
         * p O u t + +   =   * p x + +   *   c o e f f ;  
         * p O u t + +   =   * p x + +   *   c o e f f ;  
         * p O u t + +   =   * p x + +   *   c o e f f ;  
         * p O u t + +   =   * p x + +   *   c o e f f ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   I f   t h e   b l o c k S i z e   i s   n o t   a   m u l t i p l e   o f   4 ,  
       *   c o m p u t e   t h e   r e m a i n i n g   s a m p l e s   * /  
     b l k C n t   =   b l o c k S i z e   %   0 x 4 U ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   P e r f o r m   M u l t i p l i c a t i o n s   a n d   s t o r e   i n   d e s t i n a t i o n   b u f f e r   * /  
         * p O u t + +   =   * p x + +   *   c o e f f ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   L o a d   t h e   c o e f f i c i e n t   v a l u e   a n d  
       *   i n c r e m e n t   t h e   c o e f f i c i e n t   b u f f e r   f o r   t h e   n e x t   s e t   o f   s t a t e   v a l u e s   * /  
     c o e f f   =   * p C o e f f s + + ;  
  
     / *   R e a d   I n d e x ,   f r o m   w h e r e   t h e   s t a t e   b u f f e r   s h o u l d   b e   r e a d ,   i s   c a l c u l a t e d .   * /  
     r e a d I n d e x   =   ( ( i n t 3 2 _ t )   S - > s t a t e I n d e x   -   ( i n t 3 2 _ t )   b l o c k S i z e )   -   * p T a p D e l a y + + ;  
  
     / *   W r a p a r o u n d   o f   r e a d I n d e x   * /  
     i f   ( r e a d I n d e x   <   0 )  
     {  
         r e a d I n d e x   + =   ( i n t 3 2 _ t )   d e l a y S i z e ;  
     }  
  
     / *   L o o p   o v e r   t h e   n u m b e r   o f   t a p s .   * /  
     t a p C n t   =   ( u i n t 3 2 _ t )   n u m T a p s   -   2 U ;  
  
     w h i l e   ( t a p C n t   >   0 U )  
     {  
  
         / *   W o r k i n g   p o i n t e r   f o r   s t a t e   b u f f e r   i s   u p d a t e d   * /  
         p y   =   p S t a t e ;  
  
         / *   b l o c k S i z e   s a m p l e s   a r e   r e a d   f r o m   t h e   s t a t e   b u f f e r   * /  
         a r m _ c i r c u l a r R e a d _ f 3 2 ( ( i n t 3 2 _ t   * )   p y ,   d e l a y S i z e ,   & r e a d I n d e x ,   1 ,  
                                                   ( i n t 3 2 _ t   * )   p b ,   ( i n t 3 2 _ t   * )   p b ,   b l o c k S i z e ,   1 ,  
                                                   b l o c k S i z e ) ;  
  
         / *   W o r k i n g   p o i n t e r   f o r   t h e   s c r a t c h   b u f f e r   * /  
         p x   =   p b ;  
  
         / *   W o r k i n g   p o i n t e r   f o r   d e s t i n a t i o n   b u f f e r   * /  
         p O u t   =   p D s t ;  
  
         / *   L o o p   o v e r   t h e   b l o c k S i z e .   U n r o l l   b y   a   f a c t o r   o f   4 .  
           *   C o m p u t e   4   M A C S   a t   a   t i m e .   * /  
         b l k C n t   =   b l o c k S i z e   > >   2 U ;  
  
         w h i l e   ( b l k C n t   >   0 U )  
         {  
             / *   P e r f o r m   M u l t i p l y - A c c u m u l a t e   * /  
             * p O u t + +   + =   * p x + +   *   c o e f f ;  
             * p O u t + +   + =   * p x + +   *   c o e f f ;  
             * p O u t + +   + =   * p x + +   *   c o e f f ;  
             * p O u t + +   + =   * p x + +   *   c o e f f ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             b l k C n t - - ;  
         }  
  
         / *   I f   t h e   b l o c k S i z e   i s   n o t   a   m u l t i p l e   o f   4 ,  
           *   c o m p u t e   t h e   r e m a i n i n g   s a m p l e s   * /  
         b l k C n t   =   b l o c k S i z e   %   0 x 4 U ;  
  
         w h i l e   ( b l k C n t   >   0 U )  
         {  
             / *   P e r f o r m   M u l t i p l y - A c c u m u l a t e   * /  
             * p O u t + +   + =   * p x + +   *   c o e f f ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             b l k C n t - - ;  
         }  
  
         / *   L o a d   t h e   c o e f f i c i e n t   v a l u e   a n d  
           *   i n c r e m e n t   t h e   c o e f f i c i e n t   b u f f e r   f o r   t h e   n e x t   s e t   o f   s t a t e   v a l u e s   * /  
         c o e f f   =   * p C o e f f s + + ;  
  
         / *   R e a d   I n d e x ,   f r o m   w h e r e   t h e   s t a t e   b u f f e r   s h o u l d   b e   r e a d ,   i s   c a l c u l a t e d .   * /  
         r e a d I n d e x   =   ( ( i n t 3 2 _ t )   S - > s t a t e I n d e x   -  
                                   ( i n t 3 2 _ t )   b l o c k S i z e )   -   * p T a p D e l a y + + ;  
  
         / *   W r a p a r o u n d   o f   r e a d I n d e x   * /  
         i f   ( r e a d I n d e x   <   0 )  
         {  
             r e a d I n d e x   + =   ( i n t 3 2 _ t )   d e l a y S i z e ;  
         }  
  
         / *   D e c r e m e n t   t h e   t a p   l o o p   c o u n t e r   * /  
         t a p C n t - - ;  
     }  
  
 	 / *   C o m p u t e   l a s t   t a p   w i t h o u t   t h e   f i n a l   r e a d   o f   p T a p D e l a y   * /  
  
 	 / *   W o r k i n g   p o i n t e r   f o r   s t a t e   b u f f e r   i s   u p d a t e d   * /  
 	 p y   =   p S t a t e ;  
  
 	 / *   b l o c k S i z e   s a m p l e s   a r e   r e a d   f r o m   t h e   s t a t e   b u f f e r   * /  
 	 a r m _ c i r c u l a r R e a d _ f 3 2 ( ( i n t 3 2 _ t   * )   p y ,   d e l a y S i z e ,   & r e a d I n d e x ,   1 ,  
 	 	 	 	 	 	 	 	 	 	 	   ( i n t 3 2 _ t   * )   p b ,   ( i n t 3 2 _ t   * )   p b ,   b l o c k S i z e ,   1 ,  
 	 	 	 	 	 	 	 	 	 	 	   b l o c k S i z e ) ;  
  
 	 / *   W o r k i n g   p o i n t e r   f o r   t h e   s c r a t c h   b u f f e r   * /  
 	 p x   =   p b ;  
  
 	 / *   W o r k i n g   p o i n t e r   f o r   d e s t i n a t i o n   b u f f e r   * /  
 	 p O u t   =   p D s t ;  
  
 	 / *   L o o p   o v e r   t h e   b l o c k S i z e .   U n r o l l   b y   a   f a c t o r   o f   4 .  
 	   *   C o m p u t e   4   M A C S   a t   a   t i m e .   * /  
 	 b l k C n t   =   b l o c k S i z e   > >   2 U ;  
  
 	 w h i l e   ( b l k C n t   >   0 U )  
 	 {  
 	 	 / *   P e r f o r m   M u l t i p l y - A c c u m u l a t e   * /  
 	 	 * p O u t + +   + =   * p x + +   *   c o e f f ;  
 	 	 * p O u t + +   + =   * p x + +   *   c o e f f ;  
 	 	 * p O u t + +   + =   * p x + +   *   c o e f f ;  
 	 	 * p O u t + +   + =   * p x + +   *   c o e f f ;  
  
 	 	 / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
 	 	 b l k C n t - - ;  
 	 }  
  
 	 / *   I f   t h e   b l o c k S i z e   i s   n o t   a   m u l t i p l e   o f   4 ,  
 	   *   c o m p u t e   t h e   r e m a i n i n g   s a m p l e s   * /  
 	 b l k C n t   =   b l o c k S i z e   %   0 x 4 U ;  
  
 	 w h i l e   ( b l k C n t   >   0 U )  
 	 {  
 	 	 / *   P e r f o r m   M u l t i p l y - A c c u m u l a t e   * /  
 	 	 * p O u t + +   + =   * p x + +   *   c o e f f ;  
  
 	 	 / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
 	 	 b l k C n t - - ;  
 	 }  
  
 # e l s e  
  
 / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 0   * /  
  
     b l k C n t   =   b l o c k S i z e ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   P e r f o r m   M u l t i p l i c a t i o n s   a n d   s t o r e   i n   d e s t i n a t i o n   b u f f e r   * /  
         * p O u t + +   =   * p x + +   *   c o e f f ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   L o a d   t h e   c o e f f i c i e n t   v a l u e   a n d  
       *   i n c r e m e n t   t h e   c o e f f i c i e n t   b u f f e r   f o r   t h e   n e x t   s e t   o f   s t a t e   v a l u e s   * /  
     c o e f f   =   * p C o e f f s + + ;  
  
     / *   R e a d   I n d e x ,   f r o m   w h e r e   t h e   s t a t e   b u f f e r   s h o u l d   b e   r e a d ,   i s   c a l c u l a t e d .   * /  
     r e a d I n d e x   =   ( ( i n t 3 2 _ t )   S - > s t a t e I n d e x   -   ( i n t 3 2 _ t )   b l o c k S i z e )   -   * p T a p D e l a y + + ;  
  
     / *   W r a p a r o u n d   o f   r e a d I n d e x   * /  
     i f   ( r e a d I n d e x   <   0 )  
     {  
         r e a d I n d e x   + =   ( i n t 3 2 _ t )   d e l a y S i z e ;  
     }  
  
     / *   L o o p   o v e r   t h e   n u m b e r   o f   t a p s .   * /  
     t a p C n t   =   ( u i n t 3 2 _ t )   n u m T a p s   -   2 U ;  
  
     w h i l e   ( t a p C n t   >   0 U )  
     {  
  
         / *   W o r k i n g   p o i n t e r   f o r   s t a t e   b u f f e r   i s   u p d a t e d   * /  
         p y   =   p S t a t e ;  
  
         / *   b l o c k S i z e   s a m p l e s   a r e   r e a d   f r o m   t h e   s t a t e   b u f f e r   * /  
         a r m _ c i r c u l a r R e a d _ f 3 2 ( ( i n t 3 2 _ t   * )   p y ,   d e l a y S i z e ,   & r e a d I n d e x ,   1 ,  
                                                   ( i n t 3 2 _ t   * )   p b ,   ( i n t 3 2 _ t   * )   p b ,   b l o c k S i z e ,   1 ,  
                                                   b l o c k S i z e ) ;  
  
         / *   W o r k i n g   p o i n t e r   f o r   t h e   s c r a t c h   b u f f e r   * /  
         p x   =   p b ;  
  
         / *   W o r k i n g   p o i n t e r   f o r   d e s t i n a t i o n   b u f f e r   * /  
         p O u t   =   p D s t ;  
  
         b l k C n t   =   b l o c k S i z e ;  
  
         w h i l e   ( b l k C n t   >   0 U )  
         {  
             / *   P e r f o r m   M u l t i p l y - A c c u m u l a t e   * /  
             * p O u t + +   + =   * p x + +   *   c o e f f ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             b l k C n t - - ;  
         }  
  
         / *   L o a d   t h e   c o e f f i c i e n t   v a l u e   a n d  
           *   i n c r e m e n t   t h e   c o e f f i c i e n t   b u f f e r   f o r   t h e   n e x t   s e t   o f   s t a t e   v a l u e s   * /  
         c o e f f   =   * p C o e f f s + + ;  
  
         / *   R e a d   I n d e x ,   f r o m   w h e r e   t h e   s t a t e   b u f f e r   s h o u l d   b e   r e a d ,   i s   c a l c u l a t e d .   * /  
         r e a d I n d e x   =  
             ( ( i n t 3 2 _ t )   S - > s t a t e I n d e x   -   ( i n t 3 2 _ t )   b l o c k S i z e )   -   * p T a p D e l a y + + ;  
  
         / *   W r a p a r o u n d   o f   r e a d I n d e x   * /  
         i f   ( r e a d I n d e x   <   0 )  
         {  
             r e a d I n d e x   + =   ( i n t 3 2 _ t )   d e l a y S i z e ;  
         }  
  
         / *   D e c r e m e n t   t h e   t a p   l o o p   c o u n t e r   * /  
         t a p C n t - - ;  
     }  
  
 	 / *   C o m p u t e   l a s t   t a p   w i t h o u t   t h e   f i n a l   r e a d   o f   p T a p D e l a y   * /  
  
 	 / *   W o r k i n g   p o i n t e r   f o r   s t a t e   b u f f e r   i s   u p d a t e d   * /  
 	 p y   =   p S t a t e ;  
  
 	 / *   b l o c k S i z e   s a m p l e s   a r e   r e a d   f r o m   t h e   s t a t e   b u f f e r   * /  
 	 a r m _ c i r c u l a r R e a d _ f 3 2 ( ( i n t 3 2 _ t   * )   p y ,   d e l a y S i z e ,   & r e a d I n d e x ,   1 ,  
 	 	 	 	 	 	 	 	 	 	 	   ( i n t 3 2 _ t   * )   p b ,   ( i n t 3 2 _ t   * )   p b ,   b l o c k S i z e ,   1 ,  
 	 	 	 	 	 	 	 	 	 	 	   b l o c k S i z e ) ;  
  
 	 / *   W o r k i n g   p o i n t e r   f o r   t h e   s c r a t c h   b u f f e r   * /  
 	 p x   =   p b ;  
  
 	 / *   W o r k i n g   p o i n t e r   f o r   d e s t i n a t i o n   b u f f e r   * /  
 	 p O u t   =   p D s t ;  
  
 	 b l k C n t   =   b l o c k S i z e ;  
  
 	 w h i l e   ( b l k C n t   >   0 U )  
 	 {  
 	 	 / *   P e r f o r m   M u l t i p l y - A c c u m u l a t e   * /  
 	 	 * p O u t + +   + =   * p x + +   *   c o e f f ;  
  
 	 	 / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
 	 	 b l k C n t - - ;  
 	 }  
  
 # e n d i f   / *       # i f   d e f i n e d   ( A R M _ M A T H _ D S P )                 * /  
  
 }  
  
 / * *  
   *   @ }   e n d   o f   F I R _ S p a r s e   g r o u p  
   * /  