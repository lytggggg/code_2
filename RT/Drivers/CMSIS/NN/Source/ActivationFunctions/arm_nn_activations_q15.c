??/ *  
   *   C o p y r i g h t   ( C )   2 0 1 0 - 2 0 1 8   A r m   L i m i t e d   o r   i t s   a f f i l i a t e s .   A l l   r i g h t s   r e s e r v e d .  
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
 / *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   N N   L i b r a r y  
   *   T i t l e :                 a r m _ n n _ a c t i v a t i o n s _ q 1 5 . c  
   *   D e s c r i p t i o n :     Q 1 5   n e u r a l   n e t w o r k   a c t i v a t i o n   f u n c t i o n   u s i n g   d i r e c t   t a b l e   l o o k - u p  
   *  
   *   $ D a t e :                 1 7 .   J a n u a r y   2 0 1 8  
   *   $ R e v i s i o n :         V . 1 . 0 . 0  
   *  
   *   T a r g e t   P r o c e s s o r :     C o r t e x - M   c o r e s  
   *  
   *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
  
 # i n c l u d e   " a r m _ m a t h . h "  
 # i n c l u d e   " a r m _ c o m m o n _ t a b l e s . h "  
 # i n c l u d e   " a r m _ n n f u n c t i o n s . h "  
  
 / * *  
   *     @ i n g r o u p   g r o u p N N  
   * /  
  
 / * *  
   *   @ a d d t o g r o u p   A c t i  
   *   @ {  
   * /  
  
     / * *  
       *   @ b r i e f   Q 1 5   n e u r a l   n e t w o r k   a c t i v a t i o n   f u n c t i o n   u s i n g   d i r e c t   t a b l e   l o o k - u p  
       *   @ p a r a m [ i n , o u t ]       d a t a                 p o i n t e r   t o   i n p u t  
       *   @ p a r a m [ i n ]               s i z e                 n u m b e r   o f   e l e m e n t s  
       *   @ p a r a m [ i n ]               i n t _ w i d t h       b i t - w i d t h   o f   t h e   i n t e g e r   p a r t ,   a s s u m e   t o   b e   s m a l l e r   t h a n   3  
       *   @ p a r a m [ i n ]               t y p e                 t y p e   o f   a c t i v a t i o n   f u n c t i o n s  
       *   @ r e t u r n   n o n e .  
       *  
       *   @ d e t a i l s  
       *    
       *   T h i s   i s   t h e   d i r e c t   t a b l e   l o o k - u p   a p p r o a c h .  
       *  
       *   A s s u m e   h e r e   t h e   i n t e g e r   p a r t   o f   t h e   f i x e d - p o i n t   i s   < =   3 .  
       *   M o r e   t h a n   3   j u s t   n o t   m a k i n g   m u c h   s e n s e ,   m a k e s   n o   d i f f e r e n c e   w i t h  
       *   s a t u r a t i o n   f o l l o w e d   b y   a n y   o f   t h e s e   a c t i v a t i o n   f u n c t i o n s .    
       * /  
  
 v o i d   a r m _ n n _ a c t i v a t i o n s _ d i r e c t _ q 1 5 ( q 1 5 _ t   *   d a t a ,   u i n t 1 6 _ t   s i z e ,   u i n t 1 6 _ t   i n t _ w i d t h ,   a r m _ n n _ a c t i v a t i o n _ t y p e   t y p e )  
 {  
         u i n t 1 6 _ t     i   =   s i z e ;  
         q 1 5 _ t         * p I n   =   d a t a ;  
         q 1 5 _ t         * p O u t   =   d a t a ;  
         u i n t 1 6 _ t     s h i f t _ s i z e   =   8   +   3   -   i n t _ w i d t h ;  
         u i n t 3 2 _ t     b i t _ m a s k   =   0 x 7 F F   > >   i n t _ w i d t h ;  
         u i n t 3 2 _ t     f u l l _ f r a c   =   b i t _ m a s k   +   1 ;  
         c o n s t   q 1 5 _ t   * l o o k u p _ t a b l e ;  
  
         s w i t c h   ( t y p e )  
         {  
         c a s e   A R M _ S I G M O I D :  
                 l o o k u p _ t a b l e   =   s i g m o i d T a b l e _ q 1 5 ;  
                 b r e a k ;  
         c a s e   A R M _ T A N H :  
         d e f a u l t :  
                 l o o k u p _ t a b l e   =   t a n h T a b l e _ q 1 5 ;  
                 b r e a k ;  
         }  
  
         w h i l e   ( i )  
         {  
                 q 1 5 _ t           o u t ;  
                 q 1 5 _ t           i n   =   * p I n + + ;  
                 q 1 5 _ t           f r a c   =   ( u i n t 3 2 _ t )   i n   &   b i t _ m a s k ;  
                 q 1 5 _ t           v a l u e   =   l o o k u p _ t a b l e [ _ _ U S A T ( i n   > >   s h i f t _ s i z e ,   8 ) ] ;  
                 q 1 5 _ t           v a l u e 2   =   l o o k u p _ t a b l e [ _ _ U S A T ( 1   +   ( i n   > >   s h i f t _ s i z e ) ,   8 ) ] ;  
  
                 / *   d o i n g   t h e   i n t e r p o l a t i o n   h e r e   f o r   b e t t e r   a c c u r a c y   * /  
                 o u t   =   ( ( q 3 1 _ t )   ( f u l l _ f r a c   -   f r a c )   *   v a l u e   +   ( q 3 1 _ t )   v a l u e 2   *   f r a c )   > >   s h i f t _ s i z e ;  
  
                 * p O u t + +   =   o u t ;  
                 i - - ;  
         }  
  
 }  
  
 / * *  
   *   @ }   e n d   o f   A c t i   g r o u p  
   * /  