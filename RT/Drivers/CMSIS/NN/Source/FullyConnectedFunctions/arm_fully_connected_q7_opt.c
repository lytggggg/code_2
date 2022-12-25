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
   *   T i t l e :                 a r m _ f u l l y _ c o n n e c t e d _ q 7 _ o p t . c  
   *   D e s c r i p t i o n :     Q 7   b a s i c   f u l l y - c o n n e c t e d   l a y e r   f u n c t i o n  
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
   *   @ a d d t o g r o u p   F C  
   *   @ {  
   * /  
  
     / * *  
       *   @ b r i e f   Q 7   o p t   f u l l y - c o n n e c t e d   l a y e r   f u n c t i o n  
       *   @ p a r a m [ i n ]               p V                     p o i n t e r   t o   i n p u t   v e c t o r  
       *   @ p a r a m [ i n ]               p M                     p o i n t e r   t o   m a t r i x   w e i g h t s  
       *   @ p a r a m [ i n ]               d i m _ v e c           l e n g t h   o f   t h e   v e c t o r  
       *   @ p a r a m [ i n ]               n u m _ o f _ r o w s   n u m b e r   o f   r o w s   i n   w e i g h t   m a t r i x  
       *   @ p a r a m [ i n ]               b i a s _ s h i f t     a m o u n t   o f   l e f t - s h i f t   f o r   b i a s  
       *   @ p a r a m [ i n ]               o u t _ s h i f t       a m o u n t   o f   r i g h t - s h i f t   f o r   o u t p u t  
       *   @ p a r a m [ i n ]               b i a s                 p o i n t e r   t o   b i a s  
       *   @ p a r a m [ i n , o u t ]       p O u t                 p o i n t e r   t o   o u t p u t   v e c t o r  
       *   @ p a r a m [ i n , o u t ]       v e c _ b u f f e r     p o i n t e r   t o   b u f f e r   s p a c e   f o r   i n p u t  
       *   @ r e t u r n           T h e   f u n c t i o n   r e t u r n s   < c o d e > A R M _ M A T H _ S U C C E S S < / c o d e >  
       *  
       *   @ d e t a i l s  
       *  
       *   < b > B u f f e r   s i z e : < / b >  
       *  
       *   v e c _ b u f f e r   s i z e :   d i m _ v e c  
       *  
       *   T h i s   o p t   f u n c t i o n   i s   d e s i g n e d   t o   w o r k   w i t h   i n t e r l e a v e d   w e i g h t  
       *   m a t r i x .   T h e   v e c t o r   i n p u t   i s   a s s u m e d   i n   q 7 _ t   f o r m a t ,   w e   c a l l  
       *     a r m _ q 7 _ t o _ q 1 5 _ n o _ s h i f t _ s h u f f l e   f u n c t i o n   t o   e x p a n d   i n t o  
       *     q 1 5 _ t   f o r m a t   w i t h   c e r t a i n   w e i g h t   r e - o r d e r i n g ,   r e f e r   t o   t h e   f u n c t i o n  
       *     c o m m e n t s   f o r   m o r e   d e t a i l s .  
       *     H e r e   w e   u s e   o n l y   o n e   p o i n t e r   t o   r e a d   4   r o w s   i n   t h e   w e i g h t  
       *     m a t r i x .   S o   i f   t h e   o r i g i n a l   q 7 _ t   m a t r i x   l o o k s   l i k e   t h i s :  
       *  
       *     |   a 1 1   |   a 1 2   |   a 1 3   |   a 1 4   |   a 1 5   |   a 1 6   |   a 1 7   |  
       *  
       *     |   a 2 1   |   a 2 2   |   a 2 3   |   a 2 4   |   a 2 5   |   a 2 6   |   a 2 7   |  
       *  
       *     |   a 3 1   |   a 3 2   |   a 3 3   |   a 3 4   |   a 3 5   |   a 3 6   |   a 3 7   |  
       *  
       *     |   a 4 1   |   a 4 2   |   a 4 3   |   a 4 4   |   a 4 5   |   a 4 6   |   a 4 7   |  
       *  
       *     |   a 5 1   |   a 5 2   |   a 5 3   |   a 5 4   |   a 5 5   |   a 5 6   |   a 5 7   |  
       *  
       *     |   a 6 1   |   a 6 2   |   a 6 3   |   a 6 4   |   a 6 5   |   a 6 6   |   a 6 7   |  
       *  
       *  
       *     W e   o p e r a t e s   o n   m u l t i p l e - o f - 4   r o w s ,   s o   t h e   f i r s t   f o u r   r o w s   b e c o m e s  
       *  
       *     |   a 1 1   |   a 2 1   |   a 1 3   |   a 2 3   |   a 3 1   |   a 4 1   |   a 3 3   |   a 4 3   |  
       *  
       *     |   a 1 2   |   a 2 2   |   a 1 4   |   a 2 4   |   a 3 2   |   a 4 2   |   a 3 4   |   a 4 4   |  
       *  
       *     |   a 1 5   |   a 2 5   |   a 3 5   |   a 4 5   |   a 1 6   |   a 2 6   |   a 3 6   |   a 4 6   |  
       *  
       *     S o   w i t h i n   t h e   k e r n e l ,   w e   f i r s t   r e a d   t h e   r e - o r d e r e d   v e c t o r   i n   a s :  
       *  
       *     |   b 1     |   b 3     |   a n d   |   b 2     |   b 4     |  
       *  
       *     t h e   f o u r   q 3 1 _ t   w e i g h t s   w i l l   l o o k   l i k e  
       *  
       *     |   a 1 1   |   a 1 3   | ,   |   a 2 1   |   a 2 3   | ,   |   a 3 1   |   a 3 3   | ,   |   a 4 1   |   a 4 3   |  
       *  
       *     |   a 1 2   |   a 1 4   | ,   |   a 2 2   |   a 2 4   | ,   |   a 3 2   |   a 3 4   | ,   |   a 4 2   |   a 4 4   |  
       *  
       *     T h e   c o l u m n   l e f t   o v e r   w i l l   b e   i n - o r d e r .  
       *     w h i c h   i s :  
       *  
       *     |   a 1 7   |   a 2 7   |   a 3 7   |   a 4 7   |  
       *  
       *     F o r   t h e   l e f t - o v e r   r o w s ,   w e   d o   1 x 1   c o m p u t a t i o n ,   s o   t h e   d a t a   r e m a i n s  
       *     a s   i t s   o r i g i n a l   o r d e r .    
       *  
       *     S o   t h e   s t o r e d   w e i g h t   m a t r i x   l o o k s   l i k e   t h i s :  
       *  
       *     |   a 1 1   |   a 2 1   |   a 1 3   |   a 2 3   |   a 3 1   |   a 4 1   |  
       *  
       *     |   a 3 3   |   a 4 3   |   a 1 2   |   a 2 2   |   a 1 4   |   a 2 4   |  
       *  
       *     |   a 3 2   |   a 4 2   |   a 3 4   |   a 4 4   |   a 1 5   |   a 2 5   |  
       *  
       *     |   a 3 5   |   a 4 5   |   a 1 6   |   a 2 6   |   a 3 6   |   a 4 6   |  
       *  
       *     |   a 1 7   |   a 2 7   |   a 3 7   |   a 4 7   |   a 5 1   |   a 5 2   |  
       *  
       *     |   a 5 3   |   a 5 4   |   a 5 5   |   a 5 6   |   a 5 7   |   a 6 1   |  
       *  
       *     |   a 6 2   |   a 6 3   |   a 6 4   |   a 6 5   |   a 6 6   |   a 6 7   |  
       *  
       *  
       * /  
  
 a r m _ s t a t u s  
 a r m _ f u l l y _ c o n n e c t e d _ q 7 _ o p t ( c o n s t   q 7 _ t   *   p V ,  
                                                       c o n s t   q 7 _ t   *   p M ,  
                                                       c o n s t   u i n t 1 6 _ t   d i m _ v e c ,  
                                                       c o n s t   u i n t 1 6 _ t   n u m _ o f _ r o w s ,  
                                                       c o n s t   u i n t 1 6 _ t   b i a s _ s h i f t ,  
                                                       c o n s t   u i n t 1 6 _ t   o u t _ s h i f t ,    
                                                       c o n s t   q 7 _ t   *   b i a s ,    
                                                       q 7 _ t   *   p O u t ,    
                                                       q 1 5 _ t   *   v e c _ b u f f e r )  
 {  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
         / *   R u n   t h e   f o l l o w i n g   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 7   * /  
  
         c o n s t   q 7 _ t   * p B   =   p M ;  
         q 7 _ t           * p O   =   p O u t ;  
         c o n s t   q 7 _ t   * p B i a s   =   b i a s ;  
         q 1 5 _ t         * p A ;  
         u i n t 1 6 _ t     r o w C n t   =   n u m _ o f _ r o w s   > >   2 ;  
  
         a r m _ q 7 _ t o _ q 1 5 _ r e o r d e r e d _ n o _ s h i f t ( p V ,   v e c _ b u f f e r ,   d i m _ v e c ) ;  
  
         w h i l e   ( r o w C n t )  
         {  
  
                 q 3 1 _ t           s u m   =     ( ( q 3 1 _ t ) ( * p B i a s + + )   < <   b i a s _ s h i f t )   +   N N _ R O U N D ( o u t _ s h i f t ) ;  
                 q 3 1 _ t           s u m 2   =   ( ( q 3 1 _ t ) ( * p B i a s + + )   < <   b i a s _ s h i f t )   +   N N _ R O U N D ( o u t _ s h i f t ) ;  
                 q 3 1 _ t           s u m 3   =   ( ( q 3 1 _ t ) ( * p B i a s + + )   < <   b i a s _ s h i f t )   +   N N _ R O U N D ( o u t _ s h i f t ) ;  
                 q 3 1 _ t           s u m 4   =   ( ( q 3 1 _ t ) ( * p B i a s + + )   < <   b i a s _ s h i f t )   +   N N _ R O U N D ( o u t _ s h i f t ) ;  
  
                 u i n t 1 6 _ t     c o l C n t   =   d i m _ v e c   > >   2 ;  
  
                 p A   =   v e c _ b u f f e r ;  
  
 # i f d e f   U S E _ I N T R I N S I C  
  
 # i f n d e f   A R M _ M A T H _ B I G _ E N D I A N  
                 w h i l e   ( c o l C n t )  
                 {  
                         q 3 1 _ t           i n M 1 1 ,   i n M 1 2 ,   i n M 1 3 ,   i n M 1 4 ;  
                         q 3 1 _ t           i n V ;  
  
                         i n V   =   * _ _ S I M D 3 2 ( p A ) + + ;  
                         i n M 1 1   =   * _ _ S I M D 3 2 ( p B ) + + ;  
                         i n M 1 2   =   _ _ S X T B 1 6 ( _ _ R O R ( i n M 1 1 ,   8 ) ) ;  
                         i n M 1 1   =   _ _ S X T B 1 6 ( i n M 1 1 ) ;  
                         s u m   =   _ _ S M L A D ( i n M 1 1 ,   i n V ,   s u m ) ;  
                         s u m 2   =   _ _ S M L A D ( i n M 1 2 ,   i n V ,   s u m 2 ) ;  
                         i n M 1 3   =   * _ _ S I M D 3 2 ( p B ) + + ;  
                         i n M 1 4   =   _ _ S X T B 1 6 ( _ _ R O R ( i n M 1 3 ,   8 ) ) ;  
                         i n M 1 3   =   _ _ S X T B 1 6 ( i n M 1 3 ) ;  
                         s u m 3   =   _ _ S M L A D ( i n M 1 3 ,   i n V ,   s u m 3 ) ;  
                         s u m 4   =   _ _ S M L A D ( i n M 1 4 ,   i n V ,   s u m 4 ) ;  
  
                         i n V   =   * _ _ S I M D 3 2 ( p A ) + + ;  
                         i n M 1 1   =   * _ _ S I M D 3 2 ( p B ) + + ;  
                         i n M 1 2   =   _ _ S X T B 1 6 ( _ _ R O R ( i n M 1 1 ,   8 ) ) ;  
                         i n M 1 1   =   _ _ S X T B 1 6 ( i n M 1 1 ) ;  
                         s u m   =   _ _ S M L A D ( i n M 1 1 ,   i n V ,   s u m ) ;  
                         s u m 2   =   _ _ S M L A D ( i n M 1 2 ,   i n V ,   s u m 2 ) ;  
                         i n M 1 3   =   * _ _ S I M D 3 2 ( p B ) + + ;  
                         i n M 1 4   =   _ _ S X T B 1 6 ( _ _ R O R ( i n M 1 3 ,   8 ) ) ;  
                         i n M 1 3   =   _ _ S X T B 1 6 ( i n M 1 3 ) ;  
                         s u m 3   =   _ _ S M L A D ( i n M 1 3 ,   i n V ,   s u m 3 ) ;  
                         s u m 4   =   _ _ S M L A D ( i n M 1 4 ,   i n V ,   s u m 4 ) ;  
                         c o l C n t - - ;  
                 }  
 # e l s e  
                 w h i l e   ( c o l C n t )  
                 {  
                         q 3 1 _ t           i n M 1 1 ,   i n M 1 2 ,   i n M 1 3 ,   i n M 1 4 ;  
                         q 3 1 _ t           i n V ;  
  
                         i n V   =   * _ _ S I M D 3 2 ( p A ) + + ;  
                         i n M 1 1   =   * _ _ S I M D 3 2 ( p B ) + + ;  
                         i n M 1 2   =   _ _ S X T B 1 6 ( _ _ R O R ( i n M 1 1 ,   8 ) ) ;  
                         i n M 1 1   =   _ _ S X T B 1 6 ( i n M 1 1 ) ;  
                         s u m   =   _ _ S M L A D ( i n M 1 2 ,   i n V ,   s u m ) ;  
                         s u m 2   =   _ _ S M L A D ( i n M 1 1 ,   i n V ,   s u m 2 ) ;  
                         i n M 1 3   =   * _ _ S I M D 3 2 ( p B ) + + ;  
                         i n M 1 4   =   _ _ S X T B 1 6 ( _ _ R O R ( i n M 1 3 ,   8 ) ) ;  
                         i n M 1 3   =   _ _ S X T B 1 6 ( i n M 1 3 ) ;  
                         s u m 3   =   _ _ S M L A D ( i n M 1 4 ,   i n V ,   s u m 3 ) ;  
                         s u m 4   =   _ _ S M L A D ( i n M 1 3 ,   i n V ,   s u m 4 ) ;  
  
                         i n V   =   * _ _ S I M D 3 2 ( p A ) + + ;  
                         i n M 1 1   =   * _ _ S I M D 3 2 ( p B ) + + ;  
                         i n M 1 2   =   _ _ S X T B 1 6 ( _ _ R O R ( i n M 1 1 ,   8 ) ) ;  
                         i n M 1 1   =   _ _ S X T B 1 6 ( i n M 1 1 ) ;  
                         s u m   =   _ _ S M L A D ( i n M 1 2 ,   i n V ,   s u m ) ;  
                         s u m 2   =   _ _ S M L A D ( i n M 1 1 ,   i n V ,   s u m 2 ) ;  
                         i n M 1 3   =   * _ _ S I M D 3 2 ( p B ) + + ;  
                         i n M 1 4   =   _ _ S X T B 1 6 ( _ _ R O R ( i n M 1 3 ,   8 ) ) ;  
                         i n M 1 3   =   _ _ S X T B 1 6 ( i n M 1 3 ) ;  
                         s u m 3   =   _ _ S M L A D ( i n M 1 4 ,   i n V ,   s u m 3 ) ;  
                         s u m 4   =   _ _ S M L A D ( i n M 1 3 ,   i n V ,   s u m 4 ) ;  
                         c o l C n t - - ;  
                 }  
 # e n d i f                                                     / *   A R M _ M A T H _ B I G _ E N D I A N   * /  
  
 # e l s e  
  
                 / *  
                   *   r e g i s t e r   n e e d e d :  
                   *   l o o p   c o u n t e r :   c o l C n t  
                   *   a c c u m u l a t o r s :   s u m ,   s u m 2 ,   s u m 3 ,   s u m 4  
                   *   p o i n t e r s :   p B ,   p A  
                   *   w e i g h t   d a t a :   i n M 1 1 ,   i n M 1 2 ,   i n M 1 3 ,   i n M 1 4  
                   *   a c t i v a t i o n   d a t a :   i n V  
                   * /  
  
 # i f n d e f   A R M _ M A T H _ B I G _ E N D I A N  
                 a s m   v o l a t i l e   ( " C O L _ L O O P _ % = : \ n "  
                                             " l d r . w   r 4 ,   [ % [ p A ] ] ,   # 8 \ n "  
                                             " l d r . w   r 1 ,   [ % [ p B ] ] ,   # 1 6 \ n "  
                                             " m o v . w   r 0 ,   r 1 ,   r o r   # 8 \ n "  
                                             " s x t b 1 6   r 0 ,   r 0 \ n "  
                                             " s x t b 1 6   r 1 ,   r 1 \ n "  
                                             " s m l a d   % [ s u m ] ,   r 4 ,   r 1 ,   % [ s u m ] \ n "  
                                             " s m l a d   % [ s u m 2 ] ,   r 4 ,   r 0 ,   % [ s u m 2 ] \ n "  
                                             " l d r . w   r 3 ,   [ % [ p B ] ,   # - 1 2 ] \ n "  
                                             " m o v . w   r 2 ,   r 3 ,   r o r   # 8 \ n "  
                                             " s x t b 1 6   r 2 ,   r 2 \ n "  
                                             " s x t b 1 6   r 3 ,   r 3 \ n "  
                                             " s m l a d   % [ s u m 3 ] ,   r 4 ,   r 3 ,   % [ s u m 3 ] \ n "  
                                             " s m l a d   % [ s u m 4 ] ,   r 4 ,   r 2 ,   % [ s u m 4 ] \ n "  
                                             " l d r . w   r 4 ,   [ % [ p A ] ,   # - 4 ] \ n "  
                                             " l d r . w   r 1 ,   [ % [ p B ] ,   # - 8 ] \ n "  
                                             " m o v . w   r 0 ,   r 1 ,   r o r   # 8 \ n "  
                                             " s x t b 1 6   r 0 ,   r 0 \ n "  
                                             " s x t b 1 6   r 1 ,   r 1 \ n "  
                                             " s m l a d   % [ s u m ] ,   r 4 ,   r 1 ,   % [ s u m ] \ n "  
                                             " s m l a d   % [ s u m 2 ] ,   r 4 ,   r 0 ,   % [ s u m 2 ] \ n "  
                                             " l d r . w   r 3 ,   [ % [ p B ] ,   # - 4 ] \ n "  
                                             " m o v . w   r 2 ,   r 3 ,   r o r   # 8 \ n "  
                                             " s x t b 1 6   r 2 ,   r 2 \ n "  
                                             " s x t b 1 6   r 3 ,   r 3 \ n "  
                                             " s m l a d   % [ s u m 3 ] ,   r 4 ,   r 3 ,   % [ s u m 3 ] \ n "  
                                             " s m l a d   % [ s u m 4 ] ,   r 4 ,   r 2 ,   % [ s u m 4 ] \ n "  
                                             " s u b s   % [ c o l C n t ] ,   # 1 \ n "  
                                             " b n e   C O L _ L O O P _ % = \ n " : [ s u m ]   " + r " ( s u m ) ,  
                                             [ s u m 2 ]   " + r " ( s u m 2 ) , [ s u m 3 ]   " + r " ( s u m 3 ) ,  
                                             [ s u m 4 ]   " + r " ( s u m 4 ) , [ p B ]   " + r " ( p B ) , [ p A ]   " + r " ( p A ) : [ c o l C n t ]   " r " ( c o l C n t ) : " r 0 " ,   " r 1 " ,   " r 2 " ,   " r 3 " ,   " r 4 " ) ;  
 # e l s e  
                 a s m   v o l a t i l e   ( " C O L _ L O O P _ % = : \ n "  
                                             " l d r . w   r 4 ,   [ % [ p A ] ] ,   # 8 \ n "  
                                             " l d r . w   r 1 ,   [ % [ p B ] ] ,   # 1 6 \ n "  
                                             " m o v . w   r 0 ,   r 1 ,   r o r   # 8 \ n "  
                                             " s x t b 1 6   r 0 ,   r 0 \ n "  
                                             " s x t b 1 6   r 1 ,   r 1 \ n "  
                                             " s m l a d   % [ s u m ] ,   r 4 ,   r 0 ,   % [ s u m ] \ n "  
                                             " s m l a d   % [ s u m 2 ] ,   r 4 ,   r 1 ,   % [ s u m 2 ] \ n "  
                                             " l d r . w   r 3 ,   [ % [ p B ] ,   # - 1 2 ] \ n "  
                                             " m o v . w   r 2 ,   r 3 ,   r o r   # 8 \ n "  
                                             " s x t b 1 6   r 2 ,   r 2 \ n "  
                                             " s x t b 1 6   r 3 ,   r 3 \ n "  
                                             " s m l a d   % [ s u m 3 ] ,   r 4 ,   r 2 ,   % [ s u m 3 ] \ n "  
                                             " s m l a d   % [ s u m 4 ] ,   r 4 ,   r 3 ,   % [ s u m 4 ] \ n "  
                                             " l d r . w   r 4 ,   [ % [ p A ] ,   # - 4 ] \ n "  
                                             " l d r . w   r 1 ,   [ % [ p B ] ,   # - 8 ] \ n "  
                                             " m o v . w   r 0 ,   r 1 ,   r o r   # 8 \ n "  
                                             " s x t b 1 6   r 0 ,   r 0 \ n "  
                                             " s x t b 1 6   r 1 ,   r 1 \ n "  
                                             " s m l a d   % [ s u m ] ,   r 4 ,   r 0 ,   % [ s u m ] \ n "  
                                             " s m l a d   % [ s u m 2 ] ,   r 4 ,   r 1 ,   % [ s u m 2 ] \ n "  
                                             " l d r . w   r 3 ,   [ % [ p B ] ,   # - 4 ] \ n "  
                                             " m o v . w   r 2 ,   r 3 ,   r o r   # 8 \ n "  
                                             " s x t b 1 6   r 2 ,   r 2 \ n "  
                                             " s x t b 1 6   r 3 ,   r 3 \ n "  
                                             " s m l a d   % [ s u m 3 ] ,   r 4 ,   r 2 ,   % [ s u m 3 ] \ n "  
                                             " s m l a d   % [ s u m 4 ] ,   r 4 ,   r 3 ,   % [ s u m 4 ] \ n "  
                                             " s u b s   % [ c o l C n t ] ,   # 1 \ n "  
                                             " b n e   C O L _ L O O P _ % = \ n " : [ s u m ]   " + r " ( s u m ) ,  
                                             [ s u m 2 ]   " + r " ( s u m 2 ) , [ s u m 3 ]   " + r " ( s u m 3 ) ,  
                                             [ s u m 4 ]   " + r " ( s u m 4 ) , [ p B ]   " + r " ( p B ) , [ p A ]   " + r " ( p A ) : [ c o l C n t ]   " r " ( c o l C n t ) : " r 0 " ,   " r 1 " ,   " r 2 " ,   " r 3 " ,   " r 4 " ) ;  
 # e n d i f                                                     / *   A R M _ M A T H _ B I G _ E N D I A N   * /  
  
 # e n d i f                                                     / *   U S E _ I N T R I N S I C   * /  
  
                 c o l C n t   =   d i m _ v e c   &   0 x 3 ;  
                 w h i l e   ( c o l C n t )  
                 {  
                         q 1 5 _ t           i n V   =   * p A + + ;  
                         q 7 _ t             i n M   =   * p B + + ;  
                         q 7 _ t             i n M 2   =   * p B + + ;  
                         q 7 _ t             i n M 3   =   * p B + + ;  
                         q 7 _ t             i n M 4   =   * p B + + ;  
  
                         s u m   + =   i n V   *   i n M ;  
                         s u m 2   + =   i n V   *   i n M 2 ;  
                         s u m 3   + =   i n V   *   i n M 3 ;  
                         s u m 4   + =   i n V   *   i n M 4 ;  
                         c o l C n t - - ;  
                 }                                               / *   w h i l e   o v e r   c o l C n t   * /  
                 * p O + +   =   ( q 7 _ t )   ( _ _ S S A T ( ( s u m   > >   o u t _ s h i f t ) ,   8 ) ) ;  
                 * p O + +   =   ( q 7 _ t )   ( _ _ S S A T ( ( s u m 2   > >   o u t _ s h i f t ) ,   8 ) ) ;  
                 * p O + +   =   ( q 7 _ t )   ( _ _ S S A T ( ( s u m 3   > >   o u t _ s h i f t ) ,   8 ) ) ;  
                 * p O + +   =   ( q 7 _ t )   ( _ _ S S A T ( ( s u m 4   > >   o u t _ s h i f t ) ,   8 ) ) ;  
  
                 / *   a d j u s t   t h e   p o i n t e r s   a n d   c o u n t e r s   * /  
                 r o w C n t - - ;  
         }  
  
         / *   l e f t - o v e r   p a r t   o f   t h e   r o w s   * /  
         r o w C n t   =   n u m _ o f _ r o w s   &   0 x 3 ;  
  
         w h i l e   ( r o w C n t )  
         {  
                 q 3 1 _ t           s u m   =   ( ( q 3 1 _ t ) ( * p B i a s + + )   < <   b i a s _ s h i f t )   +   N N _ R O U N D ( o u t _ s h i f t ) ;  
                 u i n t 1 6 _ t     c o l C n t   =   d i m _ v e c   > >   2 ;  
  
                 p A   =   v e c _ b u f f e r ;  
  
                 w h i l e   ( c o l C n t )  
                 {  
                         q 3 1 _ t           i n V 1 ,   i n V 2 ,   i n M 1 1 ,   i n M 1 2 ;  
  
                         p B   =   ( q 7 _ t   * )   r e a d _ a n d _ p a d _ r e o r d e r e d ( ( v o i d   * ) p B ,   & i n M 1 1 ,   & i n M 1 2 ) ;  
  
                         i n V 1   =   * _ _ S I M D 3 2 ( p A ) + + ;  
                         s u m   =   _ _ S M L A D ( i n V 1 ,   i n M 1 1 ,   s u m ) ;  
  
                         i n V 2   =   * _ _ S I M D 3 2 ( p A ) + + ;  
                         s u m   =   _ _ S M L A D ( i n V 2 ,   i n M 1 2 ,   s u m ) ;  
  
                         c o l C n t - - ;  
                 }  
  
                 / *   l e f t - o v e r   o f   t h e   v e c t o r   * /  
                 c o l C n t   =   d i m _ v e c   &   0 x 3 ;  
                 w h i l e   ( c o l C n t )  
                 {  
                         q 1 5 _ t           i n V   =   * p A + + ;  
                         q 7 _ t             i n M   =   * p B + + ;  
                         s u m   + =   i n V   *   i n M ;  
                         c o l C n t - - ;  
                 }  
  
                 * p O + +   =   ( q 7 _ t )   ( _ _ S S A T ( ( s u m   > >   o u t _ s h i f t ) ,   8 ) ) ;  
  
                 r o w C n t - - ;  
         }  
  
 # e l s e  
         / *   R u n   t h e   f o l l o w i n g   c o d e   a s   r e f e r e n c e   i m p l e m e n t a t i o n   f o r   C o r t e x - M 0   a n d   C o r t e x - M 3   * /  
         u i n t 1 6 _ t     r o w C n t   =   n u m _ o f _ r o w s   > >   2 ;  
         c o n s t   q 7 _ t   * p B   =   p M ;  
         c o n s t   q 7 _ t   * p A ;  
         q 7 _ t           * p O   =   p O u t ;  
         c o n s t   q 7 _ t   * p B i a s   =   b i a s ;  
  
         w h i l e   ( r o w C n t )  
         {  
                 q 3 1 _ t           s u m   =     ( ( q 3 1 _ t ) ( * p B i a s + + )   < <   b i a s _ s h i f t )   +   N N _ R O U N D ( o u t _ s h i f t ) ;  
                 q 3 1 _ t           s u m 2   =   ( ( q 3 1 _ t ) ( * p B i a s + + )   < <   b i a s _ s h i f t )   +   N N _ R O U N D ( o u t _ s h i f t ) ;  
                 q 3 1 _ t           s u m 3   =   ( ( q 3 1 _ t ) ( * p B i a s + + )   < <   b i a s _ s h i f t )   +   N N _ R O U N D ( o u t _ s h i f t ) ;  
                 q 3 1 _ t           s u m 4   =   ( ( q 3 1 _ t ) ( * p B i a s + + )   < <   b i a s _ s h i f t )   +   N N _ R O U N D ( o u t _ s h i f t ) ;  
  
                 u i n t 1 6 _ t     c o l C n t   =   d i m _ v e c   > >   2 ;  
  
                 p A   =   p V ;  
  
                 w h i l e   ( c o l C n t )  
                 {  
                         q 7 _ t             i n A 1   =   * p A + + ;  
                         q 7 _ t             i n A 3   =   * p A + + ;  
                         q 7 _ t             i n A 2   =   * p A + + ;  
                         q 7 _ t             i n A 4   =   * p A + + ;  
  
                         q 7 _ t             i n B 1   =   * p B + + ;  
                         q 7 _ t             i n B 3   =   * p B + + ;  
                         q 7 _ t             i n B 2   =   * p B + + ;  
                         q 7 _ t             i n B 4   =   * p B + + ;  
  
                         s u m   + =   i n A 1   *   i n B 1   +   i n A 2   *   i n B 2 ;  
                         s u m 2   + =   i n A 1   *   i n B 3   +   i n A 2   *   i n B 4 ;  
  
                         i n B 1   =   * p B + + ;  
                         i n B 3   =   * p B + + ;  
                         i n B 2   =   * p B + + ;  
                         i n B 4   =   * p B + + ;  
  
                         s u m 3   + =   i n A 1   *   i n B 1   +   i n A 2   *   i n B 2 ;  
                         s u m 4   + =   i n A 1   *   i n B 3   +   i n A 2   *   i n B 4 ;  
  
                         i n B 1   =   * p B + + ;  
                         i n B 3   =   * p B + + ;  
                         i n B 2   =   * p B + + ;  
                         i n B 4   =   * p B + + ;  
  
                         s u m   + =   i n A 3   *   i n B 1   +   i n A 4   *   i n B 2 ;  
                         s u m 2   + =   i n A 3   *   i n B 3   +   i n A 4   *   i n B 4 ;  
  
                         i n B 1   =   * p B + + ;  
                         i n B 3   =   * p B + + ;  
                         i n B 2   =   * p B + + ;  
                         i n B 4   =   * p B + + ;  
  
                         s u m 3   + =   i n A 3   *   i n B 1   +   i n A 4   *   i n B 2 ;  
                         s u m 4   + =   i n A 3   *   i n B 3   +   i n A 4   *   i n B 4 ;  
  
                         c o l C n t - - ;  
                 }  
                 c o l C n t   =   d i m _ v e c   &   0 x 3 ;  
                 w h i l e   ( c o l C n t )  
                 {  
                         q 7 _ t             i n A   =   * p A + + ;  
                         q 7 _ t             i n B   =   * p B + + ;  
                         s u m   + =   i n A   *   i n B ;  
                         i n B   =   * p B + + ;  
                         s u m 2   + =   i n A   *   i n B ;  
                         i n B   =   * p B + + ;  
                         s u m 3   + =   i n A   *   i n B ;  
                         i n B   =   * p B + + ;  
                         s u m 4   + =   i n A   *   i n B ;  
  
                         c o l C n t - - ;  
                 }  
                 * p O + +   =   ( q 7 _ t )   _ _ S S A T ( ( s u m   > >   o u t _ s h i f t ) ,   8 ) ;  
                 * p O + +   =   ( q 7 _ t )   _ _ S S A T ( ( s u m 2   > >   o u t _ s h i f t ) ,   8 ) ;  
                 * p O + +   =   ( q 7 _ t )   _ _ S S A T ( ( s u m 3   > >   o u t _ s h i f t ) ,   8 ) ;  
                 * p O + +   =   ( q 7 _ t )   _ _ S S A T ( ( s u m 4   > >   o u t _ s h i f t ) ,   8 ) ;  
  
                 r o w C n t - - ;  
         }  
  
         r o w C n t   =   n u m _ o f _ r o w s   &   0 x 3 ;  
  
         w h i l e   ( r o w C n t )  
         {  
                 i n t               i p _ o u t   =   ( ( q 3 1 _ t ) ( * p B i a s + + )   < <   b i a s _ s h i f t )   +   N N _ R O U N D ( o u t _ s h i f t ) ;  
  
                 i n t               j ;  
  
                 p A   =   p V ;  
                 f o r   ( j   =   0 ;   j   <   d i m _ v e c ;   j + + )  
                 {  
                         q 7 _ t             i n A   =   * p A + + ;  
                         q 7 _ t             i n B   =   * p B + + ;  
                         i p _ o u t   + =   i n A   *   i n B ;  
                 }  
                 * p O + +   =   ( q 7 _ t )   _ _ S S A T ( ( i p _ o u t   > >   o u t _ s h i f t ) ,   8 ) ;  
  
                 r o w C n t - - ;  
         }  
  
 # e n d i f                                                     / *   A R M _ M A T H _ D S P   * /  
  
         / *   R e t u r n   t o   A R M _ M A T H _ S U C C E S S   * /  
         r e t u r n   ( A R M _ M A T H _ S U C C E S S ) ;  
  
 }  
  
 / * *  
   *   @ }   e n d   o f   F C   g r o u p  
   * /  