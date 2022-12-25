�?/ *  
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
   *   T i t l e :                 a r m _ d e p t h w i s e _ s e p a r a b l e _ c o n v _ H W C _ q 7 _ n o n s q u a r e . c  
   *   D e s c r i p t i o n :     Q 7   d e p t h w i s e   s e p a r a b l e   c o n v o l u t i o n   f u n c t i o n   ( n o n - s q u a r e   s h a p e )  
   *  
   *   $ D a t e :                 1 7 .   J a n u a r y   2 0 1 8  
   *   $ R e v i s i o n :         V . 1 . 0 . 0  
   *  
   *   T a r g e t   P r o c e s s o r :     C o r t e x - M   c o r e s  
   *  
   *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
  
 # i n c l u d e   " a r m _ m a t h . h "  
 # i n c l u d e   " a r m _ n n f u n c t i o n s . h "  
  
 / * *  
   *     @ i n g r o u p   g r o u p N N  
   * /  
  
 / * *  
   *   @ a d d t o g r o u p   N N C o n v  
   *   @ {  
   * /  
  
 / * *  
   *   @ b r i e f   Q 7   d e p t h w i s e   s e p a r a b l e   c o n v o l u t i o n   f u n c t i o n   ( n o n - s q u a r e   s h a p e )  
   *   @ p a r a m [ i n ]               I m _ i n                   p o i n t e r   t o   i n p u t   t e n s o r  
   *   @ p a r a m [ i n ]               d i m _ i m _ i n _ x       i n p u t   t e n s o r   d i m e n t i o n   x  
   *   @ p a r a m [ i n ]               d i m _ i m _ i n _ y       i n p u t   t e n s o r   d i m e n t i o n   y  
   *   @ p a r a m [ i n ]               c h _ i m _ i n             n u m b e r   o f   i n p u t   t e n s o r   c h a n n e l s  
   *   @ p a r a m [ i n ]               w t                         p o i n t e r   t o   k e r n e l   w e i g h t s  
   *   @ p a r a m [ i n ]               c h _ i m _ o u t           n u m b e r   o f   f i l t e r s ,   i . e . ,   o u t p u t   t e n s o r   c h a n n e l s  
   *   @ p a r a m [ i n ]               d i m _ k e r n e l _ x     f i l t e r   k e r n e l   s i z e   x  
   *   @ p a r a m [ i n ]               d i m _ k e r n e l _ y     f i l t e r   k e r n e l   s i z e   y  
   *   @ p a r a m [ i n ]               p a d d i n g _ x           p a d d i n g   s i z e s   x  
   *   @ p a r a m [ i n ]               p a d d i n g _ y           p a d d i n g   s i z e s   y  
   *   @ p a r a m [ i n ]               s t r i d e _ x             c o n v o l u t i o n   s t r i d e   x  
   *   @ p a r a m [ i n ]               s t r i d e _ y             c o n v o l u t i o n   s t r i d e   y  
   *   @ p a r a m [ i n ]               b i a s                     p o i n t e r   t o   b i a s  
   *   @ p a r a m [ i n ]               b i a s _ s h i f t         a m o u n t   o f   l e f t - s h i f t   f o r   b i a s  
   *   @ p a r a m [ i n ]               o u t _ s h i f t           a m o u n t   o f   r i g h t - s h i f t   f o r   o u t p u t  
   *   @ p a r a m [ i n , o u t ]       I m _ o u t                 p o i n t e r   t o   o u t p u t   t e n s o r  
   *   @ p a r a m [ i n ]               d i m _ i m _ o u t _ x     o u t p u t   t e n s o r   d i m e n s i o n   x  
   *   @ p a r a m [ i n ]               d i m _ i m _ o u t _ y     o u t p u t   t e n s o r   d i m e n s i o n   y  
   *   @ p a r a m [ i n , o u t ]       b u f f e r A               p o i n t e r   t o   b u f f e r   s p a c e   f o r   i n p u t    
   *   @ p a r a m [ i n , o u t ]       b u f f e r B               p o i n t e r   t o   b u f f e r   s p a c e   f o r   o u t p u t  
   *   @ r e t u r n           T h e   f u n c t i o n   r e t u r n s   e i t h e r  
   *   < c o d e > A R M _ M A T H _ S I Z E _ M I S M A T C H < / c o d e >   o r   < c o d e > A R M _ M A T H _ S U C C E S S < / c o d e >   b a s e d   o n   t h e   o u t c o m e   o f   s i z e   c h e c k i n g .  
   *  
   *   T h i s   f u n c t i o n   i s   t h e   v e r s i o n   w i t h   f u l l   l i s t   o f   o p t i m i z a t i o n   t r i c k s ,   b u t   w i t h  
   *   s o m e   c o n t r a i n t s :  
   *       c h _ i m _ i n   i s   m u l t i p l e   o f   2  
   *       c h _ i m _ o u t   i s   m u l t i p l e   o f   2  
   * /  
  
 a r m _ s t a t u s   a r m _ d e p t h w i s e _ s e p a r a b l e _ c o n v _ H W C _ q 7 _ n o n s q u a r e ( c o n s t   q 7 _ t   *   I m _ i n ,  
                                                                                                                   c o n s t   u i n t 1 6 _ t   d i m _ i m _ i n _ x ,  
                                                                                                                   c o n s t   u i n t 1 6 _ t   d i m _ i m _ i n _ y ,  
                                                                                                                   c o n s t   u i n t 1 6 _ t   c h _ i m _ i n ,  
                                                                                                                   c o n s t   q 7 _ t   *   w t ,  
                                                                                                                   c o n s t   u i n t 1 6 _ t   c h _ i m _ o u t ,  
                                                                                                                   c o n s t   u i n t 1 6 _ t   d i m _ k e r n e l _ x ,  
                                                                                                                   c o n s t   u i n t 1 6 _ t   d i m _ k e r n e l _ y ,  
                                                                                                                   c o n s t   u i n t 1 6 _ t   p a d d i n g _ x ,  
                                                                                                                   c o n s t   u i n t 1 6 _ t   p a d d i n g _ y ,  
                                                                                                                   c o n s t   u i n t 1 6 _ t   s t r i d e _ x ,  
                                                                                                                   c o n s t   u i n t 1 6 _ t   s t r i d e _ y ,  
                                                                                                                   c o n s t   q 7 _ t   *   b i a s ,  
                                                                                                                   c o n s t   u i n t 1 6 _ t   b i a s _ s h i f t ,  
                                                                                                                   c o n s t   u i n t 1 6 _ t   o u t _ s h i f t ,  
                                                                                                                   q 7 _ t   *   I m _ o u t ,  
                                                                                                                   c o n s t   u i n t 1 6 _ t   d i m _ i m _ o u t _ x ,  
                                                                                                                   c o n s t   u i n t 1 6 _ t   d i m _ i m _ o u t _ y ,    
                                                                                                                   q 1 5 _ t   *   b u f f e r A ,    
                                                                                                                   q 7 _ t   *   b u f f e r B )  
 {  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
         / *   R u n   t h e   f o l l o w i n g   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 7   * /  
  
 / *  
   *   I m p l e m e n t a t i o n :  
   *   T h e r e   a r e   3   n e s t e d   l o o p   h e r e :  
   *   I n n e r   l o o p :   c a l c u l a t e   e a c h   o u t p u t   v a l u e   w i t h   M A C   i n s t r u c t i o n   o v e r   a n   a c c u m u l a t o r  
   *   M i d       l o o p :   l o o p   o v e r   d i f f e r e n t   o u t p u t   c h a n n e l  
   *   O u t e r   l o o p :   l o o p   o v e r   d i f f e r e n t   o u t p u t   ( x ,   y )  
   *  
   * /  
  
         i n t 1 6 _ t       i _ o u t _ y ,   i _ o u t _ x ;  
         i n t 1 6 _ t       i _ k e r _ y ,   i _ k e r _ x ;  
         q 7 _ t           * c o l B u f f e r   =   ( q 7 _ t   * )   b u f f e r A ;  
         q 7 _ t           * p B u f f e r   =   c o l B u f f e r ;  
         c o n s t   q 7 _ t   * p B i a s   =   b i a s ;  
         q 7 _ t           * p O u t   =   I m _ o u t ;  
         u i n t 1 6 _ t     r o w C n t ;  
         u i n t 1 6 _ t     r o w _ s h i f t ;  
  
         / *   d o   s o m e   c h e c k i n g   h e r e ,   b a s i c a l l y   c h _ i m _ i n   = =   c h _ i m _ o u t   * /  
         i f   ( c h _ i m _ i n   ! =   c h _ i m _ o u t )  
         {  
                 r e t u r n   A R M _ M A T H _ S I Z E _ M I S M A T C H ;  
         }  
  
         f o r   ( i _ o u t _ y   =   0 ;   i _ o u t _ y   <   d i m _ i m _ o u t _ y ;   i _ o u t _ y + + )  
         {  
                 f o r   ( i _ o u t _ x   =   0 ;   i _ o u t _ x   <   d i m _ i m _ o u t _ x ;   i _ o u t _ x + + )  
                 {  
                         / *   w e   f i r s t   d o   i m 2 c o l   h e r e   * /  
                         f o r   ( i _ k e r _ y   =   i _ o u t _ y   *   s t r i d e _ y   -   p a d d i n g _ y ;   i _ k e r _ y   <   i _ o u t _ y   *   s t r i d e _ y   -   p a d d i n g _ y   +   d i m _ k e r n e l _ y ;  
                                   i _ k e r _ y + + )  
                         {  
                                 f o r   ( i _ k e r _ x   =   i _ o u t _ x   *   s t r i d e _ x   -   p a d d i n g _ x ;   i _ k e r _ x   <   i _ o u t _ x   *   s t r i d e _ x   -   p a d d i n g _ x   +   d i m _ k e r n e l _ x ;  
                                           i _ k e r _ x + + )  
                                 {  
                                         i f   ( i _ k e r _ y   <   0   | |   i _ k e r _ y   > =   d i m _ i m _ i n _ y   | |   i _ k e r _ x   <   0   | |   i _ k e r _ x   > =   d i m _ i m _ i n _ x )  
                                         {  
                                                 / *   a r m _ f i l l _ q 7 ( 0 ,   p B u f f e r ,   c h _ i m _ i n ) ;   * /  
                                                 m e m s e t ( p B u f f e r ,   0 ,   c h _ i m _ i n ) ;  
                                         }   e l s e  
                                         {  
                                                 / *   a r m _ c o p y _ q 7 ( ( q 7 _ t   * )   I m _ i n   +   ( i _ k e r _ y   *   d i m _ i m _ i n _ x   +   i _ k e r _ x )   *   c h _ i m _ i n ,   p B u f f e r ,   c h _ i m _ i n ) ;   * /  
                                                 m e m c p y ( p B u f f e r ,   ( q 7 _ t   * )   I m _ i n   +   ( i _ k e r _ y   *   d i m _ i m _ i n _ x   +   i _ k e r _ x )   *   c h _ i m _ i n ,   c h _ i m _ i n ) ;  
                                         }  
                                         p B u f f e r   + =   c h _ i m _ i n ;  
                                 }  
                         }  
  
                         / *   w e   w i l l   d o   t h e   c o m p u t a t i o n   h e r e   f o r   e a c h   c h a n n e l   * /  
                         r o w C n t   =   c h _ i m _ o u t   > >   2 ;  
                         r o w _ s h i f t   =   0 ;  
                         p B i a s   =   b i a s ;  
  
                         w h i l e   ( r o w C n t )  
                         {  
                                 q 3 1 _ t           s u m   =     ( ( q 3 1 _ t ) ( * p B i a s + + )   < <   b i a s _ s h i f t )   +   N N _ R O U N D ( o u t _ s h i f t ) ;  
                                 q 3 1 _ t           s u m 2   =   ( ( q 3 1 _ t ) ( * p B i a s + + )   < <   b i a s _ s h i f t )   +   N N _ R O U N D ( o u t _ s h i f t ) ;  
                                 q 3 1 _ t           s u m 3   =   ( ( q 3 1 _ t ) ( * p B i a s + + )   < <   b i a s _ s h i f t )   +   N N _ R O U N D ( o u t _ s h i f t ) ;  
                                 q 3 1 _ t           s u m 4   =   ( ( q 3 1 _ t ) ( * p B i a s + + )   < <   b i a s _ s h i f t )   +   N N _ R O U N D ( o u t _ s h i f t ) ;  
  
                                 u i n t 1 6 _ t     c o l C n t   =   ( d i m _ k e r n e l _ x   *   d i m _ k e r n e l _ y )   > >   1 ;  
                                 q 7 _ t           * p B   =   c o l B u f f e r   +   r o w _ s h i f t ;  
                                 c o n s t   q 7 _ t   * p A   =   w t   +   r o w _ s h i f t ;  
                                 r o w _ s h i f t   + =   4 ;  
  
 # i f d e f   U S E _ I N T R I N S I C  
  
 # i f n d e f   A R M _ M A T H _ B I G _ E N D I A N  
  
                                 w h i l e   ( c o l C n t )  
                                 {  
                                         q 3 1 _ t           i n A 1 ,   i n A 2 ,   i n B 1 ,   i n B 2 ,   o p A ,   o p B ;  
  
                                         i n B 1   =   * _ _ S I M D 3 2 ( p B ) ;  
                                         p B   + =   c h _ i m _ i n ;  
                                         o p B   =   * _ _ S I M D 3 2 ( p B ) ;  
                                         p B   + =   c h _ i m _ i n ;  
                                         i n B 2   =   _ _ P K H T B ( o p B ,   i n B 1 ,   1 6 ) ;  
                                         i n B 1   =   _ _ P K H B T ( i n B 1 ,   o p B ,   1 6 ) ;  
                                         i n A 1   =   * _ _ S I M D 3 2 ( p A ) ;  
                                         p A   + =   c h _ i m _ i n ;  
                                         o p B   =   * _ _ S I M D 3 2 ( p A ) ;  
                                         p A   + =   c h _ i m _ i n ;  
                                         i n A 2   =   _ _ P K H T B ( o p B ,   i n A 1 ,   1 6 ) ;  
                                         i n A 1   =   _ _ P K H B T ( i n A 1 ,   o p B ,   1 6 ) ;  
                                         o p A   =   _ _ S X T B 1 6 ( i n A 1 ) ;  
                                         o p B   =   _ _ S X T B 1 6 ( i n B 1 ) ;  
                                         s u m   =   _ _ S M L A D ( o p A ,   o p B ,   s u m ) ;  
                                         o p A   =   _ _ S X T B 1 6 ( _ _ R O R ( i n A 1 ,   8 ) ) ;  
                                         o p B   =   _ _ S X T B 1 6 ( _ _ R O R ( i n B 1 ,   8 ) ) ;  
                                         s u m 2   =   _ _ S M L A D ( o p A ,   o p B ,   s u m 2 ) ;  
                                         o p A   =   _ _ S X T B 1 6 ( i n A 2 ) ;  
                                         o p B   =   _ _ S X T B 1 6 ( i n B 2 ) ;  
                                         s u m 3   =   _ _ S M L A D ( o p A ,   o p B ,   s u m 3 ) ;  
                                         o p A   =   _ _ S X T B 1 6 ( _ _ R O R ( i n A 2 ,   8 ) ) ;  
                                         o p B   =   _ _ S X T B 1 6 ( _ _ R O R ( i n B 2 ,   8 ) ) ;  
                                         s u m 4   =   _ _ S M L A D ( o p A ,   o p B ,   s u m 4 ) ;  
                                         c o l C n t - - ;  
                                 }  
 # e l s e  
  
                                 w h i l e   ( c o l C n t )  
                                 {  
                                         q 3 1 _ t           i n A 1 ,   i n A 2 ,   i n B 1 ,   i n B 2 ,   o p A ,   o p B ;  
  
                                         i n B 1   =   * _ _ S I M D 3 2 ( p B ) ;  
                                         p B   + =   c h _ i m _ i n ;  
                                         o p B   =   * _ _ S I M D 3 2 ( p B ) ;  
                                         p B   + =   c h _ i m _ i n ;  
                                         i n B 2   =   _ _ P K H B T ( o p B ,   i n B 1 ,   1 6 ) ;  
                                         i n B 1   =   _ _ P K H T B ( i n B 1 ,   o p B ,   1 6 ) ;  
                                         i n A 1   =   * _ _ S I M D 3 2 ( p A ) ;  
                                         p A   + =   c h _ i m _ i n ;  
                                         o p B   =   * _ _ S I M D 3 2 ( p A ) ;  
                                         p A   + =   c h _ i m _ i n ;  
                                         i n A 2   =   _ _ P K H B T ( o p B ,   i n A 1 ,   1 6 ) ;  
                                         i n A 1   =   _ _ P K H T B ( i n A 1 ,   o p B ,   1 6 ) ;  
                                         o p A   =   _ _ S X T B 1 6 ( i n A 1 ) ;  
                                         o p B   =   _ _ S X T B 1 6 ( i n B 1 ) ;  
                                         s u m 2   =   _ _ S M L A D ( o p A ,   o p B ,   s u m 2 ) ;  
                                         o p A   =   _ _ S X T B 1 6 ( _ _ R O R ( i n A 1 ,   8 ) ) ;  
                                         o p B   =   _ _ S X T B 1 6 ( _ _ R O R ( i n B 1 ,   8 ) ) ;  
                                         s u m   =   _ _ S M L A D ( o p A ,   o p B ,   s u m ) ;  
                                         o p A   =   _ _ S X T B 1 6 ( i n A 2 ) ;  
                                         o p B   =   _ _ S X T B 1 6 ( i n B 2 ) ;  
                                         s u m 4   =   _ _ S M L A D ( o p A ,   o p B ,   s u m 4 ) ;  
                                         o p A   =   _ _ S X T B 1 6 ( _ _ R O R ( i n A 2 ,   8 ) ) ;  
                                         o p B   =   _ _ S X T B 1 6 ( _ _ R O R ( i n B 2 ,   8 ) ) ;  
                                         s u m 3   =   _ _ S M L A D ( o p A ,   o p B ,   s u m 3 ) ;  
                                         c o l C n t - - ;  
                                 }  
  
 # e n d i f                                                     / *   A R M _ M A T H _ B I G _ E N D I A N   * /  
  
 # e l s e  
  
 # i f n d e f   A R M _ M A T H _ B I G _ E N D I A N  
                                 / /     r 0         r 1         r 2         r 3         r 4       r 5  
                                 / /   i n A 1 ,   i n A 2 ,   i n B 1 ,   i n B 2 ,   o p A ,   o p B  
                                 a s m   v o l a t i l e   ( " C O L _ L O O P : \ n "  
                                                             " l d r . w   r 2 ,   [ % [ p B ] ,   # 0 ] \ n "  
                                                             " a d d . w   % [ p B ] ,   % [ p B ] ,   % [ c h _ i m _ i n ] \ n "  
                                                             " l d r . w   r 5 ,   [ % [ p B ] ,   # 0 ] \ n "  
                                                             " a d d . w   % [ p B ] ,   % [ p B ] ,   % [ c h _ i m _ i n ] \ n "  
                                                             " p k h t b   r 3 ,   r 5 ,   r 2 ,   A S R   # 1 6 \ n "  
                                                             " p k h b t   r 2 ,   r 2 ,   r 5 ,   L S L   # 1 6 \ n "  
                                                             " l d r . w   r 0 ,   [ % [ p A ] ,   # 0 ] \ n "  
                                                             " a d d . w   % [ p A ] ,   % [ p A ] ,   % [ c h _ i m _ i n ] \ n "  
                                                             " l d r . w   r 5 ,   [ % [ p A ] ,   # 0 ] \ n "  
                                                             " a d d . w   % [ p A ] ,   % [ p A ] ,   % [ c h _ i m _ i n ] \ n "  
                                                             " p k h t b   r 1 ,   r 5 ,   r 0 ,   A S R   # 1 6 \ n "  
                                                             " p k h b t   r 0 ,   r 0 ,   r 5 ,   L S L   # 1 6 \ n "  
                                                             " s x t b 1 6   r 4 ,   r 0 \ n "  
                                                             " s x t b 1 6   r 5 ,   r 2 \ n "  
                                                             " s m l a d   % [ s u m ] ,   r 4 ,   r 5 ,   % [ s u m ] \ n "  
                                                             " m o v . w   r 4 ,   r 0 ,   r o r   # 8 \ n "  
                                                             " m o v . w   r 5 ,   r 2 ,   r o r   # 8 \ n "  
                                                             " s x t b 1 6   r 4 ,   r 4 \ n "  
                                                             " s x t b 1 6   r 5 ,   r 5 \ n "  
                                                             " s m l a d   % [ s u m 2 ] ,   r 4 ,   r 5 ,   % [ s u m 2 ] \ n "  
                                                             " s x t b 1 6   r 4 ,   r 1 \ n "  
                                                             " s x t b 1 6   r 5 ,   r 3 \ n "  
                                                             " s m l a d   % [ s u m 3 ] ,   r 4 ,   r 5 ,   % [ s u m 3 ] \ n "  
                                                             " m o v . w   r 4 ,   r 1 ,   r o r   # 8 \ n "  
                                                             " m o v . w   r 5 ,   r 3 ,   r o r   # 8 \ n "  
                                                             " s x t b 1 6   r 4 ,   r 4 \ n "  
                                                             " s x t b 1 6   r 5 ,   r 5 \ n "  
                                                             " s m l a d   % [ s u m 4 ] ,   r 4 ,   r 5 ,   % [ s u m 4 ] \ n "  
                                                             " s u b s   % [ c o l C n t ] ,   # 1 \ n "  
                                                             " b n e   C O L _ L O O P \ n " : [ s u m ]   " + r " ( s u m ) , [ s u m 2 ]   " + r " ( s u m 2 ) , [ s u m 3 ]   " + r " ( s u m 3 ) ,  
                                                             [ s u m 4 ]   " + r " ( s u m 4 ) , [ p B ]   " + r " ( p B ) , [ p A ]   " + r " ( p A ) : [ c o l C n t ]   " r " ( c o l C n t ) ,  
                                                             [ c h _ i m _ i n ]   " r " ( c h _ i m _ i n ) : " r 0 " ,   " r 1 " ,   " r 2 " ,   " r 3 " ,   " r 4 " ,   " r 5 " ) ;  
 # e l s e  
                                 / /     r 0         r 1         r 2         r 3         r 4       r 5  
                                 / /   i n A 1 ,   i n A 2 ,   i n B 1 ,   i n B 2 ,   o p A ,   o p B  
                                 a s m   v o l a t i l e   ( " C O L _ L O O P : \ n "  
                                                             " l d r . w   r 2 ,   [ % [ p B ] ,   # 0 ] \ n "  
                                                             " a d d . w   % [ p B ] ,   % [ p B ] ,   % [ c h _ i m _ i n ] \ n "  
                                                             " l d r . w   r 5 ,   [ % [ p B ] ,   # 0 ] \ n "  
                                                             " a d d . w   % [ p B ] ,   % [ p B ] ,   % [ c h _ i m _ i n ] \ n "  
                                                             " p k h b t   r 3 ,   r 5 ,   r 2 ,   L S L   # 1 6 \ n "  
                                                             " p k h t b   r 2 ,   r 2 ,   r 5 ,   A S R   # 1 6 \ n "  
                                                             " l d r . w   r 0 ,   [ % [ p A ] ,   # 0 ] \ n "  
                                                             " a d d . w   % [ p A ] ,   % [ p A ] ,   % [ c h _ i m _ i n ] \ n "  
                                                             " l d r . w   r 5 ,   [ % [ p A ] ,   # 0 ] \ n "  
                                                             " a d d . w   % [ p A ] ,   % [ p A ] ,   % [ c h _ i m _ i n ] \ n "  
                                                             " p k h b t   r 1 ,   r 5 ,   r 0 ,   L S L   # 1 6 \ n "  
                                                             " p k h t b   r 0 ,   r 0 ,   r 5 ,   A S R   # 1 6 \ n "  
                                                             " s x t b 1 6   r 4 ,   r 0 \ n "  
                                                             " s x t b 1 6   r 5 ,   r 2 \ n "  
                                                             " s m l a d   % [ s u m 2 ] ,   r 4 ,   r 5 ,   % [ s u m 2 ] \ n "  
                                                             " m o v . w   r 4 ,   r 0 ,   r o r   # 8 \ n "  
                                                             " m o v . w   r 5 ,   r 2 ,   r o r   # 8 \ n "  
                                                             " s x t b 1 6   r 4 ,   r 4 \ n "  
                                                             " s x t b 1 6   r 5 ,   r 5 \ n "  
                                                             " s m l a d   % [ s u m ] ,   r 4 ,   r 5 ,   % [ s u m ] \ n "  
                                                             " s x t b 1 6   r 4 ,   r 1 \ n "  
                                                             " s x t b 1 6   r 5 ,   r 3 \ n "  
                                                             " s m l a d   % [ s u m 4 ] ,   r 4 ,   r 5 ,   % [ s u m 4 ] \ n "  
                                                             " m o v . w   r 4 ,   r 1 ,   r o r   # 8 \ n "  
                                                             " m o v . w   r 5 ,   r 3 ,   r o r   # 8 \ n "  
                                                             " s x t b 1 6   r 4 ,   r 4 \ n "  
                                                             " s x t b 1 6   r 5 ,   r 5 \ n "  
                                                             " s m l a d   % [ s u m 3 ] ,   r 4 ,   r 5 ,   % [ s u m 3 ] \ n "  
                                                             " s u b s   % [ c o l C n t ] ,   # 1 \ n "  
                                                             " b n e   C O L _ L O O P \ n " : [ s u m ]   " + r " ( s u m ) , [ s u m 2 ]   " + r " ( s u m 2 ) , [ s u m 3 ]   " + r " ( s u m 3 ) ,  
                                                             [ s u m 4 ]   " + r " ( s u m 4 ) , [ p B ]   " + r " ( p B ) , [ p A ]   " + r " ( p A ) : [ c o l C n t ]   " r " ( c o l C n t ) ,  
                                                             [ c h _ i m _ i n ]   " r " ( c h _ i m _ i n ) : " r 0 " ,   " r 1 " ,   " r 2 " ,   " r 3 " ,   " r 4 " ,   " r 5 " ) ;  
 # e n d i f                                                     / * A R M _ M A T H _ B I G _ E N D I A N   * /  
  
 # e n d i f                                                     / *   U S E _ I N T R I N S I C   * /  
  
                                 c o l C n t   =   ( d i m _ k e r n e l _ x   *   d i m _ k e r n e l _ y )   &   0 x 1 ;  
                                 w h i l e   ( c o l C n t )  
                                 {  
                                         u n i o n   a r m _ n n w o r d   i n A ,   i n B ;  
                                         i n A . w o r d   =   * _ _ S I M D 3 2 ( p A ) ;  
                                         p A   + =   c h _ i m _ i n ;  
                                         i n B . w o r d   =   * _ _ S I M D 3 2 ( p B ) ;  
                                         p B   + =   c h _ i m _ i n ;  
                                         s u m   + =   i n A . b y t e s [ 0 ]   *   i n B . b y t e s [ 0 ] ;  
                                         s u m 2   + =   i n A . b y t e s [ 1 ]   *   i n B . b y t e s [ 1 ] ;  
                                         s u m 3   + =   i n A . b y t e s [ 2 ]   *   i n B . b y t e s [ 2 ] ;  
                                         s u m 4   + =   i n A . b y t e s [ 3 ]   *   i n B . b y t e s [ 3 ] ;  
                                         c o l C n t - - ;  
                                 }  
  
                                 * p O u t + +   =   ( q 7 _ t )   _ _ S S A T ( ( s u m   > >   o u t _ s h i f t ) ,   8 ) ;  
                                 * p O u t + +   =   ( q 7 _ t )   _ _ S S A T ( ( s u m 2   > >   o u t _ s h i f t ) ,   8 ) ;  
                                 * p O u t + +   =   ( q 7 _ t )   _ _ S S A T ( ( s u m 3   > >   o u t _ s h i f t ) ,   8 ) ;  
                                 * p O u t + +   =   ( q 7 _ t )   _ _ S S A T ( ( s u m 4   > >   o u t _ s h i f t ) ,   8 ) ;  
  
                                 r o w C n t - - ;  
                         }  
  
                         r o w C n t   =   c h _ i m _ o u t   &   0 x 3 ;  
                         w h i l e   ( r o w C n t )  
                         {  
                                 q 7 _ t           * p B   =   c o l B u f f e r   +   r o w _ s h i f t ;  
                                 c o n s t   q 7 _ t   * p A   =   w t   +   r o w _ s h i f t ;  
                                 q 3 1 _ t           s u m   =   ( ( q 3 1 _ t ) ( * p B i a s + + )   < <   b i a s _ s h i f t )   +   N N _ R O U N D ( o u t _ s h i f t ) ;  
                                 u i n t 1 6 _ t     c o l C n t   =   ( d i m _ k e r n e l _ x   *   d i m _ k e r n e l _ y ) ;  
  
                                 r o w _ s h i f t   + =   1 ;  
  
                                 w h i l e   ( c o l C n t )  
                                 {  
                                         q 7 _ t             A 1   =   * p A ;  
                                         q 7 _ t             B 1   =   * p B ;  
                                         p A   + =   c h _ i m _ i n ;  
                                         p B   + =   c h _ i m _ i n ;  
                                         s u m   + =   A 1   *   B 1 ;  
  
                                         c o l C n t - - ;  
                                 }  
                                 * p O u t + +   =   ( q 7 _ t )   _ _ S S A T ( ( s u m   > >   o u t _ s h i f t ) ,   8 ) ;  
                                 r o w C n t - - ;  
                         }  
  
                         / /   c l e a r   c o u n t e r   a n d   p o i n t e r s  
                         p B u f f e r   =   c o l B u f f e r ;  
                 }  
         }  
  
 # e l s e  
         / *   R u n   t h e   f o l l o w i n g   c o d e   a s   r e f e r e n c e   i m p l e m e n t a t i o n   f o r   C o r t e x - M 0   a n d   C o r t e x - M 3   * /  
         i n t               i _ o u t _ y ,   i _ o u t _ x ,   i _ c h _ o u t ;  
         i n t               i _ k e r _ y ,   i _ k e r _ x ;    
  
         / *   d o   s o m e   c h e c k i n g   h e r e ,   b a s i c a l l y   c h _ i m _ i n   = =   c h _ i m _ o u t   * /  
         i f   ( c h _ i m _ i n   ! =   c h _ i m _ o u t )  
         {  
                 r e t u r n   A R M _ M A T H _ S I Z E _ M I S M A T C H ;  
         }  
  
         f o r   ( i _ o u t _ y   =   0 ;   i _ o u t _ y   <   d i m _ i m _ o u t _ y ;   i _ o u t _ y + + )  
         {  
                 f o r   ( i _ o u t _ x   =   0 ;   i _ o u t _ x   <   d i m _ i m _ o u t _ x ;   i _ o u t _ x + + )  
                 {  
                         f o r   ( i _ c h _ o u t   =   0 ;   i _ c h _ o u t   <   c h _ i m _ o u t ;   i _ c h _ o u t + + )  
                         {  
                                 / /   f o r   e a c h   o u t p u t    
                                 i n t               c o n v _ o u t   =   ( ( q 3 1 _ t ) ( b i a s [ i _ c h _ o u t ] )   < <   b i a s _ s h i f t )   +   N N _ R O U N D ( o u t _ s h i f t ) ;  
                                 f o r   ( i _ k e r _ y   =   0 ;   i _ k e r _ y   <   d i m _ k e r n e l _ y ;   i _ k e r _ y + + )  
                                 {  
                                         f o r   ( i _ k e r _ x   =   0 ;   i _ k e r _ x   <   d i m _ k e r n e l _ x ;   i _ k e r _ x + + )  
                                         {  
                                                 i n t               i n _ r o w   =   s t r i d e _ y   *   i _ o u t _ y   +   i _ k e r _ y   -   p a d d i n g _ y ;  
                                                 i n t               i n _ c o l   =   s t r i d e _ x   *   i _ o u t _ x   +   i _ k e r _ x   -   p a d d i n g _ x ;  
                                                 i f   ( i n _ r o w   > =   0   & &   i n _ c o l   > =   0   & &   i n _ r o w   <   d i m _ i m _ i n _ y   & &   i n _ c o l   <   d i m _ i m _ i n _ x )  
                                                 {  
                                                         c o n v _ o u t   + =   I m _ i n [ ( i n _ r o w   *   d i m _ i m _ i n _ x   +   i n _ c o l )   *   c h _ i m _ i n   +   i _ c h _ o u t ]   *                                                  
                                                                 w t [ ( i _ k e r _ y   *   d i m _ k e r n e l _ x   +   i _ k e r _ x )   *   c h _ i m _ o u t   +   i _ c h _ o u t ] ;  
                                                 }  
                                         }  
                                 }  
                                 I m _ o u t [ ( i _ o u t _ y   *   d i m _ i m _ o u t _ x   +   i _ o u t _ x )   *   c h _ i m _ o u t   +   i _ c h _ o u t ]   =  
                                         ( q 7 _ t )   _ _ S S A T ( ( c o n v _ o u t   > >   o u t _ s h i f t ) ,   8 ) ;  
                         }  
                 }  
         }  
  
 # e n d i f                                                     / *   A R M _ M A T H _ D S P   * /  
  
  
         / *   R e t u r n   t o   a p p l i c a t i o n   * /  
         r e t u r n   A R M _ M A T H _ S U C C E S S ;  
  
 }  
  
 / * *  
   *   @ }   e n d   o f   N N C o n v   g r o u p  
   * /  