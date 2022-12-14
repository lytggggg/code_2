??/ *  
   *   C o p y r i g h t   ( c )   2 0 0 6 - 2 0 2 1 ,   R T - T h r e a d   D e v e l o p m e n t   T e a m  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   C h a n g e   L o g s :  
   *   D a t e                       A u t h o r               N o t e s  
   *   2 0 0 6 - 0 3 - 1 7           B e r n a r d             t h e   f i r s t   v e r s i o n  
   *   2 0 0 6 - 0 4 - 2 8           B e r n a r d             f i x   t h e   s c h e d u l e r   a l g o r t h m  
   *   2 0 0 6 - 0 4 - 3 0           B e r n a r d             a d d   S C H E D U L E R _ D E B U G  
   *   2 0 0 6 - 0 5 - 2 7           B e r n a r d             f i x   t h e   s c h e d u l e r   a l g o r t h m   f o r   s a m e   p r i o r i t y  
   *                                                           t h r e a d   s c h e d u l e  
   *   2 0 0 6 - 0 6 - 0 4           B e r n a r d             r e w r i t e   t h e   s c h e d u l e r   a l g o r i t h m  
   *   2 0 0 6 - 0 8 - 0 3           B e r n a r d             a d d   h o o k   s u p p o r t  
   *   2 0 0 6 - 0 9 - 0 5           B e r n a r d             a d d   3 2   p r i o r i t y   l e v e l   s u p p o r t  
   *   2 0 0 6 - 0 9 - 2 4           B e r n a r d             a d d   r t _ s y s t e m _ s c h e d u l e r _ s t a r t   f u n c t i o n  
   *   2 0 0 9 - 0 9 - 1 6           B e r n a r d             f i x   _ r t _ s c h e d u l e r _ s t a c k _ c h e c k  
   *   2 0 1 0 - 0 4 - 1 1           y i . q i u               a d d   m o d u l e   f e a t u r e  
   *   2 0 1 0 - 0 7 - 1 3           B e r n a r d             f i x   t h e   m a x i m a l   n u m b e r   o f   r t _ s c h e d u l e r _ l o c k _ n e s t  
   *                                                           i s s u e   f o u n d   b y   k u r o n c a  
   *   2 0 1 0 - 1 2 - 1 3           B e r n a r d             a d d   d e f u n c t   l i s t   i n i t i a l i z a t i o n   e v e n   i f   n o t   u s e   h e a p .  
   *   2 0 1 1 - 0 5 - 1 0           B e r n a r d             c l e a n   s c h e d u l e r   d e b u g   l o g .  
   *   2 0 1 3 - 1 2 - 2 1           G r i s s i o m           a d d   r t _ c r i t i c a l _ l e v e l  
   *   2 0 1 8 - 1 1 - 2 2           J e s v e n               r e m o v e   t h e   c u r r e n t   t a s k   f r o m   r e a d y   q u e u e  
   *                                                           a d d   p e r   c p u   r e a d y   q u e u e  
   *                                                           a d d   _ g e t _ h i g h e s t _ p r i o r i t y _ t h r e a d   t o   f i n d   h i g h e s t   p r i o r i t y   t a s k  
   *                                                           r t _ s c h e d u l e _ i n s e r t _ t h r e a d   w o n ' t   i n s e r t   c u r r e n t   t a s k   t o   r e a d y   q u e u e  
   *                                                           i n   s m p   v e r s i o n ,   r t _ h w _ c o n t e x t _ s w i t c h _ i n t e r r u p t   m a y b e   s w i t c h   t o  
   *                                                               n e w   t a s k   d i r e c t l y  
   *  
   * /  
  
 # i n c l u d e   < r t t h r e a d . h >  
 # i n c l u d e   < r t h w . h >  
  
 r t _ l i s t _ t   r t _ t h r e a d _ p r i o r i t y _ t a b l e [ R T _ T H R E A D _ P R I O R I T Y _ M A X ] ;  
 r t _ u i n t 3 2 _ t   r t _ t h r e a d _ r e a d y _ p r i o r i t y _ g r o u p ;  
  
 # i f   R T _ T H R E A D _ P R I O R I T Y _ M A X   >   3 2  
 / *   M a x i m u m   p r i o r i t y   l e v e l ,   2 5 6   * /  
 r t _ u i n t 8 _ t   r t _ t h r e a d _ r e a d y _ t a b l e [ 3 2 ] ;  
 # e n d i f  
  
  
 e x t e r n   v o l a t i l e   r t _ u i n t 8 _ t   r t _ i n t e r r u p t _ n e s t ;  
 s t a t i c   r t _ i n t 1 6 _ t   r t _ s c h e d u l e r _ l o c k _ n e s t ;  
 s t r u c t   r t _ t h r e a d   * r t _ c u r r e n t _ t h r e a d   =   R T _ N U L L ;  
 r t _ u i n t 8 _ t   r t _ c u r r e n t _ p r i o r i t y ;  
  
  
 r t _ l i s t _ t   r t _ t h r e a d _ d e f u n c t ;  
  
 # i f d e f   R T _ U S I N G _ H O O K  
 s t a t i c   v o i d   ( * r t _ s c h e d u l e r _ h o o k ) ( s t r u c t   r t _ t h r e a d   * f r o m ,   s t r u c t   r t _ t h r e a d   * t o ) ;  
  
 / * *  
   *   @ a d d t o g r o u p   H o o k  
   * /  
  
 / * * @ { * /  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   s e t   a   h o o k   f u n c t i o n ,   w h i c h   w i l l   b e   i n v o k e d   w h e n   t h r e a d  
   *   s w i t c h   h a p p e n s .  
   *  
   *   @ p a r a m   h o o k   t h e   h o o k   f u n c t i o n  
   * /  
 v o i d  
 r t _ s c h e d u l e r _ s e t h o o k ( v o i d   ( * h o o k ) ( s t r u c t   r t _ t h r e a d   * f r o m ,   s t r u c t   r t _ t h r e a d   * t o ) )  
 {  
         r t _ s c h e d u l e r _ h o o k   =   h o o k ;  
 }  
  
 / * * @ } * /  
 # e n d i f  
  
 # i f d e f   R T _ U S I N G _ O V E R F L O W _ C H E C K  
 s t a t i c   v o i d   _ r t _ s c h e d u l e r _ s t a c k _ c h e c k ( s t r u c t   r t _ t h r e a d   * t h r e a d )  
 {  
         R T _ A S S E R T ( t h r e a d   ! =   R T _ N U L L ) ;  
  
 # i f   d e f i n e d ( A R C H _ C P U _ S T A C K _ G R O W S _ U P W A R D )  
         i f   ( * ( ( r t _ u i n t 8 _ t   * ) ( ( r t _ u b a s e _ t ) t h r e a d - > s t a c k _ a d d r   +   t h r e a d - > s t a c k _ s i z e   -   1 ) )   ! =   ' # '   | |  
 # e l s e  
         i f   ( * ( ( r t _ u i n t 8 _ t   * ) t h r e a d - > s t a c k _ a d d r )   ! =   ' # '   | |  
 # e n d i f  
                 ( r t _ u b a s e _ t ) t h r e a d - > s p   < =   ( r t _ u b a s e _ t ) t h r e a d - > s t a c k _ a d d r   | |  
                 ( r t _ u b a s e _ t ) t h r e a d - > s p   >  
                 ( r t _ u b a s e _ t ) t h r e a d - > s t a c k _ a d d r   +   ( r t _ u b a s e _ t ) t h r e a d - > s t a c k _ s i z e )  
         {  
                 r t _ u b a s e _ t   l e v e l ;  
  
                 r t _ k p r i n t f ( " t h r e a d : % s   s t a c k   o v e r f l o w \ n " ,   t h r e a d - > n a m e ) ;  
 # i f d e f   R T _ U S I N G _ F I N S H  
                 {  
                         e x t e r n   l o n g   l i s t _ t h r e a d ( v o i d ) ;  
                         l i s t _ t h r e a d ( ) ;  
                 }  
 # e n d i f  
                 l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
                 w h i l e   ( l e v e l ) ;  
         }  
 # i f   d e f i n e d ( A R C H _ C P U _ S T A C K _ G R O W S _ U P W A R D )  
         e l s e   i f   ( ( r t _ u b a s e _ t ) t h r e a d - > s p   >   ( ( r t _ u b a s e _ t ) t h r e a d - > s t a c k _ a d d r   +   t h r e a d - > s t a c k _ s i z e ) )  
         {  
                 r t _ k p r i n t f ( " w a r n i n g :   % s   s t a c k   i s   c l o s e   t o   t h e   t o p   o f   s t a c k   a d d r e s s . \ n " ,  
                                       t h r e a d - > n a m e ) ;  
         }  
 # e l s e  
         e l s e   i f   ( ( r t _ u b a s e _ t ) t h r e a d - > s p   < =   ( ( r t _ u b a s e _ t ) t h r e a d - > s t a c k _ a d d r   +   3 2 ) )  
         {  
                 r t _ k p r i n t f ( " w a r n i n g :   % s   s t a c k   i s   c l o s e   t o   e n d   o f   s t a c k   a d d r e s s . \ n " ,  
                                       t h r e a d - > n a m e ) ;  
         }  
 # e n d i f  
 }  
 # e n d i f  
  
 / * *  
   *   @ i n g r o u p   S y s t e m I n i t  
   *   T h i s   f u n c t i o n   w i l l   i n i t i a l i z e   t h e   s y s t e m   s c h e d u l e r  
   * /  
 v o i d   r t _ s y s t e m _ s c h e d u l e r _ i n i t ( v o i d )  
 {  
         r e g i s t e r   r t _ b a s e _ t   o f f s e t ;  
  
         r t _ s c h e d u l e r _ l o c k _ n e s t   =   0 ;  
  
         R T _ D E B U G _ L O G ( R T _ D E B U G _ S C H E D U L E R ,   ( " s t a r t   s c h e d u l e r :   m a x   p r i o r i t y   0 x % 0 2 x \ n " ,  
                                                                             R T _ T H R E A D _ P R I O R I T Y _ M A X ) ) ;  
  
         f o r   ( o f f s e t   =   0 ;   o f f s e t   <   R T _ T H R E A D _ P R I O R I T Y _ M A X ;   o f f s e t   + + )  
         {  
                 r t _ l i s t _ i n i t ( & r t _ t h r e a d _ p r i o r i t y _ t a b l e [ o f f s e t ] ) ;  
         }  
  
         r t _ c u r r e n t _ p r i o r i t y   =   R T _ T H R E A D _ P R I O R I T Y _ M A X   -   1 ;  
         r t _ c u r r e n t _ t h r e a d   =   R T _ N U L L ;  
  
         / *   i n i t i a l i z e   r e a d y   p r i o r i t y   g r o u p   * /  
         r t _ t h r e a d _ r e a d y _ p r i o r i t y _ g r o u p   =   0 ;  
  
 # i f   R T _ T H R E A D _ P R I O R I T Y _ M A X   >   3 2  
         / *   i n i t i a l i z e   r e a d y   t a b l e   * /  
         r t _ m e m s e t ( r t _ t h r e a d _ r e a d y _ t a b l e ,   0 ,   s i z e o f ( r t _ t h r e a d _ r e a d y _ t a b l e ) ) ;  
 # e n d i f  
  
         / *   i n i t i a l i z e   t h r e a d   d e f u n c t   * /  
         r t _ l i s t _ i n i t ( & r t _ t h r e a d _ d e f u n c t ) ;  
 }  
  
 / * *  
   *   @ i n g r o u p   S y s t e m I n i t  
   *   T h i s   f u n c t i o n   w i l l   s t a r t u p   s c h e d u l e r .   I t   w i l l   s e l e c t   o n e   t h r e a d  
   *   w i t h   t h e   h i g h e s t   p r i o r i t y   l e v e l ,   t h e n   s w i t c h   t o   i t .  
   * /  
 v o i d   r t _ s y s t e m _ s c h e d u l e r _ s t a r t ( v o i d )  
 {  
         r e g i s t e r   s t r u c t   r t _ t h r e a d   * t o _ t h r e a d ;  
         r e g i s t e r   r t _ u b a s e _ t   h i g h e s t _ r e a d y _ p r i o r i t y ;  
  
 # i f   R T _ T H R E A D _ P R I O R I T Y _ M A X   >   3 2  
         r e g i s t e r   r t _ u b a s e _ t   n u m b e r ;  
  
         n u m b e r   =   _ _ r t _ f f s ( r t _ t h r e a d _ r e a d y _ p r i o r i t y _ g r o u p )   -   1 ;  
         h i g h e s t _ r e a d y _ p r i o r i t y   =   ( n u m b e r   < <   3 )   +   _ _ r t _ f f s ( r t _ t h r e a d _ r e a d y _ t a b l e [ n u m b e r ] )   -   1 ;  
 # e l s e  
         h i g h e s t _ r e a d y _ p r i o r i t y   =   _ _ r t _ f f s ( r t _ t h r e a d _ r e a d y _ p r i o r i t y _ g r o u p )   -   1 ;  
 # e n d i f  
  
         / *   g e t   s w i t c h   t o   t h r e a d   * /  
         t o _ t h r e a d   =   r t _ l i s t _ e n t r y ( r t _ t h r e a d _ p r i o r i t y _ t a b l e [ h i g h e s t _ r e a d y _ p r i o r i t y ] . n e x t ,  
                                                             s t r u c t   r t _ t h r e a d ,  
                                                             t l i s t ) ;  
  
         r t _ c u r r e n t _ t h r e a d   =   t o _ t h r e a d ;  
  
         / *   s w i t c h   t o   n e w   t h r e a d   * /  
         r t _ h w _ c o n t e x t _ s w i t c h _ t o ( ( r t _ u i n t 3 2 _ t ) & t o _ t h r e a d - > s p ) ;  
  
         / *   n e v e r   c o m e   b a c k   * /  
 }  
  
 / * *  
   *   @ a d d t o g r o u p   T h r e a d  
   * /  
  
 / * * @ { * /  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   p e r f o r m   o n e   s c h e d u l e .   I t   w i l l   s e l e c t   o n e   t h r e a d  
   *   w i t h   t h e   h i g h e s t   p r i o r i t y   l e v e l ,   t h e n   s w i t c h   t o   i t .  
   * /  
 v o i d   r t _ s c h e d u l e ( v o i d )  
 {  
         r t _ b a s e _ t   l e v e l ;  
         s t r u c t   r t _ t h r e a d   * t o _ t h r e a d ;  
         s t r u c t   r t _ t h r e a d   * f r o m _ t h r e a d ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         / *   c h e c k   t h e   s c h e d u l e r   i s   e n a b l e d   o r   n o t   * /  
         i f   ( r t _ s c h e d u l e r _ l o c k _ n e s t   = =   0 )  
         {  
                 r e g i s t e r   r t _ u b a s e _ t   h i g h e s t _ r e a d y _ p r i o r i t y ;  
  
 # i f   R T _ T H R E A D _ P R I O R I T Y _ M A X   < =   3 2  
                 h i g h e s t _ r e a d y _ p r i o r i t y   =   _ _ r t _ f f s ( r t _ t h r e a d _ r e a d y _ p r i o r i t y _ g r o u p )   -   1 ;  
 # e l s e  
                 r e g i s t e r   r t _ u b a s e _ t   n u m b e r ;  
  
                 n u m b e r   =   _ _ r t _ f f s ( r t _ t h r e a d _ r e a d y _ p r i o r i t y _ g r o u p )   -   1 ;  
                 h i g h e s t _ r e a d y _ p r i o r i t y   =   ( n u m b e r   < <   3 )   +   _ _ r t _ f f s ( r t _ t h r e a d _ r e a d y _ t a b l e [ n u m b e r ] )   -   1 ;  
 # e n d i f  
  
                 / *   g e t   s w i t c h   t o   t h r e a d   * /  
                 t o _ t h r e a d   =   r t _ l i s t _ e n t r y ( r t _ t h r e a d _ p r i o r i t y _ t a b l e [ h i g h e s t _ r e a d y _ p r i o r i t y ] . n e x t ,  
                                                                     s t r u c t   r t _ t h r e a d ,  
                                                                     t l i s t ) ;  
  
                 / *   i f   t h e   d e s t i n a t i o n   t h r e a d   i s   n o t   t h e   s a m e   a s   c u r r e n t   t h r e a d   * /  
                 i f   ( t o _ t h r e a d   ! =   r t _ c u r r e n t _ t h r e a d )  
                 {  
                         r t _ c u r r e n t _ p r i o r i t y   =   ( r t _ u i n t 8 _ t ) h i g h e s t _ r e a d y _ p r i o r i t y ;  
                         f r o m _ t h r e a d                   =   r t _ c u r r e n t _ t h r e a d ;  
                         r t _ c u r r e n t _ t h r e a d       =   t o _ t h r e a d ;  
  
                         R T _ O B J E C T _ H O O K _ C A L L ( r t _ s c h e d u l e r _ h o o k ,   ( f r o m _ t h r e a d ,   t o _ t h r e a d ) ) ;  
  
                         / *   s w i t c h   t o   n e w   t h r e a d   * /  
                         R T _ D E B U G _ L O G ( R T _ D E B U G _ S C H E D U L E R ,  
                                                   ( " [ % d ] s w i t c h   t o   p r i o r i t y # % d   "  
                                                     " t h r e a d : % . * s ( s p : 0 x % p ) ,   "  
                                                     " f r o m   t h r e a d : % . * s ( s p :   0 x % p ) \ n " ,  
                                                     r t _ i n t e r r u p t _ n e s t ,   h i g h e s t _ r e a d y _ p r i o r i t y ,  
                                                     R T _ N A M E _ M A X ,   t o _ t h r e a d - > n a m e ,   t o _ t h r e a d - > s p ,  
                                                     R T _ N A M E _ M A X ,   f r o m _ t h r e a d - > n a m e ,   f r o m _ t h r e a d - > s p ) ) ;  
  
 # i f d e f   R T _ U S I N G _ O V E R F L O W _ C H E C K  
                         _ r t _ s c h e d u l e r _ s t a c k _ c h e c k ( t o _ t h r e a d ) ;  
 # e n d i f  
  
                         i f   ( r t _ i n t e r r u p t _ n e s t   = =   0 )  
                         {  
                                 r t _ h w _ c o n t e x t _ s w i t c h ( ( r t _ u b a s e _ t ) & f r o m _ t h r e a d - > s p ,  
                                                                           ( r t _ u b a s e _ t ) & t o _ t h r e a d - > s p ) ;  
  
                                 / *   e n a b l e   i n t e r r u p t   * /  
                                 r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
                                 r e t u r n   ;  
                         }  
                         e l s e  
                         {  
                                 R T _ D E B U G _ L O G ( R T _ D E B U G _ S C H E D U L E R ,   ( " s w i t c h   i n   i n t e r r u p t \ n " ) ) ;  
  
                                 r t _ h w _ c o n t e x t _ s w i t c h _ i n t e r r u p t ( ( r t _ u b a s e _ t ) & f r o m _ t h r e a d - > s p ,  
                                                                                               ( r t _ u b a s e _ t ) & t o _ t h r e a d - > s p ) ;  
                         }  
                 }  
         }  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
 }  
  
 / *  
   *   T h i s   f u n c t i o n   w i l l   i n s e r t   a   t h r e a d   t o   s y s t e m   r e a d y   q u e u e .   T h e   s t a t e   o f  
   *   t h r e a d   w i l l   b e   s e t   a s   R E A D Y   a n d   r e m o v e   f r o m   s u s p e n d   q u e u e .  
   *  
   *   @ p a r a m   t h r e a d   t h e   t h r e a d   t o   b e   i n s e r t e d  
   *   @ n o t e   P l e a s e   d o   n o t   i n v o k e   t h i s   f u n c t i o n   i n   u s e r   a p p l i c a t i o n .  
   * /  
 v o i d   r t _ s c h e d u l e _ i n s e r t _ t h r e a d ( s t r u c t   r t _ t h r e a d   * t h r e a d )  
 {  
         r e g i s t e r   r t _ b a s e _ t   t e m p ;  
  
         R T _ A S S E R T ( t h r e a d   ! =   R T _ N U L L ) ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         t e m p   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         / *   c h a n g e   s t a t   * /  
         t h r e a d - > s t a t   =   R T _ T H R E A D _ R E A D Y   |   ( t h r e a d - > s t a t   &   ~ R T _ T H R E A D _ S T A T _ M A S K ) ;  
  
         / *   i n s e r t   t h r e a d   t o   r e a d y   l i s t   * /  
         r t _ l i s t _ i n s e r t _ b e f o r e ( & ( r t _ t h r e a d _ p r i o r i t y _ t a b l e [ t h r e a d - > c u r r e n t _ p r i o r i t y ] ) ,  
                                                     & ( t h r e a d - > t l i s t ) ) ;  
  
         / *   s e t   p r i o r i t y   m a s k   * /  
 # i f   R T _ T H R E A D _ P R I O R I T Y _ M A X   < =   3 2  
         R T _ D E B U G _ L O G ( R T _ D E B U G _ S C H E D U L E R ,   ( " i n s e r t   t h r e a d [ % . * s ] ,   t h e   p r i o r i t y :   % d \ n " ,  
                                                                             R T _ N A M E _ M A X ,   t h r e a d - > n a m e ,   t h r e a d - > c u r r e n t _ p r i o r i t y ) ) ;  
 # e l s e  
         R T _ D E B U G _ L O G ( R T _ D E B U G _ S C H E D U L E R ,  
                                   ( " i n s e r t   t h r e a d [ % . * s ] ,   t h e   p r i o r i t y :   % d   0 x % x   % d \ n " ,  
                                     R T _ N A M E _ M A X ,  
                                     t h r e a d - > n a m e ,  
                                     t h r e a d - > n u m b e r ,  
                                     t h r e a d - > n u m b e r _ m a s k ,  
                                     t h r e a d - > h i g h _ m a s k ) ) ;  
 # e n d i f  
  
 # i f   R T _ T H R E A D _ P R I O R I T Y _ M A X   >   3 2  
         r t _ t h r e a d _ r e a d y _ t a b l e [ t h r e a d - > n u m b e r ]   | =   t h r e a d - > h i g h _ m a s k ;  
 # e n d i f  
         r t _ t h r e a d _ r e a d y _ p r i o r i t y _ g r o u p   | =   t h r e a d - > n u m b e r _ m a s k ;  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
 }  
  
 / *  
   *   T h i s   f u n c t i o n   w i l l   r e m o v e   a   t h r e a d   f r o m   s y s t e m   r e a d y   q u e u e .  
   *  
   *   @ p a r a m   t h r e a d   t h e   t h r e a d   t o   b e   r e m o v e d  
   *  
   *   @ n o t e   P l e a s e   d o   n o t   i n v o k e   t h i s   f u n c t i o n   i n   u s e r   a p p l i c a t i o n .  
   * /  
 v o i d   r t _ s c h e d u l e _ r e m o v e _ t h r e a d ( s t r u c t   r t _ t h r e a d   * t h r e a d )  
 {  
         r e g i s t e r   r t _ b a s e _ t   t e m p ;  
  
         R T _ A S S E R T ( t h r e a d   ! =   R T _ N U L L ) ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         t e m p   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
 # i f   R T _ T H R E A D _ P R I O R I T Y _ M A X   < =   3 2  
         R T _ D E B U G _ L O G ( R T _ D E B U G _ S C H E D U L E R ,   ( " r e m o v e   t h r e a d [ % . * s ] ,   t h e   p r i o r i t y :   % d \ n " ,  
                                                                             R T _ N A M E _ M A X ,   t h r e a d - > n a m e ,  
                                                                             t h r e a d - > c u r r e n t _ p r i o r i t y ) ) ;  
 # e l s e  
         R T _ D E B U G _ L O G ( R T _ D E B U G _ S C H E D U L E R ,  
                                   ( " r e m o v e   t h r e a d [ % . * s ] ,   t h e   p r i o r i t y :   % d   0 x % x   % d \ n " ,  
                                     R T _ N A M E _ M A X ,  
                                     t h r e a d - > n a m e ,  
                                     t h r e a d - > n u m b e r ,  
                                     t h r e a d - > n u m b e r _ m a s k ,  
                                     t h r e a d - > h i g h _ m a s k ) ) ;  
 # e n d i f  
  
         / *   r e m o v e   t h r e a d   f r o m   r e a d y   l i s t   * /  
         r t _ l i s t _ r e m o v e ( & ( t h r e a d - > t l i s t ) ) ;  
         i f   ( r t _ l i s t _ i s e m p t y ( & ( r t _ t h r e a d _ p r i o r i t y _ t a b l e [ t h r e a d - > c u r r e n t _ p r i o r i t y ] ) ) )  
         {  
 # i f   R T _ T H R E A D _ P R I O R I T Y _ M A X   >   3 2  
                 r t _ t h r e a d _ r e a d y _ t a b l e [ t h r e a d - > n u m b e r ]   & =   ~ t h r e a d - > h i g h _ m a s k ;  
                 i f   ( r t _ t h r e a d _ r e a d y _ t a b l e [ t h r e a d - > n u m b e r ]   = =   0 )  
                 {  
                         r t _ t h r e a d _ r e a d y _ p r i o r i t y _ g r o u p   & =   ~ t h r e a d - > n u m b e r _ m a s k ;  
                 }  
 # e l s e  
                 r t _ t h r e a d _ r e a d y _ p r i o r i t y _ g r o u p   & =   ~ t h r e a d - > n u m b e r _ m a s k ;  
 # e n d i f  
         }  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   l o c k   t h e   t h r e a d   s c h e d u l e r .  
   * /  
 v o i d   r t _ e n t e r _ c r i t i c a l ( v o i d )  
 {  
         r e g i s t e r   r t _ b a s e _ t   l e v e l ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         / *  
           *   t h e   m a x i m a l   n u m b e r   o f   n e s t   i s   R T _ U I N T 1 6 _ M A X ,   w h i c h   i s   b i g  
           *   e n o u g h   a n d   d o e s   n o t   c h e c k   h e r e  
           * /  
         r t _ s c h e d u l e r _ l o c k _ n e s t   + + ;  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   u n l o c k   t h e   t h r e a d   s c h e d u l e r .  
   * /  
 v o i d   r t _ e x i t _ c r i t i c a l ( v o i d )  
 {  
         r e g i s t e r   r t _ b a s e _ t   l e v e l ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         r t _ s c h e d u l e r _ l o c k _ n e s t   - - ;  
         i f   ( r t _ s c h e d u l e r _ l o c k _ n e s t   < =   0 )  
         {  
                 r t _ s c h e d u l e r _ l o c k _ n e s t   =   0 ;  
                 / *   e n a b l e   i n t e r r u p t   * /  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
                 i f   ( r t _ c u r r e n t _ t h r e a d )  
                 {  
                         / *   i f   s c h e d u l e r   i s   s t a r t e d ,   d o   a   s c h e d u l e   * /  
                         r t _ s c h e d u l e ( ) ;  
                 }  
         }  
         e l s e  
         {  
                 / *   e n a b l e   i n t e r r u p t   * /  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
         }  
 }  
  
 / * *  
   *   G e t   t h e   s c h e d u l e r   l o c k   l e v e l  
   *  
   *   @ r e t u r n   t h e   l e v e l   o f   t h e   s c h e d u l e r   l o c k .   0   m e a n s   u n l o c k e d .  
   * /  
 r t _ u i n t 1 6 _ t   r t _ c r i t i c a l _ l e v e l ( v o i d )  
 {  
         r e t u r n   r t _ s c h e d u l e r _ l o c k _ n e s t ;  
 }  
 / * * @ } * /  
  