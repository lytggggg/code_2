??/ *  
   *   C o p y r i g h t   ( c )   2 0 0 6 - 2 0 2 1 ,   R T - T h r e a d   D e v e l o p m e n t   T e a m  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   C h a n g e   L o g s :  
   *   D a t e                       A u t h o r               N o t e s  
   *   2 0 0 6 - 0 3 - 2 8           B e r n a r d             f i r s t   v e r s i o n  
   *   2 0 0 6 - 0 4 - 2 9           B e r n a r d             i m p l e m e n t   t h r e a d   t i m e r  
   *   2 0 0 6 - 0 4 - 3 0           B e r n a r d             a d d e d   T H R E A D _ D E B U G  
   *   2 0 0 6 - 0 5 - 2 7           B e r n a r d             f i x e d   t h e   r t _ t h r e a d _ y i e l d   b u g  
   *   2 0 0 6 - 0 6 - 0 3           B e r n a r d             f i x e d   t h e   t h r e a d   t i m e r   i n i t   b u g  
   *   2 0 0 6 - 0 8 - 1 0           B e r n a r d             f i x e d   t h e   t i m e r   b u g   i n   t h r e a d _ s l e e p  
   *   2 0 0 6 - 0 9 - 0 3           B e r n a r d             c h a n g e d   r t _ t i m e r _ d e l e t e   t o   r t _ t i m e r _ d e t a c h  
   *   2 0 0 6 - 0 9 - 0 3           B e r n a r d             i m p l e m e n t   r t _ t h r e a d _ d e t a c h  
   *   2 0 0 8 - 0 2 - 1 6           B e r n a r d             f i x e d   t h e   r t _ t h r e a d _ t i m e o u t   b u g  
   *   2 0 1 0 - 0 3 - 2 1           B e r n a r d             c h a n g e   t h e   e r r n o   o f   r t _ t h r e a d _ d e l a y / s l e e p   t o  
   *                                                           R T _ E O K .  
   *   2 0 1 0 - 1 1 - 1 0           B e r n a r d             a d d   c l e a n u p   c a l l b a c k   f u n c t i o n   i n   t h r e a d   e x i t .  
   *   2 0 1 1 - 0 9 - 0 1           B e r n a r d             f i x e d   r t _ t h r e a d _ e x i t   i s s u e   w h e n   t h e   c u r r e n t  
   *                                                           t h r e a d   p r e e m p t e d ,   w h i c h   r e p o r t e d   b y   J i a x i n g   L e e .  
   *   2 0 1 1 - 0 9 - 0 8           B e r n a r d             f i x e d   t h e   s c h e d u l i n g   i s s u e   i n   r t _ t h r e a d _ s t a r t u p .  
   *   2 0 1 2 - 1 2 - 2 9           B e r n a r d             f i x e d   c o m p i l i n g   w a r n i n g .  
   *   2 0 1 6 - 0 8 - 0 9           A r d a F u               a d d   t h r e a d   s u s p e n d   a n d   r e s u m e   h o o k .  
   *   2 0 1 7 - 0 4 - 1 0           a r m i n k               f i x e d   t h e   r t _ t h r e a d _ d e l e t e   a n d   r t _ t h r e a d _ d e t a c h  
                                                               b u g   w h e n   t h r e a d   h a s   n o t   s t a r t u p .  
   *   2 0 1 8 - 1 1 - 2 2           J e s v e n               y i e l d   i s   s a m e   t o   r t _ s c h e d u l e  
   *                                                           a d d   s u p p o r t   f o r   t a s k s   b o u n d   t o   c p u  
   * /  
  
 # i n c l u d e   < r t h w . h >  
 # i n c l u d e   < r t t h r e a d . h >  
  
 e x t e r n   r t _ l i s t _ t   r t _ t h r e a d _ p r i o r i t y _ t a b l e [ R T _ T H R E A D _ P R I O R I T Y _ M A X ] ;  
 e x t e r n   s t r u c t   r t _ t h r e a d   * r t _ c u r r e n t _ t h r e a d ;  
 e x t e r n   r t _ l i s t _ t   r t _ t h r e a d _ d e f u n c t ;  
  
 # i f d e f   R T _ U S I N G _ H O O K  
  
 s t a t i c   v o i d   ( * r t _ t h r e a d _ s u s p e n d _ h o o k ) ( r t _ t h r e a d _ t   t h r e a d ) ;  
 s t a t i c   v o i d   ( * r t _ t h r e a d _ r e s u m e _ h o o k )   ( r t _ t h r e a d _ t   t h r e a d ) ;  
 s t a t i c   v o i d   ( * r t _ t h r e a d _ i n i t e d _ h o o k )   ( r t _ t h r e a d _ t   t h r e a d ) ;  
  
 / * *  
   *   @ i n g r o u p   H o o k  
   *   T h i s   f u n c t i o n   s e t s   a   h o o k   f u n c t i o n   w h e n   t h e   s y s t e m   s u s p e n d   a   t h r e a d .  
   *  
   *   @ p a r a m   h o o k   t h e   s p e c i f i e d   h o o k   f u n c t i o n  
   *  
   *   @ n o t e   t h e   h o o k   f u n c t i o n   m u s t   b e   s i m p l e   a n d   n e v e r   b e   b l o c k e d   o r   s u s p e n d .  
   * /  
 v o i d   r t _ t h r e a d _ s u s p e n d _ s e t h o o k ( v o i d   ( * h o o k ) ( r t _ t h r e a d _ t   t h r e a d ) )  
 {  
         r t _ t h r e a d _ s u s p e n d _ h o o k   =   h o o k ;  
 }  
  
 / * *  
   *   @ i n g r o u p   H o o k  
   *   T h i s   f u n c t i o n   s e t s   a   h o o k   f u n c t i o n   w h e n   t h e   s y s t e m   r e s u m e   a   t h r e a d .  
   *  
   *   @ p a r a m   h o o k   t h e   s p e c i f i e d   h o o k   f u n c t i o n  
   *  
   *   @ n o t e   t h e   h o o k   f u n c t i o n   m u s t   b e   s i m p l e   a n d   n e v e r   b e   b l o c k e d   o r   s u s p e n d .  
   * /  
 v o i d   r t _ t h r e a d _ r e s u m e _ s e t h o o k ( v o i d   ( * h o o k ) ( r t _ t h r e a d _ t   t h r e a d ) )  
 {  
         r t _ t h r e a d _ r e s u m e _ h o o k   =   h o o k ;  
 }  
  
 / * *  
   *   @ i n g r o u p   H o o k  
   *   T h i s   f u n c t i o n   s e t s   a   h o o k   f u n c t i o n   w h e n   a   t h r e a d   i s   i n i t i a l i z e d .  
   *  
   *   @ p a r a m   h o o k   t h e   s p e c i f i e d   h o o k   f u n c t i o n  
   * /  
 v o i d   r t _ t h r e a d _ i n i t e d _ s e t h o o k ( v o i d   ( * h o o k ) ( r t _ t h r e a d _ t   t h r e a d ) )  
 {  
         r t _ t h r e a d _ i n i t e d _ h o o k   =   h o o k ;  
 }  
  
 # e n d i f  
  
 / *   m u s t   b e   i n v o k e   w i t c h   r t _ h w _ i n t e r r u p t _ d i s a b l e   * /  
 s t a t i c   v o i d   _ t h r e a d _ c l e a n u p _ e x e c u t e ( r t _ t h r e a d _ t   t h r e a d )  
 {  
         r e g i s t e r   r t _ b a s e _ t   l e v e l ;  
  
         l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         / *   i n v o k e   t h r e a d   c l e a n u p   * /  
         i f   ( t h r e a d - > c l e a n u p   ! =   R T _ N U L L )  
                 t h r e a d - > c l e a n u p ( t h r e a d ) ;  
  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
 }  
  
 v o i d   r t _ t h r e a d _ e x i t ( v o i d )  
 {  
         s t r u c t   r t _ t h r e a d   * t h r e a d ;  
         r e g i s t e r   r t _ b a s e _ t   l e v e l ;  
  
         / *   g e t   c u r r e n t   t h r e a d   * /  
         t h r e a d   =   r t _ c u r r e n t _ t h r e a d ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         _ t h r e a d _ c l e a n u p _ e x e c u t e ( t h r e a d ) ;  
  
         / *   r e m o v e   f r o m   s c h e d u l e   * /  
         r t _ s c h e d u l e _ r e m o v e _ t h r e a d ( t h r e a d ) ;  
         / *   c h a n g e   s t a t   * /  
         t h r e a d - > s t a t   =   R T _ T H R E A D _ C L O S E ;  
  
         / *   r e m o v e   i t   f r o m   t i m e r   l i s t   * /  
         r t _ t i m e r _ d e t a c h ( & t h r e a d - > t h r e a d _ t i m e r ) ;  
  
         i f   ( r t _ o b j e c t _ i s _ s y s t e m o b j e c t ( ( r t _ o b j e c t _ t ) t h r e a d )   = =   R T _ T R U E )  
         {  
                 r t _ o b j e c t _ d e t a c h ( ( r t _ o b j e c t _ t ) t h r e a d ) ;  
         }  
         e l s e  
         {  
                 / *   i n s e r t   t o   d e f u n c t   t h r e a d   l i s t   * /  
                 r t _ l i s t _ i n s e r t _ a f t e r ( & r t _ t h r e a d _ d e f u n c t ,   & ( t h r e a d - > t l i s t ) ) ;  
         }  
  
         / *   s w i t c h   t o   n e x t   t a s k   * /  
         r t _ s c h e d u l e ( ) ;  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
 }  
  
 s t a t i c   r t _ e r r _ t   _ r t _ t h r e a d _ i n i t ( s t r u c t   r t _ t h r e a d   * t h r e a d ,  
                                                                 c o n s t   c h a r               * n a m e ,  
                                                                 v o i d   ( * e n t r y ) ( v o i d   * p a r a m e t e r ) ,  
                                                                 v o i d                           * p a r a m e t e r ,  
                                                                 v o i d                           * s t a c k _ s t a r t ,  
                                                                 r t _ u i n t 3 2 _ t               s t a c k _ s i z e ,  
                                                                 r t _ u i n t 8 _ t                 p r i o r i t y ,  
                                                                 r t _ u i n t 3 2 _ t               t i c k )  
 {  
         / *   i n i t   t h r e a d   l i s t   * /  
         r t _ l i s t _ i n i t ( & ( t h r e a d - > t l i s t ) ) ;  
  
         t h r e a d - > e n t r y   =   ( v o i d   * ) e n t r y ;  
         t h r e a d - > p a r a m e t e r   =   p a r a m e t e r ;  
  
         / *   s t a c k   i n i t   * /  
         t h r e a d - > s t a c k _ a d d r   =   s t a c k _ s t a r t ;  
         t h r e a d - > s t a c k _ s i z e   =   s t a c k _ s i z e ;  
  
         / *   i n i t   t h r e a d   s t a c k   * /  
         r t _ m e m s e t ( t h r e a d - > s t a c k _ a d d r ,   ' # ' ,   t h r e a d - > s t a c k _ s i z e ) ;  
 # i f d e f   A R C H _ C P U _ S T A C K _ G R O W S _ U P W A R D  
         t h r e a d - > s p   =   ( v o i d   * ) r t _ h w _ s t a c k _ i n i t ( t h r e a d - > e n t r y ,   t h r e a d - > p a r a m e t e r ,  
                                                                                     ( v o i d   * ) ( ( c h a r   * ) t h r e a d - > s t a c k _ a d d r ) ,  
                                                                                     ( v o i d   * ) r t _ t h r e a d _ e x i t ) ;  
 # e l s e  
         t h r e a d - > s p   =   ( v o i d   * ) r t _ h w _ s t a c k _ i n i t ( t h r e a d - > e n t r y ,   t h r e a d - > p a r a m e t e r ,  
                                                                                     ( r t _ u i n t 8 _ t   * ) ( ( c h a r   * ) t h r e a d - > s t a c k _ a d d r   +   t h r e a d - > s t a c k _ s i z e   -   s i z e o f ( r t _ u b a s e _ t ) ) ,  
                                                                                     ( v o i d   * ) r t _ t h r e a d _ e x i t ) ;  
 # e n d i f  
  
         / *   p r i o r i t y   i n i t   * /  
         R T _ A S S E R T ( p r i o r i t y   <   R T _ T H R E A D _ P R I O R I T Y _ M A X ) ;  
         t h r e a d - > i n i t _ p r i o r i t y         =   p r i o r i t y ;  
         t h r e a d - > c u r r e n t _ p r i o r i t y   =   p r i o r i t y ;  
  
         t h r e a d - > n u m b e r _ m a s k   =   0 ;  
 # i f   R T _ T H R E A D _ P R I O R I T Y _ M A X   >   3 2  
         t h r e a d - > n u m b e r   =   0 ;  
         t h r e a d - > h i g h _ m a s k   =   0 ;  
 # e n d i f  
  
         / *   t i c k   i n i t   * /  
         t h r e a d - > i n i t _ t i c k             =   t i c k ;  
         t h r e a d - > r e m a i n i n g _ t i c k   =   t i c k ;  
  
         / *   e r r o r   a n d   f l a g s   * /  
         t h r e a d - > e r r o r   =   R T _ E O K ;  
         t h r e a d - > s t a t     =   R T _ T H R E A D _ I N I T ;  
  
         / *   i n i t i a l i z e   c l e a n u p   f u n c t i o n   a n d   u s e r   d a t a   * /  
         t h r e a d - > c l e a n u p       =   0 ;  
         t h r e a d - > u s e r _ d a t a   =   0 ;  
  
         / *   i n i t i a l i z e   t h r e a d   t i m e r   * /  
         r t _ t i m e r _ i n i t ( & ( t h r e a d - > t h r e a d _ t i m e r ) ,  
                                     t h r e a d - > n a m e ,  
                                     r t _ t h r e a d _ t i m e o u t ,  
                                     t h r e a d ,  
                                     0 ,  
                                     R T _ T I M E R _ F L A G _ O N E _ S H O T ) ;  
  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ t h r e a d _ i n i t e d _ h o o k ,   ( t h r e a d ) ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   @ a d d t o g r o u p   T h r e a d  
   * /  
  
 / * * @ { * /  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   i n i t i a l i z e   a   t h r e a d ,   n o r m a l l y   i t ' s   u s e d   t o   i n i t i a l i z e   a  
   *   s t a t i c   t h r e a d   o b j e c t .  
   *  
   *   @ p a r a m   t h r e a d   t h e   s t a t i c   t h r e a d   o b j e c t  
   *   @ p a r a m   n a m e   t h e   n a m e   o f   t h r e a d ,   w h i c h   s h a l l   b e   u n i q u e  
   *   @ p a r a m   e n t r y   t h e   e n t r y   f u n c t i o n   o f   t h r e a d  
   *   @ p a r a m   p a r a m e t e r   t h e   p a r a m e t e r   o f   t h r e a d   e n t e r   f u n c t i o n  
   *   @ p a r a m   s t a c k _ s t a r t   t h e   s t a r t   a d d r e s s   o f   t h r e a d   s t a c k  
   *   @ p a r a m   s t a c k _ s i z e   t h e   s i z e   o f   t h r e a d   s t a c k  
   *   @ p a r a m   p r i o r i t y   t h e   p r i o r i t y   o f   t h r e a d  
   *   @ p a r a m   t i c k   t h e   t i m e   s l i c e   i f   t h e r e   a r e   s a m e   p r i o r i t y   t h r e a d  
   *  
   *   @ r e t u r n   t h e   o p e r a t i o n   s t a t u s ,   R T _ E O K   o n   O K ,   - R T _ E R R O R   o n   e r r o r  
   * /  
 r t _ e r r _ t   r t _ t h r e a d _ i n i t ( s t r u c t   r t _ t h r e a d   * t h r e a d ,  
                                                 c o n s t   c h a r               * n a m e ,  
                                                 v o i d   ( * e n t r y ) ( v o i d   * p a r a m e t e r ) ,  
                                                 v o i d                           * p a r a m e t e r ,  
                                                 v o i d                           * s t a c k _ s t a r t ,  
                                                 r t _ u i n t 3 2 _ t               s t a c k _ s i z e ,  
                                                 r t _ u i n t 8 _ t                 p r i o r i t y ,  
                                                 r t _ u i n t 3 2 _ t               t i c k )  
 {  
         / *   t h r e a d   c h e c k   * /  
         R T _ A S S E R T ( t h r e a d   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( s t a c k _ s t a r t   ! =   R T _ N U L L ) ;  
  
         / *   i n i t i a l i z e   t h r e a d   o b j e c t   * /  
         r t _ o b j e c t _ i n i t ( ( r t _ o b j e c t _ t ) t h r e a d ,   R T _ O b j e c t _ C l a s s _ T h r e a d ,   n a m e ) ;  
  
         r e t u r n   _ r t _ t h r e a d _ i n i t ( t h r e a d ,  
                                                       n a m e ,  
                                                       e n t r y ,  
                                                       p a r a m e t e r ,  
                                                       s t a c k _ s t a r t ,  
                                                       s t a c k _ s i z e ,  
                                                       p r i o r i t y ,  
                                                       t i c k ) ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   r e t u r n   s e l f   t h r e a d   o b j e c t  
   *  
   *   @ r e t u r n   t h e   s e l f   t h r e a d   o b j e c t  
   * /  
 r t _ t h r e a d _ t   r t _ t h r e a d _ s e l f ( v o i d )  
 {  
         r e t u r n   r t _ c u r r e n t _ t h r e a d ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   s t a r t   a   t h r e a d   a n d   p u t   i t   t o   s y s t e m   r e a d y   q u e u e  
   *  
   *   @ p a r a m   t h r e a d   t h e   t h r e a d   t o   b e   s t a r t e d  
   *  
   *   @ r e t u r n   t h e   o p e r a t i o n   s t a t u s ,   R T _ E O K   o n   O K ,   - R T _ E R R O R   o n   e r r o r  
   * /  
 r t _ e r r _ t   r t _ t h r e a d _ s t a r t u p ( r t _ t h r e a d _ t   t h r e a d )  
 {  
         / *   t h r e a d   c h e c k   * /  
         R T _ A S S E R T ( t h r e a d   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( ( t h r e a d - > s t a t   &   R T _ T H R E A D _ S T A T _ M A S K )   = =   R T _ T H R E A D _ I N I T ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( ( r t _ o b j e c t _ t ) t h r e a d )   = =   R T _ O b j e c t _ C l a s s _ T h r e a d ) ;  
  
         / *   s e t   c u r r e n t   p r i o r i t y   t o   i n i t i a l i z e   p r i o r i t y   * /  
         t h r e a d - > c u r r e n t _ p r i o r i t y   =   t h r e a d - > i n i t _ p r i o r i t y ;  
  
         / *   c a l c u l a t e   p r i o r i t y   a t t r i b u t e   * /  
 # i f   R T _ T H R E A D _ P R I O R I T Y _ M A X   >   3 2  
         t h r e a d - > n u m b e r             =   t h r e a d - > c u r r e n t _ p r i o r i t y   > >   3 ;                         / *   5 b i t   * /  
         t h r e a d - > n u m b e r _ m a s k   =   1 L   < <   t h r e a d - > n u m b e r ;  
         t h r e a d - > h i g h _ m a s k       =   1 L   < <   ( t h r e a d - > c u r r e n t _ p r i o r i t y   &   0 x 0 7 ) ;     / *   3 b i t   * /  
 # e l s e  
         t h r e a d - > n u m b e r _ m a s k   =   1 L   < <   t h r e a d - > c u r r e n t _ p r i o r i t y ;  
 # e n d i f  
  
         R T _ D E B U G _ L O G ( R T _ D E B U G _ T H R E A D ,   ( " s t a r t u p   a   t h r e a d : % s   w i t h   p r i o r i t y : % d \ n " ,  
                                                                       t h r e a d - > n a m e ,   t h r e a d - > i n i t _ p r i o r i t y ) ) ;  
         / *   c h a n g e   t h r e a d   s t a t   * /  
         t h r e a d - > s t a t   =   R T _ T H R E A D _ S U S P E N D ;  
         / *   t h e n   r e s u m e   i t   * /  
         r t _ t h r e a d _ r e s u m e ( t h r e a d ) ;  
         i f   ( r t _ t h r e a d _ s e l f ( )   ! =   R T _ N U L L )  
         {  
                 / *   d o   a   s c h e d u l i n g   * /  
                 r t _ s c h e d u l e ( ) ;  
         }  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   d e t a c h   a   t h r e a d .   T h e   t h r e a d   o b j e c t   w i l l   b e   r e m o v e d   f r o m  
   *   t h r e a d   q u e u e   a n d   d e t a c h e d / d e l e t e d   f r o m   s y s t e m   o b j e c t   m a n a g e m e n t .  
   *  
   *   @ p a r a m   t h r e a d   t h e   t h r e a d   t o   b e   d e l e t e d  
   *  
   *   @ r e t u r n   t h e   o p e r a t i o n   s t a t u s ,   R T _ E O K   o n   O K ,   - R T _ E R R O R   o n   e r r o r  
   * /  
 r t _ e r r _ t   r t _ t h r e a d _ d e t a c h ( r t _ t h r e a d _ t   t h r e a d )  
 {  
         r t _ b a s e _ t   l o c k ;  
  
         / *   t h r e a d   c h e c k   * /  
         R T _ A S S E R T ( t h r e a d   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( ( r t _ o b j e c t _ t ) t h r e a d )   = =   R T _ O b j e c t _ C l a s s _ T h r e a d ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ i s _ s y s t e m o b j e c t ( ( r t _ o b j e c t _ t ) t h r e a d ) ) ;  
  
         i f   ( ( t h r e a d - > s t a t   &   R T _ T H R E A D _ S T A T _ M A S K )   = =   R T _ T H R E A D _ C L O S E )  
                 r e t u r n   R T _ E O K ;  
  
         i f   ( ( t h r e a d - > s t a t   &   R T _ T H R E A D _ S T A T _ M A S K )   ! =   R T _ T H R E A D _ I N I T )  
         {  
                 / *   r e m o v e   f r o m   s c h e d u l e   * /  
                 r t _ s c h e d u l e _ r e m o v e _ t h r e a d ( t h r e a d ) ;  
         }  
  
         _ t h r e a d _ c l e a n u p _ e x e c u t e ( t h r e a d ) ;  
  
         / *   r e l e a s e   t h r e a d   t i m e r   * /  
         r t _ t i m e r _ d e t a c h ( & ( t h r e a d - > t h r e a d _ t i m e r ) ) ;  
  
         / *   c h a n g e   s t a t   * /  
         t h r e a d - > s t a t   =   R T _ T H R E A D _ C L O S E ;  
  
         i f   ( r t _ o b j e c t _ i s _ s y s t e m o b j e c t ( ( r t _ o b j e c t _ t ) t h r e a d )   = =   R T _ T R U E )  
         {  
                 r t _ o b j e c t _ d e t a c h ( ( r t _ o b j e c t _ t ) t h r e a d ) ;  
         }  
         e l s e  
         {  
                 / *   d i s a b l e   i n t e r r u p t   * /  
                 l o c k   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
                 / *   i n s e r t   t o   d e f u n c t   t h r e a d   l i s t   * /  
                 r t _ l i s t _ i n s e r t _ a f t e r ( & r t _ t h r e a d _ d e f u n c t ,   & ( t h r e a d - > t l i s t ) ) ;  
                 / *   e n a b l e   i n t e r r u p t   * /  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( l o c k ) ;  
         }  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 # i f d e f   R T _ U S I N G _ H E A P  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   c r e a t e   a   t h r e a d   o b j e c t   a n d   a l l o c a t e   t h r e a d   o b j e c t   m e m o r y  
   *   a n d   s t a c k .  
   *  
   *   @ p a r a m   n a m e   t h e   n a m e   o f   t h r e a d ,   w h i c h   s h a l l   b e   u n i q u e  
   *   @ p a r a m   e n t r y   t h e   e n t r y   f u n c t i o n   o f   t h r e a d  
   *   @ p a r a m   p a r a m e t e r   t h e   p a r a m e t e r   o f   t h r e a d   e n t e r   f u n c t i o n  
   *   @ p a r a m   s t a c k _ s i z e   t h e   s i z e   o f   t h r e a d   s t a c k  
   *   @ p a r a m   p r i o r i t y   t h e   p r i o r i t y   o f   t h r e a d  
   *   @ p a r a m   t i c k   t h e   t i m e   s l i c e   i f   t h e r e   a r e   s a m e   p r i o r i t y   t h r e a d  
   *  
   *   @ r e t u r n   t h e   c r e a t e d   t h r e a d   o b j e c t  
   * /  
 r t _ t h r e a d _ t   r t _ t h r e a d _ c r e a t e ( c o n s t   c h a r   * n a m e ,  
                                                           v o i d   ( * e n t r y ) ( v o i d   * p a r a m e t e r ) ,  
                                                           v o i d               * p a r a m e t e r ,  
                                                           r t _ u i n t 3 2 _ t   s t a c k _ s i z e ,  
                                                           r t _ u i n t 8 _ t     p r i o r i t y ,  
                                                           r t _ u i n t 3 2 _ t   t i c k )  
 {  
         s t r u c t   r t _ t h r e a d   * t h r e a d ;  
         v o i d   * s t a c k _ s t a r t ;  
  
         t h r e a d   =   ( s t r u c t   r t _ t h r e a d   * ) r t _ o b j e c t _ a l l o c a t e ( R T _ O b j e c t _ C l a s s _ T h r e a d ,  
                                                                                                         n a m e ) ;  
         i f   ( t h r e a d   = =   R T _ N U L L )  
                 r e t u r n   R T _ N U L L ;  
  
         s t a c k _ s t a r t   =   ( v o i d   * ) R T _ K E R N E L _ M A L L O C ( s t a c k _ s i z e ) ;  
         i f   ( s t a c k _ s t a r t   = =   R T _ N U L L )  
         {  
                 / *   a l l o c a t e   s t a c k   f a i l u r e   * /  
                 r t _ o b j e c t _ d e l e t e ( ( r t _ o b j e c t _ t ) t h r e a d ) ;  
  
                 r e t u r n   R T _ N U L L ;  
         }  
  
         _ r t _ t h r e a d _ i n i t ( t h r e a d ,  
                                         n a m e ,  
                                         e n t r y ,  
                                         p a r a m e t e r ,  
                                         s t a c k _ s t a r t ,  
                                         s t a c k _ s i z e ,  
                                         p r i o r i t y ,  
                                         t i c k ) ;  
  
         r e t u r n   t h r e a d ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   d e l e t e   a   t h r e a d .   T h e   t h r e a d   o b j e c t   w i l l   b e   r e m o v e d   f r o m  
   *   t h r e a d   q u e u e   a n d   d e l e t e d   f r o m   s y s t e m   o b j e c t   m a n a g e m e n t   i n   t h e   i d l e   t h r e a d .  
   *  
   *   @ p a r a m   t h r e a d   t h e   t h r e a d   t o   b e   d e l e t e d  
   *  
   *   @ r e t u r n   t h e   o p e r a t i o n   s t a t u s ,   R T _ E O K   o n   O K ,   - R T _ E R R O R   o n   e r r o r  
   * /  
 r t _ e r r _ t   r t _ t h r e a d _ d e l e t e ( r t _ t h r e a d _ t   t h r e a d )  
 {  
         r t _ b a s e _ t   l o c k ;  
  
         / *   t h r e a d   c h e c k   * /  
         R T _ A S S E R T ( t h r e a d   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( ( r t _ o b j e c t _ t ) t h r e a d )   = =   R T _ O b j e c t _ C l a s s _ T h r e a d ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ i s _ s y s t e m o b j e c t ( ( r t _ o b j e c t _ t ) t h r e a d )   = =   R T _ F A L S E ) ;  
  
         i f   ( ( t h r e a d - > s t a t   &   R T _ T H R E A D _ S T A T _ M A S K )   = =   R T _ T H R E A D _ C L O S E )  
                 r e t u r n   R T _ E O K ;  
  
         i f   ( ( t h r e a d - > s t a t   &   R T _ T H R E A D _ S T A T _ M A S K )   ! =   R T _ T H R E A D _ I N I T )  
         {  
                 / *   r e m o v e   f r o m   s c h e d u l e   * /  
                 r t _ s c h e d u l e _ r e m o v e _ t h r e a d ( t h r e a d ) ;  
         }  
  
         _ t h r e a d _ c l e a n u p _ e x e c u t e ( t h r e a d ) ;  
  
         / *   r e l e a s e   t h r e a d   t i m e r   * /  
         r t _ t i m e r _ d e t a c h ( & ( t h r e a d - > t h r e a d _ t i m e r ) ) ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         l o c k   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         / *   c h a n g e   s t a t   * /  
         t h r e a d - > s t a t   =   R T _ T H R E A D _ C L O S E ;  
  
         / *   i n s e r t   t o   d e f u n c t   t h r e a d   l i s t   * /  
         r t _ l i s t _ i n s e r t _ a f t e r ( & r t _ t h r e a d _ d e f u n c t ,   & ( t h r e a d - > t l i s t ) ) ;  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( l o c k ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
 # e n d i f  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   l e t   c u r r e n t   t h r e a d   y i e l d   p r o c e s s o r ,   a n d   s c h e d u l e r   w i l l  
   *   c h o o s e   a   h i g h e s t   t h r e a d   t o   r u n .   A f t e r   y i e l d   p r o c e s s o r ,   t h e   c u r r e n t   t h r e a d  
   *   i s   s t i l l   i n   R E A D Y   s t a t e .  
   *  
   *   @ r e t u r n   R T _ E O K  
   * /  
 r t _ e r r _ t   r t _ t h r e a d _ y i e l d ( v o i d )  
 {  
         r e g i s t e r   r t _ b a s e _ t   l e v e l ;  
         s t r u c t   r t _ t h r e a d   * t h r e a d ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         / *   s e t   t o   c u r r e n t   t h r e a d   * /  
         t h r e a d   =   r t _ c u r r e n t _ t h r e a d ;  
  
         / *   i f   t h e   t h r e a d   s t a t   i s   R E A D Y   a n d   o n   r e a d y   q u e u e   l i s t   * /  
         i f   ( ( t h r e a d - > s t a t   &   R T _ T H R E A D _ S T A T _ M A S K )   = =   R T _ T H R E A D _ R E A D Y   & &  
                 t h r e a d - > t l i s t . n e x t   ! =   t h r e a d - > t l i s t . p r e v )  
         {  
                 / *   r e m o v e   t h r e a d   f r o m   t h r e a d   l i s t   * /  
                 r t _ l i s t _ r e m o v e ( & ( t h r e a d - > t l i s t ) ) ;  
  
                 / *   p u t   t h r e a d   t o   e n d   o f   r e a d y   q u e u e   * /  
                 r t _ l i s t _ i n s e r t _ b e f o r e ( & ( r t _ t h r e a d _ p r i o r i t y _ t a b l e [ t h r e a d - > c u r r e n t _ p r i o r i t y ] ) ,  
                                                             & ( t h r e a d - > t l i s t ) ) ;  
  
                 / *   e n a b l e   i n t e r r u p t   * /  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
                 r t _ s c h e d u l e ( ) ;  
  
                 r e t u r n   R T _ E O K ;  
         }  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   l e t   c u r r e n t   t h r e a d   s l e e p   f o r   s o m e   t i c k s .  
   *  
   *   @ p a r a m   t i c k   t h e   s l e e p   t i c k s  
   *  
   *   @ r e t u r n   R T _ E O K  
   * /  
 r t _ e r r _ t   r t _ t h r e a d _ s l e e p ( r t _ t i c k _ t   t i c k )  
 {  
         r e g i s t e r   r t _ b a s e _ t   t e m p ;  
         s t r u c t   r t _ t h r e a d   * t h r e a d ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         t e m p   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
         / *   s e t   t o   c u r r e n t   t h r e a d   * /  
         t h r e a d   =   r t _ c u r r e n t _ t h r e a d ;  
         R T _ A S S E R T ( t h r e a d   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( ( r t _ o b j e c t _ t ) t h r e a d )   = =   R T _ O b j e c t _ C l a s s _ T h r e a d ) ;  
  
         / *   s u s p e n d   t h r e a d   * /  
         r t _ t h r e a d _ s u s p e n d ( t h r e a d ) ;  
  
         / *   r e s e t   t h e   t i m e o u t   o f   t h r e a d   t i m e r   a n d   s t a r t   i t   * /  
         r t _ t i m e r _ c o n t r o l ( & ( t h r e a d - > t h r e a d _ t i m e r ) ,   R T _ T I M E R _ C T R L _ S E T _ T I M E ,   & t i c k ) ;  
         r t _ t i m e r _ s t a r t ( & ( t h r e a d - > t h r e a d _ t i m e r ) ) ;  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
         r t _ s c h e d u l e ( ) ;  
  
         / *   c l e a r   e r r o r   n u m b e r   o f   t h i s   t h r e a d   t o   R T _ E O K   * /  
         i f   ( t h r e a d - > e r r o r   = =   - R T _ E T I M E O U T )  
                 t h r e a d - > e r r o r   =   R T _ E O K ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   l e t   c u r r e n t   t h r e a d   d e l a y   f o r   s o m e   t i c k s .  
   *  
   *   @ p a r a m   t i c k   t h e   d e l a y   t i c k s  
   *  
   *   @ r e t u r n   R T _ E O K  
   * /  
 r t _ e r r _ t   r t _ t h r e a d _ d e l a y ( r t _ t i c k _ t   t i c k )  
 {  
         r e t u r n   r t _ t h r e a d _ s l e e p ( t i c k ) ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   l e t   c u r r e n t   t h r e a d   d e l a y   u n t i l   ( * t i c k   +   i n c _ t i c k ) .  
   *  
   *   @ p a r a m   t i c k   t h e   t i c k   o f   l a s t   w a k e u p .  
   *   @ p a r a m   i n c _ t i c k   t h e   i n c r e m e n t   t i c k  
   *  
   *   @ r e t u r n   R T _ E O K  
   * /  
 r t _ e r r _ t   r t _ t h r e a d _ d e l a y _ u n t i l ( r t _ t i c k _ t   * t i c k ,   r t _ t i c k _ t   i n c _ t i c k )  
 {  
         r e g i s t e r   r t _ b a s e _ t   l e v e l ;  
         s t r u c t   r t _ t h r e a d   * t h r e a d ;  
  
         R T _ A S S E R T ( t i c k   ! =   R T _ N U L L ) ;  
  
         / *   s e t   t o   c u r r e n t   t h r e a d   * /  
         t h r e a d   =   r t _ t h r e a d _ s e l f ( ) ;  
         R T _ A S S E R T ( t h r e a d   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( ( r t _ o b j e c t _ t ) t h r e a d )   = =   R T _ O b j e c t _ C l a s s _ T h r e a d ) ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         i f   ( r t _ t i c k _ g e t ( )   -   * t i c k   <   i n c _ t i c k )  
         {  
                 * t i c k   =   * t i c k   +   i n c _ t i c k   -   r t _ t i c k _ g e t ( ) ;  
  
                 / *   s u s p e n d   t h r e a d   * /  
                 r t _ t h r e a d _ s u s p e n d ( t h r e a d ) ;  
  
                 / *   r e s e t   t h e   t i m e o u t   o f   t h r e a d   t i m e r   a n d   s t a r t   i t   * /  
                 r t _ t i m e r _ c o n t r o l ( & ( t h r e a d - > t h r e a d _ t i m e r ) ,   R T _ T I M E R _ C T R L _ S E T _ T I M E ,   t i c k ) ;  
                 r t _ t i m e r _ s t a r t ( & ( t h r e a d - > t h r e a d _ t i m e r ) ) ;  
  
                 / *   e n a b l e   i n t e r r u p t   * /  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
                 r t _ s c h e d u l e ( ) ;  
  
                 / *   c l e a r   e r r o r   n u m b e r   o f   t h i s   t h r e a d   t o   R T _ E O K   * /  
                 i f   ( t h r e a d - > e r r o r   = =   - R T _ E T I M E O U T )  
                 {  
                         t h r e a d - > e r r o r   =   R T _ E O K ;  
                 }  
         }  
         e l s e  
         {  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
         }  
  
         / *   g e t   t h e   w a k e u p   t i c k   * /  
         * t i c k   =   r t _ t i c k _ g e t ( ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   l e t   c u r r e n t   t h r e a d   d e l a y   f o r   s o m e   m i l l i s e c o n d s .  
   *  
   *   @ p a r a m   m s   t h e   d e l a y   m s   t i m e  
   *  
   *   @ r e t u r n   R T _ E O K  
   * /  
 r t _ e r r _ t   r t _ t h r e a d _ m d e l a y ( r t _ i n t 3 2 _ t   m s )  
 {  
         r t _ t i c k _ t   t i c k ;  
  
         t i c k   =   r t _ t i c k _ f r o m _ m i l l i s e c o n d ( m s ) ;  
  
         r e t u r n   r t _ t h r e a d _ s l e e p ( t i c k ) ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   c o n t r o l   t h r e a d   b e h a v i o r s   a c c o r d i n g   t o   c o n t r o l   c o m m a n d .  
   *  
   *   @ p a r a m   t h r e a d   t h e   s p e c i f i e d   t h r e a d   t o   b e   c o n t r o l l e d  
   *   @ p a r a m   c m d   t h e   c o n t r o l   c o m m a n d ,   w h i c h   i n c l u d e s  
   *     R T _ T H R E A D _ C T R L _ C H A N G E _ P R I O R I T Y   f o r   c h a n g i n g   p r i o r i t y   l e v e l   o f   t h r e a d ;  
   *     R T _ T H R E A D _ C T R L _ S T A R T U P   f o r   s t a r t i n g   a   t h r e a d ;  
   *     R T _ T H R E A D _ C T R L _ C L O S E   f o r   d e l e t e   a   t h r e a d ;  
   *     R T _ T H R E A D _ C T R L _ B I N D _ C P U   f o r   b i n d   t h e   t h r e a d   t o   a   C P U .  
   *   @ p a r a m   a r g   t h e   a r g u m e n t   o f   c o n t r o l   c o m m a n d  
   *  
   *   @ r e t u r n   R T _ E O K  
   * /  
 r t _ e r r _ t   r t _ t h r e a d _ c o n t r o l ( r t _ t h r e a d _ t   t h r e a d ,   i n t   c m d ,   v o i d   * a r g )  
 {  
         r e g i s t e r   r t _ b a s e _ t   t e m p ;  
  
         / *   t h r e a d   c h e c k   * /  
         R T _ A S S E R T ( t h r e a d   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( ( r t _ o b j e c t _ t ) t h r e a d )   = =   R T _ O b j e c t _ C l a s s _ T h r e a d ) ;  
  
         s w i t c h   ( c m d )  
         {  
         c a s e   R T _ T H R E A D _ C T R L _ C H A N G E _ P R I O R I T Y :  
                 / *   d i s a b l e   i n t e r r u p t   * /  
                 t e m p   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
                 / *   f o r   r e a d y   t h r e a d ,   c h a n g e   q u e u e   * /  
                 i f   ( ( t h r e a d - > s t a t   &   R T _ T H R E A D _ S T A T _ M A S K )   = =   R T _ T H R E A D _ R E A D Y )  
                 {  
                         / *   r e m o v e   t h r e a d   f r o m   s c h e d u l e   q u e u e   f i r s t   * /  
                         r t _ s c h e d u l e _ r e m o v e _ t h r e a d ( t h r e a d ) ;  
  
                         / *   c h a n g e   t h r e a d   p r i o r i t y   * /  
                         t h r e a d - > c u r r e n t _ p r i o r i t y   =   * ( r t _ u i n t 8 _ t   * ) a r g ;  
  
                         / *   r e c a l c u l a t e   p r i o r i t y   a t t r i b u t e   * /  
 # i f   R T _ T H R E A D _ P R I O R I T Y _ M A X   >   3 2  
                         t h r e a d - > n u m b e r             =   t h r e a d - > c u r r e n t _ p r i o r i t y   > >   3 ;                         / *   5 b i t   * /  
                         t h r e a d - > n u m b e r _ m a s k   =   1   < <   t h r e a d - > n u m b e r ;  
                         t h r e a d - > h i g h _ m a s k       =   1   < <   ( t h r e a d - > c u r r e n t _ p r i o r i t y   &   0 x 0 7 ) ;       / *   3 b i t   * /  
 # e l s e  
                         t h r e a d - > n u m b e r _ m a s k   =   1   < <   t h r e a d - > c u r r e n t _ p r i o r i t y ;  
 # e n d i f  
  
                         / *   i n s e r t   t h r e a d   t o   s c h e d u l e   q u e u e   a g a i n   * /  
                         r t _ s c h e d u l e _ i n s e r t _ t h r e a d ( t h r e a d ) ;  
                 }  
                 e l s e  
                 {  
                         t h r e a d - > c u r r e n t _ p r i o r i t y   =   * ( r t _ u i n t 8 _ t   * ) a r g ;  
  
                         / *   r e c a l c u l a t e   p r i o r i t y   a t t r i b u t e   * /  
 # i f   R T _ T H R E A D _ P R I O R I T Y _ M A X   >   3 2  
                         t h r e a d - > n u m b e r             =   t h r e a d - > c u r r e n t _ p r i o r i t y   > >   3 ;                         / *   5 b i t   * /  
                         t h r e a d - > n u m b e r _ m a s k   =   1   < <   t h r e a d - > n u m b e r ;  
                         t h r e a d - > h i g h _ m a s k       =   1   < <   ( t h r e a d - > c u r r e n t _ p r i o r i t y   &   0 x 0 7 ) ;       / *   3 b i t   * /  
 # e l s e  
                         t h r e a d - > n u m b e r _ m a s k   =   1   < <   t h r e a d - > c u r r e n t _ p r i o r i t y ;  
 # e n d i f  
                 }  
  
                 / *   e n a b l e   i n t e r r u p t   * /  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
                 b r e a k ;  
  
         c a s e   R T _ T H R E A D _ C T R L _ S T A R T U P :  
                 r e t u r n   r t _ t h r e a d _ s t a r t u p ( t h r e a d ) ;  
  
         c a s e   R T _ T H R E A D _ C T R L _ C L O S E :  
  
                 i f   ( r t _ o b j e c t _ i s _ s y s t e m o b j e c t ( ( r t _ o b j e c t _ t ) t h r e a d )   = =   R T _ T R U E )  
                 {  
                         r e t u r n   r t _ t h r e a d _ d e t a c h ( t h r e a d ) ;  
                 }  
 # i f d e f   R T _ U S I N G _ H E A P  
                 e l s e  
                 {  
                         r e t u r n   r t _ t h r e a d _ d e l e t e ( t h r e a d ) ;  
                 }  
 # e n d i f  
  
         d e f a u l t :  
                 b r e a k ;  
         }  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   s u s p e n d   t h e   s p e c i f i e d   t h r e a d .  
   *  
   *   @ p a r a m   t h r e a d   t h e   t h r e a d   t o   b e   s u s p e n d e d  
   *  
   *   @ r e t u r n   t h e   o p e r a t i o n   s t a t u s ,   R T _ E O K   o n   O K ,   - R T _ E R R O R   o n   e r r o r  
   *  
   *   @ n o t e   i f   s u s p e n d   s e l f   t h r e a d ,   a f t e r   t h i s   f u n c t i o n   c a l l ,   t h e  
   *   r t _ s c h e d u l e ( )   m u s t   b e   i n v o k e d .  
   * /  
 r t _ e r r _ t   r t _ t h r e a d _ s u s p e n d ( r t _ t h r e a d _ t   t h r e a d )  
 {  
         r e g i s t e r   r t _ b a s e _ t   t e m p ;  
  
         / *   t h r e a d   c h e c k   * /  
         R T _ A S S E R T ( t h r e a d   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( ( r t _ o b j e c t _ t ) t h r e a d )   = =   R T _ O b j e c t _ C l a s s _ T h r e a d ) ;  
  
         R T _ D E B U G _ L O G ( R T _ D E B U G _ T H R E A D ,   ( " t h r e a d   s u s p e n d :     % s \ n " ,   t h r e a d - > n a m e ) ) ;  
  
         i f   ( ( t h r e a d - > s t a t   &   R T _ T H R E A D _ S T A T _ M A S K )   ! =   R T _ T H R E A D _ R E A D Y )  
         {  
                 R T _ D E B U G _ L O G ( R T _ D E B U G _ T H R E A D ,   ( " t h r e a d   s u s p e n d :   t h r e a d   d i s o r d e r ,   0 x % 2 x \ n " ,  
                                                                               t h r e a d - > s t a t ) ) ;  
  
                 r e t u r n   - R T _ E R R O R ;  
         }  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         t e m p   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         / *   c h a n g e   t h r e a d   s t a t   * /  
         r t _ s c h e d u l e _ r e m o v e _ t h r e a d ( t h r e a d ) ;  
         t h r e a d - > s t a t   =   R T _ T H R E A D _ S U S P E N D   |   ( t h r e a d - > s t a t   &   ~ R T _ T H R E A D _ S T A T _ M A S K ) ;  
  
         / *   s t o p   t h r e a d   t i m e r   a n y w a y   * /  
         r t _ t i m e r _ s t o p ( & ( t h r e a d - > t h r e a d _ t i m e r ) ) ;  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ t h r e a d _ s u s p e n d _ h o o k ,   ( t h r e a d ) ) ;  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   r e s u m e   a   t h r e a d   a n d   p u t   i t   t o   s y s t e m   r e a d y   q u e u e .  
   *  
   *   @ p a r a m   t h r e a d   t h e   t h r e a d   t o   b e   r e s u m e d  
   *  
   *   @ r e t u r n   t h e   o p e r a t i o n   s t a t u s ,   R T _ E O K   o n   O K ,   - R T _ E R R O R   o n   e r r o r  
   * /  
 r t _ e r r _ t   r t _ t h r e a d _ r e s u m e ( r t _ t h r e a d _ t   t h r e a d )  
 {  
         r e g i s t e r   r t _ b a s e _ t   t e m p ;  
  
         / *   t h r e a d   c h e c k   * /  
         R T _ A S S E R T ( t h r e a d   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( ( r t _ o b j e c t _ t ) t h r e a d )   = =   R T _ O b j e c t _ C l a s s _ T h r e a d ) ;  
  
         R T _ D E B U G _ L O G ( R T _ D E B U G _ T H R E A D ,   ( " t h r e a d   r e s u m e :     % s \ n " ,   t h r e a d - > n a m e ) ) ;  
  
         i f   ( ( t h r e a d - > s t a t   &   R T _ T H R E A D _ S T A T _ M A S K )   ! =   R T _ T H R E A D _ S U S P E N D )  
         {  
                 R T _ D E B U G _ L O G ( R T _ D E B U G _ T H R E A D ,   ( " t h r e a d   r e s u m e :   t h r e a d   d i s o r d e r ,   % d \ n " ,  
                                                                               t h r e a d - > s t a t ) ) ;  
  
                 r e t u r n   - R T _ E R R O R ;  
         }  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         t e m p   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         / *   r e m o v e   f r o m   s u s p e n d   l i s t   * /  
         r t _ l i s t _ r e m o v e ( & ( t h r e a d - > t l i s t ) ) ;  
  
         r t _ t i m e r _ s t o p ( & t h r e a d - > t h r e a d _ t i m e r ) ;  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
         / *   i n s e r t   t o   s c h e d u l e   r e a d y   l i s t   * /  
         r t _ s c h e d u l e _ i n s e r t _ t h r e a d ( t h r e a d ) ;  
  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ t h r e a d _ r e s u m e _ h o o k ,   ( t h r e a d ) ) ;  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   i s   t h e   t i m e o u t   f u n c t i o n   f o r   t h r e a d ,   n o r m a l l y   w h i c h   i s   i n v o k e d  
   *   w h e n   t h r e a d   i s   t i m e o u t   t o   w a i t   s o m e   r e s o u r c e .  
   *  
   *   @ p a r a m   p a r a m e t e r   t h e   p a r a m e t e r   o f   t h r e a d   t i m e o u t   f u n c t i o n  
   * /  
 v o i d   r t _ t h r e a d _ t i m e o u t ( v o i d   * p a r a m e t e r )  
 {  
         s t r u c t   r t _ t h r e a d   * t h r e a d ;  
  
         t h r e a d   =   ( s t r u c t   r t _ t h r e a d   * ) p a r a m e t e r ;  
  
         / *   t h r e a d   c h e c k   * /  
         R T _ A S S E R T ( t h r e a d   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( ( t h r e a d - > s t a t   &   R T _ T H R E A D _ S T A T _ M A S K )   = =   R T _ T H R E A D _ S U S P E N D ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( ( r t _ o b j e c t _ t ) t h r e a d )   = =   R T _ O b j e c t _ C l a s s _ T h r e a d ) ;  
  
         / *   s e t   e r r o r   n u m b e r   * /  
         t h r e a d - > e r r o r   =   - R T _ E T I M E O U T ;  
  
         / *   r e m o v e   f r o m   s u s p e n d   l i s t   * /  
         r t _ l i s t _ r e m o v e ( & ( t h r e a d - > t l i s t ) ) ;  
  
         / *   i n s e r t   t o   s c h e d u l e   r e a d y   l i s t   * /  
         r t _ s c h e d u l e _ i n s e r t _ t h r e a d ( t h r e a d ) ;  
  
         / *   d o   s c h e d u l e   * /  
         r t _ s c h e d u l e ( ) ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   f i n d   t h e   s p e c i f i e d   t h r e a d .  
   *  
   *   @ p a r a m   n a m e   t h e   n a m e   o f   t h r e a d   f i n d i n g  
   *  
   *   @ r e t u r n   t h e   f o u n d   t h r e a d  
   *  
   *   @ n o t e   p l e a s e   d o n ' t   i n v o k e   t h i s   f u n c t i o n   i n   i n t e r r u p t   s t a t u s .  
   * /  
 r t _ t h r e a d _ t   r t _ t h r e a d _ f i n d ( c h a r   * n a m e )  
 {  
         r e t u r n   ( r t _ t h r e a d _ t ) r t _ o b j e c t _ f i n d ( n a m e ,   R T _ O b j e c t _ C l a s s _ T h r e a d ) ;  
 }  
  
 / * * @ } * /  