??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ l m s _ f 3 2 . c  
   *   D e s c r i p t i o n :     P r o c e s s i n g   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   L M S   f i l t e r  
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
   *   @ d e f g r o u p   L M S   L e a s t   M e a n   S q u a r e   ( L M S )   F i l t e r s  
   *  
   *   L M S   f i l t e r s   a r e   a   c l a s s   o f   a d a p t i v e   f i l t e r s   t h a t   a r e   a b l e   t o   " l e a r n "   a n   u n k n o w n   t r a n s f e r   f u n c t i o n s .  
   *   L M S   f i l t e r s   u s e   a   g r a d i e n t   d e s c e n t   m e t h o d   i n   w h i c h   t h e   f i l t e r   c o e f f i c i e n t s   a r e   u p d a t e d   b a s e d   o n   t h e   i n s t a n t a n e o u s   e r r o r   s i g n a l .  
   *   A d a p t i v e   f i l t e r s   a r e   o f t e n   u s e d   i n   c o m m u n i c a t i o n   s y s t e m s ,   e q u a l i z e r s ,   a n d   n o i s e   r e m o v a l .  
   *   T h e   C M S I S   D S P   L i b r a r y   c o n t a i n s   L M S   f i l t e r   f u n c t i o n s   t h a t   o p e r a t e   o n   Q 1 5 ,   Q 3 1 ,   a n d   f l o a t i n g - p o i n t   d a t a   t y p e s .  
   *   T h e   l i b r a r y   a l s o   c o n t a i n s   n o r m a l i z e d   L M S   f i l t e r s   i n   w h i c h   t h e   f i l t e r   c o e f f i c i e n t   a d a p t a t i o n   i s   i n d e p e d e n t   o f   t h e   l e v e l   o f   t h e   i n p u t   s i g n a l .  
   *  
   *   A n   L M S   f i l t e r   c o n s i s t s   o f   t w o   c o m p o n e n t s   a s   s h o w n   b e l o w .  
   *   T h e   f i r s t   c o m p o n e n t   i s   a   s t a n d a r d   t r a n s v e r s a l   o r   F I R   f i l t e r .  
   *   T h e   s e c o n d   c o m p o n e n t   i s   a   c o e f f i c i e n t   u p d a t e   m e c h a n i s m .  
   *   T h e   L M S   f i l t e r   h a s   t w o   i n p u t   s i g n a l s .  
   *   T h e   " i n p u t "   f e e d s   t h e   F I R   f i l t e r   w h i l e   t h e   " r e f e r e n c e   i n p u t "   c o r r e s p o n d s   t o   t h e   d e s i r e d   o u t p u t   o f   t h e   F I R   f i l t e r .  
   *   T h a t   i s ,   t h e   F I R   f i l t e r   c o e f f i c i e n t s   a r e   u p d a t e d   s o   t h a t   t h e   o u t p u t   o f   t h e   F I R   f i l t e r   m a t c h e s   t h e   r e f e r e n c e   i n p u t .  
   *   T h e   f i l t e r   c o e f f i c i e n t   u p d a t e   m e c h a n i s m   i s   b a s e d   o n   t h e   d i f f e r e n c e   b e t w e e n   t h e   F I R   f i l t e r   o u t p u t   a n d   t h e   r e f e r e n c e   i n p u t .  
   *   T h i s   " e r r o r   s i g n a l "   t e n d s   t o w a r d s   z e r o   a s   t h e   f i l t e r   a d a p t s .  
   *   T h e   L M S   p r o c e s s i n g   f u n c t i o n s   a c c e p t   t h e   i n p u t   a n d   r e f e r e n c e   i n p u t   s i g n a l s   a n d   g e n e r a t e   t h e   f i l t e r   o u t p u t   a n d   e r r o r   s i g n a l .  
   *   \ i m a g e   h t m l   L M S . g i f   " I n t e r n a l   s t r u c t u r e   o f   t h e   L e a s t   M e a n   S q u a r e   f i l t e r "  
   *  
   *   T h e   f u n c t i o n s   o p e r a t e   o n   b l o c k s   o f   d a t a   a n d   e a c h   c a l l   t o   t h e   f u n c t i o n   p r o c e s s e s  
   *   < c o d e > b l o c k S i z e < / c o d e >   s a m p l e s   t h r o u g h   t h e   f i l t e r .  
   *   < c o d e > p S r c < / c o d e >   p o i n t s   t o   i n p u t   s i g n a l ,   < c o d e > p R e f < / c o d e >   p o i n t s   t o   r e f e r e n c e   s i g n a l ,  
   *   < c o d e > p O u t < / c o d e >   p o i n t s   t o   o u t p u t   s i g n a l   a n d   < c o d e > p E r r < / c o d e >   p o i n t s   t o   e r r o r   s i g n a l .  
   *   A l l   a r r a y s   c o n t a i n   < c o d e > b l o c k S i z e < / c o d e >   v a l u e s .  
   *  
   *   T h e   f u n c t i o n s   o p e r a t e   o n   a   b l o c k - b y - b l o c k   b a s i s .  
   *   I n t e r n a l l y ,   t h e   f i l t e r   c o e f f i c i e n t s   < c o d e > b [ n ] < / c o d e >   a r e   u p d a t e d   o n   a   s a m p l e - b y - s a m p l e   b a s i s .  
   *   T h e   c o n v e r g e n c e   o f   t h e   L M S   f i l t e r   i s   s l o w e r   c o m p a r e d   t o   t h e   n o r m a l i z e d   L M S   a l g o r i t h m .  
   *  
   *   \ p a r   A l g o r i t h m :  
   *   T h e   o u t p u t   s i g n a l   < c o d e > y [ n ] < / c o d e >   i s   c o m p u t e d   b y   a   s t a n d a r d   F I R   f i l t e r :  
   *   < p r e >  
   *           y [ n ]   =   b [ 0 ]   *   x [ n ]   +   b [ 1 ]   *   x [ n - 1 ]   +   b [ 2 ]   *   x [ n - 2 ]   +   . . . +   b [ n u m T a p s - 1 ]   *   x [ n - n u m T a p s + 1 ]  
   *   < / p r e >  
   *  
   *   \ p a r  
   *   T h e   e r r o r   s i g n a l   e q u a l s   t h e   d i f f e r e n c e   b e t w e e n   t h e   r e f e r e n c e   s i g n a l   < c o d e > d [ n ] < / c o d e >   a n d   t h e   f i l t e r   o u t p u t :  
   *   < p r e >  
   *           e [ n ]   =   d [ n ]   -   y [ n ] .  
   *   < / p r e >  
   *  
   *   \ p a r  
   *   A f t e r   e a c h   s a m p l e   o f   t h e   e r r o r   s i g n a l   i s   c o m p u t e d ,   t h e   f i l t e r   c o e f f i c i e n t s   < c o d e > b [ k ] < / c o d e >   a r e   u p d a t e d   o n   a   s a m p l e - b y - s a m p l e   b a s i s :  
   *   < p r e >  
   *           b [ k ]   =   b [ k ]   +   e [ n ]   *   m u   *   x [ n - k ] ,     f o r   k = 0 ,   1 ,   . . . ,   n u m T a p s - 1  
   *   < / p r e >  
   *   w h e r e   < c o d e > m u < / c o d e >   i s   t h e   s t e p   s i z e   a n d   c o n t r o l s   t h e   r a t e   o f   c o e f f i c i e n t   c o n v e r g e n c e .  
   * \ p a r  
   *   I n   t h e   A P I s ,   < c o d e > p C o e f f s < / c o d e >   p o i n t s   t o   a   c o e f f i c i e n t   a r r a y   o f   s i z e   < c o d e > n u m T a p s < / c o d e > .  
   *   C o e f f i c i e n t s   a r e   s t o r e d   i n   t i m e   r e v e r s e d   o r d e r .  
   *   \ p a r  
   *   < p r e >  
   *         { b [ n u m T a p s - 1 ] ,   b [ n u m T a p s - 2 ] ,   b [ N - 2 ] ,   . . . ,   b [ 1 ] ,   b [ 0 ] }  
   *   < / p r e >  
   *   \ p a r  
   *   < c o d e > p S t a t e < / c o d e >   p o i n t s   t o   a   s t a t e   a r r a y   o f   s i z e   < c o d e > n u m T a p s   +   b l o c k S i z e   -   1 < / c o d e > .  
   *   S a m p l e s   i n   t h e   s t a t e   b u f f e r   a r e   s t o r e d   i n   t h e   o r d e r :  
   *   \ p a r  
   *   < p r e >  
   *         { x [ n - n u m T a p s + 1 ] ,   x [ n - n u m T a p s ] ,   x [ n - n u m T a p s - 1 ] ,   x [ n - n u m T a p s - 2 ] . . . . x [ 0 ] ,   x [ 1 ] ,   . . . ,   x [ b l o c k S i z e - 1 ] }  
   *   < / p r e >  
   *   \ p a r  
   *   N o t e   t h a t   t h e   l e n g t h   o f   t h e   s t a t e   b u f f e r   e x c e e d s   t h e   l e n g t h   o f   t h e   c o e f f i c i e n t   a r r a y   b y   < c o d e > b l o c k S i z e - 1 < / c o d e >   s a m p l e s .  
   *   T h e   i n c r e a s e d   s t a t e   b u f f e r   l e n g t h   a l l o w s   c i r c u l a r   a d d r e s s i n g ,   w h i c h   i s   t r a d i t i o n a l l y   u s e d   i n   F I R   f i l t e r s ,  
   *   t o   b e   a v o i d e d   a n d   y i e l d s   a   s i g n i f i c a n t   s p e e d   i m p r o v e m e n t .  
   *   T h e   s t a t e   v a r i a b l e s   a r e   u p d a t e d   a f t e r   e a c h   b l o c k   o f   d a t a   i s   p r o c e s s e d .  
   *   \ p a r   I n s t a n c e   S t r u c t u r e  
   *   T h e   c o e f f i c i e n t s   a n d   s t a t e   v a r i a b l e s   f o r   a   f i l t e r   a r e   s t o r e d   t o g e t h e r   i n   a n   i n s t a n c e   d a t a   s t r u c t u r e .  
   *   A   s e p a r a t e   i n s t a n c e   s t r u c t u r e   m u s t   b e   d e f i n e d   f o r   e a c h   f i l t e r   a n d  
   *   c o e f f i c i e n t   a n d   s t a t e   a r r a y s   c a n n o t   b e   s h a r e d   a m o n g   i n s t a n c e s .  
   *   T h e r e   a r e   s e p a r a t e   i n s t a n c e   s t r u c t u r e   d e c l a r a t i o n s   f o r   e a c h   o f   t h e   3   s u p p o r t e d   d a t a   t y p e s .  
   *  
   *   \ p a r   I n i t i a l i z a t i o n   F u n c t i o n s  
   *   T h e r e   i s   a l s o   a n   a s s o c i a t e d   i n i t i a l i z a t i o n   f u n c t i o n   f o r   e a c h   d a t a   t y p e .  
   *   T h e   i n i t i a l i z a t i o n   f u n c t i o n   p e r f o r m s   t h e   f o l l o w i n g   o p e r a t i o n s :  
   *   -   S e t s   t h e   v a l u e s   o f   t h e   i n t e r n a l   s t r u c t u r e   f i e l d s .  
   *   -   Z e r o s   o u t   t h e   v a l u e s   i n   t h e   s t a t e   b u f f e r .  
   *   T o   d o   t h i s   m a n u a l l y   w i t h o u t   c a l l i n g   t h e   i n i t   f u n c t i o n ,   a s s i g n   t h e   f o l l o w   s u b f i e l d s   o f   t h e   i n s t a n c e   s t r u c t u r e :  
   *   n u m T a p s ,   p C o e f f s ,   m u ,   p o s t S h i f t   ( n o t   f o r   f 3 2 ) ,   p S t a t e .   A l s o   s e t   a l l   o f   t h e   v a l u e s   i n   p S t a t e   t o   z e r o .  
   *  
   *   \ p a r  
   *   U s e   o f   t h e   i n i t i a l i z a t i o n   f u n c t i o n   i s   o p t i o n a l .  
   *   H o w e v e r ,   i f   t h e   i n i t i a l i z a t i o n   f u n c t i o n   i s   u s e d ,   t h e n   t h e   i n s t a n c e   s t r u c t u r e   c a n n o t   b e   p l a c e d   i n t o   a   c o n s t   d a t a   s e c t i o n .  
   *   T o   p l a c e   a n   i n s t a n c e   s t r u c t u r e   i n t o   a   c o n s t   d a t a   s e c t i o n ,   t h e   i n s t a n c e   s t r u c t u r e   m u s t   b e   m a n u a l l y   i n i t i a l i z e d .  
   *   S e t   t h e   v a l u e s   i n   t h e   s t a t e   b u f f e r   t o   z e r o s   b e f o r e   s t a t i c   i n i t i a l i z a t i o n .  
   *   T h e   c o d e   b e l o w   s t a t i c a l l y   i n i t i a l i z e s   e a c h   o f   t h e   3   d i f f e r e n t   d a t a   t y p e   f i l t e r   i n s t a n c e   s t r u c t u r e s  
   *   < p r e >  
   *         a r m _ l m s _ i n s t a n c e _ f 3 2   S   =   { n u m T a p s ,   p S t a t e ,   p C o e f f s ,   m u } ;  
   *         a r m _ l m s _ i n s t a n c e _ q 3 1   S   =   { n u m T a p s ,   p S t a t e ,   p C o e f f s ,   m u ,   p o s t S h i f t } ;  
   *         a r m _ l m s _ i n s t a n c e _ q 1 5   S   =   { n u m T a p s ,   p S t a t e ,   p C o e f f s ,   m u ,   p o s t S h i f t } ;  
   *   < / p r e >  
   *   w h e r e   < c o d e > n u m T a p s < / c o d e >   i s   t h e   n u m b e r   o f   f i l t e r   c o e f f i c i e n t s   i n   t h e   f i l t e r ;   < c o d e > p S t a t e < / c o d e >   i s   t h e   a d d r e s s   o f   t h e   s t a t e   b u f f e r ;  
   *   < c o d e > p C o e f f s < / c o d e >   i s   t h e   a d d r e s s   o f   t h e   c o e f f i c i e n t   b u f f e r ;   < c o d e > m u < / c o d e >   i s   t h e   s t e p   s i z e   p a r a m e t e r ;   a n d   < c o d e > p o s t S h i f t < / c o d e >   i s   t h e   s h i f t   a p p l i e d   t o   c o e f f i c i e n t s .  
   *  
   *   \ p a r   F i x e d - P o i n t   B e h a v i o r :  
   *   C a r e   m u s t   b e   t a k e n   w h e n   u s i n g   t h e   Q 1 5   a n d   Q 3 1   v e r s i o n s   o f   t h e   L M S   f i l t e r .  
   *   T h e   f o l l o w i n g   i s s u e s   m u s t   b e   c o n s i d e r e d :  
   *   -   S c a l i n g   o f   c o e f f i c i e n t s  
   *   -   O v e r f l o w   a n d   s a t u r a t i o n  
   *  
   *   \ p a r   S c a l i n g   o f   C o e f f i c i e n t s :  
   *   F i l t e r   c o e f f i c i e n t s   a r e   r e p r e s e n t e d   a s   f r a c t i o n a l   v a l u e s   a n d  
   *   c o e f f i c i e n t s   a r e   r e s t r i c t e d   t o   l i e   i n   t h e   r a n g e   < c o d e > [ - 1   + 1 ) < / c o d e > .  
   *   T h e   f i x e d - p o i n t   f u n c t i o n s   h a v e   a n   a d d i t i o n a l   s c a l i n g   p a r a m e t e r   < c o d e > p o s t S h i f t < / c o d e > .  
   *   A t   t h e   o u t p u t   o f   t h e   f i l t e r ' s   a c c u m u l a t o r   i s   a   s h i f t   r e g i s t e r   w h i c h   s h i f t s   t h e   r e s u l t   b y   < c o d e > p o s t S h i f t < / c o d e >   b i t s .  
   *   T h i s   e s s e n t i a l l y   s c a l e s   t h e   f i l t e r   c o e f f i c i e n t s   b y   < c o d e > 2 ^ p o s t S h i f t < / c o d e >   a n d  
   *   a l l o w s   t h e   f i l t e r   c o e f f i c i e n t s   t o   e x c e e d   t h e   r a n g e   < c o d e > [ + 1   - 1 ) < / c o d e > .  
   *   T h e   v a l u e   o f   < c o d e > p o s t S h i f t < / c o d e >   i s   s e t   b y   t h e   u s e r   b a s e d   o n   t h e   e x p e c t e d   g a i n   t h r o u g h   t h e   s y s t e m   b e i n g   m o d e l e d .  
   *  
   *   \ p a r   O v e r f l o w   a n d   S a t u r a t i o n :  
   *   O v e r f l o w   a n d   s a t u r a t i o n   b e h a v i o r   o f   t h e   f i x e d - p o i n t   Q 1 5   a n d   Q 3 1   v e r s i o n s   a r e  
   *   d e s c r i b e d   s e p a r a t e l y   a s   p a r t   o f   t h e   f u n c t i o n   s p e c i f i c   d o c u m e n t a t i o n   b e l o w .  
   * /  
  
 / * *  
   *   @ a d d t o g r o u p   L M S  
   *   @ {  
   * /  
  
 / * *  
   *   @ d e t a i l s  
   *   T h i s   f u n c t i o n   o p e r a t e s   o n   f l o a t i n g - p o i n t   d a t a   t y p e s .  
   *  
   *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   f l o a t i n g - p o i n t   L M S   f i l t e r .  
   *   @ p a r a m [ i n ]     * S   p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   L M S   f i l t e r   s t r u c t u r e .  
   *   @ p a r a m [ i n ]     * p S r c   p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
   *   @ p a r a m [ i n ]     * p R e f   p o i n t s   t o   t h e   b l o c k   o f   r e f e r e n c e   d a t a .  
   *   @ p a r a m [ o u t ]   * p O u t   p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
   *   @ p a r a m [ o u t ]   * p E r r   p o i n t s   t o   t h e   b l o c k   o f   e r r o r   d a t a .  
   *   @ p a r a m [ i n ]     b l o c k S i z e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
   *   @ r e t u r n           n o n e .  
   * /  
  
 v o i d   a r m _ l m s _ f 3 2 (  
     c o n s t   a r m _ l m s _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p R e f ,  
     f l o a t 3 2 _ t   *   p O u t ,  
     f l o a t 3 2 _ t   *   p E r r ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     f l o a t 3 2 _ t   * p S t a t e   =   S - > p S t a t e ;                                   / *   S t a t e   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p C o e f f s   =   S - > p C o e f f s ;                               / *   C o e f f i c i e n t   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p S t a t e C u r n t ;                                                 / *   P o i n t s   t o   t h e   c u r r e n t   s a m p l e   o f   t h e   s t a t e   * /  
     f l o a t 3 2 _ t   * p x ,   * p b ;                                                         / *   T e m p o r a r y   p o i n t e r s   f o r   s t a t e   a n d   c o e f f i c i e n t   b u f f e r s   * /  
     f l o a t 3 2 _ t   m u   =   S - > m u ;                                                     / *   A d a p t i v e   f a c t o r   * /  
     u i n t 3 2 _ t   n u m T a p s   =   S - > n u m T a p s ;                                   / *   N u m b e r   o f   f i l t e r   c o e f f i c i e n t s   i n   t h e   f i l t e r   * /  
     u i n t 3 2 _ t   t a p C n t ,   b l k C n t ;                                               / *   L o o p   c o u n t e r s   * /  
     f l o a t 3 2 _ t   s u m ,   e ,   d ;                                                       / *   a c c u m u l a t o r ,   e r r o r ,   r e f e r e n c e   d a t a   s a m p l e   * /  
     f l o a t 3 2 _ t   w   =   0 . 0 f ;                                                         / *   w e i g h t   f a c t o r   * /  
  
     e   =   0 . 0 f ;  
     d   =   0 . 0 f ;  
  
     / *   S - > p S t a t e   p o i n t s   t o   s t a t e   a r r a y   w h i c h   c o n t a i n s   p r e v i o u s   f r a m e   ( n u m T a p s   -   1 )   s a m p l e s   * /  
     / *   p S t a t e C u r n t   p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   n e w   i n p u t   d a t a   s h o u l d   b e   w r i t t e n   * /  
     p S t a t e C u r n t   =   & ( S - > p S t a t e [ ( n u m T a p s   -   1 U ) ] ) ;  
  
     b l k C n t   =   b l o c k S i z e ;  
  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 3   * /  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C o p y   t h e   n e w   i n p u t   s a m p l e   i n t o   t h e   s t a t e   b u f f e r   * /  
         * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
         / *   I n i t i a l i z e   p S t a t e   p o i n t e r   * /  
         p x   =   p S t a t e ;  
  
         / *   I n i t i a l i z e   c o e f f   p o i n t e r   * /  
         p b   =   ( p C o e f f s ) ;  
  
         / *   S e t   t h e   a c c u m u l a t o r   t o   z e r o   * /  
         s u m   =   0 . 0 f ;  
  
         / *   L o o p   u n r o l l i n g .     P r o c e s s   4   t a p s   a t   a   t i m e .   * /  
         t a p C n t   =   n u m T a p s   > >   2 ;  
  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             s u m   + =   ( * p x + + )   *   ( * p b + + ) ;  
             s u m   + =   ( * p x + + )   *   ( * p b + + ) ;  
             s u m   + =   ( * p x + + )   *   ( * p b + + ) ;  
             s u m   + =   ( * p x + + )   *   ( * p b + + ) ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
         }  
  
         / *   I f   t h e   f i l t e r   l e n g t h   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   t h e   r e m a i n i n g   f i l t e r   t a p s   * /  
         t a p C n t   =   n u m T a p s   %   0 x 4 U ;  
  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             s u m   + =   ( * p x + + )   *   ( * p b + + ) ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
         }  
  
         / *   T h e   r e s u l t   i n   t h e   a c c u m u l a t o r ,   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
         * p O u t + +   =   s u m ;  
  
         / *   C o m p u t e   a n d   s t o r e   e r r o r   * /  
         d   =   ( f l o a t 3 2 _ t )   ( * p R e f + + ) ;  
         e   =   d   -   s u m ;  
         * p E r r + +   =   e ;  
  
         / *   C a l c u l a t i o n   o f   W e i g h t i n g   f a c t o r   f o r   t h e   u p d a t i n g   f i l t e r   c o e f f i c i e n t s   * /  
         w   =   e   *   m u ;  
  
         / *   I n i t i a l i z e   p S t a t e   p o i n t e r   * /  
         p x   =   p S t a t e ;  
  
         / *   I n i t i a l i z e   c o e f f   p o i n t e r   * /  
         p b   =   ( p C o e f f s ) ;  
  
         / *   L o o p   u n r o l l i n g .     P r o c e s s   4   t a p s   a t   a   t i m e .   * /  
         t a p C n t   =   n u m T a p s   > >   2 ;  
  
         / *   U p d a t e   f i l t e r   c o e f f i c i e n t s   * /  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             * p b   =   * p b   +   ( w   *   ( * p x + + ) ) ;  
             p b + + ;  
  
             * p b   =   * p b   +   ( w   *   ( * p x + + ) ) ;  
             p b + + ;  
  
             * p b   =   * p b   +   ( w   *   ( * p x + + ) ) ;  
             p b + + ;  
  
             * p b   =   * p b   +   ( w   *   ( * p x + + ) ) ;  
             p b + + ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
         }  
  
         / *   I f   t h e   f i l t e r   l e n g t h   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   t h e   r e m a i n i n g   f i l t e r   t a p s   * /  
         t a p C n t   =   n u m T a p s   %   0 x 4 U ;  
  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             * p b   =   * p b   +   ( w   *   ( * p x + + ) ) ;  
             p b + + ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
         }  
  
         / *   A d v a n c e   s t a t e   p o i n t e r   b y   1   f o r   t h e   n e x t   s a m p l e   * /  
         p S t a t e   =   p S t a t e   +   1 ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
  
     / *   P r o c e s s i n g   i s   c o m p l e t e .   N o w   c o p y   t h e   l a s t   n u m T a p s   -   1   s a m p l e s   t o   t h e  
           s a t r t   o f   t h e   s t a t e   b u f f e r .   T h i s   p r e p a r e s   t h e   s t a t e   b u f f e r   f o r   t h e  
           n e x t   f u n c t i o n   c a l l .   * /  
  
     / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   p S t a t e   b u f f e r   * /  
     p S t a t e C u r n t   =   S - > p S t a t e ;  
  
     / *   L o o p   u n r o l l i n g   f o r   ( n u m T a p s   -   1 U )   s a m p l e s   c o p y   * /  
     t a p C n t   =   ( n u m T a p s   -   1 U )   > >   2 U ;  
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
     / *   C a l c u l a t e   r e m a i n i n g   n u m b e r   o f   c o p i e s   * /  
     t a p C n t   =   ( n u m T a p s   -   1 U )   %   0 x 4 U ;  
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
 # e l s e  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 0   * /  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C o p y   t h e   n e w   i n p u t   s a m p l e   i n t o   t h e   s t a t e   b u f f e r   * /  
         * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
         / *   I n i t i a l i z e   p S t a t e   p o i n t e r   * /  
         p x   =   p S t a t e ;  
  
         / *   I n i t i a l i z e   p C o e f f s   p o i n t e r   * /  
         p b   =   p C o e f f s ;  
  
         / *   S e t   t h e   a c c u m u l a t o r   t o   z e r o   * /  
         s u m   =   0 . 0 f ;  
  
         / *   L o o p   o v e r   n u m T a p s   n u m b e r   o f   v a l u e s   * /  
         t a p C n t   =   n u m T a p s ;  
  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             s u m   + =   ( * p x + + )   *   ( * p b + + ) ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
         }  
  
         / *   T h e   r e s u l t   i s   s t o r e d   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
         * p O u t + +   =   s u m ;  
  
         / *   C o m p u t e   a n d   s t o r e   e r r o r   * /  
         d   =   ( f l o a t 3 2 _ t )   ( * p R e f + + ) ;  
         e   =   d   -   s u m ;  
         * p E r r + +   =   e ;  
  
         / *   W e i g h t i n g   f a c t o r   f o r   t h e   L M S   v e r s i o n   * /  
         w   =   e   *   m u ;  
  
         / *   I n i t i a l i z e   p S t a t e   p o i n t e r   * /  
         p x   =   p S t a t e ;  
  
         / *   I n i t i a l i z e   p C o e f f s   p o i n t e r   * /  
         p b   =   p C o e f f s ;  
  
         / *   L o o p   o v e r   n u m T a p s   n u m b e r   o f   v a l u e s   * /  
         t a p C n t   =   n u m T a p s ;  
  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             * p b   =   * p b   +   ( w   *   ( * p x + + ) ) ;  
             p b + + ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
         }  
  
         / *   A d v a n c e   s t a t e   p o i n t e r   b y   1   f o r   t h e   n e x t   s a m p l e   * /  
         p S t a t e   =   p S t a t e   +   1 ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
  
     / *   P r o c e s s i n g   i s   c o m p l e t e .   N o w   c o p y   t h e   l a s t   n u m T a p s   -   1   s a m p l e s   t o   t h e  
       *   s t a r t   o f   t h e   s t a t e   b u f f e r .   T h i s   p r e p a r e s   t h e   s t a t e   b u f f e r   f o r   t h e  
       *   n e x t   f u n c t i o n   c a l l .   * /  
  
     / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   p S t a t e   b u f f e r   * /  
     p S t a t e C u r n t   =   S - > p S t a t e ;  
  
     / *     C o p y   ( n u m T a p s   -   1 U )   s a m p l e s     * /  
     t a p C n t   =   ( n u m T a p s   -   1 U ) ;  
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
 # e n d i f   / *       # i f   d e f i n e d   ( A R M _ M A T H _ D S P )   * /  
  
 }  
  
 / * *  
       *   @ }   e n d   o f   L M S   g r o u p  
       * /  