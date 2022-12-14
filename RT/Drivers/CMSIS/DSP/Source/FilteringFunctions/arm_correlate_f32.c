??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ c o r r e l a t e _ f 3 2 . c  
   *   D e s c r i p t i o n :     C o r r e l a t i o n   o f   f l o a t i n g - p o i n t   s e q u e n c e s  
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
   *   @ d e f g r o u p   C o r r   C o r r e l a t i o n  
   *  
   *   C o r r e l a t i o n   i s   a   m a t h e m a t i c a l   o p e r a t i o n   t h a t   i s   s i m i l a r   t o   c o n v o l u t i o n .  
   *   A s   w i t h   c o n v o l u t i o n ,   c o r r e l a t i o n   u s e s   t w o   s i g n a l s   t o   p r o d u c e   a   t h i r d   s i g n a l .  
   *   T h e   u n d e r l y i n g   a l g o r i t h m s   i n   c o r r e l a t i o n   a n d   c o n v o l u t i o n   a r e   i d e n t i c a l   e x c e p t   t h a t   o n e   o f   t h e   i n p u t s   i s   f l i p p e d   i n   c o n v o l u t i o n .  
   *   C o r r e l a t i o n   i s   c o m m o n l y   u s e d   t o   m e a s u r e   t h e   s i m i l a r i t y   b e t w e e n   t w o   s i g n a l s .  
   *   I t   h a s   a p p l i c a t i o n s   i n   p a t t e r n   r e c o g n i t i o n ,   c r y p t a n a l y s i s ,   a n d   s e a r c h i n g .  
   *   T h e   C M S I S   l i b r a r y   p r o v i d e s   c o r r e l a t i o n   f u n c t i o n s   f o r   Q 7 ,   Q 1 5 ,   Q 3 1   a n d   f l o a t i n g - p o i n t   d a t a   t y p e s .  
   *   F a s t   v e r s i o n s   o f   t h e   Q 1 5   a n d   Q 3 1   f u n c t i o n s   a r e   a l s o   p r o v i d e d .  
   *  
   *   \ p a r   A l g o r i t h m  
   *   L e t   < c o d e > a [ n ] < / c o d e >   a n d   < c o d e > b [ n ] < / c o d e >   b e   s e q u e n c e s   o f   l e n g t h   < c o d e > s r c A L e n < / c o d e >   a n d   < c o d e > s r c B L e n < / c o d e >   s a m p l e s   r e s p e c t i v e l y .  
   *   T h e   c o n v o l u t i o n   o f   t h e   t w o   s i g n a l s   i s   d e n o t e d   b y  
   *   < p r e >  
   *                                       c [ n ]   =   a [ n ]   *   b [ n ]  
   *   < / p r e >  
   *   I n   c o r r e l a t i o n ,   o n e   o f   t h e   s i g n a l s   i s   f l i p p e d   i n   t i m e  
   *   < p r e >  
   *                                       c [ n ]   =   a [ n ]   *   b [ - n ]  
   *   < / p r e >  
   *  
   *   \ p a r  
   *   a n d   t h i s   i s   m a t h e m a t i c a l l y   d e f i n e d   a s  
   *   \ i m a g e   h t m l   C o r r e l a t e E q u a t i o n . g i f  
   *   \ p a r  
   *   T h e   < c o d e > p S r c A < / c o d e >   p o i n t s   t o   t h e   f i r s t   i n p u t   v e c t o r   o f   l e n g t h   < c o d e > s r c A L e n < / c o d e >   a n d   < c o d e > p S r c B < / c o d e >   p o i n t s   t o   t h e   s e c o n d   i n p u t   v e c t o r   o f   l e n g t h   < c o d e > s r c B L e n < / c o d e > .  
   *   T h e   r e s u l t   < c o d e > c [ n ] < / c o d e >   i s   o f   l e n g t h   < c o d e > 2   *   m a x ( s r c A L e n ,   s r c B L e n )   -   1 < / c o d e >   a n d   i s   d e f i n e d   o v e r   t h e   i n t e r v a l   < c o d e > n = 0 ,   1 ,   2 ,   . . . ,   ( 2   *   m a x ( s r c A L e n ,   s r c B L e n )   -   2 ) < / c o d e > .  
   *   T h e   o u t p u t   r e s u l t   i s   w r i t t e n   t o   < c o d e > p D s t < / c o d e >   a n d   t h e   c a l l i n g   f u n c t i o n   m u s t   a l l o c a t e   < c o d e > 2   *   m a x ( s r c A L e n ,   s r c B L e n )   -   1 < / c o d e >   w o r d s   f o r   t h e   r e s u l t .  
   *  
   *   < b > N o t e < / b >  
   *   \ p a r  
   *   T h e   < c o d e > p D s t < / c o d e >   s h o u l d   b e   i n i t i a l i z e d   t o   a l l   z e r o s   b e f o r e   b e i n g   u s e d .  
   *  
   *   < b > F i x e d - P o i n t   B e h a v i o r < / b >  
   *   \ p a r  
   *   C o r r e l a t i o n   r e q u i r e s   s u m m i n g   u p   a   l a r g e   n u m b e r   o f   i n t e r m e d i a t e   p r o d u c t s .  
   *   A s   s u c h ,   t h e   Q 7 ,   Q 1 5 ,   a n d   Q 3 1   f u n c t i o n s   r u n   a   r i s k   o f   o v e r f l o w   a n d   s a t u r a t i o n .  
   *   R e f e r   t o   t h e   f u n c t i o n   s p e c i f i c   d o c u m e n t a t i o n   b e l o w   f o r   f u r t h e r   d e t a i l s   o f   t h e   p a r t i c u l a r   a l g o r i t h m   u s e d .  
   *  
   *  
   *   < b > F a s t   V e r s i o n s < / b >  
   *  
   *   \ p a r  
   *   F a s t   v e r s i o n s   a r e   s u p p o r t e d   f o r   Q 3 1   a n d   Q 1 5 .     C y c l e s   f o r   F a s t   v e r s i o n s   a r e   l e s s   c o m p a r e d   t o   Q 3 1   a n d   Q 1 5   o f   c o r r e l a t e   a n d   t h e   d e s i g n   r e q u i r e s  
   *   t h e   i n p u t   s i g n a l s   s h o u l d   b e   s c a l e d   d o w n   t o   a v o i d   i n t e r m e d i a t e   o v e r f l o w s .  
   *  
   *  
   *   < b > O p t   V e r s i o n s < / b >  
   *  
   *   \ p a r  
   *   O p t   v e r s i o n s   a r e   s u p p o r t e d   f o r   Q 1 5   a n d   Q 7 .     D e s i g n   u s e s   i n t e r n a l   s c r a t c h   b u f f e r   f o r   g e t t i n g   g o o d   o p t i m i s a t i o n .  
   *   T h e s e   v e r s i o n s   a r e   o p t i m i s e d   i n   c y c l e s   a n d   c o n s u m e s   m o r e   m e m o r y ( S c r a t c h   m e m o r y )   c o m p a r e d   t o   Q 1 5   a n d   Q 7   v e r s i o n s   o f   c o r r e l a t e  
   * /  
  
 / * *  
   *   @ a d d t o g r o u p   C o r r  
   *   @ {  
   * /  
 / * *  
   *   @ b r i e f   C o r r e l a t i o n   o f   f l o a t i n g - p o i n t   s e q u e n c e s .  
   *   @ p a r a m [ i n ]     * p S r c A   p o i n t s   t o   t h e   f i r s t   i n p u t   s e q u e n c e .  
   *   @ p a r a m [ i n ]     s r c A L e n   l e n g t h   o f   t h e   f i r s t   i n p u t   s e q u e n c e .  
   *   @ p a r a m [ i n ]     * p S r c B   p o i n t s   t o   t h e   s e c o n d   i n p u t   s e q u e n c e .  
   *   @ p a r a m [ i n ]     s r c B L e n   l e n g t h   o f   t h e   s e c o n d   i n p u t   s e q u e n c e .  
   *   @ p a r a m [ o u t ]   * p D s t   p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   o u t p u t   r e s u l t   i s   w r i t t e n .     L e n g t h   2   *   m a x ( s r c A L e n ,   s r c B L e n )   -   1 .  
   *   @ r e t u r n   n o n e .  
   * /  
  
 v o i d   a r m _ c o r r e l a t e _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     f l o a t 3 2 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     f l o a t 3 2 _ t   *   p D s t )  
 {  
  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 3   * /  
  
     f l o a t 3 2 _ t   * p I n 1 ;                                                               / *   i n p u t A   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p I n 2 ;                                                               / *   i n p u t B   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p O u t   =   p D s t ;                                                 / *   o u t p u t   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p x ;                                                                   / *   I n t e r m e d i a t e   i n p u t A   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p y ;                                                                   / *   I n t e r m e d i a t e   i n p u t B   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p S r c 1 ;                                                             / *   I n t e r m e d i a t e   p o i n t e r s   * /  
     f l o a t 3 2 _ t   s u m ,   a c c 0 ,   a c c 1 ,   a c c 2 ,   a c c 3 ;                   / *   A c c u m u l a t o r s   * /  
     f l o a t 3 2 _ t   x 0 ,   x 1 ,   x 2 ,   x 3 ,   c 0 ;                                     / *   t e m p o r a r y   v a r i a b l e s   f o r   h o l d i n g   i n p u t   a n d   c o e f f i c i e n t   v a l u e s   * /  
     u i n t 3 2 _ t   j ,   k   =   0 U ,   c o u n t ,   b l k C n t ,   o u t B l o c k S i z e ,   b l o c k S i z e 1 ,   b l o c k S i z e 2 ,   b l o c k S i z e 3 ;     / *   l o o p   c o u n t e r s   * /  
     i n t 3 2 _ t   i n c   =   1 ;                                                               / *   D e s t i n a t i o n   a d d r e s s   m o d i f i e r   * /  
  
  
     / *   T h e   a l g o r i t h m   i m p l e m e n t a t i o n   i s   b a s e d   o n   t h e   l e n g t h s   o f   t h e   i n p u t s .   * /  
     / *   s r c B   i s   a l w a y s   m a d e   t o   s l i d e   a c r o s s   s r c A .   * /  
     / *   S o   s r c B L e n   i s   a l w a y s   c o n s i d e r e d   a s   s h o r t e r   o r   e q u a l   t o   s r c A L e n   * /  
     / *   B u t   C O R R ( x ,   y )   i s   r e v e r s e   o f   C O R R ( y ,   x )   * /  
     / *   S o ,   w h e n   s r c B L e n   >   s r c A L e n ,   o u t p u t   p o i n t e r   i s   m a d e   t o   p o i n t   t o   t h e   e n d   o f   t h e   o u t p u t   b u f f e r   * /  
     / *   a n d   t h e   d e s t i n a t i o n   p o i n t e r   m o d i f i e r ,   i n c   i s   s e t   t o   - 1   * /  
     / *   I f   s r c A L e n   >   s r c B L e n ,   z e r o   p a d   h a s   t o   b e   d o n e   t o   s r c B   t o   m a k e   t h e   t w o   i n p u t s   o f   s a m e   l e n g t h   * /  
     / *   B u t   t o   i m p r o v e   t h e   p e r f o r m a n c e ,  
       *   w e   a s s u m e   z e r o e s   i n   t h e   o u t p u t   i n s t e a d   o f   z e r o   p a d d i n g   e i t h e r   o f   t h e   t h e   i n p u t s * /  
     / *   I f   s r c A L e n   >   s r c B L e n ,  
       *   ( s r c A L e n   -   s r c B L e n )   z e r o e s   h a s   t o   i n c l u d e d   i n   t h e   s t a r t i n g   o f   t h e   o u t p u t   b u f f e r   * /  
     / *   I f   s r c A L e n   <   s r c B L e n ,  
       *   ( s r c A L e n   -   s r c B L e n )   z e r o e s   h a s   t o   i n c l u d e d   i n   t h e   e n d i n g   o f   t h e   o u t p u t   b u f f e r   * /  
     i f   ( s r c A L e n   > =   s r c B L e n )  
     {  
         / *   I n i t i a l i z a t i o n   o f   i n p u t A   p o i n t e r   * /  
         p I n 1   =   p S r c A ;  
  
         / *   I n i t i a l i z a t i o n   o f   i n p u t B   p o i n t e r   * /  
         p I n 2   =   p S r c B ;  
  
         / *   N u m b e r   o f   o u t p u t   s a m p l e s   i s   c a l c u l a t e d   * /  
         o u t B l o c k S i z e   =   ( 2 U   *   s r c A L e n )   -   1 U ;  
  
         / *   W h e n   s r c A L e n   >   s r c B L e n ,   z e r o   p a d d i n g   h a s   t o   b e   d o n e   t o   s r c B  
           *   t o   m a k e   t h e i r   l e n g t h s   e q u a l .  
           *   I n s t e a d ,   ( o u t B l o c k S i z e   -   ( s r c A L e n   +   s r c B L e n   -   1 ) )  
           *   n u m b e r   o f   o u t p u t   s a m p l e s   a r e   m a d e   z e r o   * /  
         j   =   o u t B l o c k S i z e   -   ( s r c A L e n   +   ( s r c B L e n   -   1 U ) ) ;  
  
         / *   U p d a t i n g   t h e   p o i n t e r   p o s i t i o n   t o   n o n   z e r o   v a l u e   * /  
         p O u t   + =   j ;  
  
         / / w h i l e   ( j   >   0 U )  
         / / {  
         / /     / *   Z e r o   i s   s t o r e d   i n   t h e   d e s t i n a t i o n   b u f f e r   * /  
         / /     * p O u t + +   =   0 . 0 f ;  
  
         / /     / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         / /     j - - ;  
         / / }  
  
     }  
     e l s e  
     {  
         / *   I n i t i a l i z a t i o n   o f   i n p u t A   p o i n t e r   * /  
         p I n 1   =   p S r c B ;  
  
         / *   I n i t i a l i z a t i o n   o f   i n p u t B   p o i n t e r   * /  
         p I n 2   =   p S r c A ;  
  
         / *   s r c B L e n   i s   a l w a y s   c o n s i d e r e d   a s   s h o r t e r   o r   e q u a l   t o   s r c A L e n   * /  
         j   =   s r c B L e n ;  
         s r c B L e n   =   s r c A L e n ;  
         s r c A L e n   =   j ;  
  
         / *   C O R R ( x ,   y )   =   R e v e r s e   o r d e r ( C O R R ( y ,   x ) )   * /  
         / *   H e n c e   s e t   t h e   d e s t i n a t i o n   p o i n t e r   t o   p o i n t   t o   t h e   l a s t   o u t p u t   s a m p l e   * /  
         p O u t   =   p D s t   +   ( ( s r c A L e n   +   s r c B L e n )   -   2 U ) ;  
  
         / *   D e s t i n a t i o n   a d d r e s s   m o d i f i e r   i s   s e t   t o   - 1   * /  
         i n c   =   - 1 ;  
  
     }  
  
     / *   T h e   f u n c t i o n   i s   i n t e r n a l l y  
       *   d i v i d e d   i n t o   t h r e e   p a r t s   a c c o r d i n g   t o   t h e   n u m b e r   o f   m u l t i p l i c a t i o n s   t h a t   h a s   t o   b e  
       *   t a k e n   p l a c e   b e t w e e n   i n p u t A   s a m p l e s   a n d   i n p u t B   s a m p l e s .   I n   t h e   f i r s t   p a r t   o f   t h e  
       *   a l g o r i t h m ,   t h e   m u l t i p l i c a t i o n s   i n c r e a s e   b y   o n e   f o r   e v e r y   i t e r a t i o n .  
       *   I n   t h e   s e c o n d   p a r t   o f   t h e   a l g o r i t h m ,   s r c B L e n   n u m b e r   o f   m u l t i p l i c a t i o n s   a r e   d o n e .  
       *   I n   t h e   t h i r d   p a r t   o f   t h e   a l g o r i t h m ,   t h e   m u l t i p l i c a t i o n s   d e c r e a s e   b y   o n e  
       *   f o r   e v e r y   i t e r a t i o n . * /  
     / *   T h e   a l g o r i t h m   i s   i m p l e m e n t e d   i n   t h r e e   s t a g e s .  
       *   T h e   l o o p   c o u n t e r s   o f   e a c h   s t a g e   i s   i n i t i a t e d   h e r e .   * /  
     b l o c k S i z e 1   =   s r c B L e n   -   1 U ;  
     b l o c k S i z e 2   =   s r c A L e n   -   ( s r c B L e n   -   1 U ) ;  
     b l o c k S i z e 3   =   b l o c k S i z e 1 ;  
  
     / *   - - - - - - - - - - - - - - - - - - - - - - - - - -  
       *   I n i t i a l i z a t i o n s   o f   s t a g e 1  
       *   - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
     / *   s u m   =   x [ 0 ]   *   y [ s r c B l e n   -   1 ]  
       *   s u m   =   x [ 0 ]   *   y [ s r c B l e n - 2 ]   +   x [ 1 ]   *   y [ s r c B l e n   -   1 ]  
       *   . . . .  
       *   s u m   =   x [ 0 ]   *   y [ 0 ]   +   x [ 1 ]   *   y [ 1 ]   + . . . +   x [ s r c B L e n   -   1 ]   *   y [ s r c B L e n   -   1 ]  
       * /  
  
     / *   I n   t h i s   s t a g e   t h e   M A C   o p e r a t i o n s   a r e   i n c r e a s e d   b y   1   f o r   e v e r y   i t e r a t i o n .  
           T h e   c o u n t   v a r i a b l e   h o l d s   t h e   n u m b e r   o f   M A C   o p e r a t i o n s   p e r f o r m e d   * /  
     c o u n t   =   1 U ;  
  
     / *   W o r k i n g   p o i n t e r   o f   i n p u t A   * /  
     p x   =   p I n 1 ;  
  
     / *   W o r k i n g   p o i n t e r   o f   i n p u t B   * /  
     p S r c 1   =   p I n 2   +   ( s r c B L e n   -   1 U ) ;  
     p y   =   p S r c 1 ;  
  
     / *   - - - - - - - - - - - - - - - - - - - - - - - -  
       *   S t a g e 1   p r o c e s s  
       *   - - - - - - - - - - - - - - - - - - - - - - * /  
  
     / *   T h e   f i r s t   s t a g e   s t a r t s   h e r e   * /  
     w h i l e   ( b l o c k S i z e 1   >   0 U )  
     {  
         / *   A c c u m u l a t o r   i s   m a d e   z e r o   f o r   e v e r y   i t e r a t i o n   * /  
         s u m   =   0 . 0 f ;  
  
         / *   A p p l y   l o o p   u n r o l l i n g   a n d   c o m p u t e   4   M A C s   s i m u l t a n e o u s l y .   * /  
         k   =   c o u n t   > >   2 U ;  
  
         / *   F i r s t   p a r t   o f   t h e   p r o c e s s i n g   w i t h   l o o p   u n r o l l i n g .     C o m p u t e   4   M A C s   a t   a   t i m e .  
           * *   a   s e c o n d   l o o p   b e l o w   c o m p u t e s   M A C s   f o r   t h e   r e m a i n i n g   1   t o   3   s a m p l e s .   * /  
         w h i l e   ( k   >   0 U )  
         {  
             / *   x [ 0 ]   *   y [ s r c B L e n   -   4 ]   * /  
             s u m   + =   * p x + +   *   * p y + + ;  
             / *   x [ 1 ]   *   y [ s r c B L e n   -   3 ]   * /  
             s u m   + =   * p x + +   *   * p y + + ;  
             / *   x [ 2 ]   *   y [ s r c B L e n   -   2 ]   * /  
             s u m   + =   * p x + +   *   * p y + + ;  
             / *   x [ 3 ]   *   y [ s r c B L e n   -   1 ]   * /  
             s u m   + =   * p x + +   *   * p y + + ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             k - - ;  
         }  
  
         / *   I f   t h e   c o u n t   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   a n y   r e m a i n i n g   M A C s   h e r e .  
           * *   N o   l o o p   u n r o l l i n g   i s   u s e d .   * /  
         k   =   c o u n t   %   0 x 4 U ;  
  
         w h i l e   ( k   >   0 U )  
         {  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             / *   x [ 0 ]   *   y [ s r c B L e n   -   1 ]   * /  
             s u m   + =   * p x + +   *   * p y + + ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             k - - ;  
         }  
  
         / *   S t o r e   t h e   r e s u l t   i n   t h e   a c c u m u l a t o r   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
         * p O u t   =   s u m ;  
         / *   D e s t i n a t i o n   p o i n t e r   i s   u p d a t e d   a c c o r d i n g   t o   t h e   a d d r e s s   m o d i f i e r ,   i n c   * /  
         p O u t   + =   i n c ;  
  
         / *   U p d a t e   t h e   i n p u t A   a n d   i n p u t B   p o i n t e r s   f o r   n e x t   M A C   c a l c u l a t i o n   * /  
         p y   =   p S r c 1   -   c o u n t ;  
         p x   =   p I n 1 ;  
  
         / *   I n c r e m e n t   t h e   M A C   c o u n t   * /  
         c o u n t + + ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l o c k S i z e 1 - - ;  
     }  
  
     / *   - - - - - - - - - - - - - - - - - - - - - - - - - -  
       *   I n i t i a l i z a t i o n s   o f   s t a g e 2  
       *   - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
     / *   s u m   =   x [ 0 ]   *   y [ 0 ]   +   x [ 1 ]   *   y [ 1 ]   + . . . +   x [ s r c B L e n - 1 ]   *   y [ s r c B L e n - 1 ]  
       *   s u m   =   x [ 1 ]   *   y [ 0 ]   +   x [ 2 ]   *   y [ 1 ]   + . . . +   x [ s r c B L e n ]   *   y [ s r c B L e n - 1 ]  
       *   . . . .  
       *   s u m   =   x [ s r c A L e n - s r c B L e n - 2 ]   *   y [ 0 ]   +   x [ s r c A L e n - s r c B L e n - 1 ]   *   y [ 1 ]   + . . . +   x [ s r c A L e n - 1 ]   *   y [ s r c B L e n - 1 ]  
       * /  
  
     / *   W o r k i n g   p o i n t e r   o f   i n p u t A   * /  
     p x   =   p I n 1 ;  
  
     / *   W o r k i n g   p o i n t e r   o f   i n p u t B   * /  
     p y   =   p I n 2 ;  
  
     / *   c o u n t   i s   i n d e x   b y   w h i c h   t h e   p o i n t e r   p I n 1   t o   b e   i n c r e m e n t e d   * /  
     c o u n t   =   0 U ;  
  
     / *   - - - - - - - - - - - - - - - - - - -  
       *   S t a g e 2   p r o c e s s  
       *   - - - - - - - - - - - - - - - - - - * /  
  
     / *   S t a g e 2   d e p e n d s   o n   s r c B L e n   a s   i n   t h i s   s t a g e   s r c B L e n   n u m b e r   o f   M A C S   a r e   p e r f o r m e d .  
       *   S o ,   t o   l o o p   u n r o l l   o v e r   b l o c k S i z e 2 ,  
       *   s r c B L e n   s h o u l d   b e   g r e a t e r   t h a n   o r   e q u a l   t o   4 ,   t o   l o o p   u n r o l l   t h e   s r c B L e n   l o o p   * /  
     i f   ( s r c B L e n   > =   4 U )  
     {  
         / *   L o o p   u n r o l l   o v e r   b l o c k S i z e 2 ,   b y   4   * /  
         b l k C n t   =   b l o c k S i z e 2   > >   2 U ;  
  
         w h i l e   ( b l k C n t   >   0 U )  
         {  
             / *   S e t   a l l   a c c u m u l a t o r s   t o   z e r o   * /  
             a c c 0   =   0 . 0 f ;  
             a c c 1   =   0 . 0 f ;  
             a c c 2   =   0 . 0 f ;  
             a c c 3   =   0 . 0 f ;  
  
             / *   r e a d   x [ 0 ] ,   x [ 1 ] ,   x [ 2 ]   s a m p l e s   * /  
             x 0   =   * ( p x + + ) ;  
             x 1   =   * ( p x + + ) ;  
             x 2   =   * ( p x + + ) ;  
  
             / *   A p p l y   l o o p   u n r o l l i n g   a n d   c o m p u t e   4   M A C s   s i m u l t a n e o u s l y .   * /  
             k   =   s r c B L e n   > >   2 U ;  
  
             / *   F i r s t   p a r t   o f   t h e   p r o c e s s i n g   w i t h   l o o p   u n r o l l i n g .     C o m p u t e   4   M A C s   a t   a   t i m e .  
               * *   a   s e c o n d   l o o p   b e l o w   c o m p u t e s   M A C s   f o r   t h e   r e m a i n i n g   1   t o   3   s a m p l e s .   * /  
             d o  
             {  
                 / *   R e a d   y [ 0 ]   s a m p l e   * /  
                 c 0   =   * ( p y + + ) ;  
  
                 / *   R e a d   x [ 3 ]   s a m p l e   * /  
                 x 3   =   * ( p x + + ) ;  
  
                 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
                 / *   a c c 0   + =     x [ 0 ]   *   y [ 0 ]   * /  
                 a c c 0   + =   x 0   *   c 0 ;  
                 / *   a c c 1   + =     x [ 1 ]   *   y [ 0 ]   * /  
                 a c c 1   + =   x 1   *   c 0 ;  
                 / *   a c c 2   + =     x [ 2 ]   *   y [ 0 ]   * /  
                 a c c 2   + =   x 2   *   c 0 ;  
                 / *   a c c 3   + =     x [ 3 ]   *   y [ 0 ]   * /  
                 a c c 3   + =   x 3   *   c 0 ;  
  
                 / *   R e a d   y [ 1 ]   s a m p l e   * /  
                 c 0   =   * ( p y + + ) ;  
  
                 / *   R e a d   x [ 4 ]   s a m p l e   * /  
                 x 0   =   * ( p x + + ) ;  
  
                 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
                 / *   a c c 0   + =     x [ 1 ]   *   y [ 1 ]   * /  
                 a c c 0   + =   x 1   *   c 0 ;  
                 / *   a c c 1   + =     x [ 2 ]   *   y [ 1 ]   * /  
                 a c c 1   + =   x 2   *   c 0 ;  
                 / *   a c c 2   + =     x [ 3 ]   *   y [ 1 ]   * /  
                 a c c 2   + =   x 3   *   c 0 ;  
                 / *   a c c 3   + =     x [ 4 ]   *   y [ 1 ]   * /  
                 a c c 3   + =   x 0   *   c 0 ;  
  
                 / *   R e a d   y [ 2 ]   s a m p l e   * /  
                 c 0   =   * ( p y + + ) ;  
  
                 / *   R e a d   x [ 5 ]   s a m p l e   * /  
                 x 1   =   * ( p x + + ) ;  
  
                 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
                 / *   a c c 0   + =     x [ 2 ]   *   y [ 2 ]   * /  
                 a c c 0   + =   x 2   *   c 0 ;  
                 / *   a c c 1   + =     x [ 3 ]   *   y [ 2 ]   * /  
                 a c c 1   + =   x 3   *   c 0 ;  
                 / *   a c c 2   + =     x [ 4 ]   *   y [ 2 ]   * /  
                 a c c 2   + =   x 0   *   c 0 ;  
                 / *   a c c 3   + =     x [ 5 ]   *   y [ 2 ]   * /  
                 a c c 3   + =   x 1   *   c 0 ;  
  
                 / *   R e a d   y [ 3 ]   s a m p l e   * /  
                 c 0   =   * ( p y + + ) ;  
  
                 / *   R e a d   x [ 6 ]   s a m p l e   * /  
                 x 2   =   * ( p x + + ) ;  
  
                 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
                 / *   a c c 0   + =     x [ 3 ]   *   y [ 3 ]   * /  
                 a c c 0   + =   x 3   *   c 0 ;  
                 / *   a c c 1   + =     x [ 4 ]   *   y [ 3 ]   * /  
                 a c c 1   + =   x 0   *   c 0 ;  
                 / *   a c c 2   + =     x [ 5 ]   *   y [ 3 ]   * /  
                 a c c 2   + =   x 1   *   c 0 ;  
                 / *   a c c 3   + =     x [ 6 ]   *   y [ 3 ]   * /  
                 a c c 3   + =   x 2   *   c 0 ;  
  
  
             }   w h i l e   ( - - k ) ;  
  
             / *   I f   t h e   s r c B L e n   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   a n y   r e m a i n i n g   M A C s   h e r e .  
               * *   N o   l o o p   u n r o l l i n g   i s   u s e d .   * /  
             k   =   s r c B L e n   %   0 x 4 U ;  
  
             w h i l e   ( k   >   0 U )  
             {  
                 / *   R e a d   y [ 4 ]   s a m p l e   * /  
                 c 0   =   * ( p y + + ) ;  
  
                 / *   R e a d   x [ 7 ]   s a m p l e   * /  
                 x 3   =   * ( p x + + ) ;  
  
                 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
                 / *   a c c 0   + =     x [ 4 ]   *   y [ 4 ]   * /  
                 a c c 0   + =   x 0   *   c 0 ;  
                 / *   a c c 1   + =     x [ 5 ]   *   y [ 4 ]   * /  
                 a c c 1   + =   x 1   *   c 0 ;  
                 / *   a c c 2   + =     x [ 6 ]   *   y [ 4 ]   * /  
                 a c c 2   + =   x 2   *   c 0 ;  
                 / *   a c c 3   + =     x [ 7 ]   *   y [ 4 ]   * /  
                 a c c 3   + =   x 3   *   c 0 ;  
  
                 / *   R e u s e   t h e   p r e s e n t   s a m p l e s   f o r   t h e   n e x t   M A C   * /  
                 x 0   =   x 1 ;  
                 x 1   =   x 2 ;  
                 x 2   =   x 3 ;  
  
                 / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                 k - - ;  
             }  
  
             / *   S t o r e   t h e   r e s u l t   i n   t h e   a c c u m u l a t o r   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
             * p O u t   =   a c c 0 ;  
             / *   D e s t i n a t i o n   p o i n t e r   i s   u p d a t e d   a c c o r d i n g   t o   t h e   a d d r e s s   m o d i f i e r ,   i n c   * /  
             p O u t   + =   i n c ;  
  
             * p O u t   =   a c c 1 ;  
             p O u t   + =   i n c ;  
  
             * p O u t   =   a c c 2 ;  
             p O u t   + =   i n c ;  
  
             * p O u t   =   a c c 3 ;  
             p O u t   + =   i n c ;  
  
             / *   I n c r e m e n t   t h e   p o i n t e r   p I n 1   i n d e x ,   c o u n t   b y   4   * /  
             c o u n t   + =   4 U ;  
  
             / *   U p d a t e   t h e   i n p u t A   a n d   i n p u t B   p o i n t e r s   f o r   n e x t   M A C   c a l c u l a t i o n   * /  
             p x   =   p I n 1   +   c o u n t ;  
             p y   =   p I n 2 ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             b l k C n t - - ;  
         }  
  
         / *   I f   t h e   b l o c k S i z e 2   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   a n y   r e m a i n i n g   o u t p u t   s a m p l e s   h e r e .  
           * *   N o   l o o p   u n r o l l i n g   i s   u s e d .   * /  
         b l k C n t   =   b l o c k S i z e 2   %   0 x 4 U ;  
  
         w h i l e   ( b l k C n t   >   0 U )  
         {  
             / *   A c c u m u l a t o r   i s   m a d e   z e r o   f o r   e v e r y   i t e r a t i o n   * /  
             s u m   =   0 . 0 f ;  
  
             / *   A p p l y   l o o p   u n r o l l i n g   a n d   c o m p u t e   4   M A C s   s i m u l t a n e o u s l y .   * /  
             k   =   s r c B L e n   > >   2 U ;  
  
             / *   F i r s t   p a r t   o f   t h e   p r o c e s s i n g   w i t h   l o o p   u n r o l l i n g .     C o m p u t e   4   M A C s   a t   a   t i m e .  
               * *   a   s e c o n d   l o o p   b e l o w   c o m p u t e s   M A C s   f o r   t h e   r e m a i n i n g   1   t o   3   s a m p l e s .   * /  
             w h i l e   ( k   >   0 U )  
             {  
                 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
                 s u m   + =   * p x + +   *   * p y + + ;  
                 s u m   + =   * p x + +   *   * p y + + ;  
                 s u m   + =   * p x + +   *   * p y + + ;  
                 s u m   + =   * p x + +   *   * p y + + ;  
  
                 / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                 k - - ;  
             }  
  
             / *   I f   t h e   s r c B L e n   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   a n y   r e m a i n i n g   M A C s   h e r e .  
               * *   N o   l o o p   u n r o l l i n g   i s   u s e d .   * /  
             k   =   s r c B L e n   %   0 x 4 U ;  
  
             w h i l e   ( k   >   0 U )  
             {  
                 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
                 s u m   + =   * p x + +   *   * p y + + ;  
  
                 / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                 k - - ;  
             }  
  
             / *   S t o r e   t h e   r e s u l t   i n   t h e   a c c u m u l a t o r   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
             * p O u t   =   s u m ;  
             / *   D e s t i n a t i o n   p o i n t e r   i s   u p d a t e d   a c c o r d i n g   t o   t h e   a d d r e s s   m o d i f i e r ,   i n c   * /  
             p O u t   + =   i n c ;  
  
             / *   I n c r e m e n t   t h e   p o i n t e r   p I n 1   i n d e x ,   c o u n t   b y   1   * /  
             c o u n t + + ;  
  
             / *   U p d a t e   t h e   i n p u t A   a n d   i n p u t B   p o i n t e r s   f o r   n e x t   M A C   c a l c u l a t i o n   * /  
             p x   =   p I n 1   +   c o u n t ;  
             p y   =   p I n 2 ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             b l k C n t - - ;  
         }  
     }  
     e l s e  
     {  
         / *   I f   t h e   s r c B L e n   i s   n o t   a   m u l t i p l e   o f   4 ,  
           *   t h e   b l o c k S i z e 2   l o o p   c a n n o t   b e   u n r o l l e d   b y   4   * /  
         b l k C n t   =   b l o c k S i z e 2 ;  
  
         w h i l e   ( b l k C n t   >   0 U )  
         {  
             / *   A c c u m u l a t o r   i s   m a d e   z e r o   f o r   e v e r y   i t e r a t i o n   * /  
             s u m   =   0 . 0 f ;  
  
             / *   L o o p   o v e r   s r c B L e n   * /  
             k   =   s r c B L e n ;  
  
             w h i l e   ( k   >   0 U )  
             {  
                 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
                 s u m   + =   * p x + +   *   * p y + + ;  
  
                 / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                 k - - ;  
             }  
  
             / *   S t o r e   t h e   r e s u l t   i n   t h e   a c c u m u l a t o r   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
             * p O u t   =   s u m ;  
             / *   D e s t i n a t i o n   p o i n t e r   i s   u p d a t e d   a c c o r d i n g   t o   t h e   a d d r e s s   m o d i f i e r ,   i n c   * /  
             p O u t   + =   i n c ;  
  
             / *   I n c r e m e n t   t h e   p o i n t e r   p I n 1   i n d e x ,   c o u n t   b y   1   * /  
             c o u n t + + ;  
  
             / *   U p d a t e   t h e   i n p u t A   a n d   i n p u t B   p o i n t e r s   f o r   n e x t   M A C   c a l c u l a t i o n   * /  
             p x   =   p I n 1   +   c o u n t ;  
             p y   =   p I n 2 ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             b l k C n t - - ;  
         }  
     }  
  
     / *   - - - - - - - - - - - - - - - - - - - - - - - - - -  
       *   I n i t i a l i z a t i o n s   o f   s t a g e 3  
       *   - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
     / *   s u m   + =   x [ s r c A L e n - s r c B L e n + 1 ]   *   y [ 0 ]   +   x [ s r c A L e n - s r c B L e n + 2 ]   *   y [ 1 ]   + . . . +   x [ s r c A L e n - 1 ]   *   y [ s r c B L e n - 1 ]  
       *   s u m   + =   x [ s r c A L e n - s r c B L e n + 2 ]   *   y [ 0 ]   +   x [ s r c A L e n - s r c B L e n + 3 ]   *   y [ 1 ]   + . . . +   x [ s r c A L e n - 1 ]   *   y [ s r c B L e n - 1 ]  
       *   . . . .  
       *   s u m   + =     x [ s r c A L e n - 2 ]   *   y [ 0 ]   +   x [ s r c A L e n - 1 ]   *   y [ 1 ]  
       *   s u m   + =     x [ s r c A L e n - 1 ]   *   y [ 0 ]  
       * /  
  
     / *   I n   t h i s   s t a g e   t h e   M A C   o p e r a t i o n s   a r e   d e c r e a s e d   b y   1   f o r   e v e r y   i t e r a t i o n .  
           T h e   c o u n t   v a r i a b l e   h o l d s   t h e   n u m b e r   o f   M A C   o p e r a t i o n s   p e r f o r m e d   * /  
     c o u n t   =   s r c B L e n   -   1 U ;  
  
     / *   W o r k i n g   p o i n t e r   o f   i n p u t A   * /  
     p S r c 1   =   p I n 1   +   ( s r c A L e n   -   ( s r c B L e n   -   1 U ) ) ;  
     p x   =   p S r c 1 ;  
  
     / *   W o r k i n g   p o i n t e r   o f   i n p u t B   * /  
     p y   =   p I n 2 ;  
  
     / *   - - - - - - - - - - - - - - - - - - -  
       *   S t a g e 3   p r o c e s s  
       *   - - - - - - - - - - - - - - - - - - * /  
  
     w h i l e   ( b l o c k S i z e 3   >   0 U )  
     {  
         / *   A c c u m u l a t o r   i s   m a d e   z e r o   f o r   e v e r y   i t e r a t i o n   * /  
         s u m   =   0 . 0 f ;  
  
         / *   A p p l y   l o o p   u n r o l l i n g   a n d   c o m p u t e   4   M A C s   s i m u l t a n e o u s l y .   * /  
         k   =   c o u n t   > >   2 U ;  
  
         / *   F i r s t   p a r t   o f   t h e   p r o c e s s i n g   w i t h   l o o p   u n r o l l i n g .     C o m p u t e   4   M A C s   a t   a   t i m e .  
           * *   a   s e c o n d   l o o p   b e l o w   c o m p u t e s   M A C s   f o r   t h e   r e m a i n i n g   1   t o   3   s a m p l e s .   * /  
         w h i l e   ( k   >   0 U )  
         {  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
             / *   s u m   + =   x [ s r c A L e n   -   s r c B L e n   +   4 ]   *   y [ 3 ]   * /  
             s u m   + =   * p x + +   *   * p y + + ;  
             / *   s u m   + =   x [ s r c A L e n   -   s r c B L e n   +   3 ]   *   y [ 2 ]   * /  
             s u m   + =   * p x + +   *   * p y + + ;  
             / *   s u m   + =   x [ s r c A L e n   -   s r c B L e n   +   2 ]   *   y [ 1 ]   * /  
             s u m   + =   * p x + +   *   * p y + + ;  
             / *   s u m   + =   x [ s r c A L e n   -   s r c B L e n   +   1 ]   *   y [ 0 ]   * /  
             s u m   + =   * p x + +   *   * p y + + ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             k - - ;  
         }  
  
         / *   I f   t h e   c o u n t   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   a n y   r e m a i n i n g   M A C s   h e r e .  
           * *   N o   l o o p   u n r o l l i n g   i s   u s e d .   * /  
         k   =   c o u n t   %   0 x 4 U ;  
  
         w h i l e   ( k   >   0 U )  
         {  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
             s u m   + =   * p x + +   *   * p y + + ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             k - - ;  
         }  
  
         / *   S t o r e   t h e   r e s u l t   i n   t h e   a c c u m u l a t o r   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
         * p O u t   =   s u m ;  
         / *   D e s t i n a t i o n   p o i n t e r   i s   u p d a t e d   a c c o r d i n g   t o   t h e   a d d r e s s   m o d i f i e r ,   i n c   * /  
         p O u t   + =   i n c ;  
  
         / *   U p d a t e   t h e   i n p u t A   a n d   i n p u t B   p o i n t e r s   f o r   n e x t   M A C   c a l c u l a t i o n   * /  
         p x   =   + + p S r c 1 ;  
         p y   =   p I n 2 ;  
  
         / *   D e c r e m e n t   t h e   M A C   c o u n t   * /  
         c o u n t - - ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l o c k S i z e 3 - - ;  
     }  
  
 # e l s e  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 0   * /  
  
     f l o a t 3 2 _ t   * p I n 1   =   p S r c A ;                                               / *   i n p u t A   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p I n 2   =   p S r c B   +   ( s r c B L e n   -   1 U ) ;             / *   i n p u t B   p o i n t e r   * /  
     f l o a t 3 2 _ t   s u m ;                                                                   / *   A c c u m u l a t o r   * /  
     u i n t 3 2 _ t   i   =   0 U ,   j ;                                                         / *   l o o p   c o u n t e r s   * /  
     u i n t 3 2 _ t   i n v   =   0 U ;                                                           / *   R e v e r s e   o r d e r   f l a g   * /  
     u i n t 3 2 _ t   t o t   =   0 U ;                                                           / *   L e n g t h   * /  
  
     / *   T h e   a l g o r i t h m   i m p l e m e n t a t i o n   i s   b a s e d   o n   t h e   l e n g t h s   o f   t h e   i n p u t s .   * /  
     / *   s r c B   i s   a l w a y s   m a d e   t o   s l i d e   a c r o s s   s r c A .   * /  
     / *   S o   s r c B L e n   i s   a l w a y s   c o n s i d e r e d   a s   s h o r t e r   o r   e q u a l   t o   s r c A L e n   * /  
     / *   B u t   C O R R ( x ,   y )   i s   r e v e r s e   o f   C O R R ( y ,   x )   * /  
     / *   S o ,   w h e n   s r c B L e n   >   s r c A L e n ,   o u t p u t   p o i n t e r   i s   m a d e   t o   p o i n t   t o   t h e   e n d   o f   t h e   o u t p u t   b u f f e r   * /  
     / *   a n d   a   v a r a i b l e ,   i n v   i s   s e t   t o   1   * /  
     / *   I f   l e n g t h s   a r e   n o t   e q u a l   t h e n   z e r o   p a d   h a s   t o   b e   d o n e   t o     m a k e   t h e   t w o  
       *   i n p u t s   o f   s a m e   l e n g t h .   B u t   t o   i m p r o v e   t h e   p e r f o r m a n c e ,   w e   a s s u m e   z e r o e s  
       *   i n   t h e   o u t p u t   i n s t e a d   o f   z e r o   p a d d i n g   e i t h e r   o f   t h e   t h e   i n p u t s * /  
     / *   I f   s r c A L e n   >   s r c B L e n ,   ( s r c A L e n   -   s r c B L e n )   z e r o e s   h a s   t o   i n c l u d e d   i n   t h e  
       *   s t a r t i n g   o f   t h e   o u t p u t   b u f f e r   * /  
     / *   I f   s r c A L e n   <   s r c B L e n ,   ( s r c A L e n   -   s r c B L e n )   z e r o e s   h a s   t o   i n c l u d e d   i n   t h e  
       *   e n d i n g   o f   t h e   o u t p u t   b u f f e r   * /  
     / *   O n c e   t h e   z e r o   p a d d i n g   i s   d o n e   t h e   r e m a i n i n g   o f   t h e   o u t p u t   i s   c a l c u a l t e d  
       *   u s i n g   c o n v o l u t i o n   b u t   w i t h   t h e   s h o r t e r   s i g n a l   t i m e   s h i f t e d .   * /  
  
     / *   C a l c u l a t e   t h e   l e n g t h   o f   t h e   r e m a i n i n g   s e q u e n c e   * /  
     t o t   =   ( ( s r c A L e n   +   s r c B L e n )   -   2 U ) ;  
  
     i f   ( s r c A L e n   >   s r c B L e n )  
     {  
         / *   C a l c u l a t i n g   t h e   n u m b e r   o f   z e r o s   t o   b e   p a d d e d   t o   t h e   o u t p u t   * /  
         j   =   s r c A L e n   -   s r c B L e n ;  
  
         / *   I n i t i a l i s e   t h e   p o i n t e r   a f t e r   z e r o   p a d d i n g   * /  
         p D s t   + =   j ;  
     }  
  
     e l s e   i f   ( s r c A L e n   <   s r c B L e n )  
     {  
         / *   I n i t i a l i z a t i o n   t o   i n p u t B   p o i n t e r   * /  
         p I n 1   =   p S r c B ;  
  
         / *   I n i t i a l i z a t i o n   t o   t h e   e n d   o f   i n p u t A   p o i n t e r   * /  
         p I n 2   =   p S r c A   +   ( s r c A L e n   -   1 U ) ;  
  
         / *   I n i t i a l i s a t i o n   o f   t h e   p o i n t e r   a f t e r   z e r o   p a d d i n g   * /  
         p D s t   =   p D s t   +   t o t ;  
  
         / *   S w a p p i n g   t h e   l e n g t h s   * /  
         j   =   s r c A L e n ;  
         s r c A L e n   =   s r c B L e n ;  
         s r c B L e n   =   j ;  
  
         / *   S e t t i n g   t h e   r e v e r s e   f l a g   * /  
         i n v   =   1 ;  
  
     }  
  
     / *   L o o p   t o   c a l c u l a t e   c o n v o l u t i o n   f o r   o u t p u t   l e n g t h   n u m b e r   o f   t i m e s   * /  
     f o r   ( i   =   0 U ;   i   < =   t o t ;   i + + )  
     {  
         / *   I n i t i a l i z e   s u m   w i t h   z e r o   t o   c a r r y   o n   M A C   o p e r a t i o n s   * /  
         s u m   =   0 . 0 f ;  
  
         / *   L o o p   t o   p e r f o r m   M A C   o p e r a t i o n s   a c c o r d i n g   t o   c o n v o l u t i o n   e q u a t i o n   * /  
         f o r   ( j   =   0 U ;   j   < =   i ;   j + + )  
         {  
             / *   C h e c k   t h e   a r r a y   l i m i t a t i o n s   * /  
             i f   ( ( ( ( i   -   j )   <   s r c B L e n )   & &   ( j   <   s r c A L e n ) ) )  
             {  
                 / *   z [ i ]   + =   x [ i - j ]   *   y [ j ]   * /  
                 s u m   + =   p I n 1 [ j ]   *   p I n 2 [ - ( ( i n t 3 2 _ t )   i   -   j ) ] ;  
             }  
         }  
         / *   S t o r e   t h e   o u t p u t   i n   t h e   d e s t i n a t i o n   b u f f e r   * /  
         i f   ( i n v   = =   1 )  
             * p D s t - -   =   s u m ;  
         e l s e  
             * p D s t + +   =   s u m ;  
     }  
  
 # e n d i f   / *       # i f   d e f i n e d   ( A R M _ M A T H _ D S P )   * /  
  
 }  
  
 / * *  
   *   @ }   e n d   o f   C o r r   g r o u p  
   * /  