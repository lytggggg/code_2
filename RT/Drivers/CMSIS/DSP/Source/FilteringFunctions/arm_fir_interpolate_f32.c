??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ f i r _ i n t e r p o l a t e _ f 3 2 . c  
   *   D e s c r i p t i o n :     F l o a t i n g - p o i n t   F I R   i n t e r p o l a t i o n   s e q u e n c e s  
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
   *   @ d e f g r o u p   F I R _ I n t e r p o l a t e   F i n i t e   I m p u l s e   R e s p o n s e   ( F I R )   I n t e r p o l a t o r  
   *  
   *   T h e s e   f u n c t i o n s   c o m b i n e   a n   u p s a m p l e r   ( z e r o   s t u f f e r )   a n d   a n   F I R   f i l t e r .  
   *   T h e y   a r e   u s e d   i n   m u l t i r a t e   s y s t e m s   f o r   i n c r e a s i n g   t h e   s a m p l e   r a t e   o f   a   s i g n a l   w i t h o u t   i n t r o d u c i n g   h i g h   f r e q u e n c y   i m a g e s .  
   *   C o n c e p t u a l l y ,   t h e   f u n c t i o n s   a r e   e q u i v a l e n t   t o   t h e   b l o c k   d i a g r a m   b e l o w :  
   *   \ i m a g e   h t m l   F I R I n t e r p o l a t o r . g i f   " C o m p o n e n t s   i n c l u d e d   i n   t h e   F I R   I n t e r p o l a t o r   f u n c t i o n s "  
   *   A f t e r   u p s a m p l i n g   b y   a   f a c t o r   o f   < c o d e > L < / c o d e > ,   t h e   s i g n a l   s h o u l d   b e   f i l t e r e d   b y   a   l o w p a s s   f i l t e r   w i t h   a   n o r m a l i z e d  
   *   c u t o f f   f r e q u e n c y   o f   < c o d e > 1 / L < / c o d e >   i n   o r d e r   t o   e l i m i n a t e   h i g h   f r e q u e n c y   c o p i e s   o f   t h e   s p e c t r u m .  
   *   T h e   u s e r   o f   t h e   f u n c t i o n   i s   r e s p o n s i b l e   f o r   p r o v i d i n g   t h e   f i l t e r   c o e f f i c i e n t s .  
   *  
   *   T h e   F I R   i n t e r p o l a t o r   f u n c t i o n s   p r o v i d e d   i n   t h e   C M S I S   D S P   L i b r a r y   c o m b i n e   t h e   u p s a m p l e r   a n d   F I R   f i l t e r   i n   a n   e f f i c i e n t   m a n n e r .  
   *   T h e   u p s a m p l e r   i n s e r t s   < c o d e > L - 1 < / c o d e >   z e r o s   b e t w e e n   e a c h   s a m p l e .  
   *   I n s t e a d   o f   m u l t i p l y i n g   b y   t h e s e   z e r o   v a l u e s ,   t h e   F I R   f i l t e r   i s   d e s i g n e d   t o   s k i p   t h e m .  
   *   T h i s   l e a d s   t o   a n   e f f i c i e n t   i m p l e m e n t a t i o n   w i t h o u t   a n y   w a s t e d   e f f o r t .  
   *   T h e   f u n c t i o n s   o p e r a t e   o n   b l o c k s   o f   i n p u t   a n d   o u t p u t   d a t a .  
   *   < c o d e > p S r c < / c o d e >   p o i n t s   t o   a n   a r r a y   o f   < c o d e > b l o c k S i z e < / c o d e >   i n p u t   v a l u e s   a n d  
   *   < c o d e > p D s t < / c o d e >   p o i n t s   t o   a n   a r r a y   o f   < c o d e > b l o c k S i z e * L < / c o d e >   o u t p u t   v a l u e s .  
   *  
   *   T h e   l i b r a r y   p r o v i d e s   s e p a r a t e   f u n c t i o n s   f o r   Q 1 5 ,   Q 3 1 ,   a n d   f l o a t i n g - p o i n t   d a t a   t y p e s .  
   *  
   *   \ p a r   A l g o r i t h m :  
   *   T h e   f u n c t i o n s   u s e   a   p o l y p h a s e   f i l t e r   s t r u c t u r e :  
   *   < p r e >  
   *         y [ n ]   =   b [ 0 ]   *   x [ n ]   +   b [ L ]       *   x [ n - 1 ]   +   . . .   +   b [ L * ( p h a s e L e n g t h - 1 ) ]   *   x [ n - p h a s e L e n g t h + 1 ]  
   *         y [ n + 1 ]   =   b [ 1 ]   *   x [ n ]   +   b [ L + 1 ]   *   x [ n - 1 ]   +   . . .   +   b [ L * ( p h a s e L e n g t h - 1 ) + 1 ]   *   x [ n - p h a s e L e n g t h + 1 ]  
   *         . . .  
   *         y [ n + ( L - 1 ) ]   =   b [ L - 1 ]   *   x [ n ]   +   b [ 2 * L - 1 ]   *   x [ n - 1 ]   +   . . . . +   b [ L * ( p h a s e L e n g t h - 1 ) + ( L - 1 ) ]   *   x [ n - p h a s e L e n g t h + 1 ]  
   *   < / p r e >  
   *   T h i s   a p p r o a c h   i s   m o r e   e f f i c i e n t   t h a n   s t r a i g h t f o r w a r d   u p s a m p l e - t h e n - f i l t e r   a l g o r i t h m s .  
   *   W i t h   t h i s   m e t h o d   t h e   c o m p u t a t i o n   i s   r e d u c e d   b y   a   f a c t o r   o f   < c o d e > 1 / L < / c o d e >   w h e n   c o m p a r e d   t o   u s i n g   a   s t a n d a r d   F I R   f i l t e r .  
   *   \ p a r  
   *   < c o d e > p C o e f f s < / c o d e >   p o i n t s   t o   a   c o e f f i c i e n t   a r r a y   o f   s i z e   < c o d e > n u m T a p s < / c o d e > .  
   *   < c o d e > n u m T a p s < / c o d e >   m u s t   b e   a   m u l t i p l e   o f   t h e   i n t e r p o l a t i o n   f a c t o r   < c o d e > L < / c o d e >   a n d   t h i s   i s   c h e c k e d   b y   t h e  
   *   i n i t i a l i z a t i o n   f u n c t i o n s .  
   *   I n t e r n a l l y ,   t h e   f u n c t i o n   d i v i d e s   t h e   F I R   f i l t e r ' s   i m p u l s e   r e s p o n s e   i n t o   s h o r t e r   f i l t e r s   o f   l e n g t h  
   *   < c o d e > p h a s e L e n g t h = n u m T a p s / L < / c o d e > .  
   *   C o e f f i c i e n t s   a r e   s t o r e d   i n   t i m e   r e v e r s e d   o r d e r .  
   *   \ p a r  
   *   < p r e >  
   *         { b [ n u m T a p s - 1 ] ,   b [ n u m T a p s - 2 ] ,   b [ N - 2 ] ,   . . . ,   b [ 1 ] ,   b [ 0 ] }  
   *   < / p r e >  
   *   \ p a r  
   *   < c o d e > p S t a t e < / c o d e >   p o i n t s   t o   a   s t a t e   a r r a y   o f   s i z e   < c o d e > b l o c k S i z e   +   p h a s e L e n g t h   -   1 < / c o d e > .  
   *   S a m p l e s   i n   t h e   s t a t e   b u f f e r   a r e   s t o r e d   i n   t h e   o r d e r :  
   *   \ p a r  
   *   < p r e >  
   *         { x [ n - p h a s e L e n g t h + 1 ] ,   x [ n - p h a s e L e n g t h ] ,   x [ n - p h a s e L e n g t h - 1 ] ,   x [ n - p h a s e L e n g t h - 2 ] . . . . x [ 0 ] ,   x [ 1 ] ,   . . . ,   x [ b l o c k S i z e - 1 ] }  
   *   < / p r e >  
   *   T h e   s t a t e   v a r i a b l e s   a r e   u p d a t e d   a f t e r   e a c h   b l o c k   o f   d a t a   i s   p r o c e s s e d ,   t h e   c o e f f i c i e n t s   a r e   u n t o u c h e d .  
   *  
   *   \ p a r   I n s t a n c e   S t r u c t u r e  
   *   T h e   c o e f f i c i e n t s   a n d   s t a t e   v a r i a b l e s   f o r   a   f i l t e r   a r e   s t o r e d   t o g e t h e r   i n   a n   i n s t a n c e   d a t a   s t r u c t u r e .  
   *   A   s e p a r a t e   i n s t a n c e   s t r u c t u r e   m u s t   b e   d e f i n e d   f o r   e a c h   f i l t e r .  
   *   C o e f f i c i e n t   a r r a y s   m a y   b e   s h a r e d   a m o n g   s e v e r a l   i n s t a n c e s   w h i l e   s t a t e   v a r i a b l e   a r r a y   s h o u l d   b e   a l l o c a t e d   s e p a r a t e l y .  
   *   T h e r e   a r e   s e p a r a t e   i n s t a n c e   s t r u c t u r e   d e c l a r a t i o n s   f o r   e a c h   o f   t h e   3   s u p p o r t e d   d a t a   t y p e s .  
   *  
   *   \ p a r   I n i t i a l i z a t i o n   F u n c t i o n s  
   *   T h e r e   i s   a l s o   a n   a s s o c i a t e d   i n i t i a l i z a t i o n   f u n c t i o n   f o r   e a c h   d a t a   t y p e .  
   *   T h e   i n i t i a l i z a t i o n   f u n c t i o n   p e r f o r m s   t h e   f o l l o w i n g   o p e r a t i o n s :  
   *   -   S e t s   t h e   v a l u e s   o f   t h e   i n t e r n a l   s t r u c t u r e   f i e l d s .  
   *   -   Z e r o s   o u t   t h e   v a l u e s   i n   t h e   s t a t e   b u f f e r .  
   *   -   C h e c k s   t o   m a k e   s u r e   t h a t   t h e   l e n g t h   o f   t h e   f i l t e r   i s   a   m u l t i p l e   o f   t h e   i n t e r p o l a t i o n   f a c t o r .  
   *   T o   d o   t h i s   m a n u a l l y   w i t h o u t   c a l l i n g   t h e   i n i t   f u n c t i o n ,   a s s i g n   t h e   f o l l o w   s u b f i e l d s   o f   t h e   i n s t a n c e   s t r u c t u r e :  
   *   L   ( i n t e r p o l a t i o n   f a c t o r ) ,   p C o e f f s ,   p h a s e L e n g t h   ( n u m T a p s   /   L ) ,   p S t a t e .   A l s o   s e t   a l l   o f   t h e   v a l u e s   i n   p S t a t e   t o   z e r o .  
   *  
   *   \ p a r  
   *   U s e   o f   t h e   i n i t i a l i z a t i o n   f u n c t i o n   i s   o p t i o n a l .  
   *   H o w e v e r ,   i f   t h e   i n i t i a l i z a t i o n   f u n c t i o n   i s   u s e d ,   t h e n   t h e   i n s t a n c e   s t r u c t u r e   c a n n o t   b e   p l a c e d   i n t o   a   c o n s t   d a t a   s e c t i o n .  
   *   T o   p l a c e   a n   i n s t a n c e   s t r u c t u r e   i n t o   a   c o n s t   d a t a   s e c t i o n ,   t h e   i n s t a n c e   s t r u c t u r e   m u s t   b e   m a n u a l l y   i n i t i a l i z e d .  
   *   T h e   c o d e   b e l o w   s t a t i c a l l y   i n i t i a l i z e s   e a c h   o f   t h e   3   d i f f e r e n t   d a t a   t y p e   f i l t e r   i n s t a n c e   s t r u c t u r e s  
   *   < p r e >  
   *   a r m _ f i r _ i n t e r p o l a t e _ i n s t a n c e _ f 3 2   S   =   { L ,   p h a s e L e n g t h ,   p C o e f f s ,   p S t a t e } ;  
   *   a r m _ f i r _ i n t e r p o l a t e _ i n s t a n c e _ q 3 1   S   =   { L ,   p h a s e L e n g t h ,   p C o e f f s ,   p S t a t e } ;  
   *   a r m _ f i r _ i n t e r p o l a t e _ i n s t a n c e _ q 1 5   S   =   { L ,   p h a s e L e n g t h ,   p C o e f f s ,   p S t a t e } ;  
   *   < / p r e >  
   *   w h e r e   < c o d e > L < / c o d e >   i s   t h e   i n t e r p o l a t i o n   f a c t o r ;   < c o d e > p h a s e L e n g t h = n u m T a p s / L < / c o d e >   i s   t h e  
   *   l e n g t h   o f   e a c h   o f   t h e   s h o r t e r   F I R   f i l t e r s   u s e d   i n t e r n a l l y ,  
   *   < c o d e > p C o e f f s < / c o d e >   i s   t h e   a d d r e s s   o f   t h e   c o e f f i c i e n t   b u f f e r ;  
   *   < c o d e > p S t a t e < / c o d e >   i s   t h e   a d d r e s s   o f   t h e   s t a t e   b u f f e r .  
   *   B e   s u r e   t o   s e t   t h e   v a l u e s   i n   t h e   s t a t e   b u f f e r   t o   z e r o s   w h e n   d o i n g   s t a t i c   i n i t i a l i z a t i o n .  
   *  
   *   \ p a r   F i x e d - P o i n t   B e h a v i o r  
   *   C a r e   m u s t   b e   t a k e n   w h e n   u s i n g   t h e   f i x e d - p o i n t   v e r s i o n s   o f   t h e   F I R   i n t e r p o l a t e   f i l t e r   f u n c t i o n s .  
   *   I n   p a r t i c u l a r ,   t h e   o v e r f l o w   a n d   s a t u r a t i o n   b e h a v i o r   o f   t h e   a c c u m u l a t o r   u s e d   i n   e a c h   f u n c t i o n   m u s t   b e   c o n s i d e r e d .  
   *   R e f e r   t o   t h e   f u n c t i o n   s p e c i f i c   d o c u m e n t a t i o n   b e l o w   f o r   u s a g e   g u i d e l i n e s .  
   * /  
  
 / * *  
   *   @ a d d t o g r o u p   F I R _ I n t e r p o l a t e  
   *   @ {  
   * /  
  
 / * *  
   *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   F I R   i n t e r p o l a t o r .  
   *   @ p a r a m [ i n ]   * S                 p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   F I R   i n t e r p o l a t o r   s t r u c t u r e .  
   *   @ p a r a m [ i n ]   * p S r c           p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
   *   @ p a r a m [ o u t ]   * p D s t         p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
   *   @ p a r a m [ i n ]   b l o c k S i z e   n u m b e r   o f   i n p u t   s a m p l e s   t o   p r o c e s s   p e r   c a l l .  
   *   @ r e t u r n   n o n e .  
   * /  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 3   * /  
  
 v o i d   a r m _ f i r _ i n t e r p o l a t e _ f 3 2 (  
     c o n s t   a r m _ f i r _ i n t e r p o l a t e _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     f l o a t 3 2 _ t   * p S t a t e   =   S - > p S t a t e ;                                   / *   S t a t e   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p C o e f f s   =   S - > p C o e f f s ;                               / *   C o e f f i c i e n t   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p S t a t e C u r n t ;                                                 / *   P o i n t s   t o   t h e   c u r r e n t   s a m p l e   o f   t h e   s t a t e   * /  
     f l o a t 3 2 _ t   * p t r 1 ,   * p t r 2 ;                                                 / *   T e m p o r a r y   p o i n t e r s   f o r   s t a t e   a n d   c o e f f i c i e n t   b u f f e r s   * /  
     f l o a t 3 2 _ t   s u m 0 ;                                                                 / *   A c c u m u l a t o r s   * /  
     f l o a t 3 2 _ t   x 0 ,   c 0 ;                                                             / *   T e m p o r a r y   v a r i a b l e s   t o   h o l d   s t a t e   a n d   c o e f f i c i e n t   v a l u e s   * /  
     u i n t 3 2 _ t   i ,   b l k C n t ,   j ;                                                   / *   L o o p   c o u n t e r s   * /  
     u i n t 1 6 _ t   p h a s e L e n   =   S - > p h a s e L e n g t h ,   t a p C n t ;         / *   L e n g t h   o f   e a c h   p o l y p h a s e   f i l t e r   c o m p o n e n t   * /  
     f l o a t 3 2 _ t   a c c 0 ,   a c c 1 ,   a c c 2 ,   a c c 3 ;  
     f l o a t 3 2 _ t   x 1 ,   x 2 ,   x 3 ;  
     u i n t 3 2 _ t   b l k C n t N 4 ;  
     f l o a t 3 2 _ t   c 1 ,   c 2 ,   c 3 ;  
  
     / *   S - > p S t a t e   b u f f e r   c o n t a i n s   p r e v i o u s   f r a m e   ( p h a s e L e n   -   1 )   s a m p l e s   * /  
     / *   p S t a t e C u r n t   p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   n e w   i n p u t   d a t a   s h o u l d   b e   w r i t t e n   * /  
     p S t a t e C u r n t   =   S - > p S t a t e   +   ( p h a s e L e n   -   1 U ) ;  
  
     / *   I n i t i a l i s e     b l k C n t   * /  
     b l k C n t   =   b l o c k S i z e   /   4 ;  
     b l k C n t N 4   =   b l o c k S i z e   -   ( 4   *   b l k C n t ) ;  
  
     / *   S a m p l e s   l o o p   u n r o l l e d   b y   4   * /  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C o p y   n e w   i n p u t   s a m p l e   i n t o   t h e   s t a t e   b u f f e r   * /  
         * p S t a t e C u r n t + +   =   * p S r c + + ;  
         * p S t a t e C u r n t + +   =   * p S r c + + ;  
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
             a c c 0   =   0 . 0 f ;  
             a c c 1   =   0 . 0 f ;  
             a c c 2   =   0 . 0 f ;  
             a c c 3   =   0 . 0 f ;  
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
             x 1   =   * ( p t r 1 + + ) ;  
             x 2   =   * ( p t r 1 + + ) ;  
  
             w h i l e   ( t a p C n t   >   0 U )  
             {  
  
                 / *   R e a d   t h e   i n p u t   s a m p l e   * /  
                 x 3   =   * ( p t r 1 + + ) ;  
  
                 / *   R e a d   t h e   c o e f f i c i e n t   * /  
                 c 0   =   * ( p t r 2 ) ;  
  
                 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
                 a c c 0   + =   x 0   *   c 0 ;  
                 a c c 1   + =   x 1   *   c 0 ;  
                 a c c 2   + =   x 2   *   c 0 ;  
                 a c c 3   + =   x 3   *   c 0 ;  
  
                 / *   R e a d   t h e   c o e f f i c i e n t   * /  
                 c 1   =   * ( p t r 2   +   S - > L ) ;  
  
                 / *   R e a d   t h e   i n p u t   s a m p l e   * /  
                 x 0   =   * ( p t r 1 + + ) ;  
  
                 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
                 a c c 0   + =   x 1   *   c 1 ;  
                 a c c 1   + =   x 2   *   c 1 ;  
                 a c c 2   + =   x 3   *   c 1 ;  
                 a c c 3   + =   x 0   *   c 1 ;  
  
                 / *   R e a d   t h e   c o e f f i c i e n t   * /  
                 c 2   =   * ( p t r 2   +   S - > L   *   2 ) ;  
  
                 / *   R e a d   t h e   i n p u t   s a m p l e   * /  
                 x 1   =   * ( p t r 1 + + ) ;  
  
                 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
                 a c c 0   + =   x 2   *   c 2 ;  
                 a c c 1   + =   x 3   *   c 2 ;  
                 a c c 2   + =   x 0   *   c 2 ;  
                 a c c 3   + =   x 1   *   c 2 ;  
  
                 / *   R e a d   t h e   c o e f f i c i e n t   * /  
                 c 3   =   * ( p t r 2   +   S - > L   *   3 ) ;  
  
                 / *   R e a d   t h e   i n p u t   s a m p l e   * /  
                 x 2   =   * ( p t r 1 + + ) ;  
  
                 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
                 a c c 0   + =   x 3   *   c 3 ;  
                 a c c 1   + =   x 0   *   c 3 ;  
                 a c c 2   + =   x 1   *   c 3 ;  
                 a c c 3   + =   x 2   *   c 3 ;  
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
                 x 3   =   * ( p t r 1 + + ) ;  
  
                 / *   R e a d   t h e   c o e f f i c i e n t   * /  
                 c 0   =   * ( p t r 2 ) ;  
  
                 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
                 a c c 0   + =   x 0   *   c 0 ;  
                 a c c 1   + =   x 1   *   c 0 ;  
                 a c c 2   + =   x 2   *   c 0 ;  
                 a c c 3   + =   x 3   *   c 0 ;  
  
                 / *   I n c r e m e n t   t h e   c o e f f i c i e n t   p o i n t e r   b y   i n t e r p o l a t i o n   f a c t o r   t i m e s .   * /  
                 p t r 2   + =   S - > L ;  
  
                 / *   u p d a t e   s t a t e s   f o r   n e x t   s a m p l e   p r o c e s s i n g   * /  
                 x 0   =   x 1 ;  
                 x 1   =   x 2 ;  
                 x 2   =   x 3 ;  
  
                 / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                 t a p C n t - - ;  
             }  
  
             / *   T h e   r e s u l t   i s   i n   t h e   a c c u m u l a t o r ,   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
             * p D s t   =   a c c 0 ;  
             * ( p D s t   +   S - > L )   =   a c c 1 ;  
             * ( p D s t   +   2   *   S - > L )   =   a c c 2 ;  
             * ( p D s t   +   3   *   S - > L )   =   a c c 3 ;  
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
         p S t a t e   =   p S t a t e   +   4 ;  
  
         p D s t   + =   S - > L   *   3 ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   I f   t h e   b l o c k S i z e   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   a n y   r e m a i n i n g   o u t p u t   s a m p l e s   h e r e .  
       * *   N o   l o o p   u n r o l l i n g   i s   u s e d .   * /  
  
     w h i l e   ( b l k C n t N 4   >   0 U )  
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
             s u m 0   =   0 . 0 f ;  
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
                 s u m 0   + =   x 0   *   c 0 ;  
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
                 s u m 0   + =   x 0   *   c 0 ;  
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
                 s u m 0   + =   x 0   *   c 0 ;  
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
                 s u m 0   + =   x 0   *   c 0 ;  
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
                 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
                 s u m 0   + =   * ( p t r 1 + + )   *   ( * p t r 2 ) ;  
  
                 / *   I n c r e m e n t   t h e   c o e f f i c i e n t   p o i n t e r   b y   i n t e r p o l a t i o n   f a c t o r   t i m e s .   * /  
                 p t r 2   + =   S - > L ;  
  
                 / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                 t a p C n t - - ;  
             }  
  
             / *   T h e   r e s u l t   i s   i n   t h e   a c c u m u l a t o r ,   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
             * p D s t + +   =   s u m 0 ;  
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
         b l k C n t N 4 - - ;  
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
 }  
  
 # e l s e  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 0   * /  
  
 v o i d   a r m _ f i r _ i n t e r p o l a t e _ f 3 2 (  
     c o n s t   a r m _ f i r _ i n t e r p o l a t e _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     f l o a t 3 2 _ t   * p S t a t e   =   S - > p S t a t e ;                                   / *   S t a t e   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p C o e f f s   =   S - > p C o e f f s ;                               / *   C o e f f i c i e n t   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p S t a t e C u r n t ;                                                 / *   P o i n t s   t o   t h e   c u r r e n t   s a m p l e   o f   t h e   s t a t e   * /  
     f l o a t 3 2 _ t   * p t r 1 ,   * p t r 2 ;                                                 / *   T e m p o r a r y   p o i n t e r s   f o r   s t a t e   a n d   c o e f f i c i e n t   b u f f e r s   * /  
  
  
     f l o a t 3 2 _ t   s u m ;                                                                   / *   A c c u m u l a t o r   * /  
     u i n t 3 2 _ t   i ,   b l k C n t ;                                                         / *   L o o p   c o u n t e r s   * /  
     u i n t 1 6 _ t   p h a s e L e n   =   S - > p h a s e L e n g t h ,   t a p C n t ;         / *   L e n g t h   o f   e a c h   p o l y p h a s e   f i l t e r   c o m p o n e n t   * /  
  
  
     / *   S - > p S t a t e   b u f f e r   c o n t a i n s   p r e v i o u s   f r a m e   ( p h a s e L e n   -   1 )   s a m p l e s   * /  
     / *   p S t a t e C u r n t   p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   n e w   i n p u t   d a t a   s h o u l d   b e   w r i t t e n   * /  
     p S t a t e C u r n t   =   S - > p S t a t e   +   ( p h a s e L e n   -   1 U ) ;  
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
             s u m   =   0 . 0 f ;  
  
             / *   I n i t i a l i z e   s t a t e   p o i n t e r   * /  
             p t r 1   =   p S t a t e ;  
  
             / *   I n i t i a l i z e   c o e f f i c i e n t   p o i n t e r   * /  
             p t r 2   =   p C o e f f s   +   ( i   -   1 U ) ;  
  
             / *   L o o p   o v e r   t h e   p o l y P h a s e   l e n g t h   * /  
             t a p C n t   =   p h a s e L e n ;  
  
             w h i l e   ( t a p C n t   >   0 U )  
             {  
                 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
                 s u m   + =   * p t r 1 + +   *   * p t r 2 ;  
  
                 / *   I n c r e m e n t   t h e   c o e f f i c i e n t   p o i n t e r   b y   i n t e r p o l a t i o n   f a c t o r   t i m e s .   * /  
                 p t r 2   + =   S - > L ;  
  
                 / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                 t a p C n t - - ;  
             }  
  
             / *   T h e   r e s u l t   i s   i n   t h e   a c c u m u l a t o r ,   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
             * p D s t + +   =   s u m ;  
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
       * *   N o w   c o p y   t h e   l a s t   p h a s e L e n   -   1   s a m p l e s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r .  
       * *   T h i s   p r e p a r e s   t h e   s t a t e   b u f f e r   f o r   t h e   n e x t   f u n c t i o n   c a l l .   * /  
  
     / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r   * /  
     p S t a t e C u r n t   =   S - > p S t a t e ;  
  
     t a p C n t   =   p h a s e L e n   -   1 U ;  
  
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
  
   / * *  
     *   @ }   e n d   o f   F I R _ I n t e r p o l a t e   g r o u p  
     * /  