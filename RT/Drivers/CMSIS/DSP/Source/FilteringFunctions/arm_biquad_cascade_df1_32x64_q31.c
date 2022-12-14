??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ b i q u a d _ c a s c a d e _ d f 1 _ 3 2 x 6 4 _ q 3 1 . c  
   *   D e s c r i p t i o n :     H i g h   p r e c i s i o n   Q 3 1   B i q u a d   c a s c a d e   f i l t e r   p r o c e s s i n g   f u n c t i o n  
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
   *   @ d e f g r o u p   B i q u a d C a s c a d e D F 1 _ 3 2 x 6 4   H i g h   P r e c i s i o n   Q 3 1   B i q u a d   C a s c a d e   F i l t e r  
   *  
   *   T h i s   f u n c t i o n   i m p l e m e n t s   a   h i g h   p r e c i s i o n   B i q u a d   c a s c a d e   f i l t e r   w h i c h   o p e r a t e s   o n  
   *   Q 3 1   d a t a   v a l u e s .     T h e   f i l t e r   c o e f f i c i e n t s   a r e   i n   1 . 3 1   f o r m a t   a n d   t h e   s t a t e   v a r i a b l e s  
   *   a r e   i n   1 . 6 3   f o r m a t .     T h e   d o u b l e   p r e c i s i o n   s t a t e   v a r i a b l e s   r e d u c e   q u a n t i z a t i o n   n o i s e  
   *   i n   t h e   f i l t e r   a n d   p r o v i d e   a   c l e a n e r   o u t p u t .  
   *   T h e s e   f i l t e r s   a r e   p a r t i c u l a r l y   u s e f u l   w h e n   i m p l e m e n t i n g   f i l t e r s   i n   w h i c h   t h e  
   *   s i n g u l a r i t i e s   a r e   c l o s e   t o   t h e   u n i t   c i r c l e .     T h i s   i s   c o m m o n   f o r   l o w   p a s s   o r   h i g h  
   *   p a s s   f i l t e r s   w i t h   v e r y   l o w   c u t o f f   f r e q u e n c i e s .  
   *  
   *   T h e   f u n c t i o n   o p e r a t e s   o n   b l o c k s   o f   i n p u t   a n d   o u t p u t   d a t a  
   *   a n d   e a c h   c a l l   t o   t h e   f u n c t i o n   p r o c e s s e s   < c o d e > b l o c k S i z e < / c o d e >   s a m p l e s   t h r o u g h  
   *   t h e   f i l t e r .   < c o d e > p S r c < / c o d e >   a n d   < c o d e > p D s t < / c o d e >   p o i n t s   t o   i n p u t   a n d   o u t p u t   a r r a y s  
   *   c o n t a i n i n g   < c o d e > b l o c k S i z e < / c o d e >   Q 3 1   v a l u e s .  
   *  
   *   \ p a r   A l g o r i t h m  
   *   E a c h   B i q u a d   s t a g e   i m p l e m e n t s   a   s e c o n d   o r d e r   f i l t e r   u s i n g   t h e   d i f f e r e n c e   e q u a t i o n :  
   *   < p r e >  
   *           y [ n ]   =   b 0   *   x [ n ]   +   b 1   *   x [ n - 1 ]   +   b 2   *   x [ n - 2 ]   +   a 1   *   y [ n - 1 ]   +   a 2   *   y [ n - 2 ]  
   *   < / p r e >  
   *   A   D i r e c t   F o r m   I   a l g o r i t h m   i s   u s e d   w i t h   5   c o e f f i c i e n t s   a n d   4   s t a t e   v a r i a b l e s   p e r   s t a g e .  
   *   \ i m a g e   h t m l   B i q u a d . g i f   " S i n g l e   B i q u a d   f i l t e r   s t a g e "  
   *   C o e f f i c i e n t s   < c o d e > b 0 ,   b 1 ,   a n d   b 2   < / c o d e >   m u l t i p l y   t h e   i n p u t   s i g n a l   < c o d e > x [ n ] < / c o d e >   a n d   a r e   r e f e r r e d   t o   a s   t h e   f e e d f o r w a r d   c o e f f i c i e n t s .  
   *   C o e f f i c i e n t s   < c o d e > a 1 < / c o d e >   a n d   < c o d e > a 2 < / c o d e >   m u l t i p l y   t h e   o u t p u t   s i g n a l   < c o d e > y [ n ] < / c o d e >   a n d   a r e   r e f e r r e d   t o   a s   t h e   f e e d b a c k   c o e f f i c i e n t s .  
   *   P a y   c a r e f u l   a t t e n t i o n   t o   t h e   s i g n   o f   t h e   f e e d b a c k   c o e f f i c i e n t s .  
   *   S o m e   d e s i g n   t o o l s   u s e   t h e   d i f f e r e n c e   e q u a t i o n  
   *   < p r e >  
   *           y [ n ]   =   b 0   *   x [ n ]   +   b 1   *   x [ n - 1 ]   +   b 2   *   x [ n - 2 ]   -   a 1   *   y [ n - 1 ]   -   a 2   *   y [ n - 2 ]  
   *   < / p r e >  
   *   I n   t h i s   c a s e   t h e   f e e d b a c k   c o e f f i c i e n t s   < c o d e > a 1 < / c o d e >   a n d   < c o d e > a 2 < / c o d e >   m u s t   b e   n e g a t e d   w h e n   u s e d   w i t h   t h e   C M S I S   D S P   L i b r a r y .  
   *  
   *   \ p a r  
   *   H i g h e r   o r d e r   f i l t e r s   a r e   r e a l i z e d   a s   a   c a s c a d e   o f   s e c o n d   o r d e r   s e c t i o n s .  
   *   < c o d e > n u m S t a g e s < / c o d e >   r e f e r s   t o   t h e   n u m b e r   o f   s e c o n d   o r d e r   s t a g e s   u s e d .  
   *   F o r   e x a m p l e ,   a n   8 t h   o r d e r   f i l t e r   w o u l d   b e   r e a l i z e d   w i t h   < c o d e > n u m S t a g e s = 4 < / c o d e >   s e c o n d   o r d e r   s t a g e s .  
   *   \ i m a g e   h t m l   B i q u a d C a s c a d e . g i f   " 8 t h   o r d e r   f i l t e r   u s i n g   a   c a s c a d e   o f   B i q u a d   s t a g e s "  
   *   A   9 t h   o r d e r   f i l t e r   w o u l d   b e   r e a l i z e d   w i t h   < c o d e > n u m S t a g e s = 5 < / c o d e >   s e c o n d   o r d e r   s t a g e s   w i t h   t h e   c o e f f i c i e n t s   f o r   o n e   o f   t h e   s t a g e s   c o n f i g u r e d   a s   a   f i r s t   o r d e r   f i l t e r   ( < c o d e > b 2 = 0 < / c o d e >   a n d   < c o d e > a 2 = 0 < / c o d e > ) .  
   *  
   *   \ p a r  
   *   T h e   < c o d e > p S t a t e < / c o d e >   p o i n t s   t o   s t a t e   v a r i a b l e s   a r r a y   .  
   *   E a c h   B i q u a d   s t a g e   h a s   4   s t a t e   v a r i a b l e s   < c o d e > x [ n - 1 ] ,   x [ n - 2 ] ,   y [ n - 1 ] , < / c o d e >   a n d   < c o d e > y [ n - 2 ] < / c o d e >   a n d   e a c h   s t a t e   v a r i a b l e   i n   1 . 6 3   f o r m a t   t o   i m p r o v e   p r e c i s i o n .  
   *   T h e   s t a t e   v a r i a b l e s   a r e   a r r a n g e d   i n   t h e   a r r a y   a s :  
   *   < p r e >  
   *           { x [ n - 1 ] ,   x [ n - 2 ] ,   y [ n - 1 ] ,   y [ n - 2 ] }  
   *   < / p r e >  
   *  
   *   \ p a r  
   *   T h e   4   s t a t e   v a r i a b l e s   f o r   s t a g e   1   a r e   f i r s t ,   t h e n   t h e   4   s t a t e   v a r i a b l e s   f o r   s t a g e   2 ,   a n d   s o   o n .  
   *   T h e   s t a t e   a r r a y   h a s   a   t o t a l   l e n g t h   o f   < c o d e > 4 * n u m S t a g e s < / c o d e >   v a l u e s   o f   d a t a   i n   1 . 6 3   f o r m a t .  
   *   T h e   s t a t e   v a r i a b l e s   a r e   u p d a t e d   a f t e r   e a c h   b l o c k   o f   d a t a   i s   p r o c e s s e d ;   t h e   c o e f f i c i e n t s   a r e   u n t o u c h e d .  
   *  
   *   \ p a r   I n s t a n c e   S t r u c t u r e  
   *   T h e   c o e f f i c i e n t s   a n d   s t a t e   v a r i a b l e s   f o r   a   f i l t e r   a r e   s t o r e d   t o g e t h e r   i n   a n   i n s t a n c e   d a t a   s t r u c t u r e .  
   *   A   s e p a r a t e   i n s t a n c e   s t r u c t u r e   m u s t   b e   d e f i n e d   f o r   e a c h   f i l t e r .  
   *   C o e f f i c i e n t   a r r a y s   m a y   b e   s h a r e d   a m o n g   s e v e r a l   i n s t a n c e s   w h i l e   s t a t e   v a r i a b l e   a r r a y s   c a n n o t   b e   s h a r e d .  
   *  
   *   \ p a r   I n i t   F u n c t i o n  
   *   T h e r e   i s   a l s o   a n   a s s o c i a t e d   i n i t i a l i z a t i o n   f u n c t i o n   w h i c h   p e r f o r m s   t h e   f o l l o w i n g   o p e r a t i o n s :  
   *   -   S e t s   t h e   v a l u e s   o f   t h e   i n t e r n a l   s t r u c t u r e   f i e l d s .  
   *   -   Z e r o s   o u t   t h e   v a l u e s   i n   t h e   s t a t e   b u f f e r .  
   *   T o   d o   t h i s   m a n u a l l y   w i t h o u t   c a l l i n g   t h e   i n i t   f u n c t i o n ,   a s s i g n   t h e   f o l l o w   s u b f i e l d s   o f   t h e   i n s t a n c e   s t r u c t u r e :  
   *   n u m S t a g e s ,   p C o e f f s ,   p o s t S h i f t ,   p S t a t e .   A l s o   s e t   a l l   o f   t h e   v a l u e s   i n   p S t a t e   t o   z e r o .  
   *  
   *   \ p a r  
   *   U s e   o f   t h e   i n i t i a l i z a t i o n   f u n c t i o n   i s   o p t i o n a l .  
   *   H o w e v e r ,   i f   t h e   i n i t i a l i z a t i o n   f u n c t i o n   i s   u s e d ,   t h e n   t h e   i n s t a n c e   s t r u c t u r e   c a n n o t   b e   p l a c e d   i n t o   a   c o n s t   d a t a   s e c t i o n .  
   *   T o   p l a c e   a n   i n s t a n c e   s t r u c t u r e   i n t o   a   c o n s t   d a t a   s e c t i o n ,   t h e   i n s t a n c e   s t r u c t u r e   m u s t   b e   m a n u a l l y   i n i t i a l i z e d .  
   *   S e t   t h e   v a l u e s   i n   t h e   s t a t e   b u f f e r   t o   z e r o s   b e f o r e   s t a t i c   i n i t i a l i z a t i o n .  
   *   F o r   e x a m p l e ,   t o   s t a t i c a l l y   i n i t i a l i z e   t h e   f i l t e r   i n s t a n c e   s t r u c t u r e   u s e  
   *   < p r e >  
   *           a r m _ b i q u a d _ c a s _ d f 1 _ 3 2 x 6 4 _ i n s _ q 3 1   S 1   =   { n u m S t a g e s ,   p S t a t e ,   p C o e f f s ,   p o s t S h i f t } ;  
   *   < / p r e >  
   *   w h e r e   < c o d e > n u m S t a g e s < / c o d e >   i s   t h e   n u m b e r   o f   B i q u a d   s t a g e s   i n   t h e   f i l t e r ;   < c o d e > p S t a t e < / c o d e >   i s   t h e   a d d r e s s   o f   t h e   s t a t e   b u f f e r ;  
   *   < c o d e > p C o e f f s < / c o d e >   i s   t h e   a d d r e s s   o f   t h e   c o e f f i c i e n t   b u f f e r ;   < c o d e > p o s t S h i f t < / c o d e >   s h i f t   t o   b e   a p p l i e d   w h i c h   i s   d e s c r i b e d   i n   d e t a i l   b e l o w .  
   *   \ p a r   F i x e d - P o i n t   B e h a v i o r  
   *   C a r e   m u s t   b e   t a k e n   w h i l e   u s i n g   B i q u a d   C a s c a d e   3 2 x 6 4   f i l t e r   f u n c t i o n .  
   *   F o l l o w i n g   i s s u e s   m u s t   b e   c o n s i d e r e d :  
   *   -   S c a l i n g   o f   c o e f f i c i e n t s  
   *   -   F i l t e r   g a i n  
   *   -   O v e r f l o w   a n d   s a t u r a t i o n  
   *  
   *   \ p a r  
   *   F i l t e r   c o e f f i c i e n t s   a r e   r e p r e s e n t e d   a s   f r a c t i o n a l   v a l u e s   a n d  
   *   r e s t r i c t e d   t o   l i e   i n   t h e   r a n g e   < c o d e > [ - 1   + 1 ) < / c o d e > .  
   *   T h e   p r o c e s s i n g   f u n c t i o n   h a s   a n   a d d i t i o n a l   s c a l i n g   p a r a m e t e r   < c o d e > p o s t S h i f t < / c o d e >  
   *   w h i c h   a l l o w s   t h e   f i l t e r   c o e f f i c i e n t s   t o   e x c e e d   t h e   r a n g e   < c o d e > [ + 1   - 1 ) < / c o d e > .  
   *   A t   t h e   o u t p u t   o f   t h e   f i l t e r ' s   a c c u m u l a t o r   i s   a   s h i f t   r e g i s t e r   w h i c h   s h i f t s   t h e   r e s u l t   b y   < c o d e > p o s t S h i f t < / c o d e >   b i t s .  
   *   \ i m a g e   h t m l   B i q u a d P o s t s h i f t . g i f   " F i x e d - p o i n t   B i q u a d   w i t h   s h i f t   b y   p o s t S h i f t   b i t s   a f t e r   a c c u m u l a t o r "  
   *   T h i s   e s s e n t i a l l y   s c a l e s   t h e   f i l t e r   c o e f f i c i e n t s   b y   < c o d e > 2 ^ p o s t S h i f t < / c o d e > .  
   *   F o r   e x a m p l e ,   t o   r e a l i z e   t h e   c o e f f i c i e n t s  
   *   < p r e >  
   *         { 1 . 5 ,   - 0 . 8 ,   1 . 2 ,   1 . 6 ,   - 0 . 9 }  
   *   < / p r e >  
   *   s e t   t h e   C o e f f i c i e n t   a r r a y   t o :  
   *   < p r e >  
   *         { 0 . 7 5 ,   - 0 . 4 ,   0 . 6 ,   0 . 8 ,   - 0 . 4 5 }  
   *   < / p r e >  
   *   a n d   s e t   < c o d e > p o s t S h i f t = 1 < / c o d e >  
   *  
   *   \ p a r  
   *   T h e   s e c o n d   t h i n g   t o   k e e p   i n   m i n d   i s   t h e   g a i n   t h r o u g h   t h e   f i l t e r .  
   *   T h e   f r e q u e n c y   r e s p o n s e   o f   a   B i q u a d   f i l t e r   i s   a   f u n c t i o n   o f   i t s   c o e f f i c i e n t s .  
   *   I t   i s   p o s s i b l e   f o r   t h e   g a i n   t h r o u g h   t h e   f i l t e r   t o   e x c e e d   1 . 0   m e a n i n g   t h a t   t h e   f i l t e r   i n c r e a s e s   t h e   a m p l i t u d e   o f   c e r t a i n   f r e q u e n c i e s .  
   *   T h i s   m e a n s   t h a t   a n   i n p u t   s i g n a l   w i t h   a m p l i t u d e   <   1 . 0   m a y   r e s u l t   i n   a n   o u t p u t   >   1 . 0   a n d   t h e s e   a r e   s a t u r a t e d   o r   o v e r f l o w e d   b a s e d   o n   t h e   i m p l e m e n t a t i o n   o f   t h e   f i l t e r .  
   *   T o   a v o i d   t h i s   b e h a v i o r   t h e   f i l t e r   n e e d s   t o   b e   s c a l e d   d o w n   s u c h   t h a t   i t s   p e a k   g a i n   <   1 . 0   o r   t h e   i n p u t   s i g n a l   m u s t   b e   s c a l e d   d o w n   s o   t h a t   t h e   c o m b i n a t i o n   o f   i n p u t   a n d   f i l t e r   a r e   n e v e r   o v e r f l o w e d .  
   *  
   *   \ p a r  
   *   T h e   t h i r d   i t e m   t o   c o n s i d e r   i s   t h e   o v e r f l o w   a n d   s a t u r a t i o n   b e h a v i o r   o f   t h e   f i x e d - p o i n t   Q 3 1   v e r s i o n .  
   *   T h i s   i s   d e s c r i b e d   i n   t h e   f u n c t i o n   s p e c i f i c   d o c u m e n t a t i o n   b e l o w .  
   * /  
  
 / * *  
   *   @ a d d t o g r o u p   B i q u a d C a s c a d e D F 1 _ 3 2 x 6 4  
   *   @ {  
   * /  
  
 / * *  
   *   @ d e t a i l s  
  
   *   @ p a r a m [ i n ]     * S   p o i n t s   t o   a n   i n s t a n c e   o f   t h e   h i g h   p r e c i s i o n   Q 3 1   B i q u a d   c a s c a d e   f i l t e r .  
   *   @ p a r a m [ i n ]     * p S r c   p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
   *   @ p a r a m [ o u t ]   * p D s t   p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
   *   @ p a r a m [ i n ]     b l o c k S i z e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
   *   @ r e t u r n   n o n e .  
   *  
   *   \ p a r  
   *   T h e   f u n c t i o n   i s   i m p l e m e n t e d   u s i n g   a n   i n t e r n a l   6 4 - b i t   a c c u m u l a t o r .  
   *   T h e   a c c u m u l a t o r   h a s   a   2 . 6 2   f o r m a t   a n d   m a i n t a i n s   f u l l   p r e c i s i o n   o f   t h e   i n t e r m e d i a t e   m u l t i p l i c a t i o n   r e s u l t s   b u t   p r o v i d e s   o n l y   a   s i n g l e   g u a r d   b i t .  
   *   T h u s ,   i f   t h e   a c c u m u l a t o r   r e s u l t   o v e r f l o w s   i t   w r a p s   a r o u n d   r a t h e r   t h a n   c l i p .  
   *   I n   o r d e r   t o   a v o i d   o v e r f l o w s   c o m p l e t e l y   t h e   i n p u t   s i g n a l   m u s t   b e   s c a l e d   d o w n   b y   2   b i t s   a n d   l i e   i n   t h e   r a n g e   [ - 0 . 2 5   + 0 . 2 5 ) .  
   *   A f t e r   a l l   5   m u l t i p l y - a c c u m u l a t e s   a r e   p e r f o r m e d ,   t h e   2 . 6 2   a c c u m u l a t o r   i s   s h i f t e d   b y   < c o d e > p o s t S h i f t < / c o d e >   b i t s   a n d   t h e   r e s u l t   t r u n c a t e d   t o  
   *   1 . 3 1   f o r m a t   b y   d i s c a r d i n g   t h e   l o w   3 2   b i t s .  
   *  
   *   \ p a r  
   *   T w o   r e l a t e d   f u n c t i o n s   a r e   p r o v i d e d   i n   t h e   C M S I S   D S P   l i b r a r y .  
   *   < c o d e > a r m _ b i q u a d _ c a s c a d e _ d f 1 _ q 3 1 ( ) < / c o d e >   i m p l e m e n t s   a   B i q u a d   c a s c a d e   w i t h   3 2 - b i t   c o e f f i c i e n t s   a n d   s t a t e   v a r i a b l e s   w i t h   a   Q 6 3   a c c u m u l a t o r .  
   *   < c o d e > a r m _ b i q u a d _ c a s c a d e _ d f 1 _ f a s t _ q 3 1 ( ) < / c o d e >   i m p l e m e n t s   a   B i q u a d   c a s c a d e   w i t h   3 2 - b i t   c o e f f i c i e n t s   a n d   s t a t e   v a r i a b l e s   w i t h   a   Q 3 1   a c c u m u l a t o r .  
   * /  
  
 v o i d   a r m _ b i q u a d _ c a s _ d f 1 _ 3 2 x 6 4 _ q 3 1 (  
     c o n s t   a r m _ b i q u a d _ c a s _ d f 1 _ 3 2 x 6 4 _ i n s _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     q 3 1 _ t   * p I n   =   p S r c ;                                                           / *     i n p u t   p o i n t e r   i n i t i a l i z a t i o n     * /  
     q 3 1 _ t   * p O u t   =   p D s t ;                                                         / *     o u t p u t   p o i n t e r   i n i t i a l i z a t i o n   * /  
     q 6 3 _ t   * p S t a t e   =   S - > p S t a t e ;                                           / *     s t a t e   p o i n t e r   i n i t i a l i z a t i o n     * /  
     q 3 1 _ t   * p C o e f f s   =   S - > p C o e f f s ;                                       / *     c o e f f   p o i n t e r   i n i t i a l i z a t i o n     * /  
     q 6 3 _ t   a c c ;                                                                           / *     a c c u m u l a t o r                                       * /  
     q 3 1 _ t   X n 1 ,   X n 2 ;                                                                 / *     I n p u t   F i l t e r   s t a t e   v a r i a b l e s                 * /  
     q 6 3 _ t   Y n 1 ,   Y n 2 ;                                                                 / *     O u t p u t   F i l t e r   s t a t e   v a r i a b l e s                 * /  
     q 3 1 _ t   b 0 ,   b 1 ,   b 2 ,   a 1 ,   a 2 ;                                             / *     F i l t e r   c o e f f i c i e n t s                       * /  
     q 3 1 _ t   X n ;                                                                             / *     t e m p o r a r y   i n p u t                               * /  
     i n t 3 2 _ t   s h i f t   =   ( i n t 3 2 _ t )   S - > p o s t S h i f t   +   1 ;         / *     S h i f t   t o   b e   a p p l i e d   t o   t h e   o u t p u t   * /  
     u i n t 3 2 _ t   s a m p l e ,   s t a g e   =   S - > n u m S t a g e s ;                   / *     l o o p   c o u n t e r s                                           * /  
     q 3 1 _ t   a c c _ l ,   a c c _ h ;                                                         / *     t e m p o r a r y   o u t p u t                               * /  
     u i n t 3 2 _ t   u S h i f t   =   ( ( u i n t 3 2 _ t )   S - > p o s t S h i f t   +   1 U ) ;  
     u i n t 3 2 _ t   l S h i f t   =   3 2 U   -   u S h i f t ;                                 / *     S h i f t   t o   b e   a p p l i e d   t o   t h e   o u t p u t   * /  
  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 3   * /  
  
     d o  
     {  
         / *   R e a d i n g   t h e   c o e f f i c i e n t s   * /  
         b 0   =   * p C o e f f s + + ;  
         b 1   =   * p C o e f f s + + ;  
         b 2   =   * p C o e f f s + + ;  
         a 1   =   * p C o e f f s + + ;  
         a 2   =   * p C o e f f s + + ;  
  
         / *   R e a d i n g   t h e   s t a t e   v a l u e s   * /  
         X n 1   =   ( q 3 1 _ t )   ( p S t a t e [ 0 ] ) ;  
         X n 2   =   ( q 3 1 _ t )   ( p S t a t e [ 1 ] ) ;  
         Y n 1   =   p S t a t e [ 2 ] ;  
         Y n 2   =   p S t a t e [ 3 ] ;  
  
         / *   A p p l y   l o o p   u n r o l l i n g   a n d   c o m p u t e   4   o u t p u t   v a l u e s   s i m u l t a n e o u s l y .   * /  
         / *   T h e   v a r i a b l e   a c c   h o l d   o u t p u t   v a l u e   t h a t   i s   b e i n g   c o m p u t e d   a n d  
           *   s t o r e d   i n   t h e   d e s t i n a t i o n   b u f f e r  
           *   a c c   =     b 0   *   x [ n ]   +   b 1   *   x [ n - 1 ]   +   b 2   *   x [ n - 2 ]   +   a 1   *   y [ n - 1 ]   +   a 2   *   y [ n - 2 ]  
           * /  
  
         s a m p l e   =   b l o c k S i z e   > >   2 U ;  
  
         / *   F i r s t   p a r t   o f   t h e   p r o c e s s i n g   w i t h   l o o p   u n r o l l i n g .   C o m p u t e   4   o u t p u t s   a t   a   t i m e .  
           * *   a   s e c o n d   l o o p   b e l o w   c o m p u t e s   t h e   r e m a i n i n g   1   t o   3   s a m p l e s .   * /  
         w h i l e   ( s a m p l e   >   0 U )  
         {  
             / *   R e a d   t h e   i n p u t   * /  
             X n   =   * p I n + + ;  
  
             / *   a c c   =     b 0   *   x [ n ]   +   b 1   *   x [ n - 1 ]   +   b 2   *   x [ n - 2 ]   +   a 1   *   y [ n - 1 ]   +   a 2   *   y [ n - 2 ]   * /  
  
             / *   a c c   =     b 0   *   x [ n ]   * /  
             a c c   =   ( q 6 3 _ t )   X n   * b 0 ;  
  
             / *   a c c   + =     b 1   *   x [ n - 1 ]   * /  
             a c c   + =   ( q 6 3 _ t )   X n 1   * b 1 ;  
  
             / *   a c c   + =     b [ 2 ]   *   x [ n - 2 ]   * /  
             a c c   + =   ( q 6 3 _ t )   X n 2   * b 2 ;  
  
             / *   a c c   + =     a 1   *   y [ n - 1 ]   * /  
             a c c   + =   m u l t 3 2 x 6 4 ( Y n 1 ,   a 1 ) ;  
  
             / *   a c c   + =     a 2   *   y [ n - 2 ]   * /  
             a c c   + =   m u l t 3 2 x 6 4 ( Y n 2 ,   a 2 ) ;  
  
             / *   T h e   r e s u l t   i s   c o n v e r t e d   t o   1 . 6 3   ,   Y n 2   v a r i a b l e   i s   r e u s e d   * /  
             Y n 2   =   a c c   < <   s h i f t ;  
  
             / *   C a l c   l o w e r   p a r t   o f   a c c   * /  
             a c c _ l   =   a c c   &   0 x f f f f f f f f ;  
  
             / *   C a l c   u p p e r   p a r t   o f   a c c   * /  
             a c c _ h   =   ( a c c   > >   3 2 )   &   0 x f f f f f f f f ;  
  
             / *   A p p l y   s h i f t   f o r   l o w e r   p a r t   o f   a c c   a n d   u p p e r   p a r t   o f   a c c   * /  
             a c c _ h   =   ( u i n t 3 2 _ t )   a c c _ l   > >   l S h i f t   |   a c c _ h   < <   u S h i f t ;  
  
             / *   S t o r e   t h e   o u t p u t   i n   t h e   d e s t i n a t i o n   b u f f e r   i n   1 . 3 1   f o r m a t .   * /  
             * p O u t   =   a c c _ h ;  
  
             / *   R e a d   t h e   s e c o n d   i n p u t   i n t o   X n 2 ,   t o   r e u s e   t h e   v a l u e   * /  
             X n 2   =   * p I n + + ;  
  
             / *   a c c   =     b 0   *   x [ n ]   +   b 1   *   x [ n - 1 ]   +   b 2   *   x [ n - 2 ]   +   a 1   *   y [ n - 1 ]   +   a 2   *   y [ n - 2 ]   * /  
  
             / *   a c c   + =     b 1   *   x [ n - 1 ]   * /  
             a c c   =   ( q 6 3 _ t )   X n   * b 1 ;  
  
             / *   a c c   =     b 0   *   x [ n ]   * /  
             a c c   + =   ( q 6 3 _ t )   X n 2   * b 0 ;  
  
             / *   a c c   + =     b [ 2 ]   *   x [ n - 2 ]   * /  
             a c c   + =   ( q 6 3 _ t )   X n 1   * b 2 ;  
  
             / *   a c c   + =     a 1   *   y [ n - 1 ]   * /  
             a c c   + =   m u l t 3 2 x 6 4 ( Y n 2 ,   a 1 ) ;  
  
             / *   a c c   + =     a 2   *   y [ n - 2 ]   * /  
             a c c   + =   m u l t 3 2 x 6 4 ( Y n 1 ,   a 2 ) ;  
  
             / *   T h e   r e s u l t   i s   c o n v e r t e d   t o   1 . 6 3 ,   Y n 1   v a r i a b l e   i s   r e u s e d   * /  
             Y n 1   =   a c c   < <   s h i f t ;  
  
             / *   C a l c   l o w e r   p a r t   o f   a c c   * /  
             a c c _ l   =   a c c   &   0 x f f f f f f f f ;  
  
             / *   C a l c   u p p e r   p a r t   o f   a c c   * /  
             a c c _ h   =   ( a c c   > >   3 2 )   &   0 x f f f f f f f f ;  
  
             / *   A p p l y   s h i f t   f o r   l o w e r   p a r t   o f   a c c   a n d   u p p e r   p a r t   o f   a c c   * /  
             a c c _ h   =   ( u i n t 3 2 _ t )   a c c _ l   > >   l S h i f t   |   a c c _ h   < <   u S h i f t ;  
  
             / *   R e a d   t h e   t h i r d   i n p u t   i n t o   X n 1 ,   t o   r e u s e   t h e   v a l u e   * /  
             X n 1   =   * p I n + + ;  
  
             / *   T h e   r e s u l t   i s   c o n v e r t e d   t o   1 . 3 1   * /  
             / *   S t o r e   t h e   o u t p u t   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
             * ( p O u t   +   1 U )   =   a c c _ h ;  
  
             / *   a c c   =     b 0   *   x [ n ]   +   b 1   *   x [ n - 1 ]   +   b 2   *   x [ n - 2 ]   +   a 1   *   y [ n - 1 ]   +   a 2   *   y [ n - 2 ]   * /  
  
             / *   a c c   =     b 0   *   x [ n ]   * /  
             a c c   =   ( q 6 3 _ t )   X n 1   * b 0 ;  
  
             / *   a c c   + =     b 1   *   x [ n - 1 ]   * /  
             a c c   + =   ( q 6 3 _ t )   X n 2   * b 1 ;  
  
             / *   a c c   + =     b [ 2 ]   *   x [ n - 2 ]   * /  
             a c c   + =   ( q 6 3 _ t )   X n   * b 2 ;  
  
             / *   a c c   + =     a 1   *   y [ n - 1 ]   * /  
             a c c   + =   m u l t 3 2 x 6 4 ( Y n 1 ,   a 1 ) ;  
  
             / *   a c c   + =     a 2   *   y [ n - 2 ]   * /  
             a c c   + =   m u l t 3 2 x 6 4 ( Y n 2 ,   a 2 ) ;  
  
             / *   T h e   r e s u l t   i s   c o n v e r t e d   t o   1 . 6 3 ,   Y n 2   v a r i a b l e   i s   r e u s e d     * /  
             Y n 2   =   a c c   < <   s h i f t ;  
  
             / *   C a l c   l o w e r   p a r t   o f   a c c   * /  
             a c c _ l   =   a c c   &   0 x f f f f f f f f ;  
  
             / *   C a l c   u p p e r   p a r t   o f   a c c   * /  
             a c c _ h   =   ( a c c   > >   3 2 )   &   0 x f f f f f f f f ;  
  
             / *   A p p l y   s h i f t   f o r   l o w e r   p a r t   o f   a c c   a n d   u p p e r   p a r t   o f   a c c   * /  
             a c c _ h   =   ( u i n t 3 2 _ t )   a c c _ l   > >   l S h i f t   |   a c c _ h   < <   u S h i f t ;  
  
             / *   S t o r e   t h e   o u t p u t   i n   t h e   d e s t i n a t i o n   b u f f e r   i n   1 . 3 1   f o r m a t .   * /  
             * ( p O u t   +   2 U )   =   a c c _ h ;  
  
             / *   R e a d   t h e   f o u r t h   i n p u t   i n t o   X n ,   t o   r e u s e   t h e   v a l u e   * /  
             X n   =   * p I n + + ;  
  
             / *   a c c   =     b 0   *   x [ n ]   +   b 1   *   x [ n - 1 ]   +   b 2   *   x [ n - 2 ]   +   a 1   *   y [ n - 1 ]   +   a 2   *   y [ n - 2 ]   * /  
             / *   a c c   =     b 0   *   x [ n ]   * /  
             a c c   =   ( q 6 3 _ t )   X n   * b 0 ;  
  
             / *   a c c   + =     b 1   *   x [ n - 1 ]   * /  
             a c c   + =   ( q 6 3 _ t )   X n 1   * b 1 ;  
  
             / *   a c c   + =     b [ 2 ]   *   x [ n - 2 ]   * /  
             a c c   + =   ( q 6 3 _ t )   X n 2   * b 2 ;  
  
             / *   a c c   + =     a 1   *   y [ n - 1 ]   * /  
             a c c   + =   m u l t 3 2 x 6 4 ( Y n 2 ,   a 1 ) ;  
  
             / *   a c c   + =     a 2   *   y [ n - 2 ]   * /  
             a c c   + =   m u l t 3 2 x 6 4 ( Y n 1 ,   a 2 ) ;  
  
             / *   T h e   r e s u l t   i s   c o n v e r t e d   t o   1 . 6 3 ,   Y n 1   v a r i a b l e   i s   r e u s e d     * /  
             Y n 1   =   a c c   < <   s h i f t ;  
  
             / *   C a l c   l o w e r   p a r t   o f   a c c   * /  
             a c c _ l   =   a c c   &   0 x f f f f f f f f ;  
  
             / *   C a l c   u p p e r   p a r t   o f   a c c   * /  
             a c c _ h   =   ( a c c   > >   3 2 )   &   0 x f f f f f f f f ;  
  
             / *   A p p l y   s h i f t   f o r   l o w e r   p a r t   o f   a c c   a n d   u p p e r   p a r t   o f   a c c   * /  
             a c c _ h   =   ( u i n t 3 2 _ t )   a c c _ l   > >   l S h i f t   |   a c c _ h   < <   u S h i f t ;  
  
             / *   S t o r e   t h e   o u t p u t   i n   t h e   d e s t i n a t i o n   b u f f e r   i n   1 . 3 1   f o r m a t .   * /  
             * ( p O u t   +   3 U )   =   a c c _ h ;  
  
             / *   E v e r y   t i m e   a f t e r   t h e   o u t p u t   i s   c o m p u t e d   s t a t e   s h o u l d   b e   u p d a t e d .   * /  
             / *   T h e   s t a t e s   s h o u l d   b e   u p d a t e d   a s :     * /  
             / *   X n 2   =   X n 1         * /  
             / *   X n 1   =   X n           * /  
             / *   Y n 2   =   Y n 1         * /  
             / *   Y n 1   =   a c c         * /  
             X n 2   =   X n 1 ;  
             X n 1   =   X n ;  
  
             / *   u p d a t e   o u t p u t   p o i n t e r   * /  
             p O u t   + =   4 U ;  
  
             / *   d e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             s a m p l e - - ;  
         }  
  
         / *   I f   t h e   b l o c k S i z e   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   a n y   r e m a i n i n g   o u t p u t   s a m p l e s   h e r e .  
           * *   N o   l o o p   u n r o l l i n g   i s   u s e d .   * /  
         s a m p l e   =   ( b l o c k S i z e   &   0 x 3 U ) ;  
  
         w h i l e   ( s a m p l e   >   0 U )  
         {  
             / *   R e a d   t h e   i n p u t   * /  
             X n   =   * p I n + + ;  
  
             / *   a c c   =     b 0   *   x [ n ]   +   b 1   *   x [ n - 1 ]   +   b 2   *   x [ n - 2 ]   +   a 1   *   y [ n - 1 ]   +   a 2   *   y [ n - 2 ]   * /  
  
             / *   a c c   =     b 0   *   x [ n ]   * /  
             a c c   =   ( q 6 3 _ t )   X n   * b 0 ;  
             / *   a c c   + =     b 1   *   x [ n - 1 ]   * /  
             a c c   + =   ( q 6 3 _ t )   X n 1   * b 1 ;  
             / *   a c c   + =     b [ 2 ]   *   x [ n - 2 ]   * /  
             a c c   + =   ( q 6 3 _ t )   X n 2   * b 2 ;  
             / *   a c c   + =     a 1   *   y [ n - 1 ]   * /  
             a c c   + =   m u l t 3 2 x 6 4 ( Y n 1 ,   a 1 ) ;  
             / *   a c c   + =     a 2   *   y [ n - 2 ]   * /  
             a c c   + =   m u l t 3 2 x 6 4 ( Y n 2 ,   a 2 ) ;  
  
             / *   E v e r y   t i m e   a f t e r   t h e   o u t p u t   i s   c o m p u t e d   s t a t e   s h o u l d   b e   u p d a t e d .   * /  
             / *   T h e   s t a t e s   s h o u l d   b e   u p d a t e d   a s :     * /  
             / *   X n 2   =   X n 1         * /  
             / *   X n 1   =   X n           * /  
             / *   Y n 2   =   Y n 1         * /  
             / *   Y n 1   =   a c c         * /  
             X n 2   =   X n 1 ;  
             X n 1   =   X n ;  
             Y n 2   =   Y n 1 ;  
             / *   T h e   r e s u l t   i s   c o n v e r t e d   t o   1 . 6 3 ,   Y n 1   v a r i a b l e   i s   r e u s e d     * /  
             Y n 1   =   a c c   < <   s h i f t ;  
  
             / *   C a l c   l o w e r   p a r t   o f   a c c   * /  
             a c c _ l   =   a c c   &   0 x f f f f f f f f ;  
  
             / *   C a l c   u p p e r   p a r t   o f   a c c   * /  
             a c c _ h   =   ( a c c   > >   3 2 )   &   0 x f f f f f f f f ;  
  
             / *   A p p l y   s h i f t   f o r   l o w e r   p a r t   o f   a c c   a n d   u p p e r   p a r t   o f   a c c   * /  
             a c c _ h   =   ( u i n t 3 2 _ t )   a c c _ l   > >   l S h i f t   |   a c c _ h   < <   u S h i f t ;  
  
             / *   S t o r e   t h e   o u t p u t   i n   t h e   d e s t i n a t i o n   b u f f e r   i n   1 . 3 1   f o r m a t .   * /  
             * p O u t + +   =   a c c _ h ;  
             / *   Y n 1   =   a c c   < <   s h i f t ;   * /  
  
             / *   S t o r e   t h e   o u t p u t   i n   t h e   d e s t i n a t i o n   b u f f e r   i n   1 . 3 1   f o r m a t .   * /  
 / *             * p O u t + +   =   ( q 3 1 _ t )   ( a c c   > >   ( 3 2   -   s h i f t ) ) ;     * /  
  
             / *   d e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             s a m p l e - - ;  
         }  
  
         / *     T h e   f i r s t   s t a g e   o u t p u t   i s   g i v e n   a s   i n p u t   t o   t h e   s e c o n d   s t a g e .   * /  
         p I n   =   p D s t ;  
  
         / *   R e s e t   t o   d e s t i n a t i o n   b u f f e r   w o r k i n g   p o i n t e r   * /  
         p O u t   =   p D s t ;  
  
         / *     S t o r e   t h e   u p d a t e d   s t a t e   v a r i a b l e s   b a c k   i n t o   t h e   p S t a t e   a r r a y   * /  
         / *     S t o r e   t h e   u p d a t e d   s t a t e   v a r i a b l e s   b a c k   i n t o   t h e   p S t a t e   a r r a y   * /  
         * p S t a t e + +   =   ( q 6 3 _ t )   X n 1 ;  
         * p S t a t e + +   =   ( q 6 3 _ t )   X n 2 ;  
         * p S t a t e + +   =   Y n 1 ;  
         * p S t a t e + +   =   Y n 2 ;  
  
     }   w h i l e   ( - - s t a g e ) ;  
  
 # e l s e  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 0   * /  
  
     d o  
     {  
         / *   R e a d i n g   t h e   c o e f f i c i e n t s   * /  
         b 0   =   * p C o e f f s + + ;  
         b 1   =   * p C o e f f s + + ;  
         b 2   =   * p C o e f f s + + ;  
         a 1   =   * p C o e f f s + + ;  
         a 2   =   * p C o e f f s + + ;  
  
         / *   R e a d i n g   t h e   s t a t e   v a l u e s   * /  
         X n 1   =   p S t a t e [ 0 ] ;  
         X n 2   =   p S t a t e [ 1 ] ;  
         Y n 1   =   p S t a t e [ 2 ] ;  
         Y n 2   =   p S t a t e [ 3 ] ;  
  
         / *   T h e   v a r i a b l e   a c c   h o l d   o u t p u t   v a l u e   t h a t   i s   b e i n g   c o m p u t e d   a n d  
           *   s t o r e d   i n   t h e   d e s t i n a t i o n   b u f f e r  
           *   a c c   =     b 0   *   x [ n ]   +   b 1   *   x [ n - 1 ]   +   b 2   *   x [ n - 2 ]   +   a 1   *   y [ n - 1 ]   +   a 2   *   y [ n - 2 ]  
           * /  
  
         s a m p l e   =   b l o c k S i z e ;  
  
         w h i l e   ( s a m p l e   >   0 U )  
         {  
             / *   R e a d   t h e   i n p u t   * /  
             X n   =   * p I n + + ;  
  
             / *   a c c   =     b 0   *   x [ n ]   +   b 1   *   x [ n - 1 ]   +   b 2   *   x [ n - 2 ]   +   a 1   *   y [ n - 1 ]   +   a 2   *   y [ n - 2 ]   * /  
             / *   a c c   =     b 0   *   x [ n ]   * /  
             a c c   =   ( q 6 3 _ t )   X n   * b 0 ;  
             / *   a c c   + =     b 1   *   x [ n - 1 ]   * /  
             a c c   + =   ( q 6 3 _ t )   X n 1   * b 1 ;  
             / *   a c c   + =     b [ 2 ]   *   x [ n - 2 ]   * /  
             a c c   + =   ( q 6 3 _ t )   X n 2   * b 2 ;  
             / *   a c c   + =     a 1   *   y [ n - 1 ]   * /  
             a c c   + =   m u l t 3 2 x 6 4 ( Y n 1 ,   a 1 ) ;  
             / *   a c c   + =     a 2   *   y [ n - 2 ]   * /  
             a c c   + =   m u l t 3 2 x 6 4 ( Y n 2 ,   a 2 ) ;  
  
             / *   E v e r y   t i m e   a f t e r   t h e   o u t p u t   i s   c o m p u t e d   s t a t e   s h o u l d   b e   u p d a t e d .   * /  
             / *   T h e   s t a t e s   s h o u l d   b e   u p d a t e d   a s :     * /  
             / *   X n 2   =   X n 1         * /  
             / *   X n 1   =   X n           * /  
             / *   Y n 2   =   Y n 1         * /  
             / *   Y n 1   =   a c c         * /  
             X n 2   =   X n 1 ;  
             X n 1   =   X n ;  
             Y n 2   =   Y n 1 ;  
  
             / *   T h e   r e s u l t   i s   c o n v e r t e d   t o   1 . 6 3 ,   Y n 1   v a r i a b l e   i s   r e u s e d     * /  
             Y n 1   =   a c c   < <   s h i f t ;  
  
             / *   C a l c   l o w e r   p a r t   o f   a c c   * /  
             a c c _ l   =   a c c   &   0 x f f f f f f f f ;  
  
             / *   C a l c   u p p e r   p a r t   o f   a c c   * /  
             a c c _ h   =   ( a c c   > >   3 2 )   &   0 x f f f f f f f f ;  
  
             / *   A p p l y   s h i f t   f o r   l o w e r   p a r t   o f   a c c   a n d   u p p e r   p a r t   o f   a c c   * /  
             a c c _ h   =   ( u i n t 3 2 _ t )   a c c _ l   > >   l S h i f t   |   a c c _ h   < <   u S h i f t ;  
  
             / *   S t o r e   t h e   o u t p u t   i n   t h e   d e s t i n a t i o n   b u f f e r   i n   1 . 3 1   f o r m a t .   * /  
             * p O u t + +   =   a c c _ h ;  
  
             / *   Y n 1   =   a c c   < <   s h i f t ;   * /  
  
             / *   S t o r e   t h e   o u t p u t   i n   t h e   d e s t i n a t i o n   b u f f e r   i n   1 . 3 1   f o r m a t .   * /  
             / *   * p O u t + +   =   ( q 3 1 _ t )   ( a c c   > >   ( 3 2   -   s h i f t ) ) ;   * /  
  
             / *   d e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             s a m p l e - - ;  
         }  
  
         / *     T h e   f i r s t   s t a g e   o u t p u t   i s   g i v e n   a s   i n p u t   t o   t h e   s e c o n d   s t a g e .   * /  
         p I n   =   p D s t ;  
  
         / *   R e s e t   t o   d e s t i n a t i o n   b u f f e r   w o r k i n g   p o i n t e r   * /  
         p O u t   =   p D s t ;  
  
         / *     S t o r e   t h e   u p d a t e d   s t a t e   v a r i a b l e s   b a c k   i n t o   t h e   p S t a t e   a r r a y   * /  
         * p S t a t e + +   =   ( q 6 3 _ t )   X n 1 ;  
         * p S t a t e + +   =   ( q 6 3 _ t )   X n 2 ;  
         * p S t a t e + +   =   Y n 1 ;  
         * p S t a t e + +   =   Y n 2 ;  
  
     }   w h i l e   ( - - s t a g e ) ;  
  
 # e n d i f   / *         # i f   d e f i n e d   ( A R M _ M A T H _ D S P )           * /  
 }  
  
     / * *  
       *   @ }   e n d   o f   B i q u a d C a s c a d e D F 1 _ 3 2 x 6 4   g r o u p  
       * /  