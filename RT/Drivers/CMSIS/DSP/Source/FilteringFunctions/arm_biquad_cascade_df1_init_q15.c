??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ b i q u a d _ c a s c a d e _ d f 1 _ i n i t _ q 1 5 . c  
   *   D e s c r i p t i o n :     Q 1 5   B i q u a d   c a s c a d e   D i r e c t F o r m I ( D F 1 )   f i l t e r   i n i t i a l i z a t i o n   f u n c t i o n  
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
   *   @ a d d t o g r o u p   B i q u a d C a s c a d e D F 1  
   *   @ {  
   * /  
  
 / * *  
   *   @ d e t a i l s  
   *  
   *   @ p a r a m [ i n , o u t ]   * S                       p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   B i q u a d   c a s c a d e   s t r u c t u r e .  
   *   @ p a r a m [ i n ]           n u m S t a g e s         n u m b e r   o f   2 n d   o r d e r   s t a g e s   i n   t h e   f i l t e r .  
   *   @ p a r a m [ i n ]           * p C o e f f s           p o i n t s   t o   t h e   f i l t e r   c o e f f i c i e n t s .  
   *   @ p a r a m [ i n ]           * p S t a t e             p o i n t s   t o   t h e   s t a t e   b u f f e r .  
   *   @ p a r a m [ i n ]           p o s t S h i f t         S h i f t   t o   b e   a p p l i e d   t o   t h e   a c c u m u l a t o r   r e s u l t .   V a r i e s   a c c o r d i n g   t o   t h e   c o e f f i c i e n t s   f o r m a t  
   *   @ r e t u r n                 n o n e  
   *  
   *   < b > C o e f f i c i e n t   a n d   S t a t e   O r d e r i n g : < / b >  
   *  
   *   \ p a r  
   *   T h e   c o e f f i c i e n t s   a r e   s t o r e d   i n   t h e   a r r a y   < c o d e > p C o e f f s < / c o d e >   i n   t h e   f o l l o w i n g   o r d e r :  
   *   < p r e >  
   *           { b 1 0 ,   0 ,   b 1 1 ,   b 1 2 ,   a 1 1 ,   a 1 2 ,   b 2 0 ,   0 ,   b 2 1 ,   b 2 2 ,   a 2 1 ,   a 2 2 ,   . . . }  
   *   < / p r e >  
   *   w h e r e   < c o d e > b 1 x < / c o d e >   a n d   < c o d e > a 1 x < / c o d e >   a r e   t h e   c o e f f i c i e n t s   f o r   t h e   f i r s t   s t a g e ,  
   *   < c o d e > b 2 x < / c o d e >   a n d   < c o d e > a 2 x < / c o d e >   a r e   t h e   c o e f f i c i e n t s   f o r   t h e   s e c o n d   s t a g e ,  
   *   a n d   s o   o n .     T h e   < c o d e > p C o e f f s < / c o d e >   a r r a y   c o n t a i n s   a   t o t a l   o f   < c o d e > 6 * n u m S t a g e s < / c o d e >   v a l u e s .  
   *   T h e   z e r o   c o e f f i c i e n t   b e t w e e n   < c o d e > b 1 < / c o d e >   a n d   < c o d e > b 2 < / c o d e >   f a c i l i t i e s     u s e   o f   1 6 - b i t   S I M D   i n s t r u c t i o n s   o n   t h e   C o r t e x - M 4 .  
   *  
   *   \ p a r  
   *   T h e   s t a t e   v a r i a b l e s   a r e   s t o r e d   i n   t h e   a r r a y   < c o d e > p S t a t e < / c o d e > .  
   *   E a c h   B i q u a d   s t a g e   h a s   4   s t a t e   v a r i a b l e s   < c o d e > x [ n - 1 ] ,   x [ n - 2 ] ,   y [ n - 1 ] , < / c o d e >   a n d   < c o d e > y [ n - 2 ] < / c o d e > .  
   *   T h e   s t a t e   v a r i a b l e s   a r e   a r r a n g e d   i n   t h e   < c o d e > p S t a t e < / c o d e >   a r r a y   a s :  
   *   < p r e >  
   *           { x [ n - 1 ] ,   x [ n - 2 ] ,   y [ n - 1 ] ,   y [ n - 2 ] }  
   *   < / p r e >  
   *   T h e   4   s t a t e   v a r i a b l e s   f o r   s t a g e   1   a r e   f i r s t ,   t h e n   t h e   4   s t a t e   v a r i a b l e s   f o r   s t a g e   2 ,   a n d   s o   o n .  
   *   T h e   s t a t e   a r r a y   h a s   a   t o t a l   l e n g t h   o f   < c o d e > 4 * n u m S t a g e s < / c o d e >   v a l u e s .  
   *   T h e   s t a t e   v a r i a b l e s   a r e   u p d a t e d   a f t e r   e a c h   b l o c k   o f   d a t a   i s   p r o c e s s e d ;   t h e   c o e f f i c i e n t s   a r e   u n t o u c h e d .  
   * /  
  
 v o i d   a r m _ b i q u a d _ c a s c a d e _ d f 1 _ i n i t _ q 1 5 (  
     a r m _ b i q u a d _ c a s d _ d f 1 _ i n s t _ q 1 5   *   S ,  
     u i n t 8 _ t   n u m S t a g e s ,  
     q 1 5 _ t   *   p C o e f f s ,  
     q 1 5 _ t   *   p S t a t e ,  
     i n t 8 _ t   p o s t S h i f t )  
 {  
     / *   A s s i g n   f i l t e r   s t a g e s   * /  
     S - > n u m S t a g e s   =   n u m S t a g e s ;  
  
     / *   A s s i g n   p o s t S h i f t   t o   b e   a p p l i e d   t o   t h e   o u t p u t   * /  
     S - > p o s t S h i f t   =   p o s t S h i f t ;  
  
     / *   A s s i g n   c o e f f i c i e n t   p o i n t e r   * /  
     S - > p C o e f f s   =   p C o e f f s ;  
  
     / *   C l e a r   s t a t e   b u f f e r   a n d   s i z e   i s   a l w a y s   4   *   n u m S t a g e s   * /  
     m e m s e t ( p S t a t e ,   0 ,   ( 4 U   *   ( u i n t 3 2 _ t )   n u m S t a g e s )   *   s i z e o f ( q 1 5 _ t ) ) ;  
  
     / *   A s s i g n   s t a t e   p o i n t e r   * /  
     S - > p S t a t e   =   p S t a t e ;  
 }  
  
 / * *  
   *   @ }   e n d   o f   B i q u a d C a s c a d e D F 1   g r o u p  
   * /  