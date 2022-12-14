??/ *  
   *   C o p y r i g h t   ( c )   2 0 0 6 - 2 0 2 1 ,   R T - T h r e a d   D e v e l o p m e n t   T e a m  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   C h a n g e   L o g s :  
   *   D a t e                       A u t h o r               N o t e s  
   *   2 0 0 6 - 0 5 - 2 7           B e r n a r d             i m p l e m e n t   m e m o r y   p o o l  
   *   2 0 0 6 - 0 6 - 0 3           B e r n a r d             f i x   t h e   t h r e a d   t i m e r   i n i t   b u g  
   *   2 0 0 6 - 0 6 - 3 0           B e r n a r d             f i x   t h e   a l l o c a t e / f r e e   b l o c k   b u g  
   *   2 0 0 6 - 0 8 - 0 4           B e r n a r d             a d d   h o o k   s u p p o r t  
   *   2 0 0 6 - 0 8 - 1 0           B e r n a r d             f i x   i n t e r r u p t   b u g   i n   r t _ m p _ a l l o c  
   *   2 0 1 0 - 0 7 - 1 3           B e r n a r d             f i x   R T _ A L I G N   i s s u e   f o u n d   b y   k u r o n c a  
   *   2 0 1 0 - 1 0 - 2 6           y i . q i u               a d d   m o d u l e   s u p p o r t   i n   r t _ m p _ d e l e t e  
   *   2 0 1 1 - 0 1 - 2 4           B e r n a r d             a d d   o b j e c t   a l l o c a t i o n   c h e c k .  
   *   2 0 1 2 - 0 3 - 2 2           B e r n a r d             f i x   a l i g n   i s s u e   i n   r t _ m p _ i n i t   a n d   r t _ m p _ c r e a t e .  
   * /  
  
 # i n c l u d e   < r t h w . h >  
 # i n c l u d e   < r t t h r e a d . h >  
  
 # i f d e f   R T _ U S I N G _ M E M P O O L  
  
 # i f d e f   R T _ U S I N G _ H O O K  
 s t a t i c   v o i d   ( * r t _ m p _ a l l o c _ h o o k ) ( s t r u c t   r t _ m e m p o o l   * m p ,   v o i d   * b l o c k ) ;  
 s t a t i c   v o i d   ( * r t _ m p _ f r e e _ h o o k ) ( s t r u c t   r t _ m e m p o o l   * m p ,   v o i d   * b l o c k ) ;  
  
 / * *  
   *   @ a d d t o g r o u p   H o o k  
   * /  
  
 / * * @ { * /  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   s e t   a   h o o k   f u n c t i o n ,   w h i c h   w i l l   b e   i n v o k e d   w h e n   a   m e m o r y  
   *   b l o c k   i s   a l l o c a t e d   f r o m   m e m o r y   p o o l .  
   *  
   *   @ p a r a m   h o o k   t h e   h o o k   f u n c t i o n  
   * /  
 v o i d   r t _ m p _ a l l o c _ s e t h o o k ( v o i d   ( * h o o k ) ( s t r u c t   r t _ m e m p o o l   * m p ,   v o i d   * b l o c k ) )  
 {  
         r t _ m p _ a l l o c _ h o o k   =   h o o k ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   s e t   a   h o o k   f u n c t i o n ,   w h i c h   w i l l   b e   i n v o k e d   w h e n   a   m e m o r y  
   *   b l o c k   i s   r e l e a s e d   t o   m e m o r y   p o o l .  
   *  
   *   @ p a r a m   h o o k   t h e   h o o k   f u n c t i o n  
   * /  
 v o i d   r t _ m p _ f r e e _ s e t h o o k ( v o i d   ( * h o o k ) ( s t r u c t   r t _ m e m p o o l   * m p ,   v o i d   * b l o c k ) )  
 {  
         r t _ m p _ f r e e _ h o o k   =   h o o k ;  
 }  
  
 / * * @ } * /  
 # e n d i f  
  
 / * *  
   *   @ a d d t o g r o u p   M M  
   * /  
  
 / * * @ { * /  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   i n i t i a l i z e   a   m e m o r y   p o o l   o b j e c t ,   n o r m a l l y   w h i c h   i s   u s e d  
   *   f o r   s t a t i c   o b j e c t .  
   *  
   *   @ p a r a m   m p   t h e   m e m o r y   p o o l   o b j e c t  
   *   @ p a r a m   n a m e   t h e   n a m e   o f   m e m o r y   p o o l  
   *   @ p a r a m   s t a r t   t h e   s t a r   a d d r e s s   o f   m e m o r y   p o o l  
   *   @ p a r a m   s i z e   t h e   t o t a l   s i z e   o f   m e m o r y   p o o l  
   *   @ p a r a m   b l o c k _ s i z e   t h e   s i z e   f o r   e a c h   b l o c k  
   *  
   *   @ r e t u r n   R T _ E O K  
   * /  
 r t _ e r r _ t   r t _ m p _ i n i t ( s t r u c t   r t _ m e m p o o l   * m p ,  
                                         c o n s t   c h a r                 * n a m e ,  
                                         v o i d                             * s t a r t ,  
                                         r t _ s i z e _ t                     s i z e ,  
                                         r t _ s i z e _ t                     b l o c k _ s i z e )  
 {  
         r t _ u i n t 8 _ t   * b l o c k _ p t r ;  
         r e g i s t e r   r t _ s i z e _ t   o f f s e t ;  
  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( m p   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( n a m e   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( s t a r t   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( s i z e   >   0   & &   b l o c k _ s i z e   >   0 ) ;  
  
         / *   i n i t i a l i z e   o b j e c t   * /  
         r t _ o b j e c t _ i n i t ( & ( m p - > p a r e n t ) ,   R T _ O b j e c t _ C l a s s _ M e m P o o l ,   n a m e ) ;  
  
         / *   i n i t i a l i z e   m e m o r y   p o o l   * /  
         m p - > s t a r t _ a d d r e s s   =   s t a r t ;  
         m p - > s i z e   =   R T _ A L I G N _ D O W N ( s i z e ,   R T _ A L I G N _ S I Z E ) ;  
  
         / *   a l i g n   t h e   b l o c k   s i z e   * /  
         b l o c k _ s i z e   =   R T _ A L I G N ( b l o c k _ s i z e ,   R T _ A L I G N _ S I Z E ) ;  
         m p - > b l o c k _ s i z e   =   b l o c k _ s i z e ;  
  
         / *   a l i g n   t o   a l i g n   s i z e   b y t e   * /  
         m p - > b l o c k _ t o t a l _ c o u n t   =   m p - > s i z e   /   ( m p - > b l o c k _ s i z e   +   s i z e o f ( r t _ u i n t 8 _ t   * ) ) ;  
         m p - > b l o c k _ f r e e _ c o u n t     =   m p - > b l o c k _ t o t a l _ c o u n t ;  
  
         / *   i n i t i a l i z e   s u s p e n d e d   t h r e a d   l i s t   * /  
         r t _ l i s t _ i n i t ( & ( m p - > s u s p e n d _ t h r e a d ) ) ;  
  
         / *   i n i t i a l i z e   f r e e   b l o c k   l i s t   * /  
         b l o c k _ p t r   =   ( r t _ u i n t 8 _ t   * ) m p - > s t a r t _ a d d r e s s ;  
         f o r   ( o f f s e t   =   0 ;   o f f s e t   <   m p - > b l o c k _ t o t a l _ c o u n t ;   o f f s e t   + + )  
         {  
                 * ( r t _ u i n t 8 _ t   * * ) ( b l o c k _ p t r   +   o f f s e t   *   ( b l o c k _ s i z e   +   s i z e o f ( r t _ u i n t 8 _ t   * ) ) )   =  
                         ( r t _ u i n t 8 _ t   * ) ( b l o c k _ p t r   +   ( o f f s e t   +   1 )   *   ( b l o c k _ s i z e   +   s i z e o f ( r t _ u i n t 8 _ t   * ) ) ) ;  
         }  
  
         * ( r t _ u i n t 8 _ t   * * ) ( b l o c k _ p t r   +   ( o f f s e t   -   1 )   *   ( b l o c k _ s i z e   +   s i z e o f ( r t _ u i n t 8 _ t   * ) ) )   =  
                 R T _ N U L L ;  
  
         m p - > b l o c k _ l i s t   =   b l o c k _ p t r ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   d e t a c h   a   m e m o r y   p o o l   f r o m   s y s t e m   o b j e c t   m a n a g e m e n t .  
   *  
   *   @ p a r a m   m p   t h e   m e m o r y   p o o l   o b j e c t  
   *  
   *   @ r e t u r n   R T _ E O K  
   * /  
 r t _ e r r _ t   r t _ m p _ d e t a c h ( s t r u c t   r t _ m e m p o o l   * m p )  
 {  
         s t r u c t   r t _ t h r e a d   * t h r e a d ;  
         r e g i s t e r   r t _ u b a s e _ t   l e v e l ;  
  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( m p   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & m p - > p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ M e m P o o l ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ i s _ s y s t e m o b j e c t ( & m p - > p a r e n t ) ) ;  
  
         / *   w a k e   u p   a l l   s u s p e n d e d   t h r e a d s   * /  
         w h i l e   ( ! r t _ l i s t _ i s e m p t y ( & ( m p - > s u s p e n d _ t h r e a d ) ) )  
         {  
                 / *   d i s a b l e   i n t e r r u p t   * /  
                 l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
                 / *   g e t   n e x t   s u s p e n d   t h r e a d   * /  
                 t h r e a d   =   r t _ l i s t _ e n t r y ( m p - > s u s p e n d _ t h r e a d . n e x t ,   s t r u c t   r t _ t h r e a d ,   t l i s t ) ;  
                 / *   s e t   e r r o r   c o d e   t o   R T _ E R R O R   * /  
                 t h r e a d - > e r r o r   =   - R T _ E R R O R ;  
  
                 / *  
                   *   r e s u m e   t h r e a d  
                   *   I n   r t _ t h r e a d _ r e s u m e   f u n c t i o n ,   i t   w i l l   r e m o v e   c u r r e n t   t h r e a d   f r o m  
                   *   s u s p e n d   l i s t  
                   * /  
                 r t _ t h r e a d _ r e s u m e ( t h r e a d ) ;  
  
                 / *   e n a b l e   i n t e r r u p t   * /  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
         }  
  
         / *   d e t a c h   o b j e c t   * /  
         r t _ o b j e c t _ d e t a c h ( & ( m p - > p a r e n t ) ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 # i f d e f   R T _ U S I N G _ H E A P  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   c r e a t e   a   m e m p o o l   o b j e c t   a n d   a l l o c a t e   t h e   m e m o r y   p o o l   f r o m  
   *   h e a p .  
   *  
   *   @ p a r a m   n a m e   t h e   n a m e   o f   m e m o r y   p o o l  
   *   @ p a r a m   b l o c k _ c o u n t   t h e   c o u n t   o f   b l o c k s   i n   m e m o r y   p o o l  
   *   @ p a r a m   b l o c k _ s i z e   t h e   s i z e   f o r   e a c h   b l o c k  
   *  
   *   @ r e t u r n   t h e   c r e a t e d   m e m p o o l   o b j e c t  
   * /  
 r t _ m p _ t   r t _ m p _ c r e a t e ( c o n s t   c h a r   * n a m e ,  
                                           r t _ s i z e _ t       b l o c k _ c o u n t ,  
                                           r t _ s i z e _ t       b l o c k _ s i z e )  
 {  
         r t _ u i n t 8 _ t   * b l o c k _ p t r ;  
         s t r u c t   r t _ m e m p o o l   * m p ;  
         r e g i s t e r   r t _ s i z e _ t   o f f s e t ;  
  
         R T _ D E B U G _ N O T _ I N _ I N T E R R U P T ;  
  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( n a m e   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( b l o c k _ c o u n t   >   0   & &   b l o c k _ s i z e   >   0 ) ;  
  
         / *   a l l o c a t e   o b j e c t   * /  
         m p   =   ( s t r u c t   r t _ m e m p o o l   * ) r t _ o b j e c t _ a l l o c a t e ( R T _ O b j e c t _ C l a s s _ M e m P o o l ,   n a m e ) ;  
         / *   a l l o c a t e   o b j e c t   f a i l e d   * /  
         i f   ( m p   = =   R T _ N U L L )  
                 r e t u r n   R T _ N U L L ;  
  
         / *   i n i t i a l i z e   m e m o r y   p o o l   * /  
         b l o c k _ s i z e           =   R T _ A L I G N ( b l o c k _ s i z e ,   R T _ A L I G N _ S I Z E ) ;  
         m p - > b l o c k _ s i z e   =   b l o c k _ s i z e ;  
         m p - > s i z e               =   ( b l o c k _ s i z e   +   s i z e o f ( r t _ u i n t 8 _ t   * ) )   *   b l o c k _ c o u n t ;  
  
         / *   a l l o c a t e   m e m o r y   * /  
         m p - > s t a r t _ a d d r e s s   =   r t _ m a l l o c ( ( b l o c k _ s i z e   +   s i z e o f ( r t _ u i n t 8 _ t   * ) )   *  
                                                                     b l o c k _ c o u n t ) ;  
         i f   ( m p - > s t a r t _ a d d r e s s   = =   R T _ N U L L )  
         {  
                 / *   n o   m e m o r y ,   d e l e t e   m e m o r y   p o o l   o b j e c t   * /  
                 r t _ o b j e c t _ d e l e t e ( & ( m p - > p a r e n t ) ) ;  
  
                 r e t u r n   R T _ N U L L ;  
         }  
  
         m p - > b l o c k _ t o t a l _ c o u n t   =   b l o c k _ c o u n t ;  
         m p - > b l o c k _ f r e e _ c o u n t     =   m p - > b l o c k _ t o t a l _ c o u n t ;  
  
         / *   i n i t i a l i z e   s u s p e n d e d   t h r e a d   l i s t   * /  
         r t _ l i s t _ i n i t ( & ( m p - > s u s p e n d _ t h r e a d ) ) ;  
  
         / *   i n i t i a l i z e   f r e e   b l o c k   l i s t   * /  
         b l o c k _ p t r   =   ( r t _ u i n t 8 _ t   * ) m p - > s t a r t _ a d d r e s s ;  
         f o r   ( o f f s e t   =   0 ;   o f f s e t   <   m p - > b l o c k _ t o t a l _ c o u n t ;   o f f s e t   + + )  
         {  
                 * ( r t _ u i n t 8 _ t   * * ) ( b l o c k _ p t r   +   o f f s e t   *   ( b l o c k _ s i z e   +   s i z e o f ( r t _ u i n t 8 _ t   * ) ) )  
                         =   b l o c k _ p t r   +   ( o f f s e t   +   1 )   *   ( b l o c k _ s i z e   +   s i z e o f ( r t _ u i n t 8 _ t   * ) ) ;  
         }  
  
         * ( r t _ u i n t 8 _ t   * * ) ( b l o c k _ p t r   +   ( o f f s e t   -   1 )   *   ( b l o c k _ s i z e   +   s i z e o f ( r t _ u i n t 8 _ t   * ) ) )  
                 =   R T _ N U L L ;  
  
         m p - > b l o c k _ l i s t   =   b l o c k _ p t r ;  
  
         r e t u r n   m p ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   d e l e t e   a   m e m o r y   p o o l   a n d   r e l e a s e   t h e   o b j e c t   m e m o r y .  
   *  
   *   @ p a r a m   m p   t h e   m e m o r y   p o o l   o b j e c t  
   *  
   *   @ r e t u r n   R T _ E O K  
   * /  
 r t _ e r r _ t   r t _ m p _ d e l e t e ( r t _ m p _ t   m p )  
 {  
         s t r u c t   r t _ t h r e a d   * t h r e a d ;  
         r e g i s t e r   r t _ u b a s e _ t   l e v e l ;  
  
         R T _ D E B U G _ N O T _ I N _ I N T E R R U P T ;  
  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( m p   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & m p - > p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ M e m P o o l ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ i s _ s y s t e m o b j e c t ( & m p - > p a r e n t )   = =   R T _ F A L S E ) ;  
  
         / *   w a k e   u p   a l l   s u s p e n d e d   t h r e a d s   * /  
         w h i l e   ( ! r t _ l i s t _ i s e m p t y ( & ( m p - > s u s p e n d _ t h r e a d ) ) )  
         {  
                 / *   d i s a b l e   i n t e r r u p t   * /  
                 l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
                 / *   g e t   n e x t   s u s p e n d   t h r e a d   * /  
                 t h r e a d   =   r t _ l i s t _ e n t r y ( m p - > s u s p e n d _ t h r e a d . n e x t ,   s t r u c t   r t _ t h r e a d ,   t l i s t ) ;  
                 / *   s e t   e r r o r   c o d e   t o   R T _ E R R O R   * /  
                 t h r e a d - > e r r o r   =   - R T _ E R R O R ;  
  
                 / *  
                   *   r e s u m e   t h r e a d  
                   *   I n   r t _ t h r e a d _ r e s u m e   f u n c t i o n ,   i t   w i l l   r e m o v e   c u r r e n t   t h r e a d   f r o m  
                   *   s u s p e n d   l i s t  
                   * /  
                 r t _ t h r e a d _ r e s u m e ( t h r e a d ) ;  
  
                 / *   e n a b l e   i n t e r r u p t   * /  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
         }  
  
         / *   r e l e a s e   a l l o c a t e d   r o o m   * /  
         r t _ f r e e ( m p - > s t a r t _ a d d r e s s ) ;  
  
         / *   d e t a c h   o b j e c t   * /  
         r t _ o b j e c t _ d e l e t e ( & ( m p - > p a r e n t ) ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
 # e n d i f  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   a l l o c a t e   a   b l o c k   f r o m   m e m o r y   p o o l  
   *  
   *   @ p a r a m   m p   t h e   m e m o r y   p o o l   o b j e c t  
   *   @ p a r a m   t i m e   t h e   w a i t i n g   t i m e  
   *  
   *   @ r e t u r n   t h e   a l l o c a t e d   m e m o r y   b l o c k   o r   R T _ N U L L   o n   a l l o c a t e d   f a i l e d  
   * /  
 v o i d   * r t _ m p _ a l l o c ( r t _ m p _ t   m p ,   r t _ i n t 3 2 _ t   t i m e )  
 {  
         r t _ u i n t 8 _ t   * b l o c k _ p t r ;  
         r e g i s t e r   r t _ b a s e _ t   l e v e l ;  
         s t r u c t   r t _ t h r e a d   * t h r e a d ;  
         r t _ u i n t 3 2 _ t   b e f o r e _ s l e e p   =   0 ;  
  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( m p   ! =   R T _ N U L L ) ;  
  
         / *   g e t   c u r r e n t   t h r e a d   * /  
         t h r e a d   =   r t _ t h r e a d _ s e l f ( ) ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         w h i l e   ( m p - > b l o c k _ f r e e _ c o u n t   = =   0 )  
         {  
                 / *   m e m o r y   b l o c k   i s   u n a v a i l a b l e .   * /  
                 i f   ( t i m e   = =   0 )  
                 {  
                         / *   e n a b l e   i n t e r r u p t   * /  
                         r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
                         r t _ s e t _ e r r n o ( - R T _ E T I M E O U T ) ;  
  
                         r e t u r n   R T _ N U L L ;  
                 }  
  
                 R T _ D E B U G _ N O T _ I N _ I N T E R R U P T ;  
  
                 t h r e a d - > e r r o r   =   R T _ E O K ;  
  
                 / *   n e e d   s u s p e n d   t h r e a d   * /  
                 r t _ t h r e a d _ s u s p e n d ( t h r e a d ) ;  
                 r t _ l i s t _ i n s e r t _ a f t e r ( & ( m p - > s u s p e n d _ t h r e a d ) ,   & ( t h r e a d - > t l i s t ) ) ;  
  
                 i f   ( t i m e   >   0 )  
                 {  
                         / *   g e t   t h e   s t a r t   t i c k   o f   t i m e r   * /  
                         b e f o r e _ s l e e p   =   r t _ t i c k _ g e t ( ) ;  
  
                         / *   i n i t   t h r e a d   t i m e r   a n d   s t a r t   i t   * /  
                         r t _ t i m e r _ c o n t r o l ( & ( t h r e a d - > t h r e a d _ t i m e r ) ,  
                                                           R T _ T I M E R _ C T R L _ S E T _ T I M E ,  
                                                           & t i m e ) ;  
                         r t _ t i m e r _ s t a r t ( & ( t h r e a d - > t h r e a d _ t i m e r ) ) ;  
                 }  
  
                 / *   e n a b l e   i n t e r r u p t   * /  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
                 / *   d o   a   s c h e d u l e   * /  
                 r t _ s c h e d u l e ( ) ;  
  
                 i f   ( t h r e a d - > e r r o r   ! =   R T _ E O K )  
                         r e t u r n   R T _ N U L L ;  
  
                 i f   ( t i m e   >   0 )  
                 {  
                         t i m e   - =   r t _ t i c k _ g e t ( )   -   b e f o r e _ s l e e p ;  
                         i f   ( t i m e   <   0 )  
                                 t i m e   =   0 ;  
                 }  
                 / *   d i s a b l e   i n t e r r u p t   * /  
                 l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
         }  
  
         / *   m e m o r y   b l o c k   i s   a v a i l a b l e .   d e c r e a s e   t h e   f r e e   b l o c k   c o u n t e r   * /  
         m p - > b l o c k _ f r e e _ c o u n t - - ;  
  
         / *   g e t   b l o c k   f r o m   b l o c k   l i s t   * /  
         b l o c k _ p t r   =   m p - > b l o c k _ l i s t ;  
         R T _ A S S E R T ( b l o c k _ p t r   ! =   R T _ N U L L ) ;  
  
         / *   S e t u p   t h e   n e x t   f r e e   n o d e .   * /  
         m p - > b l o c k _ l i s t   =   * ( r t _ u i n t 8 _ t   * * ) b l o c k _ p t r ;  
  
         / *   p o i n t   t o   m e m o r y   p o o l   * /  
         * ( r t _ u i n t 8 _ t   * * ) b l o c k _ p t r   =   ( r t _ u i n t 8 _ t   * ) m p ;  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ m p _ a l l o c _ h o o k ,  
                                                 ( m p ,   ( r t _ u i n t 8 _ t   * ) ( b l o c k _ p t r   +   s i z e o f ( r t _ u i n t 8 _ t   * ) ) ) ) ;  
  
         r e t u r n   ( r t _ u i n t 8 _ t   * ) ( b l o c k _ p t r   +   s i z e o f ( r t _ u i n t 8 _ t   * ) ) ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   r e l e a s e   a   m e m o r y   b l o c k  
   *  
   *   @ p a r a m   b l o c k   t h e   a d d r e s s   o f   m e m o r y   b l o c k   t o   b e   r e l e a s e d  
   * /  
 v o i d   r t _ m p _ f r e e ( v o i d   * b l o c k )  
 {  
         r t _ u i n t 8 _ t   * * b l o c k _ p t r ;  
         s t r u c t   r t _ m e m p o o l   * m p ;  
         s t r u c t   r t _ t h r e a d   * t h r e a d ;  
         r e g i s t e r   r t _ b a s e _ t   l e v e l ;  
  
         / *   p a r a m e t e r   c h e c k   * /  
         i f   ( b l o c k   = =   R T _ N U L L )   r e t u r n ;  
  
         / *   g e t   t h e   c o n t r o l   b l o c k   o f   p o o l   w h i c h   t h e   b l o c k   b e l o n g s   t o   * /  
         b l o c k _ p t r   =   ( r t _ u i n t 8 _ t   * * ) ( ( r t _ u i n t 8 _ t   * ) b l o c k   -   s i z e o f ( r t _ u i n t 8 _ t   * ) ) ;  
         m p                 =   ( s t r u c t   r t _ m e m p o o l   * ) * b l o c k _ p t r ;  
  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ m p _ f r e e _ h o o k ,   ( m p ,   b l o c k ) ) ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         / *   i n c r e a s e   t h e   f r e e   b l o c k   c o u n t   * /  
         m p - > b l o c k _ f r e e _ c o u n t   + + ;  
  
         / *   l i n k   t h e   b l o c k   i n t o   t h e   b l o c k   l i s t   * /  
         * b l o c k _ p t r   =   m p - > b l o c k _ l i s t ;  
         m p - > b l o c k _ l i s t   =   ( r t _ u i n t 8 _ t   * ) b l o c k _ p t r ;  
  
         i f   ( ! r t _ l i s t _ i s e m p t y ( & ( m p - > s u s p e n d _ t h r e a d ) ) )  
         {  
                 / *   g e t   t h e   s u s p e n d e d   t h r e a d   * /  
                 t h r e a d   =   r t _ l i s t _ e n t r y ( m p - > s u s p e n d _ t h r e a d . n e x t ,  
                                                               s t r u c t   r t _ t h r e a d ,  
                                                               t l i s t ) ;  
  
                 / *   s e t   e r r o r   * /  
                 t h r e a d - > e r r o r   =   R T _ E O K ;  
  
                 / *   r e s u m e   t h r e a d   * /  
                 r t _ t h r e a d _ r e s u m e ( t h r e a d ) ;  
  
                 / *   e n a b l e   i n t e r r u p t   * /  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
                 / *   d o   a   s c h e d u l e   * /  
                 r t _ s c h e d u l e ( ) ;  
  
                 r e t u r n ;  
         }  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
 }  
  
 / * * @ } * /  
  
 # e n d i f  
  