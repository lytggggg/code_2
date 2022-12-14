??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ c o r r e l a t e _ f a s t _ o p t _ q 1 5 . c  
   *   D e s c r i p t i o n :     F a s t   Q 1 5   C o r r e l a t i o n  
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
   *   @ a d d t o g r o u p   C o r r  
   *   @ {  
   * /  
  
 / * *  
   *   @ b r i e f   C o r r e l a t i o n   o f   Q 1 5   s e q u e n c e s   ( f a s t   v e r s i o n )   f o r   C o r t e x - M 3   a n d   C o r t e x - M 4 .  
   *   @ p a r a m [ i n ]   * p S r c A   p o i n t s   t o   t h e   f i r s t   i n p u t   s e q u e n c e .  
   *   @ p a r a m [ i n ]   s r c A L e n   l e n g t h   o f   t h e   f i r s t   i n p u t   s e q u e n c e .  
   *   @ p a r a m [ i n ]   * p S r c B   p o i n t s   t o   t h e   s e c o n d   i n p u t   s e q u e n c e .  
   *   @ p a r a m [ i n ]   s r c B L e n   l e n g t h   o f   t h e   s e c o n d   i n p u t   s e q u e n c e .  
   *   @ p a r a m [ o u t ]   * p D s t   p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   o u t p u t   r e s u l t   i s   w r i t t e n .     L e n g t h   2   *   m a x ( s r c A L e n ,   s r c B L e n )   -   1 .  
   *   @ p a r a m [ i n ]     * p S c r a t c h   p o i n t s   t o   s c r a t c h   b u f f e r   o f   s i z e   m a x ( s r c A L e n ,   s r c B L e n )   +   2 * m i n ( s r c A L e n ,   s r c B L e n )   -   2 .  
   *   @ r e t u r n   n o n e .  
   *  
   *  
   *   \ p a r   R e s t r i c t i o n s  
   *     I f   t h e   s i l i c o n   d o e s   n o t   s u p p o r t   u n a l i g n e d   m e m o r y   a c c e s s   e n a b l e   t h e   m a c r o   U N A L I G N E D _ S U P P O R T _ D I S A B L E  
   *     I n   t h i s   c a s e   i n p u t ,   o u t p u t ,   s c r a t c h   b u f f e r s   s h o u l d   b e   a l i g n e d   b y   3 2 - b i t  
   *  
   *  
   *   < b > S c a l i n g   a n d   O v e r f l o w   B e h a v i o r : < / b >  
   *  
   *   \ p a r  
   *   T h i s   f a s t   v e r s i o n   u s e s   a   3 2 - b i t   a c c u m u l a t o r   w i t h   2 . 3 0   f o r m a t .  
   *   T h e   a c c u m u l a t o r   m a i n t a i n s   f u l l   p r e c i s i o n   o f   t h e   i n t e r m e d i a t e   m u l t i p l i c a t i o n   r e s u l t s   b u t   p r o v i d e s   o n l y   a   s i n g l e   g u a r d   b i t .  
   *   T h e r e   i s   n o   s a t u r a t i o n   o n   i n t e r m e d i a t e   a d d i t i o n s .  
   *   T h u s ,   i f   t h e   a c c u m u l a t o r   o v e r f l o w s   i t   w r a p s   a r o u n d   a n d   d i s t o r t s   t h e   r e s u l t .  
   *   T h e   i n p u t   s i g n a l s   s h o u l d   b e   s c a l e d   d o w n   t o   a v o i d   i n t e r m e d i a t e   o v e r f l o w s .  
   *   S c a l e   d o w n   o n e   o f   t h e   i n p u t s   b y   1 / m i n ( s r c A L e n ,   s r c B L e n )   t o   a v o i d   o v e r f l o w   s i n c e   a  
   *   m a x i m u m   o f   m i n ( s r c A L e n ,   s r c B L e n )   n u m b e r   o f   a d d i t i o n s   i s   c a r r i e d   i n t e r n a l l y .  
   *   T h e   2 . 3 0   a c c u m u l a t o r   i s   r i g h t   s h i f t e d   b y   1 5   b i t s   a n d   t h e n   s a t u r a t e d   t o   1 . 1 5   f o r m a t   t o   y i e l d   t h e   f i n a l   r e s u l t .  
   *  
   *   \ p a r  
   *   S e e   < c o d e > a r m _ c o r r e l a t e _ q 1 5 ( ) < / c o d e >   f o r   a   s l o w e r   i m p l e m e n t a t i o n   o f   t h i s   f u n c t i o n   w h i c h   u s e s   a   6 4 - b i t   a c c u m u l a t o r   t o   a v o i d   w r a p   a r o u n d   d i s t o r t i o n .  
   * /  
  
 v o i d   a r m _ c o r r e l a t e _ f a s t _ o p t _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     u i n t 3 2 _ t   s r c A L e n ,  
     q 1 5 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   s r c B L e n ,  
     q 1 5 _ t   *   p D s t ,  
     q 1 5 _ t   *   p S c r a t c h )  
 {  
     q 1 5 _ t   * p I n 1 ;                                                                       / *   i n p u t A   p o i n t e r                               * /  
     q 1 5 _ t   * p I n 2 ;                                                                       / *   i n p u t B   p o i n t e r                               * /  
     q 3 1 _ t   a c c 0 ,   a c c 1 ,   a c c 2 ,   a c c 3 ;                                     / *   A c c u m u l a t o r s                                     * /  
     q 1 5 _ t   * p y ;                                                                           / *   I n t e r m e d i a t e   i n p u t B   p o i n t e r     * /  
     q 3 1 _ t   x 1 ,   x 2 ,   x 3 ;                                                             / *   t e m p o r a r y   v a r i a b l e s   f o r   h o l d i n g   i n p u t   a n d   c o e f f i c i e n t   v a l u e s   * /  
     u i n t 3 2 _ t   j ,   b l k C n t ,   o u t B l o c k S i z e ;                             / *   l o o p   c o u n t e r                                   * /  
     i n t 3 2 _ t   i n c   =   1 ;                                                               / *   D e s t i n a t i o n   a d d r e s s   m o d i f i e r   * /  
     u i n t 3 2 _ t   t a p C n t ;  
     q 3 1 _ t   y 1 ,   y 2 ;  
     q 1 5 _ t   * p S c r ;                                                                       / *   I n t e r m e d i a t e   p o i n t e r s                 * /  
     q 1 5 _ t   * p O u t   =   p D s t ;                                                         / *   o u t p u t   p o i n t e r                               * /  
 # i f d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E  
  
     q 1 5 _ t   a ,   b ;  
  
 # e n d i f   / *   # i f n d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E   * /  
  
     / *   T h e   a l g o r i t h m   i m p l e m e n t a t i o n   i s   b a s e d   o n   t h e   l e n g t h s   o f   t h e   i n p u t s .   * /  
     / *   s r c B   i s   a l w a y s   m a d e   t o   s l i d e   a c r o s s   s r c A .   * /  
     / *   S o   s r c B L e n   i s   a l w a y s   c o n s i d e r e d   a s   s h o r t e r   o r   e q u a l   t o   s r c A L e n   * /  
     / *   B u t   C O R R ( x ,   y )   i s   r e v e r s e   o f   C O R R ( y ,   x )   * /  
     / *   S o ,   w h e n   s r c B L e n   >   s r c A L e n ,   o u t p u t   p o i n t e r   i s   m a d e   t o   p o i n t   t o   t h e   e n d   o f   t h e   o u t p u t   b u f f e r   * /  
     / *   a n d   t h e   d e s t i n a t i o n   p o i n t e r   m o d i f i e r ,   i n c   i s   s e t   t o   - 1   * /  
     / *   I f   s r c A L e n   >   s r c B L e n ,   z e r o   p a d   h a s   t o   b e   d o n e   t o   s r c B   t o   m a k e   t h e   t w o   i n p u t s   o f   s a m e   l e n g t h   * /  
     / *   B u t   t o   i m p r o v e   t h e   p e r f o r m a n c e ,  
       *   w e   i n c l u d e   z e r o e s   i n   t h e   o u t p u t   i n s t e a d   o f   z e r o   p a d d i n g   e i t h e r   o f   t h e   t h e   i n p u t s * /  
     / *   I f   s r c A L e n   >   s r c B L e n ,  
       *   ( s r c A L e n   -   s r c B L e n )   z e r o e s   h a s   t o   i n c l u d e d   i n   t h e   s t a r t i n g   o f   t h e   o u t p u t   b u f f e r   * /  
     / *   I f   s r c A L e n   <   s r c B L e n ,  
       *   ( s r c A L e n   -   s r c B L e n )   z e r o e s   h a s   t o   i n c l u d e d   i n   t h e   e n d i n g   o f   t h e   o u t p u t   b u f f e r   * /  
     i f   ( s r c A L e n   > =   s r c B L e n )  
     {  
         / *   I n i t i a l i z a t i o n   o f   i n p u t A   p o i n t e r   * /  
         p I n 1   =   ( p S r c A ) ;  
  
         / *   I n i t i a l i z a t i o n   o f   i n p u t B   p o i n t e r   * /  
         p I n 2   =   ( p S r c B ) ;  
  
         / *   N u m b e r   o f   o u t p u t   s a m p l e s   i s   c a l c u l a t e d   * /  
         o u t B l o c k S i z e   =   ( 2 U   *   s r c A L e n )   -   1 U ;  
  
         / *   W h e n   s r c A L e n   >   s r c B L e n ,   z e r o   p a d d i n g   i s   d o n e   t o   s r c B  
           *   t o   m a k e   t h e i r   l e n g t h s   e q u a l .  
           *   I n s t e a d ,   ( o u t B l o c k S i z e   -   ( s r c A L e n   +   s r c B L e n   -   1 ) )  
           *   n u m b e r   o f   o u t p u t   s a m p l e s   a r e   m a d e   z e r o   * /  
         j   =   o u t B l o c k S i z e   -   ( s r c A L e n   +   ( s r c B L e n   -   1 U ) ) ;  
  
         / *   U p d a t i n g   t h e   p o i n t e r   p o s i t i o n   t o   n o n   z e r o   v a l u e   * /  
         p O u t   + =   j ;  
  
     }  
     e l s e  
     {  
         / *   I n i t i a l i z a t i o n   o f   i n p u t A   p o i n t e r   * /  
         p I n 1   =   ( p S r c B ) ;  
  
         / *   I n i t i a l i z a t i o n   o f   i n p u t B   p o i n t e r   * /  
         p I n 2   =   ( p S r c A ) ;  
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
     p S c r   =   p S c r a t c h ;  
  
     / *   F i l l   ( s r c B L e n   -   1 U )   z e r o s   i n   s c r a t c h   b u f f e r   * /  
     a r m _ f i l l _ q 1 5 ( 0 ,   p S c r ,   ( s r c B L e n   -   1 U ) ) ;  
  
     / *   U p d a t e   t e m p o r a r y   s c r a t c h   p o i n t e r   * /  
     p S c r   + =   ( s r c B L e n   -   1 U ) ;  
  
 # i f n d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E  
  
     / *   C o p y   ( s r c A L e n )   s a m p l e s   i n   s c r a t c h   b u f f e r   * /  
     a r m _ c o p y _ q 1 5 ( p I n 1 ,   p S c r ,   s r c A L e n ) ;  
  
     / *   U p d a t e   p o i n t e r s   * /  
     p S c r   + =   s r c A L e n ;  
  
 # e l s e  
  
     / *   A p p l y   l o o p   u n r o l l i n g   a n d   d o   4   C o p i e s   s i m u l t a n e o u s l y .   * /  
     j   =   s r c A L e n   > >   2 U ;  
  
     / *   F i r s t   p a r t   o f   t h e   p r o c e s s i n g   w i t h   l o o p   u n r o l l i n g   c o p i e s   4   d a t a   p o i n t s   a t   a   t i m e .  
       * *   a   s e c o n d   l o o p   b e l o w   c o p i e s   f o r   t h e   r e m a i n i n g   1   t o   3   s a m p l e s .   * /  
     w h i l e   ( j   >   0 U )  
     {  
         / *   c o p y   s e c o n d   b u f f e r   i n   r e v e r s a l   m a n n e r   * /  
         * p S c r + +   =   * p I n 1 + + ;  
         * p S c r + +   =   * p I n 1 + + ;  
         * p S c r + +   =   * p I n 1 + + ;  
         * p S c r + +   =   * p I n 1 + + ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         j - - ;  
     }  
  
     / *   I f   t h e   c o u n t   i s   n o t   a   m u l t i p l e   o f   4 ,   c o p y   r e m a i n i n g   s a m p l e s   h e r e .  
       * *   N o   l o o p   u n r o l l i n g   i s   u s e d .   * /  
     j   =   s r c A L e n   %   0 x 4 U ;  
  
     w h i l e   ( j   >   0 U )  
     {  
         / *   c o p y   s e c o n d   b u f f e r   i n   r e v e r s a l   m a n n e r   f o r   r e m a i n i n g   s a m p l e s   * /  
         * p S c r + +   =   * p I n 1 + + ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         j - - ;  
     }  
  
 # e n d i f   / *   # i f n d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E   * /  
  
 # i f n d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E  
  
     / *   F i l l   ( s r c B L e n   -   1 U )   z e r o s   a t   e n d   o f   s c r a t c h   b u f f e r   * /  
     a r m _ f i l l _ q 1 5 ( 0 ,   p S c r ,   ( s r c B L e n   -   1 U ) ) ;  
  
     / *   U p d a t e   p o i n t e r   * /  
     p S c r   + =   ( s r c B L e n   -   1 U ) ;  
  
 # e l s e  
  
 / *   A p p l y   l o o p   u n r o l l i n g   a n d   d o   4   C o p i e s   s i m u l t a n e o u s l y .   * /  
     j   =   ( s r c B L e n   -   1 U )   > >   2 U ;  
  
     / *   F i r s t   p a r t   o f   t h e   p r o c e s s i n g   w i t h   l o o p   u n r o l l i n g   c o p i e s   4   d a t a   p o i n t s   a t   a   t i m e .  
       * *   a   s e c o n d   l o o p   b e l o w   c o p i e s   f o r   t h e   r e m a i n i n g   1   t o   3   s a m p l e s .   * /  
     w h i l e   ( j   >   0 U )  
     {  
         / *   c o p y   s e c o n d   b u f f e r   i n   r e v e r s a l   m a n n e r   * /  
         * p S c r + +   =   0 ;  
         * p S c r + +   =   0 ;  
         * p S c r + +   =   0 ;  
         * p S c r + +   =   0 ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         j - - ;  
     }  
  
     / *   I f   t h e   c o u n t   i s   n o t   a   m u l t i p l e   o f   4 ,   c o p y   r e m a i n i n g   s a m p l e s   h e r e .  
       * *   N o   l o o p   u n r o l l i n g   i s   u s e d .   * /  
     j   =   ( s r c B L e n   -   1 U )   %   0 x 4 U ;  
  
     w h i l e   ( j   >   0 U )  
     {  
         / *   c o p y   s e c o n d   b u f f e r   i n   r e v e r s a l   m a n n e r   f o r   r e m a i n i n g   s a m p l e s   * /  
         * p S c r + +   =   0 ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         j - - ;  
     }  
  
 # e n d i f   / *   # i f n d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E   * /  
  
     / *   T e m p o r a r y   p o i n t e r   f o r   s c r a t c h 2   * /  
     p y   =   p I n 2 ;  
  
  
     / *   A c t u a l   c o r r e l a t i o n   p r o c e s s   s t a r t s   h e r e   * /  
     b l k C n t   =   ( s r c A L e n   +   s r c B L e n   -   1 U )   > >   2 ;  
  
     w h i l e   ( b l k C n t   >   0 )  
     {  
         / *   I n i t i a l z e   t e m p o r a r y   s c r a t c h   p o i n t e r   a s   s c r a t c h 1   * /  
         p S c r   =   p S c r a t c h ;  
  
         / *   C l e a r   A c c u m l a t o r s   * /  
         a c c 0   =   0 ;  
         a c c 1   =   0 ;  
         a c c 2   =   0 ;  
         a c c 3   =   0 ;  
  
         / *   R e a d   f o u r   s a m p l e s   f r o m   s c r a t c h 1   b u f f e r   * /  
         x 1   =   * _ _ S I M D 3 2 ( p S c r ) + + ;  
  
         / *   R e a d   n e x t   f o u r   s a m p l e s   f r o m   s c r a t c h 1   b u f f e r   * /  
         x 2   =   * _ _ S I M D 3 2 ( p S c r ) + + ;  
  
         t a p C n t   =   ( s r c B L e n )   > >   2 U ;  
  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
  
 # i f n d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E  
  
             / *   R e a d   f o u r   s a m p l e s   f r o m   s m a l l e r   b u f f e r   * /  
             y 1   =   _ S I M D 3 2 _ O F F S E T ( p I n 2 ) ;  
             y 2   =   _ S I M D 3 2 _ O F F S E T ( p I n 2   +   2 U ) ;  
  
             a c c 0   =   _ _ S M L A D ( x 1 ,   y 1 ,   a c c 0 ) ;  
  
             a c c 2   =   _ _ S M L A D ( x 2 ,   y 1 ,   a c c 2 ) ;  
  
 # i f n d e f   A R M _ M A T H _ B I G _ E N D I A N  
             x 3   =   _ _ P K H B T ( x 2 ,   x 1 ,   0 ) ;  
 # e l s e  
             x 3   =   _ _ P K H B T ( x 1 ,   x 2 ,   0 ) ;  
 # e n d i f  
  
             a c c 1   =   _ _ S M L A D X ( x 3 ,   y 1 ,   a c c 1 ) ;  
  
             x 1   =   _ S I M D 3 2 _ O F F S E T ( p S c r ) ;  
  
             a c c 0   =   _ _ S M L A D ( x 2 ,   y 2 ,   a c c 0 ) ;  
  
             a c c 2   =   _ _ S M L A D ( x 1 ,   y 2 ,   a c c 2 ) ;  
  
 # i f n d e f   A R M _ M A T H _ B I G _ E N D I A N  
             x 3   =   _ _ P K H B T ( x 1 ,   x 2 ,   0 ) ;  
 # e l s e  
             x 3   =   _ _ P K H B T ( x 2 ,   x 1 ,   0 ) ;  
 # e n d i f  
  
             a c c 3   =   _ _ S M L A D X ( x 3 ,   y 1 ,   a c c 3 ) ;  
  
             a c c 1   =   _ _ S M L A D X ( x 3 ,   y 2 ,   a c c 1 ) ;  
  
             x 2   =   _ S I M D 3 2 _ O F F S E T ( p S c r   +   2 U ) ;  
  
 # i f n d e f   A R M _ M A T H _ B I G _ E N D I A N  
             x 3   =   _ _ P K H B T ( x 2 ,   x 1 ,   0 ) ;  
 # e l s e  
             x 3   =   _ _ P K H B T ( x 1 ,   x 2 ,   0 ) ;  
 # e n d i f  
  
             a c c 3   =   _ _ S M L A D X ( x 3 ,   y 2 ,   a c c 3 ) ;  
 # e l s e  
  
             / *   R e a d   f o u r   s a m p l e s   f r o m   s m a l l e r   b u f f e r   * /  
             a   =   * p I n 2 ;  
             b   =   * ( p I n 2   +   1 ) ;  
  
 # i f n d e f   A R M _ M A T H _ B I G _ E N D I A N  
             y 1   =   _ _ P K H B T ( a ,   b ,   1 6 ) ;  
 # e l s e  
             y 1   =   _ _ P K H B T ( b ,   a ,   1 6 ) ;  
 # e n d i f  
  
             a   =   * ( p I n 2   +   2 ) ;  
             b   =   * ( p I n 2   +   3 ) ;  
 # i f n d e f   A R M _ M A T H _ B I G _ E N D I A N  
             y 2   =   _ _ P K H B T ( a ,   b ,   1 6 ) ;  
 # e l s e  
             y 2   =   _ _ P K H B T ( b ,   a ,   1 6 ) ;  
 # e n d i f  
  
             a c c 0   =   _ _ S M L A D ( x 1 ,   y 1 ,   a c c 0 ) ;  
  
             a c c 2   =   _ _ S M L A D ( x 2 ,   y 1 ,   a c c 2 ) ;  
  
 # i f n d e f   A R M _ M A T H _ B I G _ E N D I A N  
             x 3   =   _ _ P K H B T ( x 2 ,   x 1 ,   0 ) ;  
 # e l s e  
             x 3   =   _ _ P K H B T ( x 1 ,   x 2 ,   0 ) ;  
 # e n d i f  
  
             a c c 1   =   _ _ S M L A D X ( x 3 ,   y 1 ,   a c c 1 ) ;  
  
             a   =   * p S c r ;  
             b   =   * ( p S c r   +   1 ) ;  
  
 # i f n d e f   A R M _ M A T H _ B I G _ E N D I A N  
             x 1   =   _ _ P K H B T ( a ,   b ,   1 6 ) ;  
 # e l s e  
             x 1   =   _ _ P K H B T ( b ,   a ,   1 6 ) ;  
 # e n d i f  
  
             a c c 0   =   _ _ S M L A D ( x 2 ,   y 2 ,   a c c 0 ) ;  
  
             a c c 2   =   _ _ S M L A D ( x 1 ,   y 2 ,   a c c 2 ) ;  
  
 # i f n d e f   A R M _ M A T H _ B I G _ E N D I A N  
             x 3   =   _ _ P K H B T ( x 1 ,   x 2 ,   0 ) ;  
 # e l s e  
             x 3   =   _ _ P K H B T ( x 2 ,   x 1 ,   0 ) ;  
 # e n d i f  
  
             a c c 3   =   _ _ S M L A D X ( x 3 ,   y 1 ,   a c c 3 ) ;  
  
             a c c 1   =   _ _ S M L A D X ( x 3 ,   y 2 ,   a c c 1 ) ;  
  
             a   =   * ( p S c r   +   2 ) ;  
             b   =   * ( p S c r   +   3 ) ;  
  
 # i f n d e f   A R M _ M A T H _ B I G _ E N D I A N  
             x 2   =   _ _ P K H B T ( a ,   b ,   1 6 ) ;  
 # e l s e  
             x 2   =   _ _ P K H B T ( b ,   a ,   1 6 ) ;  
 # e n d i f  
  
 # i f n d e f   A R M _ M A T H _ B I G _ E N D I A N  
             x 3   =   _ _ P K H B T ( x 2 ,   x 1 ,   0 ) ;  
 # e l s e  
             x 3   =   _ _ P K H B T ( x 1 ,   x 2 ,   0 ) ;  
 # e n d i f  
  
             a c c 3   =   _ _ S M L A D X ( x 3 ,   y 2 ,   a c c 3 ) ;  
  
 # e n d i f   / *   # i f n d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E   * /  
  
             p I n 2   + =   4 U ;  
  
             p S c r   + =   4 U ;  
  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
         }  
  
  
  
         / *   U p d a t e   s c r a t c h   p o i n t e r   f o r   r e m a i n i n g   s a m p l e s   o f   s m a l l e r   l e n g t h   s e q u e n c e   * /  
         p S c r   - =   4 U ;  
  
  
         / *   a p p l y   s a m e   a b o v e   f o r   r e m a i n i n g   s a m p l e s   o f   s m a l l e r   l e n g t h   s e q u e n c e   * /  
         t a p C n t   =   ( s r c B L e n )   &   3 U ;  
  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
  
             / *   a c c u m l a t e   t h e   r e s u l t s   * /  
             a c c 0   + =   ( * p S c r + +   *   * p I n 2 ) ;  
             a c c 1   + =   ( * p S c r + +   *   * p I n 2 ) ;  
             a c c 2   + =   ( * p S c r + +   *   * p I n 2 ) ;  
             a c c 3   + =   ( * p S c r + +   *   * p I n 2 + + ) ;  
  
             p S c r   - =   3 U ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
         }  
  
         b l k C n t - - ;  
  
  
         / *   S t o r e   t h e   r e s u l t s   i n   t h e   a c c u m u l a t o r s   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
         * p O u t   =   ( _ _ S S A T ( a c c 0   > >   1 5 U ,   1 6 ) ) ;  
         p O u t   + =   i n c ;  
         * p O u t   =   ( _ _ S S A T ( a c c 1   > >   1 5 U ,   1 6 ) ) ;  
         p O u t   + =   i n c ;  
         * p O u t   =   ( _ _ S S A T ( a c c 2   > >   1 5 U ,   1 6 ) ) ;  
         p O u t   + =   i n c ;  
         * p O u t   =   ( _ _ S S A T ( a c c 3   > >   1 5 U ,   1 6 ) ) ;  
         p O u t   + =   i n c ;  
  
  
         / *   I n i t i a l i z a t i o n   o f   i n p u t B   p o i n t e r   * /  
         p I n 2   =   p y ;  
  
         p S c r a t c h   + =   4 U ;  
  
     }  
  
  
     b l k C n t   =   ( s r c A L e n   +   s r c B L e n   -   1 U )   &   0 x 3 ;  
  
     / *   C a l c u l a t e   c o r r e l a t i o n   f o r   r e m a i n i n g   s a m p l e s   o f   B i g g e r   l e n g t h   s e q u e n c e   * /  
     w h i l e   ( b l k C n t   >   0 )  
     {  
         / *   I n i t i a l z e   t e m p o r a r y   s c r a t c h   p o i n t e r   a s   s c r a t c h 1   * /  
         p S c r   =   p S c r a t c h ;  
  
         / *   C l e a r   A c c u m l a t o r s   * /  
         a c c 0   =   0 ;  
  
         t a p C n t   =   ( s r c B L e n )   > >   1 U ;  
  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
  
             a c c 0   + =   ( * p S c r + +   *   * p I n 2 + + ) ;  
             a c c 0   + =   ( * p S c r + +   *   * p I n 2 + + ) ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
         }  
  
         t a p C n t   =   ( s r c B L e n )   &   1 U ;  
  
         / *   a p p l y   s a m e   a b o v e   f o r   r e m a i n i n g   s a m p l e s   o f   s m a l l e r   l e n g t h   s e q u e n c e   * /  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
  
             / *   a c c u m l a t e   t h e   r e s u l t s   * /  
             a c c 0   + =   ( * p S c r + +   *   * p I n 2 + + ) ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
         }  
  
         b l k C n t - - ;  
  
         / *   S t o r e   t h e   r e s u l t   i n   t h e   a c c u m u l a t o r   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
  
         * p O u t   =   ( q 1 5 _ t )   ( _ _ S S A T ( ( a c c 0   > >   1 5 ) ,   1 6 ) ) ;  
  
         p O u t   + =   i n c ;  
  
         / *   I n i t i a l i z a t i o n   o f   i n p u t B   p o i n t e r   * /  
         p I n 2   =   p y ;  
  
         p S c r a t c h   + =   1 U ;  
  
     }  
 }  
  
 / * *  
   *   @ }   e n d   o f   C o r r   g r o u p  
   * /  