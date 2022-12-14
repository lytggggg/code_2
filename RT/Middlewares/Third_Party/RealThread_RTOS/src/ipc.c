??/ *  
   *   C o p y r i g h t   ( c )   2 0 0 6 - 2 0 2 1 ,   R T - T h r e a d   D e v e l o p m e n t   T e a m  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   C h a n g e   L o g s :  
   *   D a t e                       A u t h o r               N o t e s  
   *   2 0 0 6 - 0 3 - 1 4           B e r n a r d             t h e   f i r s t   v e r s i o n  
   *   2 0 0 6 - 0 4 - 2 5           B e r n a r d             i m p l e m e n t   s e m a p h o r e  
   *   2 0 0 6 - 0 5 - 0 3           B e r n a r d             a d d   R T _ I P C _ D E B U G  
   *                                                           m o d i f y   t h e   t y p e   o f   I P C   w a i t i n g   t i m e   t o   r t _ i n t 3 2 _ t  
   *   2 0 0 6 - 0 5 - 1 0           B e r n a r d             f i x   t h e   s e m a p h o r e   t a k e   b u g   a n d   a d d   I P C   o b j e c t  
   *   2 0 0 6 - 0 5 - 1 2           B e r n a r d             i m p l e m e n t   m a i l b o x   a n d   m e s s a g e   q u e u e  
   *   2 0 0 6 - 0 5 - 2 0           B e r n a r d             i m p l e m e n t   m u t e x  
   *   2 0 0 6 - 0 5 - 2 3           B e r n a r d             i m p l e m e n t   f a s t   e v e n t  
   *   2 0 0 6 - 0 5 - 2 4           B e r n a r d             i m p l e m e n t   e v e n t  
   *   2 0 0 6 - 0 6 - 0 3           B e r n a r d             f i x   t h e   t h r e a d   t i m e r   i n i t   b u g  
   *   2 0 0 6 - 0 6 - 0 5           B e r n a r d             f i x   t h e   m u t e x   r e l e a s e   b u g  
   *   2 0 0 6 - 0 6 - 0 7           B e r n a r d             f i x   t h e   m e s s a g e   q u e u e   s e n d   b u g  
   *   2 0 0 6 - 0 8 - 0 4           B e r n a r d             a d d   h o o k   s u p p o r t  
   *   2 0 0 9 - 0 5 - 2 1           Y i . q i u               f i x   t h e   s e m   r e l e a s e   b u g  
   *   2 0 0 9 - 0 7 - 1 8           B e r n a r d             f i x   t h e   e v e n t   c l e a r   b u g  
   *   2 0 0 9 - 0 9 - 0 9           B e r n a r d             r e m o v e   f a s t   e v e n t   a n d   f i x   i p c   r e l e a s e   b u g  
   *   2 0 0 9 - 1 0 - 1 0           B e r n a r d             c h a n g e   s e m a p h o r e   a n d   m u t e x   v a l u e   t o   u n s i g n e d   v a l u e  
   *   2 0 0 9 - 1 0 - 2 5           B e r n a r d             c h a n g e   t h e   m b / m q   r e c e i v e   t i m e o u t   t o   0   i f   t h e  
   *                                                           r e - c a l c u l a t e d   d e l t a   t i c k   i s   a   n e g a t i v e   n u m b e r .  
   *   2 0 0 9 - 1 2 - 1 6           B e r n a r d             f i x   t h e   r t _ i p c _ o b j e c t _ s u s p e n d   i s s u e   w h e n   I P C   f l a g  
   *                                                           i s   R T _ I P C _ F L A G _ P R I O  
   *   2 0 1 0 - 0 1 - 2 0           m b b i l l               r e m o v e   r t _ i p c _ o b j e c t _ d e c r e a s e   f u n c t i o n .  
   *   2 0 1 0 - 0 4 - 2 0           B e r n a r d             m o v e   m e m c p y   o u t s i d e   i n t e r r u p t   d i s a b l e   i n   m q  
   *   2 0 1 0 - 1 0 - 2 6           y i . q i u               a d d   m o d u l e   s u p p o r t   i n   r t _ m p _ d e l e t e   a n d   r t _ m q _ d e l e t e  
   *   2 0 1 0 - 1 1 - 1 0           B e r n a r d             a d d   I P C   r e s e t   c o m m a n d   i m p l e m e n t a t i o n .  
   *   2 0 1 1 - 1 2 - 1 8           B e r n a r d             a d d   m o r e   p a r a m e t e r   c h e c k i n g   i n   m e s s a g e   q u e u e  
   *   2 0 1 3 - 0 9 - 1 4           G r i s s i o m           a d d   a n   o p t i o n   c h e c k   i n   r t _ e v e n t _ r e c v  
   *   2 0 1 8 - 1 0 - 0 2           B e r n a r d             a d d   6 4 b i t   s u p p o r t   f o r   m a i l b o x  
   *   2 0 1 9 - 0 9 - 1 6           t y x                     a d d   s e n d   w a i t   s u p p o r t   f o r   m e s s a g e   q u e u e  
   *   2 0 2 0 - 0 7 - 2 9           M e c o   M a n           f i x   t h r e a d - > e v e n t _ s e t / e v e n t _ i n f o   w h e n   r e c e i v e d   a n  
   *                                                           e v e n t   w i t h o u t   p e n d i n g  
   *   2 0 2 0 - 1 0 - 1 1           M e c o   M a n           a d d   v a l u e   o v e r f l o w - c h e c k   c o d e  
   * /  
  
 # i n c l u d e   < r t t h r e a d . h >  
 # i n c l u d e   < r t h w . h >  
  
 # i f d e f   R T _ U S I N G _ H O O K  
 e x t e r n   v o i d   ( * r t _ o b j e c t _ t r y t a k e _ h o o k ) ( s t r u c t   r t _ o b j e c t   * o b j e c t ) ;  
 e x t e r n   v o i d   ( * r t _ o b j e c t _ t a k e _ h o o k ) ( s t r u c t   r t _ o b j e c t   * o b j e c t ) ;  
 e x t e r n   v o i d   ( * r t _ o b j e c t _ p u t _ h o o k ) ( s t r u c t   r t _ o b j e c t   * o b j e c t ) ;  
 # e n d i f  
  
 / * *  
   *   @ a d d t o g r o u p   I P C  
   * /  
  
 / * * @ { * /  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   i n i t i a l i z e   a n   I P C   o b j e c t  
   *  
   *   @ p a r a m   i p c   t h e   I P C   o b j e c t  
   *  
   *   @ r e t u r n   t h e   o p e r a t i o n   s t a t u s ,   R T _ E O K   o n   s u c c e s s f u l  
   * /  
 r t _ i n l i n e   r t _ e r r _ t   r t _ i p c _ o b j e c t _ i n i t ( s t r u c t   r t _ i p c _ o b j e c t   * i p c )  
 {  
         / *   i n i t i a l i z e   i p c   o b j e c t   * /  
         r t _ l i s t _ i n i t ( & ( i p c - > s u s p e n d _ t h r e a d ) ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   s u s p e n d   a   t h r e a d   t o   a   s p e c i f i e d   l i s t .   I P C   o b j e c t   o r   s o m e  
   *   d o u b l e - q u e u e   o b j e c t   ( m a i l b o x   e t c . )   c o n t a i n s   t h i s   k i n d   o f   l i s t .  
   *  
   *   @ p a r a m   l i s t   t h e   I P C   s u s p e n d e d   t h r e a d   l i s t  
   *   @ p a r a m   t h r e a d   t h e   t h r e a d   o b j e c t   t o   b e   s u s p e n d e d  
   *   @ p a r a m   f l a g   t h e   I P C   o b j e c t   f l a g ,  
   *                 w h i c h   s h a l l   b e   R T _ I P C _ F L A G _ F I F O / R T _ I P C _ F L A G _ P R I O .  
   *  
   *   @ r e t u r n   t h e   o p e r a t i o n   s t a t u s ,   R T _ E O K   o n   s u c c e s s f u l  
   * /  
 r t _ i n l i n e   r t _ e r r _ t   r t _ i p c _ l i s t _ s u s p e n d ( r t _ l i s t _ t                 * l i s t ,  
                                                                               s t r u c t   r t _ t h r e a d   * t h r e a d ,  
                                                                               r t _ u i n t 8 _ t                 f l a g )  
 {  
         / *   s u s p e n d   t h r e a d   * /  
         r t _ t h r e a d _ s u s p e n d ( t h r e a d ) ;  
  
         s w i t c h   ( f l a g )  
         {  
         c a s e   R T _ I P C _ F L A G _ F I F O :  
                 r t _ l i s t _ i n s e r t _ b e f o r e ( l i s t ,   & ( t h r e a d - > t l i s t ) ) ;  
                 b r e a k ;  
  
         c a s e   R T _ I P C _ F L A G _ P R I O :  
                 {  
                         s t r u c t   r t _ l i s t _ n o d e   * n ;  
                         s t r u c t   r t _ t h r e a d   * s t h r e a d ;  
  
                         / *   f i n d   a   s u i t a b l e   p o s i t i o n   * /  
                         f o r   ( n   =   l i s t - > n e x t ;   n   ! =   l i s t ;   n   =   n - > n e x t )  
                         {  
                                 s t h r e a d   =   r t _ l i s t _ e n t r y ( n ,   s t r u c t   r t _ t h r e a d ,   t l i s t ) ;  
  
                                 / *   f i n d   o u t   * /  
                                 i f   ( t h r e a d - > c u r r e n t _ p r i o r i t y   <   s t h r e a d - > c u r r e n t _ p r i o r i t y )  
                                 {  
                                         / *   i n s e r t   t h i s   t h r e a d   b e f o r e   t h e   s t h r e a d   * /  
                                         r t _ l i s t _ i n s e r t _ b e f o r e ( & ( s t h r e a d - > t l i s t ) ,   & ( t h r e a d - > t l i s t ) ) ;  
                                         b r e a k ;  
                                 }  
                         }  
  
                         / *  
                           *   n o t   f o u n d   a   s u i t a b l e   p o s i t i o n ,  
                           *   a p p e n d   t o   t h e   e n d   o f   s u s p e n d _ t h r e a d   l i s t  
                           * /  
                         i f   ( n   = =   l i s t )  
                                 r t _ l i s t _ i n s e r t _ b e f o r e ( l i s t ,   & ( t h r e a d - > t l i s t ) ) ;  
                 }  
                 b r e a k ;  
  
         d e f a u l t :  
                 b r e a k ;  
         }  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   r e s u m e   t h e   f i r s t   t h r e a d   i n   t h e   l i s t   o f   a   I P C   o b j e c t :  
   *   -   r e m o v e   t h e   t h r e a d   f r o m   s u s p e n d   q u e u e   o f   I P C   o b j e c t  
   *   -   p u t   t h e   t h r e a d   i n t o   s y s t e m   r e a d y   q u e u e  
   *  
   *   @ p a r a m   l i s t   t h e   t h r e a d   l i s t  
   *  
   *   @ r e t u r n   t h e   o p e r a t i o n   s t a t u s ,   R T _ E O K   o n   s u c c e s s f u l  
   * /  
 r t _ i n l i n e   r t _ e r r _ t   r t _ i p c _ l i s t _ r e s u m e ( r t _ l i s t _ t   * l i s t )  
 {  
         s t r u c t   r t _ t h r e a d   * t h r e a d ;  
  
         / *   g e t   t h r e a d   e n t r y   * /  
         t h r e a d   =   r t _ l i s t _ e n t r y ( l i s t - > n e x t ,   s t r u c t   r t _ t h r e a d ,   t l i s t ) ;  
  
         R T _ D E B U G _ L O G ( R T _ D E B U G _ I P C ,   ( " r e s u m e   t h r e a d : % s \ n " ,   t h r e a d - > n a m e ) ) ;  
  
         / *   r e s u m e   i t   * /  
         r t _ t h r e a d _ r e s u m e ( t h r e a d ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   r e s u m e   a l l   s u s p e n d e d   t h r e a d s   i n   a   l i s t ,   i n c l u d i n g  
   *   s u s p e n d   l i s t   o f   I P C   o b j e c t   a n d   p r i v a t e   l i s t   o f   m a i l b o x   e t c .  
   *  
   *   @ p a r a m   l i s t   o f   t h e   t h r e a d s   t o   r e s u m e  
   *  
   *   @ r e t u r n   t h e   o p e r a t i o n   s t a t u s ,   R T _ E O K   o n   s u c c e s s f u l  
   * /  
 r t _ i n l i n e   r t _ e r r _ t   r t _ i p c _ l i s t _ r e s u m e _ a l l ( r t _ l i s t _ t   * l i s t )  
 {  
         s t r u c t   r t _ t h r e a d   * t h r e a d ;  
         r e g i s t e r   r t _ u b a s e _ t   t e m p ;  
  
         / *   w a k e u p   a l l   s u s p e n d e d   t h r e a d s   * /  
         w h i l e   ( ! r t _ l i s t _ i s e m p t y ( l i s t ) )  
         {  
                 / *   d i s a b l e   i n t e r r u p t   * /  
                 t e m p   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
                 / *   g e t   n e x t   s u s p e n d e d   t h r e a d   * /  
                 t h r e a d   =   r t _ l i s t _ e n t r y ( l i s t - > n e x t ,   s t r u c t   r t _ t h r e a d ,   t l i s t ) ;  
                 / *   s e t   e r r o r   c o d e   t o   R T _ E R R O R   * /  
                 t h r e a d - > e r r o r   =   - R T _ E R R O R ;  
  
                 / *  
                   *   r e s u m e   t h r e a d  
                   *   I n   r t _ t h r e a d _ r e s u m e   f u n c t i o n ,   i t   w i l l   r e m o v e   c u r r e n t   t h r e a d   f r o m  
                   *   s u s p e n d e d   l i s t  
                   * /  
                 r t _ t h r e a d _ r e s u m e ( t h r e a d ) ;  
  
                 / *   e n a b l e   i n t e r r u p t   * /  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
         }  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 # i f d e f   R T _ U S I N G _ S E M A P H O R E  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   i n i t i a l i z e   a   s e m a p h o r e   a n d   p u t   i t   u n d e r   c o n t r o l   o f  
   *   r e s o u r c e   m a n a g e m e n t .  
   *  
   *   @ p a r a m   s e m   t h e   s e m a p h o r e   o b j e c t  
   *   @ p a r a m   n a m e   t h e   n a m e   o f   s e m a p h o r e  
   *   @ p a r a m   v a l u e   t h e   i n i t i a l   v a l u e   o f   s e m a p h o r e  
   *   @ p a r a m   f l a g   t h e   f l a g   o f   s e m a p h o r e  
   *  
   *   @ r e t u r n   t h e   o p e r a t i o n   s t a t u s ,   R T _ E O K   o n   s u c c e s s f u l  
   * /  
 r t _ e r r _ t   r t _ s e m _ i n i t ( r t _ s e m _ t         s e m ,  
                                           c o n s t   c h a r   * n a m e ,  
                                           r t _ u i n t 3 2 _ t   v a l u e ,  
                                           r t _ u i n t 8 _ t     f l a g )  
 {  
         R T _ A S S E R T ( s e m   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( v a l u e   <   0 x 1 0 0 0 0 U ) ;  
  
         / *   i n i t i a l i z e   o b j e c t   * /  
         r t _ o b j e c t _ i n i t ( & ( s e m - > p a r e n t . p a r e n t ) ,   R T _ O b j e c t _ C l a s s _ S e m a p h o r e ,   n a m e ) ;  
  
         / *   i n i t i a l i z e   i p c   o b j e c t   * /  
         r t _ i p c _ o b j e c t _ i n i t ( & ( s e m - > p a r e n t ) ) ;  
  
         / *   s e t   i n i t i a l   v a l u e   * /  
         s e m - > v a l u e   =   ( r t _ u i n t 1 6 _ t ) v a l u e ;  
  
         / *   s e t   p a r e n t   * /  
         s e m - > p a r e n t . p a r e n t . f l a g   =   f l a g ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   d e t a c h   a   s e m a p h o r e   f r o m   r e s o u r c e   m a n a g e m e n t  
   *  
   *   @ p a r a m   s e m   t h e   s e m a p h o r e   o b j e c t  
   *  
   *   @ r e t u r n   t h e   o p e r a t i o n   s t a t u s ,   R T _ E O K   o n   s u c c e s s f u l  
   *  
   *   @ s e e   r t _ s e m _ d e l e t e  
   * /  
 r t _ e r r _ t   r t _ s e m _ d e t a c h ( r t _ s e m _ t   s e m )  
 {  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( s e m   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & s e m - > p a r e n t . p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ S e m a p h o r e ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ i s _ s y s t e m o b j e c t ( & s e m - > p a r e n t . p a r e n t ) ) ;  
  
         / *   w a k e u p   a l l   s u s p e n d e d   t h r e a d s   * /  
         r t _ i p c _ l i s t _ r e s u m e _ a l l ( & ( s e m - > p a r e n t . s u s p e n d _ t h r e a d ) ) ;  
  
         / *   d e t a c h   s e m a p h o r e   o b j e c t   * /  
         r t _ o b j e c t _ d e t a c h ( & ( s e m - > p a r e n t . p a r e n t ) ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 # i f d e f   R T _ U S I N G _ H E A P  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   c r e a t e   a   s e m a p h o r e   f r o m   s y s t e m   r e s o u r c e  
   *  
   *   @ p a r a m   n a m e   t h e   n a m e   o f   s e m a p h o r e  
   *   @ p a r a m   v a l u e   t h e   i n i t i a l   v a l u e   o f   s e m a p h o r e  
   *   @ p a r a m   f l a g   t h e   f l a g   o f   s e m a p h o r e  
   *  
   *   @ r e t u r n   t h e   c r e a t e d   s e m a p h o r e ,   R T _ N U L L   o n   e r r o r   h a p p e n  
   *  
   *   @ s e e   r t _ s e m _ i n i t  
   * /  
 r t _ s e m _ t   r t _ s e m _ c r e a t e ( c o n s t   c h a r   * n a m e ,   r t _ u i n t 3 2 _ t   v a l u e ,   r t _ u i n t 8 _ t   f l a g )  
 {  
         r t _ s e m _ t   s e m ;  
  
         R T _ D E B U G _ N O T _ I N _ I N T E R R U P T ;  
         R T _ A S S E R T ( v a l u e   <   0 x 1 0 0 0 0 U ) ;  
  
         / *   a l l o c a t e   o b j e c t   * /  
         s e m   =   ( r t _ s e m _ t ) r t _ o b j e c t _ a l l o c a t e ( R T _ O b j e c t _ C l a s s _ S e m a p h o r e ,   n a m e ) ;  
         i f   ( s e m   = =   R T _ N U L L )  
                 r e t u r n   s e m ;  
  
         / *   i n i t i a l i z e   i p c   o b j e c t   * /  
         r t _ i p c _ o b j e c t _ i n i t ( & ( s e m - > p a r e n t ) ) ;  
  
         / *   s e t   i n i t i a l   v a l u e   * /  
         s e m - > v a l u e   =   v a l u e ;  
  
         / *   s e t   p a r e n t   * /  
         s e m - > p a r e n t . p a r e n t . f l a g   =   f l a g ;  
  
         r e t u r n   s e m ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   d e l e t e   a   s e m a p h o r e   o b j e c t   a n d   r e l e a s e   t h e   m e m o r y  
   *  
   *   @ p a r a m   s e m   t h e   s e m a p h o r e   o b j e c t  
   *  
   *   @ r e t u r n   t h e   e r r o r   c o d e  
   *  
   *   @ s e e   r t _ s e m _ d e t a c h  
   * /  
 r t _ e r r _ t   r t _ s e m _ d e l e t e ( r t _ s e m _ t   s e m )  
 {  
         R T _ D E B U G _ N O T _ I N _ I N T E R R U P T ;  
  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( s e m   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & s e m - > p a r e n t . p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ S e m a p h o r e ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ i s _ s y s t e m o b j e c t ( & s e m - > p a r e n t . p a r e n t )   = =   R T _ F A L S E ) ;  
  
         / *   w a k e u p   a l l   s u s p e n d e d   t h r e a d s   * /  
         r t _ i p c _ l i s t _ r e s u m e _ a l l ( & ( s e m - > p a r e n t . s u s p e n d _ t h r e a d ) ) ;  
  
         / *   d e l e t e   s e m a p h o r e   o b j e c t   * /  
         r t _ o b j e c t _ d e l e t e ( & ( s e m - > p a r e n t . p a r e n t ) ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
 # e n d i f  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   t a k e   a   s e m a p h o r e ,   i f   t h e   s e m a p h o r e   i s   u n a v a i l a b l e ,   t h e  
   *   t h r e a d   s h a l l   w a i t   f o r   a   s p e c i f i e d   t i m e .  
   *  
   *   @ p a r a m   s e m   t h e   s e m a p h o r e   o b j e c t  
   *   @ p a r a m   t i m e   t h e   w a i t i n g   t i m e  
   *  
   *   @ r e t u r n   t h e   e r r o r   c o d e  
   * /  
 r t _ e r r _ t   r t _ s e m _ t a k e ( r t _ s e m _ t   s e m ,   r t _ i n t 3 2 _ t   t i m e )  
 {  
         r e g i s t e r   r t _ b a s e _ t   t e m p ;  
         s t r u c t   r t _ t h r e a d   * t h r e a d ;  
  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( s e m   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & s e m - > p a r e n t . p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ S e m a p h o r e ) ;  
  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ o b j e c t _ t r y t a k e _ h o o k ,   ( & ( s e m - > p a r e n t . p a r e n t ) ) ) ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         t e m p   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         R T _ D E B U G _ L O G ( R T _ D E B U G _ I P C ,   ( " t h r e a d   % s   t a k e   s e m : % s ,   w h i c h   v a l u e   i s :   % d \ n " ,  
                                                                 r t _ t h r e a d _ s e l f ( ) - > n a m e ,  
                                                                 ( ( s t r u c t   r t _ o b j e c t   * ) s e m ) - > n a m e ,  
                                                                 s e m - > v a l u e ) ) ;  
  
         i f   ( s e m - > v a l u e   >   0 )  
         {  
                 / *   s e m a p h o r e   i s   a v a i l a b l e   * /  
                 s e m - > v a l u e   - - ;  
  
                 / *   e n a b l e   i n t e r r u p t   * /  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
         }  
         e l s e  
         {  
                 / *   n o   w a i t i n g ,   r e t u r n   w i t h   t i m e o u t   * /  
                 i f   ( t i m e   = =   0 )  
                 {  
                         r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
                         r e t u r n   - R T _ E T I M E O U T ;  
                 }  
                 e l s e  
                 {  
                         / *   c u r r e n t   c o n t e x t   c h e c k i n g   * /  
                         R T _ D E B U G _ I N _ T H R E A D _ C O N T E X T ;  
  
                         / *   s e m a p h o r e   i s   u n a v a i l a b l e ,   p u s h   t o   s u s p e n d   l i s t   * /  
                         / *   g e t   c u r r e n t   t h r e a d   * /  
                         t h r e a d   =   r t _ t h r e a d _ s e l f ( ) ;  
  
                         / *   r e s e t   t h r e a d   e r r o r   n u m b e r   * /  
                         t h r e a d - > e r r o r   =   R T _ E O K ;  
  
                         R T _ D E B U G _ L O G ( R T _ D E B U G _ I P C ,   ( " s e m   t a k e :   s u s p e n d   t h r e a d   -   % s \ n " ,  
                                                                                 t h r e a d - > n a m e ) ) ;  
  
                         / *   s u s p e n d   t h r e a d   * /  
                         r t _ i p c _ l i s t _ s u s p e n d ( & ( s e m - > p a r e n t . s u s p e n d _ t h r e a d ) ,  
                                                                 t h r e a d ,  
                                                                 s e m - > p a r e n t . p a r e n t . f l a g ) ;  
  
                         / *   h a s   w a i t i n g   t i m e ,   s t a r t   t h r e a d   t i m e r   * /  
                         i f   ( t i m e   >   0 )  
                         {  
                                 R T _ D E B U G _ L O G ( R T _ D E B U G _ I P C ,   ( " s e t   t h r e a d : % s   t o   t i m e r   l i s t \ n " ,  
                                                                                         t h r e a d - > n a m e ) ) ;  
  
                                 / *   r e s e t   t h e   t i m e o u t   o f   t h r e a d   t i m e r   a n d   s t a r t   i t   * /  
                                 r t _ t i m e r _ c o n t r o l ( & ( t h r e a d - > t h r e a d _ t i m e r ) ,  
                                                                   R T _ T I M E R _ C T R L _ S E T _ T I M E ,  
                                                                   & t i m e ) ;  
                                 r t _ t i m e r _ s t a r t ( & ( t h r e a d - > t h r e a d _ t i m e r ) ) ;  
                         }  
  
                         / *   e n a b l e   i n t e r r u p t   * /  
                         r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
                         / *   d o   s c h e d u l e   * /  
                         r t _ s c h e d u l e ( ) ;  
  
                         i f   ( t h r e a d - > e r r o r   ! =   R T _ E O K )  
                         {  
                                 r e t u r n   t h r e a d - > e r r o r ;  
                         }  
                 }  
         }  
  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ o b j e c t _ t a k e _ h o o k ,   ( & ( s e m - > p a r e n t . p a r e n t ) ) ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   t r y   t o   t a k e   a   s e m a p h o r e   a n d   i m m e d i a t e l y   r e t u r n  
   *  
   *   @ p a r a m   s e m   t h e   s e m a p h o r e   o b j e c t  
   *  
   *   @ r e t u r n   t h e   e r r o r   c o d e  
   * /  
 r t _ e r r _ t   r t _ s e m _ t r y t a k e ( r t _ s e m _ t   s e m )  
 {  
         r e t u r n   r t _ s e m _ t a k e ( s e m ,   0 ) ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   r e l e a s e   a   s e m a p h o r e ,   i f   t h e r e   a r e   t h r e a d s   s u s p e n d e d   o n  
   *   s e m a p h o r e ,   i t   w i l l   b e   w a k e d   u p .  
   *  
   *   @ p a r a m   s e m   t h e   s e m a p h o r e   o b j e c t  
   *  
   *   @ r e t u r n   t h e   e r r o r   c o d e  
   * /  
 r t _ e r r _ t   r t _ s e m _ r e l e a s e ( r t _ s e m _ t   s e m )  
 {  
         r e g i s t e r   r t _ b a s e _ t   t e m p ;  
         r e g i s t e r   r t _ b o o l _ t   n e e d _ s c h e d u l e ;  
  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( s e m   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & s e m - > p a r e n t . p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ S e m a p h o r e ) ;  
  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ o b j e c t _ p u t _ h o o k ,   ( & ( s e m - > p a r e n t . p a r e n t ) ) ) ;  
  
         n e e d _ s c h e d u l e   =   R T _ F A L S E ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         t e m p   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         R T _ D E B U G _ L O G ( R T _ D E B U G _ I P C ,   ( " t h r e a d   % s   r e l e a s e s   s e m : % s ,   w h i c h   v a l u e   i s :   % d \ n " ,  
                                                                 r t _ t h r e a d _ s e l f ( ) - > n a m e ,  
                                                                 ( ( s t r u c t   r t _ o b j e c t   * ) s e m ) - > n a m e ,  
                                                                 s e m - > v a l u e ) ) ;  
  
         i f   ( ! r t _ l i s t _ i s e m p t y ( & s e m - > p a r e n t . s u s p e n d _ t h r e a d ) )  
         {  
                 / *   r e s u m e   t h e   s u s p e n d e d   t h r e a d   * /  
                 r t _ i p c _ l i s t _ r e s u m e ( & ( s e m - > p a r e n t . s u s p e n d _ t h r e a d ) ) ;  
                 n e e d _ s c h e d u l e   =   R T _ T R U E ;  
         }  
         e l s e  
         {  
                 i f ( s e m - > v a l u e   <   R T _ S E M _ V A L U E _ M A X )  
                 {  
                         s e m - > v a l u e   + + ;   / *   i n c r e a s e   v a l u e   * /  
                 }  
                 e l s e  
                 {  
                         r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;   / *   e n a b l e   i n t e r r u p t   * /  
                         r e t u r n   - R T _ E F U L L ;   / *   v a l u e   o v e r f l o w e d   * /  
                 }  
         }  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
         / *   r e s u m e   a   t h r e a d ,   r e - s c h e d u l e   * /  
         i f   ( n e e d _ s c h e d u l e   = =   R T _ T R U E )  
                 r t _ s c h e d u l e ( ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   c a n   g e t   o r   s e t   s o m e   e x t r a   a t t r i b u t i o n s   o f   a   s e m a p h o r e   o b j e c t .  
   *  
   *   @ p a r a m   s e m   t h e   s e m a p h o r e   o b j e c t  
   *   @ p a r a m   c m d   t h e   e x e c u t i o n   c o m m a n d  
   *   @ p a r a m   a r g   t h e   e x e c u t i o n   a r g u m e n t  
   *  
   *   @ r e t u r n   t h e   e r r o r   c o d e  
   * /  
 r t _ e r r _ t   r t _ s e m _ c o n t r o l ( r t _ s e m _ t   s e m ,   i n t   c m d ,   v o i d   * a r g )  
 {  
         r t _ u b a s e _ t   l e v e l ;  
  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( s e m   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & s e m - > p a r e n t . p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ S e m a p h o r e ) ;  
  
         i f   ( c m d   = =   R T _ I P C _ C M D _ R E S E T )  
         {  
                 r t _ u b a s e _ t   v a l u e ;  
  
                 / *   g e t   v a l u e   * /  
                 v a l u e   =   ( r t _ u b a s e _ t ) a r g ;  
                 / *   d i s a b l e   i n t e r r u p t   * /  
                 l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
                 / *   r e s u m e   a l l   w a i t i n g   t h r e a d   * /  
                 r t _ i p c _ l i s t _ r e s u m e _ a l l ( & s e m - > p a r e n t . s u s p e n d _ t h r e a d ) ;  
  
                 / *   s e t   n e w   v a l u e   * /  
                 s e m - > v a l u e   =   ( r t _ u i n t 1 6 _ t ) v a l u e ;  
  
                 / *   e n a b l e   i n t e r r u p t   * /  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
                 r t _ s c h e d u l e ( ) ;  
  
                 r e t u r n   R T _ E O K ;  
         }  
  
         r e t u r n   - R T _ E R R O R ;  
 }  
 # e n d i f   / *   e n d   o f   R T _ U S I N G _ S E M A P H O R E   * /  
  
 # i f d e f   R T _ U S I N G _ M U T E X  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   i n i t i a l i z e   a   m u t e x   a n d   p u t   i t   u n d e r   c o n t r o l   o f   r e s o u r c e  
   *   m a n a g e m e n t .  
   *  
   *   @ p a r a m   m u t e x   t h e   m u t e x   o b j e c t  
   *   @ p a r a m   n a m e   t h e   n a m e   o f   m u t e x  
   *   @ p a r a m   f l a g   t h e   f l a g   o f   m u t e x  
   *  
   *   @ r e t u r n   t h e   o p e r a t i o n   s t a t u s ,   R T _ E O K   o n   s u c c e s s f u l  
   * /  
 r t _ e r r _ t   r t _ m u t e x _ i n i t ( r t _ m u t e x _ t   m u t e x ,   c o n s t   c h a r   * n a m e ,   r t _ u i n t 8 _ t   f l a g )  
 {  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( m u t e x   ! =   R T _ N U L L ) ;  
  
         / *   i n i t i a l i z e   o b j e c t   * /  
         r t _ o b j e c t _ i n i t ( & ( m u t e x - > p a r e n t . p a r e n t ) ,   R T _ O b j e c t _ C l a s s _ M u t e x ,   n a m e ) ;  
  
         / *   i n i t i a l i z e   i p c   o b j e c t   * /  
         r t _ i p c _ o b j e c t _ i n i t ( & ( m u t e x - > p a r e n t ) ) ;  
  
         m u t e x - > v a l u e   =   1 ;  
         m u t e x - > o w n e r   =   R T _ N U L L ;  
         m u t e x - > o r i g i n a l _ p r i o r i t y   =   0 x F F ;  
         m u t e x - > h o l d     =   0 ;  
  
         / *   s e t   f l a g   * /  
         m u t e x - > p a r e n t . p a r e n t . f l a g   =   f l a g ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   d e t a c h   a   m u t e x   f r o m   r e s o u r c e   m a n a g e m e n t  
   *  
   *   @ p a r a m   m u t e x   t h e   m u t e x   o b j e c t  
   *  
   *   @ r e t u r n   t h e   o p e r a t i o n   s t a t u s ,   R T _ E O K   o n   s u c c e s s f u l  
   *  
   *   @ s e e   r t _ m u t e x _ d e l e t e  
   * /  
 r t _ e r r _ t   r t _ m u t e x _ d e t a c h ( r t _ m u t e x _ t   m u t e x )  
 {  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( m u t e x   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & m u t e x - > p a r e n t . p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ M u t e x ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ i s _ s y s t e m o b j e c t ( & m u t e x - > p a r e n t . p a r e n t ) ) ;  
  
         / *   w a k e u p   a l l   s u s p e n d e d   t h r e a d s   * /  
         r t _ i p c _ l i s t _ r e s u m e _ a l l ( & ( m u t e x - > p a r e n t . s u s p e n d _ t h r e a d ) ) ;  
  
         / *   d e t a c h   s e m a p h o r e   o b j e c t   * /  
         r t _ o b j e c t _ d e t a c h ( & ( m u t e x - > p a r e n t . p a r e n t ) ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 # i f d e f   R T _ U S I N G _ H E A P  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   c r e a t e   a   m u t e x   f r o m   s y s t e m   r e s o u r c e  
   *  
   *   @ p a r a m   n a m e   t h e   n a m e   o f   m u t e x  
   *   @ p a r a m   f l a g   t h e   f l a g   o f   m u t e x  
   *  
   *   @ r e t u r n   t h e   c r e a t e d   m u t e x ,   R T _ N U L L   o n   e r r o r   h a p p e n  
   *  
   *   @ s e e   r t _ m u t e x _ i n i t  
   * /  
 r t _ m u t e x _ t   r t _ m u t e x _ c r e a t e ( c o n s t   c h a r   * n a m e ,   r t _ u i n t 8 _ t   f l a g )  
 {  
         s t r u c t   r t _ m u t e x   * m u t e x ;  
  
         R T _ D E B U G _ N O T _ I N _ I N T E R R U P T ;  
  
         / *   a l l o c a t e   o b j e c t   * /  
         m u t e x   =   ( r t _ m u t e x _ t ) r t _ o b j e c t _ a l l o c a t e ( R T _ O b j e c t _ C l a s s _ M u t e x ,   n a m e ) ;  
         i f   ( m u t e x   = =   R T _ N U L L )  
                 r e t u r n   m u t e x ;  
  
         / *   i n i t i a l i z e   i p c   o b j e c t   * /  
         r t _ i p c _ o b j e c t _ i n i t ( & ( m u t e x - > p a r e n t ) ) ;  
  
         m u t e x - > v a l u e                             =   1 ;  
         m u t e x - > o w n e r                             =   R T _ N U L L ;  
         m u t e x - > o r i g i n a l _ p r i o r i t y     =   0 x F F ;  
         m u t e x - > h o l d                               =   0 ;  
  
         / *   s e t   f l a g   * /  
         m u t e x - > p a r e n t . p a r e n t . f l a g   =   f l a g ;  
  
         r e t u r n   m u t e x ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   d e l e t e   a   m u t e x   o b j e c t   a n d   r e l e a s e   t h e   m e m o r y  
   *  
   *   @ p a r a m   m u t e x   t h e   m u t e x   o b j e c t  
   *  
   *   @ r e t u r n   t h e   e r r o r   c o d e  
   *  
   *   @ s e e   r t _ m u t e x _ d e t a c h  
   * /  
 r t _ e r r _ t   r t _ m u t e x _ d e l e t e ( r t _ m u t e x _ t   m u t e x )  
 {  
         R T _ D E B U G _ N O T _ I N _ I N T E R R U P T ;  
  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( m u t e x   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & m u t e x - > p a r e n t . p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ M u t e x ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ i s _ s y s t e m o b j e c t ( & m u t e x - > p a r e n t . p a r e n t )   = =   R T _ F A L S E ) ;  
  
         / *   w a k e u p   a l l   s u s p e n d e d   t h r e a d s   * /  
         r t _ i p c _ l i s t _ r e s u m e _ a l l ( & ( m u t e x - > p a r e n t . s u s p e n d _ t h r e a d ) ) ;  
  
         / *   d e l e t e   m u t e x   o b j e c t   * /  
         r t _ o b j e c t _ d e l e t e ( & ( m u t e x - > p a r e n t . p a r e n t ) ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
 # e n d i f  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   t a k e   a   m u t e x ,   i f   t h e   m u t e x   i s   u n a v a i l a b l e ,   t h e  
   *   t h r e a d   s h a l l   w a i t   f o r   a   s p e c i f i e d   t i m e .  
   *  
   *   @ p a r a m   m u t e x   t h e   m u t e x   o b j e c t  
   *   @ p a r a m   t i m e   t h e   w a i t i n g   t i m e  
   *  
   *   @ r e t u r n   t h e   e r r o r   c o d e  
   * /  
 r t _ e r r _ t   r t _ m u t e x _ t a k e ( r t _ m u t e x _ t   m u t e x ,   r t _ i n t 3 2 _ t   t i m e )  
 {  
         r e g i s t e r   r t _ b a s e _ t   t e m p ;  
         s t r u c t   r t _ t h r e a d   * t h r e a d ;  
  
         / *   t h i s   f u n c t i o n   m u s t   n o t   b e   u s e d   i n   i n t e r r u p t   e v e n   i f   t i m e   =   0   * /  
         R T _ D E B U G _ I N _ T H R E A D _ C O N T E X T ;  
  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( m u t e x   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & m u t e x - > p a r e n t . p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ M u t e x ) ;  
  
         / *   g e t   c u r r e n t   t h r e a d   * /  
         t h r e a d   =   r t _ t h r e a d _ s e l f ( ) ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         t e m p   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ o b j e c t _ t r y t a k e _ h o o k ,   ( & ( m u t e x - > p a r e n t . p a r e n t ) ) ) ;  
  
         R T _ D E B U G _ L O G ( R T _ D E B U G _ I P C ,  
                                   ( " m u t e x _ t a k e :   c u r r e n t   t h r e a d   % s ,   m u t e x   v a l u e :   % d ,   h o l d :   % d \ n " ,  
                                     t h r e a d - > n a m e ,   m u t e x - > v a l u e ,   m u t e x - > h o l d ) ) ;  
  
         / *   r e s e t   t h r e a d   e r r o r   * /  
         t h r e a d - > e r r o r   =   R T _ E O K ;  
  
         i f   ( m u t e x - > o w n e r   = =   t h r e a d )  
         {  
                 i f ( m u t e x - > h o l d   <   R T _ M U T E X _ H O L D _ M A X )  
                 {  
                         / *   i t ' s   t h e   s a m e   t h r e a d   * /  
                         m u t e x - > h o l d   + + ;  
                 }  
                 e l s e  
                 {  
                         r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;   / *   e n a b l e   i n t e r r u p t   * /  
                         r e t u r n   - R T _ E F U L L ;   / *   v a l u e   o v e r f l o w e d   * /  
                 }  
         }  
         e l s e  
         {  
                 / *   T h e   v a l u e   o f   m u t e x   i s   1   i n   i n i t i a l   s t a t u s .   T h e r e f o r e ,   i f   t h e  
                   *   v a l u e   i s   g r e a t   t h a n   0 ,   i t   i n d i c a t e s   t h e   m u t e x   i s   a v a i b l e .  
                   * /  
                 i f   ( m u t e x - > v a l u e   >   0 )  
                 {  
                         / *   m u t e x   i s   a v a i l a b l e   * /  
                         m u t e x - > v a l u e   - - ;  
  
                         / *   s e t   m u t e x   o w n e r   a n d   o r i g i n a l   p r i o r i t y   * /  
                         m u t e x - > o w n e r                           =   t h r e a d ;  
                         m u t e x - > o r i g i n a l _ p r i o r i t y   =   t h r e a d - > c u r r e n t _ p r i o r i t y ;  
                         i f ( m u t e x - > h o l d   <   R T _ M U T E X _ H O L D _ M A X )  
                         {  
                                 m u t e x - > h o l d   + + ;  
                         }  
                         e l s e  
                         {  
                                 r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;   / *   e n a b l e   i n t e r r u p t   * /  
                                 r e t u r n   - R T _ E F U L L ;   / *   v a l u e   o v e r f l o w e d   * /  
                         }  
                 }  
                 e l s e  
                 {  
                         / *   n o   w a i t i n g ,   r e t u r n   w i t h   t i m e o u t   * /  
                         i f   ( t i m e   = =   0 )  
                         {  
                                 / *   s e t   e r r o r   a s   t i m e o u t   * /  
                                 t h r e a d - > e r r o r   =   - R T _ E T I M E O U T ;  
  
                                 / *   e n a b l e   i n t e r r u p t   * /  
                                 r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
                                 r e t u r n   - R T _ E T I M E O U T ;  
                         }  
                         e l s e  
                         {  
                                 / *   m u t e x   i s   u n a v a i l a b l e ,   p u s h   t o   s u s p e n d   l i s t   * /  
                                 R T _ D E B U G _ L O G ( R T _ D E B U G _ I P C ,   ( " m u t e x _ t a k e :   s u s p e n d   t h r e a d :   % s \ n " ,  
                                                                                         t h r e a d - > n a m e ) ) ;  
  
                                 / *   c h a n g e   t h e   o w n e r   t h r e a d   p r i o r i t y   o f   m u t e x   * /  
                                 i f   ( t h r e a d - > c u r r e n t _ p r i o r i t y   <   m u t e x - > o w n e r - > c u r r e n t _ p r i o r i t y )  
                                 {  
                                         / *   c h a n g e   t h e   o w n e r   t h r e a d   p r i o r i t y   * /  
                                         r t _ t h r e a d _ c o n t r o l ( m u t e x - > o w n e r ,  
                                                                             R T _ T H R E A D _ C T R L _ C H A N G E _ P R I O R I T Y ,  
                                                                             & t h r e a d - > c u r r e n t _ p r i o r i t y ) ;  
                                 }  
  
                                 / *   s u s p e n d   c u r r e n t   t h r e a d   * /  
                                 r t _ i p c _ l i s t _ s u s p e n d ( & ( m u t e x - > p a r e n t . s u s p e n d _ t h r e a d ) ,  
                                                                         t h r e a d ,  
                                                                         m u t e x - > p a r e n t . p a r e n t . f l a g ) ;  
  
                                 / *   h a s   w a i t i n g   t i m e ,   s t a r t   t h r e a d   t i m e r   * /  
                                 i f   ( t i m e   >   0 )  
                                 {  
                                         R T _ D E B U G _ L O G ( R T _ D E B U G _ I P C ,  
                                                                   ( " m u t e x _ t a k e :   s t a r t   t h e   t i m e r   o f   t h r e a d : % s \ n " ,  
                                                                     t h r e a d - > n a m e ) ) ;  
  
                                         / *   r e s e t   t h e   t i m e o u t   o f   t h r e a d   t i m e r   a n d   s t a r t   i t   * /  
                                         r t _ t i m e r _ c o n t r o l ( & ( t h r e a d - > t h r e a d _ t i m e r ) ,  
                                                                           R T _ T I M E R _ C T R L _ S E T _ T I M E ,  
                                                                           & t i m e ) ;  
                                         r t _ t i m e r _ s t a r t ( & ( t h r e a d - > t h r e a d _ t i m e r ) ) ;  
                                 }  
  
                                 / *   e n a b l e   i n t e r r u p t   * /  
                                 r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
                                 / *   d o   s c h e d u l e   * /  
                                 r t _ s c h e d u l e ( ) ;  
  
                                 i f   ( t h r e a d - > e r r o r   ! =   R T _ E O K )  
                                 {  
                                         / *   r e t u r n   e r r o r   * /  
                                         r e t u r n   t h r e a d - > e r r o r ;  
                                 }  
                                 e l s e  
                                 {  
                                         / *   t h e   m u t e x   i s   t a k e n   s u c c e s s f u l l y .   * /  
                                         / *   d i s a b l e   i n t e r r u p t   * /  
                                         t e m p   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
                                 }  
                         }  
                 }  
         }  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ o b j e c t _ t a k e _ h o o k ,   ( & ( m u t e x - > p a r e n t . p a r e n t ) ) ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   r e l e a s e   a   m u t e x ,   i f   t h e r e   a r e   t h r e a d s   s u s p e n d e d   o n   m u t e x ,  
   *   i t   w i l l   b e   w a k e d   u p .  
   *  
   *   @ p a r a m   m u t e x   t h e   m u t e x   o b j e c t  
   *  
   *   @ r e t u r n   t h e   e r r o r   c o d e  
   * /  
 r t _ e r r _ t   r t _ m u t e x _ r e l e a s e ( r t _ m u t e x _ t   m u t e x )  
 {  
         r e g i s t e r   r t _ b a s e _ t   t e m p ;  
         s t r u c t   r t _ t h r e a d   * t h r e a d ;  
         r t _ b o o l _ t   n e e d _ s c h e d u l e ;  
  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( m u t e x   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & m u t e x - > p a r e n t . p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ M u t e x ) ;  
  
         n e e d _ s c h e d u l e   =   R T _ F A L S E ;  
  
         / *   o n l y   t h r e a d   c o u l d   r e l e a s e   m u t e x   b e c a u s e   w e   n e e d   t e s t   t h e   o w n e r s h i p   * /  
         R T _ D E B U G _ I N _ T H R E A D _ C O N T E X T ;  
  
         / *   g e t   c u r r e n t   t h r e a d   * /  
         t h r e a d   =   r t _ t h r e a d _ s e l f ( ) ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         t e m p   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         R T _ D E B U G _ L O G ( R T _ D E B U G _ I P C ,  
                                   ( " m u t e x _ r e l e a s e : c u r r e n t   t h r e a d   % s ,   m u t e x   v a l u e :   % d ,   h o l d :   % d \ n " ,  
                                     t h r e a d - > n a m e ,   m u t e x - > v a l u e ,   m u t e x - > h o l d ) ) ;  
  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ o b j e c t _ p u t _ h o o k ,   ( & ( m u t e x - > p a r e n t . p a r e n t ) ) ) ;  
  
         / *   m u t e x   o n l y   c a n   b e   r e l e a s e d   b y   o w n e r   * /  
         i f   ( t h r e a d   ! =   m u t e x - > o w n e r )  
         {  
                 t h r e a d - > e r r o r   =   - R T _ E R R O R ;  
  
                 / *   e n a b l e   i n t e r r u p t   * /  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
                 r e t u r n   - R T _ E R R O R ;  
         }  
  
         / *   d e c r e a s e   h o l d   * /  
         m u t e x - > h o l d   - - ;  
         / *   i f   n o   h o l d   * /  
         i f   ( m u t e x - > h o l d   = =   0 )  
         {  
                 / *   c h a n g e   t h e   o w n e r   t h r e a d   t o   o r i g i n a l   p r i o r i t y   * /  
                 i f   ( m u t e x - > o r i g i n a l _ p r i o r i t y   ! =   m u t e x - > o w n e r - > c u r r e n t _ p r i o r i t y )  
                 {  
                         r t _ t h r e a d _ c o n t r o l ( m u t e x - > o w n e r ,  
                                                             R T _ T H R E A D _ C T R L _ C H A N G E _ P R I O R I T Y ,  
                                                             & ( m u t e x - > o r i g i n a l _ p r i o r i t y ) ) ;  
                 }  
  
                 / *   w a k e u p   s u s p e n d e d   t h r e a d   * /  
                 i f   ( ! r t _ l i s t _ i s e m p t y ( & m u t e x - > p a r e n t . s u s p e n d _ t h r e a d ) )  
                 {  
                         / *   g e t   s u s p e n d e d   t h r e a d   * /  
                         t h r e a d   =   r t _ l i s t _ e n t r y ( m u t e x - > p a r e n t . s u s p e n d _ t h r e a d . n e x t ,  
                                                                       s t r u c t   r t _ t h r e a d ,  
                                                                       t l i s t ) ;  
  
                         R T _ D E B U G _ L O G ( R T _ D E B U G _ I P C ,   ( " m u t e x _ r e l e a s e :   r e s u m e   t h r e a d :   % s \ n " ,  
                                                                                 t h r e a d - > n a m e ) ) ;  
  
                         / *   s e t   n e w   o w n e r   a n d   p r i o r i t y   * /  
                         m u t e x - > o w n e r                           =   t h r e a d ;  
                         m u t e x - > o r i g i n a l _ p r i o r i t y   =   t h r e a d - > c u r r e n t _ p r i o r i t y ;  
                         i f ( m u t e x - > h o l d   <   R T _ M U T E X _ H O L D _ M A X )  
                         {  
                                 m u t e x - > h o l d   + + ;  
                         }  
                         e l s e  
                         {  
                                 r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;   / *   e n a b l e   i n t e r r u p t   * /  
                                 r e t u r n   - R T _ E F U L L ;   / *   v a l u e   o v e r f l o w e d   * /  
                         }  
  
                         / *   r e s u m e   t h r e a d   * /  
                         r t _ i p c _ l i s t _ r e s u m e ( & ( m u t e x - > p a r e n t . s u s p e n d _ t h r e a d ) ) ;  
  
                         n e e d _ s c h e d u l e   =   R T _ T R U E ;  
                 }  
                 e l s e  
                 {  
                         i f ( m u t e x - > v a l u e   <   R T _ M U T E X _ V A L U E _ M A X )  
                         {  
                                 / *   i n c r e a s e   v a l u e   * /  
                                 m u t e x - > v a l u e   + + ;  
                         }  
                         e l s e  
                         {  
                                 r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;   / *   e n a b l e   i n t e r r u p t   * /  
                                 r e t u r n   - R T _ E F U L L ;   / *   v a l u e   o v e r f l o w e d   * /  
                         }  
  
                         / *   c l e a r   o w n e r   * /  
                         m u t e x - > o w n e r                           =   R T _ N U L L ;  
                         m u t e x - > o r i g i n a l _ p r i o r i t y   =   0 x f f ;  
                 }  
         }  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
         / *   p e r f o r m   a   s c h e d u l e   * /  
         i f   ( n e e d _ s c h e d u l e   = =   R T _ T R U E )  
                 r t _ s c h e d u l e ( ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   c a n   g e t   o r   s e t   s o m e   e x t r a   a t t r i b u t i o n s   o f   a   m u t e x   o b j e c t .  
   *  
   *   @ p a r a m   m u t e x   t h e   m u t e x   o b j e c t  
   *   @ p a r a m   c m d   t h e   e x e c u t i o n   c o m m a n d  
   *   @ p a r a m   a r g   t h e   e x e c u t i o n   a r g u m e n t  
   *  
   *   @ r e t u r n   t h e   e r r o r   c o d e  
   * /  
 r t _ e r r _ t   r t _ m u t e x _ c o n t r o l ( r t _ m u t e x _ t   m u t e x ,   i n t   c m d ,   v o i d   * a r g )  
 {  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( m u t e x   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & m u t e x - > p a r e n t . p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ M u t e x ) ;  
  
         r e t u r n   - R T _ E R R O R ;  
 }  
 # e n d i f   / *   e n d   o f   R T _ U S I N G _ M U T E X   * /  
  
 # i f d e f   R T _ U S I N G _ E V E N T  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   i n i t i a l i z e   a n   e v e n t   a n d   p u t   i t   u n d e r   c o n t r o l   o f   r e s o u r c e  
   *   m a n a g e m e n t .  
   *  
   *   @ p a r a m   e v e n t   t h e   e v e n t   o b j e c t  
   *   @ p a r a m   n a m e   t h e   n a m e   o f   e v e n t  
   *   @ p a r a m   f l a g   t h e   f l a g   o f   e v e n t  
   *  
   *   @ r e t u r n   t h e   o p e r a t i o n   s t a t u s ,   R T _ E O K   o n   s u c c e s s f u l  
   * /  
 r t _ e r r _ t   r t _ e v e n t _ i n i t ( r t _ e v e n t _ t   e v e n t ,   c o n s t   c h a r   * n a m e ,   r t _ u i n t 8 _ t   f l a g )  
 {  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( e v e n t   ! =   R T _ N U L L ) ;  
  
         / *   i n i t i a l i z e   o b j e c t   * /  
         r t _ o b j e c t _ i n i t ( & ( e v e n t - > p a r e n t . p a r e n t ) ,   R T _ O b j e c t _ C l a s s _ E v e n t ,   n a m e ) ;  
  
         / *   s e t   p a r e n t   f l a g   * /  
         e v e n t - > p a r e n t . p a r e n t . f l a g   =   f l a g ;  
  
         / *   i n i t i a l i z e   i p c   o b j e c t   * /  
         r t _ i p c _ o b j e c t _ i n i t ( & ( e v e n t - > p a r e n t ) ) ;  
  
         / *   i n i t i a l i z e   e v e n t   * /  
         e v e n t - > s e t   =   0 ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   d e t a c h   a n   e v e n t   o b j e c t   f r o m   r e s o u r c e   m a n a g e m e n t  
   *  
   *   @ p a r a m   e v e n t   t h e   e v e n t   o b j e c t  
   *  
   *   @ r e t u r n   t h e   o p e r a t i o n   s t a t u s ,   R T _ E O K   o n   s u c c e s s f u l  
   * /  
 r t _ e r r _ t   r t _ e v e n t _ d e t a c h ( r t _ e v e n t _ t   e v e n t )  
 {  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( e v e n t   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & e v e n t - > p a r e n t . p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ E v e n t ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ i s _ s y s t e m o b j e c t ( & e v e n t - > p a r e n t . p a r e n t ) ) ;  
  
         / *   r e s u m e   a l l   s u s p e n d e d   t h r e a d   * /  
         r t _ i p c _ l i s t _ r e s u m e _ a l l ( & ( e v e n t - > p a r e n t . s u s p e n d _ t h r e a d ) ) ;  
  
         / *   d e t a c h   e v e n t   o b j e c t   * /  
         r t _ o b j e c t _ d e t a c h ( & ( e v e n t - > p a r e n t . p a r e n t ) ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 # i f d e f   R T _ U S I N G _ H E A P  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   c r e a t e   a n   e v e n t   o b j e c t   f r o m   s y s t e m   r e s o u r c e  
   *  
   *   @ p a r a m   n a m e   t h e   n a m e   o f   e v e n t  
   *   @ p a r a m   f l a g   t h e   f l a g   o f   e v e n t  
   *  
   *   @ r e t u r n   t h e   c r e a t e d   e v e n t ,   R T _ N U L L   o n   e r r o r   h a p p e n  
   * /  
 r t _ e v e n t _ t   r t _ e v e n t _ c r e a t e ( c o n s t   c h a r   * n a m e ,   r t _ u i n t 8 _ t   f l a g )  
 {  
         r t _ e v e n t _ t   e v e n t ;  
  
         R T _ D E B U G _ N O T _ I N _ I N T E R R U P T ;  
  
         / *   a l l o c a t e   o b j e c t   * /  
         e v e n t   =   ( r t _ e v e n t _ t ) r t _ o b j e c t _ a l l o c a t e ( R T _ O b j e c t _ C l a s s _ E v e n t ,   n a m e ) ;  
         i f   ( e v e n t   = =   R T _ N U L L )  
                 r e t u r n   e v e n t ;  
  
         / *   s e t   p a r e n t   * /  
         e v e n t - > p a r e n t . p a r e n t . f l a g   =   f l a g ;  
  
         / *   i n i t i a l i z e   i p c   o b j e c t   * /  
         r t _ i p c _ o b j e c t _ i n i t ( & ( e v e n t - > p a r e n t ) ) ;  
  
         / *   i n i t i a l i z e   e v e n t   * /  
         e v e n t - > s e t   =   0 ;  
  
         r e t u r n   e v e n t ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   d e l e t e   a n   e v e n t   o b j e c t   a n d   r e l e a s e   t h e   m e m o r y  
   *  
   *   @ p a r a m   e v e n t   t h e   e v e n t   o b j e c t  
   *  
   *   @ r e t u r n   t h e   e r r o r   c o d e  
   * /  
 r t _ e r r _ t   r t _ e v e n t _ d e l e t e ( r t _ e v e n t _ t   e v e n t )  
 {  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( e v e n t   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & e v e n t - > p a r e n t . p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ E v e n t ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ i s _ s y s t e m o b j e c t ( & e v e n t - > p a r e n t . p a r e n t )   = =   R T _ F A L S E ) ;  
  
         R T _ D E B U G _ N O T _ I N _ I N T E R R U P T ;  
  
         / *   r e s u m e   a l l   s u s p e n d e d   t h r e a d   * /  
         r t _ i p c _ l i s t _ r e s u m e _ a l l ( & ( e v e n t - > p a r e n t . s u s p e n d _ t h r e a d ) ) ;  
  
         / *   d e l e t e   e v e n t   o b j e c t   * /  
         r t _ o b j e c t _ d e l e t e ( & ( e v e n t - > p a r e n t . p a r e n t ) ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
 # e n d i f  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   s e n d   a n   e v e n t   t o   t h e   e v e n t   o b j e c t ,   i f   t h e r e   a r e   t h r e a d s  
   *   s u s p e n d e d   o n   e v e n t   o b j e c t ,   i t   w i l l   b e   w a k e d   u p .  
   *  
   *   @ p a r a m   e v e n t   t h e   e v e n t   o b j e c t  
   *   @ p a r a m   s e t   t h e   e v e n t   s e t  
   *  
   *   @ r e t u r n   t h e   e r r o r   c o d e  
   * /  
 r t _ e r r _ t   r t _ e v e n t _ s e n d ( r t _ e v e n t _ t   e v e n t ,   r t _ u i n t 3 2 _ t   s e t )  
 {  
         s t r u c t   r t _ l i s t _ n o d e   * n ;  
         s t r u c t   r t _ t h r e a d   * t h r e a d ;  
         r e g i s t e r   r t _ u b a s e _ t   l e v e l ;  
         r e g i s t e r   r t _ b a s e _ t   s t a t u s ;  
         r t _ b o o l _ t   n e e d _ s c h e d u l e ;  
  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( e v e n t   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & e v e n t - > p a r e n t . p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ E v e n t ) ;  
  
         i f   ( s e t   = =   0 )  
                 r e t u r n   - R T _ E R R O R ;  
  
         n e e d _ s c h e d u l e   =   R T _ F A L S E ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         / *   s e t   e v e n t   * /  
         e v e n t - > s e t   | =   s e t ;  
  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ o b j e c t _ p u t _ h o o k ,   ( & ( e v e n t - > p a r e n t . p a r e n t ) ) ) ;  
  
         i f   ( ! r t _ l i s t _ i s e m p t y ( & e v e n t - > p a r e n t . s u s p e n d _ t h r e a d ) )  
         {  
                 / *   s e a r c h   t h r e a d   l i s t   t o   r e s u m e   t h r e a d   * /  
                 n   =   e v e n t - > p a r e n t . s u s p e n d _ t h r e a d . n e x t ;  
                 w h i l e   ( n   ! =   & ( e v e n t - > p a r e n t . s u s p e n d _ t h r e a d ) )  
                 {  
                         / *   g e t   t h r e a d   * /  
                         t h r e a d   =   r t _ l i s t _ e n t r y ( n ,   s t r u c t   r t _ t h r e a d ,   t l i s t ) ;  
  
                         s t a t u s   =   - R T _ E R R O R ;  
                         i f   ( t h r e a d - > e v e n t _ i n f o   &   R T _ E V E N T _ F L A G _ A N D )  
                         {  
                                 i f   ( ( t h r e a d - > e v e n t _ s e t   &   e v e n t - > s e t )   = =   t h r e a d - > e v e n t _ s e t )  
                                 {  
                                         / *   r e c e i v e d   a n   A N D   e v e n t   * /  
                                         s t a t u s   =   R T _ E O K ;  
                                 }  
                         }  
                         e l s e   i f   ( t h r e a d - > e v e n t _ i n f o   &   R T _ E V E N T _ F L A G _ O R )  
                         {  
                                 i f   ( t h r e a d - > e v e n t _ s e t   &   e v e n t - > s e t )  
                                 {  
                                         / *   s a v e   t h e   r e c e i v e d   e v e n t   s e t   * /  
                                         t h r e a d - > e v e n t _ s e t   =   t h r e a d - > e v e n t _ s e t   &   e v e n t - > s e t ;  
  
                                         / *   r e c e i v e d   a n   O R   e v e n t   * /  
                                         s t a t u s   =   R T _ E O K ;  
                                 }  
                         }  
                         e l s e  
                         {  
                                 / *   e n a b l e   i n t e r r u p t   * /  
                                 r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
                                 r e t u r n   - R T _ E I N V A L ;  
                         }  
  
                         / *   m o v e   n o d e   t o   t h e   n e x t   * /  
                         n   =   n - > n e x t ;  
  
                         / *   c o n d i t i o n   i s   s a t i s f i e d ,   r e s u m e   t h r e a d   * /  
                         i f   ( s t a t u s   = =   R T _ E O K )  
                         {  
                                 / *   c l e a r   e v e n t   * /  
                                 i f   ( t h r e a d - > e v e n t _ i n f o   &   R T _ E V E N T _ F L A G _ C L E A R )  
                                         e v e n t - > s e t   & =   ~ t h r e a d - > e v e n t _ s e t ;  
  
                                 / *   r e s u m e   t h r e a d ,   a n d   t h r e a d   l i s t   b r e a k s   o u t   * /  
                                 r t _ t h r e a d _ r e s u m e ( t h r e a d ) ;  
  
                                 / *   n e e d   d o   a   s c h e d u l i n g   * /  
                                 n e e d _ s c h e d u l e   =   R T _ T R U E ;  
                         }  
                 }  
         }  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
         / *   d o   a   s c h e d u l e   * /  
         i f   ( n e e d _ s c h e d u l e   = =   R T _ T R U E )  
                 r t _ s c h e d u l e ( ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   r e c e i v e   a n   e v e n t   f r o m   e v e n t   o b j e c t ,   i f   t h e   e v e n t   i s  
   *   u n a v a i l a b l e ,   t h e   t h r e a d   s h a l l   w a i t   f o r   a   s p e c i f i e d   t i m e .  
   *  
   *   @ p a r a m   e v e n t   t h e   f a s t   e v e n t   o b j e c t  
   *   @ p a r a m   s e t   t h e   i n t e r e s t e d   e v e n t   s e t  
   *   @ p a r a m   o p t i o n   t h e   r e c e i v e   o p t i o n ,   e i t h e r   R T _ E V E N T _ F L A G _ A N D   o r  
   *                 R T _ E V E N T _ F L A G _ O R   s h o u l d   b e   s e t .  
   *   @ p a r a m   t i m e o u t   t h e   w a i t i n g   t i m e  
   *   @ p a r a m   r e c v e d   t h e   r e c e i v e d   e v e n t ,   i f   y o u   d o n ' t   c a r e ,   R T _ N U L L   c a n   b e   s e t .  
   *  
   *   @ r e t u r n   t h e   e r r o r   c o d e  
   * /  
 r t _ e r r _ t   r t _ e v e n t _ r e c v ( r t _ e v e n t _ t       e v e n t ,  
                                               r t _ u i n t 3 2 _ t     s e t ,  
                                               r t _ u i n t 8 _ t       o p t i o n ,  
                                               r t _ i n t 3 2 _ t       t i m e o u t ,  
                                               r t _ u i n t 3 2 _ t   * r e c v e d )  
 {  
         s t r u c t   r t _ t h r e a d   * t h r e a d ;  
         r e g i s t e r   r t _ u b a s e _ t   l e v e l ;  
         r e g i s t e r   r t _ b a s e _ t   s t a t u s ;  
  
         R T _ D E B U G _ I N _ T H R E A D _ C O N T E X T ;  
  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( e v e n t   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & e v e n t - > p a r e n t . p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ E v e n t ) ;  
  
         i f   ( s e t   = =   0 )  
                 r e t u r n   - R T _ E R R O R ;  
  
         / *   i n i t i a l i z e   s t a t u s   * /  
         s t a t u s   =   - R T _ E R R O R ;  
         / *   g e t   c u r r e n t   t h r e a d   * /  
         t h r e a d   =   r t _ t h r e a d _ s e l f ( ) ;  
         / *   r e s e t   t h r e a d   e r r o r   * /  
         t h r e a d - > e r r o r   =   R T _ E O K ;  
  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ o b j e c t _ t r y t a k e _ h o o k ,   ( & ( e v e n t - > p a r e n t . p a r e n t ) ) ) ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         / *   c h e c k   e v e n t   s e t   * /  
         i f   ( o p t i o n   &   R T _ E V E N T _ F L A G _ A N D )  
         {  
                 i f   ( ( e v e n t - > s e t   &   s e t )   = =   s e t )  
                         s t a t u s   =   R T _ E O K ;  
         }  
         e l s e   i f   ( o p t i o n   &   R T _ E V E N T _ F L A G _ O R )  
         {  
                 i f   ( e v e n t - > s e t   &   s e t )  
                         s t a t u s   =   R T _ E O K ;  
         }  
         e l s e  
         {  
                 / *   e i t h e r   R T _ E V E N T _ F L A G _ A N D   o r   R T _ E V E N T _ F L A G _ O R   s h o u l d   b e   s e t   * /  
                 R T _ A S S E R T ( 0 ) ;  
         }  
  
         i f   ( s t a t u s   = =   R T _ E O K )  
         {  
                 / *   s e t   r e c e i v e d   e v e n t   * /  
                 i f   ( r e c v e d )  
                         * r e c v e d   =   ( e v e n t - > s e t   &   s e t ) ;  
  
                 / *   f i l l   t h r e a d   e v e n t   i n f o   * /  
                 t h r e a d - > e v e n t _ s e t   =   ( e v e n t - > s e t   &   s e t ) ;  
                 t h r e a d - > e v e n t _ i n f o   =   o p t i o n ;  
  
                 / *   r e c e i v e d   e v e n t   * /  
                 i f   ( o p t i o n   &   R T _ E V E N T _ F L A G _ C L E A R )  
                         e v e n t - > s e t   & =   ~ s e t ;  
         }  
         e l s e   i f   ( t i m e o u t   = =   0 )  
         {  
                 / *   n o   w a i t i n g   * /  
                 t h r e a d - > e r r o r   =   - R T _ E T I M E O U T ;  
  
                 / *   e n a b l e   i n t e r r u p t   * /  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
                 r e t u r n   - R T _ E T I M E O U T ;  
         }  
         e l s e  
         {  
                 / *   f i l l   t h r e a d   e v e n t   i n f o   * /  
                 t h r e a d - > e v e n t _ s e t     =   s e t ;  
                 t h r e a d - > e v e n t _ i n f o   =   o p t i o n ;  
  
                 / *   p u t   t h r e a d   t o   s u s p e n d e d   t h r e a d   l i s t   * /  
                 r t _ i p c _ l i s t _ s u s p e n d ( & ( e v e n t - > p a r e n t . s u s p e n d _ t h r e a d ) ,  
                                                         t h r e a d ,  
                                                         e v e n t - > p a r e n t . p a r e n t . f l a g ) ;  
  
                 / *   i f   t h e r e   i s   a   w a i t i n g   t i m e o u t ,   a c t i v e   t h r e a d   t i m e r   * /  
                 i f   ( t i m e o u t   >   0 )  
                 {  
                         / *   r e s e t   t h e   t i m e o u t   o f   t h r e a d   t i m e r   a n d   s t a r t   i t   * /  
                         r t _ t i m e r _ c o n t r o l ( & ( t h r e a d - > t h r e a d _ t i m e r ) ,  
                                                           R T _ T I M E R _ C T R L _ S E T _ T I M E ,  
                                                           & t i m e o u t ) ;  
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
                 {  
                         / *   r e t u r n   e r r o r   * /  
                         r e t u r n   t h r e a d - > e r r o r ;  
                 }  
  
                 / *   r e c e i v e d   a n   e v e n t ,   d i s a b l e   i n t e r r u p t   t o   p r o t e c t   * /  
                 l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
                 / *   s e t   r e c e i v e d   e v e n t   * /  
                 i f   ( r e c v e d )  
                         * r e c v e d   =   t h r e a d - > e v e n t _ s e t ;  
         }  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ o b j e c t _ t a k e _ h o o k ,   ( & ( e v e n t - > p a r e n t . p a r e n t ) ) ) ;  
  
         r e t u r n   t h r e a d - > e r r o r ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   c a n   g e t   o r   s e t   s o m e   e x t r a   a t t r i b u t i o n s   o f   a n   e v e n t   o b j e c t .  
   *  
   *   @ p a r a m   e v e n t   t h e   e v e n t   o b j e c t  
   *   @ p a r a m   c m d   t h e   e x e c u t i o n   c o m m a n d  
   *   @ p a r a m   a r g   t h e   e x e c u t i o n   a r g u m e n t  
   *  
   *   @ r e t u r n   t h e   e r r o r   c o d e  
   * /  
 r t _ e r r _ t   r t _ e v e n t _ c o n t r o l ( r t _ e v e n t _ t   e v e n t ,   i n t   c m d ,   v o i d   * a r g )  
 {  
         r t _ u b a s e _ t   l e v e l ;  
  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( e v e n t   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & e v e n t - > p a r e n t . p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ E v e n t ) ;  
  
         i f   ( c m d   = =   R T _ I P C _ C M D _ R E S E T )  
         {  
                 / *   d i s a b l e   i n t e r r u p t   * /  
                 l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
                 / *   r e s u m e   a l l   w a i t i n g   t h r e a d   * /  
                 r t _ i p c _ l i s t _ r e s u m e _ a l l ( & e v e n t - > p a r e n t . s u s p e n d _ t h r e a d ) ;  
  
                 / *   i n i t i a l i z e   e v e n t   s e t   * /  
                 e v e n t - > s e t   =   0 ;  
  
                 / *   e n a b l e   i n t e r r u p t   * /  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
                 r t _ s c h e d u l e ( ) ;  
  
                 r e t u r n   R T _ E O K ;  
         }  
  
         r e t u r n   - R T _ E R R O R ;  
 }  
 # e n d i f   / *   e n d   o f   R T _ U S I N G _ E V E N T   * /  
  
 # i f d e f   R T _ U S I N G _ M A I L B O X  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   i n i t i a l i z e   a   m a i l b o x   a n d   p u t   i t   u n d e r   c o n t r o l   o f   r e s o u r c e  
   *   m a n a g e m e n t .  
   *  
   *   @ p a r a m   m b   t h e   m a i l b o x   o b j e c t  
   *   @ p a r a m   n a m e   t h e   n a m e   o f   m a i l b o x  
   *   @ p a r a m   m s g p o o l   t h e   b e g i n   a d d r e s s   o f   b u f f e r   t o   s a v e   r e c e i v e d   m a i l  
   *   @ p a r a m   s i z e   t h e   s i z e   o f   m a i l b o x  
   *   @ p a r a m   f l a g   t h e   f l a g   o f   m a i l b o x  
   *  
   *   @ r e t u r n   t h e   o p e r a t i o n   s t a t u s ,   R T _ E O K   o n   s u c c e s s f u l  
   * /  
 r t _ e r r _ t   r t _ m b _ i n i t ( r t _ m a i l b o x _ t   m b ,  
                                         c o n s t   c h a r     * n a m e ,  
                                         v o i d                 * m s g p o o l ,  
                                         r t _ s i z e _ t         s i z e ,  
                                         r t _ u i n t 8 _ t       f l a g )  
 {  
         R T _ A S S E R T ( m b   ! =   R T _ N U L L ) ;  
  
         / *   i n i t i a l i z e   o b j e c t   * /  
         r t _ o b j e c t _ i n i t ( & ( m b - > p a r e n t . p a r e n t ) ,   R T _ O b j e c t _ C l a s s _ M a i l B o x ,   n a m e ) ;  
  
         / *   s e t   p a r e n t   f l a g   * /  
         m b - > p a r e n t . p a r e n t . f l a g   =   f l a g ;  
  
         / *   i n i t i a l i z e   i p c   o b j e c t   * /  
         r t _ i p c _ o b j e c t _ i n i t ( & ( m b - > p a r e n t ) ) ;  
  
         / *   i n i t i a l i z e   m a i l b o x   * /  
         m b - > m s g _ p o o l       =   ( r t _ u b a s e _ t   * ) m s g p o o l ;  
         m b - > s i z e               =   s i z e ;  
         m b - > e n t r y             =   0 ;  
         m b - > i n _ o f f s e t     =   0 ;  
         m b - > o u t _ o f f s e t   =   0 ;  
  
         / *   i n i t i a l i z e   a n   a d d i t i o n a l   l i s t   o f   s e n d e r   s u s p e n d   t h r e a d   * /  
         r t _ l i s t _ i n i t ( & ( m b - > s u s p e n d _ s e n d e r _ t h r e a d ) ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   d e t a c h   a   m a i l b o x   f r o m   r e s o u r c e   m a n a g e m e n t  
   *  
   *   @ p a r a m   m b   t h e   m a i l b o x   o b j e c t  
   *  
   *   @ r e t u r n   t h e   o p e r a t i o n   s t a t u s ,   R T _ E O K   o n   s u c c e s s f u l  
   * /  
 r t _ e r r _ t   r t _ m b _ d e t a c h ( r t _ m a i l b o x _ t   m b )  
 {  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( m b   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & m b - > p a r e n t . p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ M a i l B o x ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ i s _ s y s t e m o b j e c t ( & m b - > p a r e n t . p a r e n t ) ) ;  
  
         / *   r e s u m e   a l l   s u s p e n d e d   t h r e a d   * /  
         r t _ i p c _ l i s t _ r e s u m e _ a l l ( & ( m b - > p a r e n t . s u s p e n d _ t h r e a d ) ) ;  
         / *   a l s o   r e s u m e   a l l   m a i l b o x   p r i v a t e   s u s p e n d e d   t h r e a d   * /  
         r t _ i p c _ l i s t _ r e s u m e _ a l l ( & ( m b - > s u s p e n d _ s e n d e r _ t h r e a d ) ) ;  
  
         / *   d e t a c h   m a i l b o x   o b j e c t   * /  
         r t _ o b j e c t _ d e t a c h ( & ( m b - > p a r e n t . p a r e n t ) ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 # i f d e f   R T _ U S I N G _ H E A P  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   c r e a t e   a   m a i l b o x   o b j e c t   f r o m   s y s t e m   r e s o u r c e  
   *  
   *   @ p a r a m   n a m e   t h e   n a m e   o f   m a i l b o x  
   *   @ p a r a m   s i z e   t h e   s i z e   o f   m a i l b o x  
   *   @ p a r a m   f l a g   t h e   f l a g   o f   m a i l b o x  
   *  
   *   @ r e t u r n   t h e   c r e a t e d   m a i l b o x ,   R T _ N U L L   o n   e r r o r   h a p p e n  
   * /  
 r t _ m a i l b o x _ t   r t _ m b _ c r e a t e ( c o n s t   c h a r   * n a m e ,   r t _ s i z e _ t   s i z e ,   r t _ u i n t 8 _ t   f l a g )  
 {  
         r t _ m a i l b o x _ t   m b ;  
  
         R T _ D E B U G _ N O T _ I N _ I N T E R R U P T ;  
  
         / *   a l l o c a t e   o b j e c t   * /  
         m b   =   ( r t _ m a i l b o x _ t ) r t _ o b j e c t _ a l l o c a t e ( R T _ O b j e c t _ C l a s s _ M a i l B o x ,   n a m e ) ;  
         i f   ( m b   = =   R T _ N U L L )  
                 r e t u r n   m b ;  
  
         / *   s e t   p a r e n t   * /  
         m b - > p a r e n t . p a r e n t . f l a g   =   f l a g ;  
  
         / *   i n i t i a l i z e   i p c   o b j e c t   * /  
         r t _ i p c _ o b j e c t _ i n i t ( & ( m b - > p a r e n t ) ) ;  
  
         / *   i n i t i a l i z e   m a i l b o x   * /  
         m b - > s i z e           =   s i z e ;  
         m b - > m s g _ p o o l   =   ( r t _ u b a s e _ t   * ) R T _ K E R N E L _ M A L L O C ( m b - > s i z e   *   s i z e o f ( r t _ u b a s e _ t ) ) ;  
         i f   ( m b - > m s g _ p o o l   = =   R T _ N U L L )  
         {  
                 / *   d e l e t e   m a i l b o x   o b j e c t   * /  
                 r t _ o b j e c t _ d e l e t e ( & ( m b - > p a r e n t . p a r e n t ) ) ;  
  
                 r e t u r n   R T _ N U L L ;  
         }  
         m b - > e n t r y             =   0 ;  
         m b - > i n _ o f f s e t     =   0 ;  
         m b - > o u t _ o f f s e t   =   0 ;  
  
         / *   i n i t i a l i z e   a n   a d d i t i o n a l   l i s t   o f   s e n d e r   s u s p e n d   t h r e a d   * /  
         r t _ l i s t _ i n i t ( & ( m b - > s u s p e n d _ s e n d e r _ t h r e a d ) ) ;  
  
         r e t u r n   m b ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   d e l e t e   a   m a i l b o x   o b j e c t   a n d   r e l e a s e   t h e   m e m o r y  
   *  
   *   @ p a r a m   m b   t h e   m a i l b o x   o b j e c t  
   *  
   *   @ r e t u r n   t h e   e r r o r   c o d e  
   * /  
 r t _ e r r _ t   r t _ m b _ d e l e t e ( r t _ m a i l b o x _ t   m b )  
 {  
         R T _ D E B U G _ N O T _ I N _ I N T E R R U P T ;  
  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( m b   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & m b - > p a r e n t . p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ M a i l B o x ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ i s _ s y s t e m o b j e c t ( & m b - > p a r e n t . p a r e n t )   = =   R T _ F A L S E ) ;  
  
         / *   r e s u m e   a l l   s u s p e n d e d   t h r e a d   * /  
         r t _ i p c _ l i s t _ r e s u m e _ a l l ( & ( m b - > p a r e n t . s u s p e n d _ t h r e a d ) ) ;  
  
         / *   a l s o   r e s u m e   a l l   m a i l b o x   p r i v a t e   s u s p e n d e d   t h r e a d   * /  
         r t _ i p c _ l i s t _ r e s u m e _ a l l ( & ( m b - > s u s p e n d _ s e n d e r _ t h r e a d ) ) ;  
  
         / *   f r e e   m a i l b o x   p o o l   * /  
         R T _ K E R N E L _ F R E E ( m b - > m s g _ p o o l ) ;  
  
         / *   d e l e t e   m a i l b o x   o b j e c t   * /  
         r t _ o b j e c t _ d e l e t e ( & ( m b - > p a r e n t . p a r e n t ) ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
 # e n d i f  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   s e n d   a   m a i l   t o   m a i l b o x   o b j e c t .   I f   t h e   m a i l b o x   i s   f u l l ,  
   *   c u r r e n t   t h r e a d   w i l l   b e   s u s p e n d e d   u n t i l   t i m e o u t .  
   *  
   *   @ p a r a m   m b   t h e   m a i l b o x   o b j e c t  
   *   @ p a r a m   v a l u e   t h e   m a i l  
   *   @ p a r a m   t i m e o u t   t h e   w a i t i n g   t i m e  
   *  
   *   @ r e t u r n   t h e   e r r o r   c o d e  
   * /  
 r t _ e r r _ t   r t _ m b _ s e n d _ w a i t ( r t _ m a i l b o x _ t   m b ,  
                                                   r t _ u b a s e _ t       v a l u e ,  
                                                   r t _ i n t 3 2 _ t       t i m e o u t )  
 {  
         s t r u c t   r t _ t h r e a d   * t h r e a d ;  
         r e g i s t e r   r t _ u b a s e _ t   t e m p ;  
         r t _ u i n t 3 2 _ t   t i c k _ d e l t a ;  
  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( m b   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & m b - > p a r e n t . p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ M a i l B o x ) ;  
  
         / *   i n i t i a l i z e   d e l t a   t i c k   * /  
         t i c k _ d e l t a   =   0 ;  
         / *   g e t   c u r r e n t   t h r e a d   * /  
         t h r e a d   =   r t _ t h r e a d _ s e l f ( ) ;  
  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ o b j e c t _ p u t _ h o o k ,   ( & ( m b - > p a r e n t . p a r e n t ) ) ) ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         t e m p   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         / *   f o r   n o n - b l o c k i n g   c a l l   * /  
         i f   ( m b - > e n t r y   = =   m b - > s i z e   & &   t i m e o u t   = =   0 )  
         {  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
                 r e t u r n   - R T _ E F U L L ;  
         }  
  
         / *   m a i l b o x   i s   f u l l   * /  
         w h i l e   ( m b - > e n t r y   = =   m b - > s i z e )  
         {  
                 / *   r e s e t   e r r o r   n u m b e r   i n   t h r e a d   * /  
                 t h r e a d - > e r r o r   =   R T _ E O K ;  
  
                 / *   n o   w a i t i n g ,   r e t u r n   t i m e o u t   * /  
                 i f   ( t i m e o u t   = =   0 )  
                 {  
                         / *   e n a b l e   i n t e r r u p t   * /  
                         r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
                         r e t u r n   - R T _ E F U L L ;  
                 }  
  
                 R T _ D E B U G _ I N _ T H R E A D _ C O N T E X T ;  
                 / *   s u s p e n d   c u r r e n t   t h r e a d   * /  
                 r t _ i p c _ l i s t _ s u s p e n d ( & ( m b - > s u s p e n d _ s e n d e r _ t h r e a d ) ,  
                                                         t h r e a d ,  
                                                         m b - > p a r e n t . p a r e n t . f l a g ) ;  
  
                 / *   h a s   w a i t i n g   t i m e ,   s t a r t   t h r e a d   t i m e r   * /  
                 i f   ( t i m e o u t   >   0 )  
                 {  
                         / *   g e t   t h e   s t a r t   t i c k   o f   t i m e r   * /  
                         t i c k _ d e l t a   =   r t _ t i c k _ g e t ( ) ;  
  
                         R T _ D E B U G _ L O G ( R T _ D E B U G _ I P C ,   ( " m b _ s e n d _ w a i t :   s t a r t   t i m e r   o f   t h r e a d : % s \ n " ,  
                                                                                 t h r e a d - > n a m e ) ) ;  
  
                         / *   r e s e t   t h e   t i m e o u t   o f   t h r e a d   t i m e r   a n d   s t a r t   i t   * /  
                         r t _ t i m e r _ c o n t r o l ( & ( t h r e a d - > t h r e a d _ t i m e r ) ,  
                                                           R T _ T I M E R _ C T R L _ S E T _ T I M E ,  
                                                           & t i m e o u t ) ;  
                         r t _ t i m e r _ s t a r t ( & ( t h r e a d - > t h r e a d _ t i m e r ) ) ;  
                 }  
  
                 / *   e n a b l e   i n t e r r u p t   * /  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
                 / *   r e - s c h e d u l e   * /  
                 r t _ s c h e d u l e ( ) ;  
  
                 / *   r e s u m e   f r o m   s u s p e n d   s t a t e   * /  
                 i f   ( t h r e a d - > e r r o r   ! =   R T _ E O K )  
                 {  
                         / *   r e t u r n   e r r o r   * /  
                         r e t u r n   t h r e a d - > e r r o r ;  
                 }  
  
                 / *   d i s a b l e   i n t e r r u p t   * /  
                 t e m p   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
                 / *   i f   i t ' s   n o t   w a i t i n g   f o r e v e r   a n d   t h e n   r e - c a l c u l a t e   t i m e o u t   t i c k   * /  
                 i f   ( t i m e o u t   >   0 )  
                 {  
                         t i c k _ d e l t a   =   r t _ t i c k _ g e t ( )   -   t i c k _ d e l t a ;  
                         t i m e o u t   - =   t i c k _ d e l t a ;  
                         i f   ( t i m e o u t   <   0 )  
                                 t i m e o u t   =   0 ;  
                 }  
         }  
  
         / *   s e t   p t r   * /  
         m b - > m s g _ p o o l [ m b - > i n _ o f f s e t ]   =   v a l u e ;  
         / *   i n c r e a s e   i n p u t   o f f s e t   * /  
         + +   m b - > i n _ o f f s e t ;  
         i f   ( m b - > i n _ o f f s e t   > =   m b - > s i z e )  
                 m b - > i n _ o f f s e t   =   0 ;  
  
         i f ( m b - > e n t r y   <   R T _ M B _ E N T R Y _ M A X )  
         {  
                 / *   i n c r e a s e   m e s s a g e   e n t r y   * /  
                 m b - > e n t r y   + + ;  
         }  
         e l s e  
         {  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;   / *   e n a b l e   i n t e r r u p t   * /  
                 r e t u r n   - R T _ E F U L L ;   / *   v a l u e   o v e r f l o w e d   * /  
         }  
  
         / *   r e s u m e   s u s p e n d e d   t h r e a d   * /  
         i f   ( ! r t _ l i s t _ i s e m p t y ( & m b - > p a r e n t . s u s p e n d _ t h r e a d ) )  
         {  
                 r t _ i p c _ l i s t _ r e s u m e ( & ( m b - > p a r e n t . s u s p e n d _ t h r e a d ) ) ;  
  
                 / *   e n a b l e   i n t e r r u p t   * /  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
                 r t _ s c h e d u l e ( ) ;  
  
                 r e t u r n   R T _ E O K ;  
         }  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   s e n d   a   m a i l   t o   m a i l b o x   o b j e c t ,   i f   t h e r e   a r e   t h r e a d s  
   *   s u s p e n d e d   o n   m a i l b o x   o b j e c t ,   i t   w i l l   b e   w a k e d   u p .   T h i s   f u n c t i o n   w i l l   r e t u r n  
   *   i m m e d i a t e l y ,   i f   y o u   w a n t   b l o c k i n g   s e n d ,   u s e   r t _ m b _ s e n d _ w a i t   i n s t e a d .  
   *  
   *   @ p a r a m   m b   t h e   m a i l b o x   o b j e c t  
   *   @ p a r a m   v a l u e   t h e   m a i l  
   *  
   *   @ r e t u r n   t h e   e r r o r   c o d e  
   * /  
 r t _ e r r _ t   r t _ m b _ s e n d ( r t _ m a i l b o x _ t   m b ,   r t _ u b a s e _ t   v a l u e )  
 {  
         r e t u r n   r t _ m b _ s e n d _ w a i t ( m b ,   v a l u e ,   0 ) ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   r e c e i v e   a   m a i l   f r o m   m a i l b o x   o b j e c t ,   i f   t h e r e   i s   n o   m a i l  
   *   i n   m a i l b o x   o b j e c t ,   t h e   t h r e a d   s h a l l   w a i t   f o r   a   s p e c i f i e d   t i m e .  
   *  
   *   @ p a r a m   m b   t h e   m a i l b o x   o b j e c t  
   *   @ p a r a m   v a l u e   t h e   r e c e i v e d   m a i l   w i l l   b e   s a v e d   i n  
   *   @ p a r a m   t i m e o u t   t h e   w a i t i n g   t i m e  
   *  
   *   @ r e t u r n   t h e   e r r o r   c o d e  
   * /  
 r t _ e r r _ t   r t _ m b _ r e c v ( r t _ m a i l b o x _ t   m b ,   r t _ u b a s e _ t   * v a l u e ,   r t _ i n t 3 2 _ t   t i m e o u t )  
 {  
         s t r u c t   r t _ t h r e a d   * t h r e a d ;  
         r e g i s t e r   r t _ u b a s e _ t   t e m p ;  
         r t _ u i n t 3 2 _ t   t i c k _ d e l t a ;  
  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( m b   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & m b - > p a r e n t . p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ M a i l B o x ) ;  
  
         / *   i n i t i a l i z e   d e l t a   t i c k   * /  
         t i c k _ d e l t a   =   0 ;  
         / *   g e t   c u r r e n t   t h r e a d   * /  
         t h r e a d   =   r t _ t h r e a d _ s e l f ( ) ;  
  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ o b j e c t _ t r y t a k e _ h o o k ,   ( & ( m b - > p a r e n t . p a r e n t ) ) ) ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         t e m p   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         / *   f o r   n o n - b l o c k i n g   c a l l   * /  
         i f   ( m b - > e n t r y   = =   0   & &   t i m e o u t   = =   0 )  
         {  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
                 r e t u r n   - R T _ E T I M E O U T ;  
         }  
  
         / *   m a i l b o x   i s   e m p t y   * /  
         w h i l e   ( m b - > e n t r y   = =   0 )  
         {  
                 / *   r e s e t   e r r o r   n u m b e r   i n   t h r e a d   * /  
                 t h r e a d - > e r r o r   =   R T _ E O K ;  
  
                 / *   n o   w a i t i n g ,   r e t u r n   t i m e o u t   * /  
                 i f   ( t i m e o u t   = =   0 )  
                 {  
                         / *   e n a b l e   i n t e r r u p t   * /  
                         r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
                         t h r e a d - > e r r o r   =   - R T _ E T I M E O U T ;  
  
                         r e t u r n   - R T _ E T I M E O U T ;  
                 }  
  
                 R T _ D E B U G _ I N _ T H R E A D _ C O N T E X T ;  
                 / *   s u s p e n d   c u r r e n t   t h r e a d   * /  
                 r t _ i p c _ l i s t _ s u s p e n d ( & ( m b - > p a r e n t . s u s p e n d _ t h r e a d ) ,  
                                                         t h r e a d ,  
                                                         m b - > p a r e n t . p a r e n t . f l a g ) ;  
  
                 / *   h a s   w a i t i n g   t i m e ,   s t a r t   t h r e a d   t i m e r   * /  
                 i f   ( t i m e o u t   >   0 )  
                 {  
                         / *   g e t   t h e   s t a r t   t i c k   o f   t i m e r   * /  
                         t i c k _ d e l t a   =   r t _ t i c k _ g e t ( ) ;  
  
                         R T _ D E B U G _ L O G ( R T _ D E B U G _ I P C ,   ( " m b _ r e c v :   s t a r t   t i m e r   o f   t h r e a d : % s \ n " ,  
                                                                                 t h r e a d - > n a m e ) ) ;  
  
                         / *   r e s e t   t h e   t i m e o u t   o f   t h r e a d   t i m e r   a n d   s t a r t   i t   * /  
                         r t _ t i m e r _ c o n t r o l ( & ( t h r e a d - > t h r e a d _ t i m e r ) ,  
                                                           R T _ T I M E R _ C T R L _ S E T _ T I M E ,  
                                                           & t i m e o u t ) ;  
                         r t _ t i m e r _ s t a r t ( & ( t h r e a d - > t h r e a d _ t i m e r ) ) ;  
                 }  
  
                 / *   e n a b l e   i n t e r r u p t   * /  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
                 / *   r e - s c h e d u l e   * /  
                 r t _ s c h e d u l e ( ) ;  
  
                 / *   r e s u m e   f r o m   s u s p e n d   s t a t e   * /  
                 i f   ( t h r e a d - > e r r o r   ! =   R T _ E O K )  
                 {  
                         / *   r e t u r n   e r r o r   * /  
                         r e t u r n   t h r e a d - > e r r o r ;  
                 }  
  
                 / *   d i s a b l e   i n t e r r u p t   * /  
                 t e m p   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
                 / *   i f   i t ' s   n o t   w a i t i n g   f o r e v e r   a n d   t h e n   r e - c a l c u l a t e   t i m e o u t   t i c k   * /  
                 i f   ( t i m e o u t   >   0 )  
                 {  
                         t i c k _ d e l t a   =   r t _ t i c k _ g e t ( )   -   t i c k _ d e l t a ;  
                         t i m e o u t   - =   t i c k _ d e l t a ;  
                         i f   ( t i m e o u t   <   0 )  
                                 t i m e o u t   =   0 ;  
                 }  
         }  
  
         / *   f i l l   p t r   * /  
         * v a l u e   =   m b - > m s g _ p o o l [ m b - > o u t _ o f f s e t ] ;  
  
         / *   i n c r e a s e   o u t p u t   o f f s e t   * /  
         + +   m b - > o u t _ o f f s e t ;  
         i f   ( m b - > o u t _ o f f s e t   > =   m b - > s i z e )  
                 m b - > o u t _ o f f s e t   =   0 ;  
  
         / *   d e c r e a s e   m e s s a g e   e n t r y   * /  
         i f ( m b - > e n t r y   >   0 )  
         {  
                 m b - > e n t r y   - - ;  
         }  
  
         / *   r e s u m e   s u s p e n d e d   t h r e a d   * /  
         i f   ( ! r t _ l i s t _ i s e m p t y ( & ( m b - > s u s p e n d _ s e n d e r _ t h r e a d ) ) )  
         {  
                 r t _ i p c _ l i s t _ r e s u m e ( & ( m b - > s u s p e n d _ s e n d e r _ t h r e a d ) ) ;  
  
                 / *   e n a b l e   i n t e r r u p t   * /  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
                 R T _ O B J E C T _ H O O K _ C A L L ( r t _ o b j e c t _ t a k e _ h o o k ,   ( & ( m b - > p a r e n t . p a r e n t ) ) ) ;  
  
                 r t _ s c h e d u l e ( ) ;  
  
                 r e t u r n   R T _ E O K ;  
         }  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ o b j e c t _ t a k e _ h o o k ,   ( & ( m b - > p a r e n t . p a r e n t ) ) ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   c a n   g e t   o r   s e t   s o m e   e x t r a   a t t r i b u t i o n s   o f   a   m a i l b o x   o b j e c t .  
   *  
   *   @ p a r a m   m b   t h e   m a i l b o x   o b j e c t  
   *   @ p a r a m   c m d   t h e   e x e c u t i o n   c o m m a n d  
   *   @ p a r a m   a r g   t h e   e x e c u t i o n   a r g u m e n t  
   *  
   *   @ r e t u r n   t h e   e r r o r   c o d e  
   * /  
 r t _ e r r _ t   r t _ m b _ c o n t r o l ( r t _ m a i l b o x _ t   m b ,   i n t   c m d ,   v o i d   * a r g )  
 {  
         r t _ u b a s e _ t   l e v e l ;  
  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( m b   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & m b - > p a r e n t . p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ M a i l B o x ) ;  
  
         i f   ( c m d   = =   R T _ I P C _ C M D _ R E S E T )  
         {  
                 / *   d i s a b l e   i n t e r r u p t   * /  
                 l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
                 / *   r e s u m e   a l l   w a i t i n g   t h r e a d   * /  
                 r t _ i p c _ l i s t _ r e s u m e _ a l l ( & ( m b - > p a r e n t . s u s p e n d _ t h r e a d ) ) ;  
                 / *   a l s o   r e s u m e   a l l   m a i l b o x   p r i v a t e   s u s p e n d e d   t h r e a d   * /  
                 r t _ i p c _ l i s t _ r e s u m e _ a l l ( & ( m b - > s u s p e n d _ s e n d e r _ t h r e a d ) ) ;  
  
                 / *   r e - i n i t   m a i l b o x   * /  
                 m b - > e n t r y             =   0 ;  
                 m b - > i n _ o f f s e t     =   0 ;  
                 m b - > o u t _ o f f s e t   =   0 ;  
  
                 / *   e n a b l e   i n t e r r u p t   * /  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
                 r t _ s c h e d u l e ( ) ;  
  
                 r e t u r n   R T _ E O K ;  
         }  
  
         r e t u r n   - R T _ E R R O R ;  
 }  
 # e n d i f   / *   e n d   o f   R T _ U S I N G _ M A I L B O X   * /  
  
 # i f d e f   R T _ U S I N G _ M E S S A G E Q U E U E  
 s t r u c t   r t _ m q _ m e s s a g e  
 {  
         s t r u c t   r t _ m q _ m e s s a g e   * n e x t ;  
 } ;  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   i n i t i a l i z e   a   m e s s a g e   q u e u e   a n d   p u t   i t   u n d e r   c o n t r o l   o f  
   *   r e s o u r c e   m a n a g e m e n t .  
   *  
   *   @ p a r a m   m q   t h e   m e s s a g e   o b j e c t  
   *   @ p a r a m   n a m e   t h e   n a m e   o f   m e s s a g e   q u e u e  
   *   @ p a r a m   m s g p o o l   t h e   b e g i n n i n g   a d d r e s s   o f   b u f f e r   t o   s a v e   m e s s a g e s  
   *   @ p a r a m   m s g _ s i z e   t h e   m a x i m u m   s i z e   o f   m e s s a g e  
   *   @ p a r a m   p o o l _ s i z e   t h e   s i z e   o f   b u f f e r   t o   s a v e   m e s s a g e s  
   *   @ p a r a m   f l a g   t h e   f l a g   o f   m e s s a g e   q u e u e  
   *  
   *   @ r e t u r n   t h e   o p e r a t i o n   s t a t u s ,   R T _ E O K   o n   s u c c e s s f u l  
   * /  
 r t _ e r r _ t   r t _ m q _ i n i t ( r t _ m q _ t           m q ,  
                                         c o n s t   c h a r   * n a m e ,  
                                         v o i d               * m s g p o o l ,  
                                         r t _ s i z e _ t       m s g _ s i z e ,  
                                         r t _ s i z e _ t       p o o l _ s i z e ,  
                                         r t _ u i n t 8 _ t     f l a g )  
 {  
         s t r u c t   r t _ m q _ m e s s a g e   * h e a d ;  
         r e g i s t e r   r t _ b a s e _ t   t e m p ;  
  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( m q   ! =   R T _ N U L L ) ;  
  
         / *   i n i t i a l i z e   o b j e c t   * /  
         r t _ o b j e c t _ i n i t ( & ( m q - > p a r e n t . p a r e n t ) ,   R T _ O b j e c t _ C l a s s _ M e s s a g e Q u e u e ,   n a m e ) ;  
  
         / *   s e t   p a r e n t   f l a g   * /  
         m q - > p a r e n t . p a r e n t . f l a g   =   f l a g ;  
  
         / *   i n i t i a l i z e   i p c   o b j e c t   * /  
         r t _ i p c _ o b j e c t _ i n i t ( & ( m q - > p a r e n t ) ) ;  
  
         / *   s e t   m e s s a g e   p o o l   * /  
         m q - > m s g _ p o o l   =   m s g p o o l ;  
  
         / *   g e t   c o r r e c t   m e s s a g e   s i z e   * /  
         m q - > m s g _ s i z e   =   R T _ A L I G N ( m s g _ s i z e ,   R T _ A L I G N _ S I Z E ) ;  
         m q - > m a x _ m s g s   =   p o o l _ s i z e   /   ( m q - > m s g _ s i z e   +   s i z e o f ( s t r u c t   r t _ m q _ m e s s a g e ) ) ;  
  
         / *   i n i t i a l i z e   m e s s a g e   l i s t   * /  
         m q - > m s g _ q u e u e _ h e a d   =   R T _ N U L L ;  
         m q - > m s g _ q u e u e _ t a i l   =   R T _ N U L L ;  
  
         / *   i n i t i a l i z e   m e s s a g e   e m p t y   l i s t   * /  
         m q - > m s g _ q u e u e _ f r e e   =   R T _ N U L L ;  
         f o r   ( t e m p   =   0 ;   t e m p   <   m q - > m a x _ m s g s ;   t e m p   + + )  
         {  
                 h e a d   =   ( s t r u c t   r t _ m q _ m e s s a g e   * ) ( ( r t _ u i n t 8 _ t   * ) m q - > m s g _ p o o l   +  
                                                                                 t e m p   *   ( m q - > m s g _ s i z e   +   s i z e o f ( s t r u c t   r t _ m q _ m e s s a g e ) ) ) ;  
                 h e a d - > n e x t   =   ( s t r u c t   r t _ m q _ m e s s a g e   * ) m q - > m s g _ q u e u e _ f r e e ;  
                 m q - > m s g _ q u e u e _ f r e e   =   h e a d ;  
         }  
  
         / *   t h e   i n i t i a l   e n t r y   i s   z e r o   * /  
         m q - > e n t r y   =   0 ;  
  
         / *   i n i t i a l i z e   a n   a d d i t i o n a l   l i s t   o f   s e n d e r   s u s p e n d   t h r e a d   * /  
         r t _ l i s t _ i n i t ( & ( m q - > s u s p e n d _ s e n d e r _ t h r e a d ) ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   d e t a c h   a   m e s s a g e   q u e u e   o b j e c t   f r o m   r e s o u r c e   m a n a g e m e n t  
   *  
   *   @ p a r a m   m q   t h e   m e s s a g e   q u e u e   o b j e c t  
   *  
   *   @ r e t u r n   t h e   o p e r a t i o n   s t a t u s ,   R T _ E O K   o n   s u c c e s s f u l  
   * /  
 r t _ e r r _ t   r t _ m q _ d e t a c h ( r t _ m q _ t   m q )  
 {  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( m q   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & m q - > p a r e n t . p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ M e s s a g e Q u e u e ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ i s _ s y s t e m o b j e c t ( & m q - > p a r e n t . p a r e n t ) ) ;  
  
         / *   r e s u m e   a l l   s u s p e n d e d   t h r e a d   * /  
         r t _ i p c _ l i s t _ r e s u m e _ a l l ( & m q - > p a r e n t . s u s p e n d _ t h r e a d ) ;  
         / *   a l s o   r e s u m e   a l l   m e s s a g e   q u e u e   p r i v a t e   s u s p e n d e d   t h r e a d   * /  
         r t _ i p c _ l i s t _ r e s u m e _ a l l ( & ( m q - > s u s p e n d _ s e n d e r _ t h r e a d ) ) ;  
  
         / *   d e t a c h   m e s s a g e   q u e u e   o b j e c t   * /  
         r t _ o b j e c t _ d e t a c h ( & ( m q - > p a r e n t . p a r e n t ) ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 # i f d e f   R T _ U S I N G _ H E A P  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   c r e a t e   a   m e s s a g e   q u e u e   o b j e c t   f r o m   s y s t e m   r e s o u r c e  
   *  
   *   @ p a r a m   n a m e   t h e   n a m e   o f   m e s s a g e   q u e u e  
   *   @ p a r a m   m s g _ s i z e   t h e   s i z e   o f   m e s s a g e  
   *   @ p a r a m   m a x _ m s g s   t h e   m a x i m u m   n u m b e r   o f   m e s s a g e   i n   q u e u e  
   *   @ p a r a m   f l a g   t h e   f l a g   o f   m e s s a g e   q u e u e  
   *  
   *   @ r e t u r n   t h e   c r e a t e d   m e s s a g e   q u e u e ,   R T _ N U L L   o n   e r r o r   h a p p e n  
   * /  
 r t _ m q _ t   r t _ m q _ c r e a t e ( c o n s t   c h a r   * n a m e ,  
                                           r t _ s i z e _ t       m s g _ s i z e ,  
                                           r t _ s i z e _ t       m a x _ m s g s ,  
                                           r t _ u i n t 8 _ t     f l a g )  
 {  
         s t r u c t   r t _ m e s s a g e q u e u e   * m q ;  
         s t r u c t   r t _ m q _ m e s s a g e   * h e a d ;  
         r e g i s t e r   r t _ b a s e _ t   t e m p ;  
  
         R T _ D E B U G _ N O T _ I N _ I N T E R R U P T ;  
  
         / *   a l l o c a t e   o b j e c t   * /  
         m q   =   ( r t _ m q _ t ) r t _ o b j e c t _ a l l o c a t e ( R T _ O b j e c t _ C l a s s _ M e s s a g e Q u e u e ,   n a m e ) ;  
         i f   ( m q   = =   R T _ N U L L )  
                 r e t u r n   m q ;  
  
         / *   s e t   p a r e n t   * /  
         m q - > p a r e n t . p a r e n t . f l a g   =   f l a g ;  
  
         / *   i n i t i a l i z e   i p c   o b j e c t   * /  
         r t _ i p c _ o b j e c t _ i n i t ( & ( m q - > p a r e n t ) ) ;  
  
         / *   i n i t i a l i z e   m e s s a g e   q u e u e   * /  
  
         / *   g e t   c o r r e c t   m e s s a g e   s i z e   * /  
         m q - > m s g _ s i z e   =   R T _ A L I G N ( m s g _ s i z e ,   R T _ A L I G N _ S I Z E ) ;  
         m q - > m a x _ m s g s   =   m a x _ m s g s ;  
  
         / *   a l l o c a t e   m e s s a g e   p o o l   * /  
         m q - > m s g _ p o o l   =   R T _ K E R N E L _ M A L L O C ( ( m q - > m s g _ s i z e   +   s i z e o f ( s t r u c t   r t _ m q _ m e s s a g e ) )   *   m q - > m a x _ m s g s ) ;  
         i f   ( m q - > m s g _ p o o l   = =   R T _ N U L L )  
         {  
                 r t _ o b j e c t _ d e l e t e ( & ( m q - > p a r e n t . p a r e n t ) ) ;  
  
                 r e t u r n   R T _ N U L L ;  
         }  
  
         / *   i n i t i a l i z e   m e s s a g e   l i s t   * /  
         m q - > m s g _ q u e u e _ h e a d   =   R T _ N U L L ;  
         m q - > m s g _ q u e u e _ t a i l   =   R T _ N U L L ;  
  
         / *   i n i t i a l i z e   m e s s a g e   e m p t y   l i s t   * /  
         m q - > m s g _ q u e u e _ f r e e   =   R T _ N U L L ;  
         f o r   ( t e m p   =   0 ;   t e m p   <   m q - > m a x _ m s g s ;   t e m p   + + )  
         {  
                 h e a d   =   ( s t r u c t   r t _ m q _ m e s s a g e   * ) ( ( r t _ u i n t 8 _ t   * ) m q - > m s g _ p o o l   +  
                                                                                 t e m p   *   ( m q - > m s g _ s i z e   +   s i z e o f ( s t r u c t   r t _ m q _ m e s s a g e ) ) ) ;  
                 h e a d - > n e x t   =   ( s t r u c t   r t _ m q _ m e s s a g e   * ) m q - > m s g _ q u e u e _ f r e e ;  
                 m q - > m s g _ q u e u e _ f r e e   =   h e a d ;  
         }  
  
         / *   t h e   i n i t i a l   e n t r y   i s   z e r o   * /  
         m q - > e n t r y   =   0 ;  
  
         / *   i n i t i a l i z e   a n   a d d i t i o n a l   l i s t   o f   s e n d e r   s u s p e n d   t h r e a d   * /  
         r t _ l i s t _ i n i t ( & ( m q - > s u s p e n d _ s e n d e r _ t h r e a d ) ) ;  
  
         r e t u r n   m q ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   d e l e t e   a   m e s s a g e   q u e u e   o b j e c t   a n d   r e l e a s e   t h e   m e m o r y  
   *  
   *   @ p a r a m   m q   t h e   m e s s a g e   q u e u e   o b j e c t  
   *  
   *   @ r e t u r n   t h e   e r r o r   c o d e  
   * /  
 r t _ e r r _ t   r t _ m q _ d e l e t e ( r t _ m q _ t   m q )  
 {  
         R T _ D E B U G _ N O T _ I N _ I N T E R R U P T ;  
  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( m q   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & m q - > p a r e n t . p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ M e s s a g e Q u e u e ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ i s _ s y s t e m o b j e c t ( & m q - > p a r e n t . p a r e n t )   = =   R T _ F A L S E ) ;  
  
         / *   r e s u m e   a l l   s u s p e n d e d   t h r e a d   * /  
         r t _ i p c _ l i s t _ r e s u m e _ a l l ( & ( m q - > p a r e n t . s u s p e n d _ t h r e a d ) ) ;  
         / *   a l s o   r e s u m e   a l l   m e s s a g e   q u e u e   p r i v a t e   s u s p e n d e d   t h r e a d   * /  
         r t _ i p c _ l i s t _ r e s u m e _ a l l ( & ( m q - > s u s p e n d _ s e n d e r _ t h r e a d ) ) ;  
  
         / *   f r e e   m e s s a g e   q u e u e   p o o l   * /  
         R T _ K E R N E L _ F R E E ( m q - > m s g _ p o o l ) ;  
  
         / *   d e l e t e   m e s s a g e   q u e u e   o b j e c t   * /  
         r t _ o b j e c t _ d e l e t e ( & ( m q - > p a r e n t . p a r e n t ) ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
 # e n d i f  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   s e n d   a   m e s s a g e   t o   m e s s a g e   q u e u e   o b j e c t .   I f   t h e   m e s s a g e   q u e u e   i s   f u l l ,  
   *   c u r r e n t   t h r e a d   w i l l   b e   s u s p e n d e d   u n t i l   t i m e o u t .  
   *  
   *   @ p a r a m   m q   t h e   m e s s a g e   q u e u e   o b j e c t  
   *   @ p a r a m   b u f f e r   t h e   m e s s a g e  
   *   @ p a r a m   s i z e   t h e   s i z e   o f   b u f f e r  
   *   @ p a r a m   t i m e o u t   t h e   w a i t i n g   t i m e  
   *  
   *   @ r e t u r n   t h e   e r r o r   c o d e  
   * /  
 r t _ e r r _ t   r t _ m q _ s e n d _ w a i t ( r t _ m q _ t           m q ,  
                                                   c o n s t   v o i d   * b u f f e r ,  
                                                   r t _ s i z e _ t       s i z e ,  
                                                   r t _ i n t 3 2 _ t     t i m e o u t )  
 {  
         r e g i s t e r   r t _ u b a s e _ t   t e m p ;  
         s t r u c t   r t _ m q _ m e s s a g e   * m s g ;  
         r t _ u i n t 3 2 _ t   t i c k _ d e l t a ;  
         s t r u c t   r t _ t h r e a d   * t h r e a d ;  
  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( m q   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & m q - > p a r e n t . p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ M e s s a g e Q u e u e ) ;  
         R T _ A S S E R T ( b u f f e r   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( s i z e   ! =   0 ) ;  
  
         / *   g r e a t e r   t h a n   o n e   m e s s a g e   s i z e   * /  
         i f   ( s i z e   >   m q - > m s g _ s i z e )  
                 r e t u r n   - R T _ E R R O R ;  
  
         / *   i n i t i a l i z e   d e l t a   t i c k   * /  
         t i c k _ d e l t a   =   0 ;  
         / *   g e t   c u r r e n t   t h r e a d   * /  
         t h r e a d   =   r t _ t h r e a d _ s e l f ( ) ;  
  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ o b j e c t _ p u t _ h o o k ,   ( & ( m q - > p a r e n t . p a r e n t ) ) ) ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         t e m p   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         / *   g e t   a   f r e e   l i s t ,   t h e r e   m u s t   b e   a n   e m p t y   i t e m   * /  
         m s g   =   ( s t r u c t   r t _ m q _ m e s s a g e   * ) m q - > m s g _ q u e u e _ f r e e ;  
         / *   f o r   n o n - b l o c k i n g   c a l l   * /  
         i f   ( m s g   = =   R T _ N U L L   & &   t i m e o u t   = =   0 )  
         {  
                 / *   e n a b l e   i n t e r r u p t   * /  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
                 r e t u r n   - R T _ E F U L L ;  
         }  
  
         / *   m e s s a g e   q u e u e   i s   f u l l   * /  
         w h i l e   ( ( m s g   =   m q - > m s g _ q u e u e _ f r e e )   = =   R T _ N U L L )  
         {  
                 / *   r e s e t   e r r o r   n u m b e r   i n   t h r e a d   * /  
                 t h r e a d - > e r r o r   =   R T _ E O K ;  
  
                 / *   n o   w a i t i n g ,   r e t u r n   t i m e o u t   * /  
                 i f   ( t i m e o u t   = =   0 )  
                 {  
                         / *   e n a b l e   i n t e r r u p t   * /  
                         r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
                         r e t u r n   - R T _ E F U L L ;  
                 }  
  
                 R T _ D E B U G _ I N _ T H R E A D _ C O N T E X T ;  
                 / *   s u s p e n d   c u r r e n t   t h r e a d   * /  
                 r t _ i p c _ l i s t _ s u s p e n d ( & ( m q - > s u s p e n d _ s e n d e r _ t h r e a d ) ,  
                                                         t h r e a d ,  
                                                         m q - > p a r e n t . p a r e n t . f l a g ) ;  
  
                 / *   h a s   w a i t i n g   t i m e ,   s t a r t   t h r e a d   t i m e r   * /  
                 i f   ( t i m e o u t   >   0 )  
                 {  
                         / *   g e t   t h e   s t a r t   t i c k   o f   t i m e r   * /  
                         t i c k _ d e l t a   =   r t _ t i c k _ g e t ( ) ;  
  
                         R T _ D E B U G _ L O G ( R T _ D E B U G _ I P C ,   ( " m q _ s e n d _ w a i t :   s t a r t   t i m e r   o f   t h r e a d : % s \ n " ,  
                                                                                 t h r e a d - > n a m e ) ) ;  
  
                         / *   r e s e t   t h e   t i m e o u t   o f   t h r e a d   t i m e r   a n d   s t a r t   i t   * /  
                         r t _ t i m e r _ c o n t r o l ( & ( t h r e a d - > t h r e a d _ t i m e r ) ,  
                                                           R T _ T I M E R _ C T R L _ S E T _ T I M E ,  
                                                           & t i m e o u t ) ;  
                         r t _ t i m e r _ s t a r t ( & ( t h r e a d - > t h r e a d _ t i m e r ) ) ;  
                 }  
  
                 / *   e n a b l e   i n t e r r u p t   * /  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
                 / *   r e - s c h e d u l e   * /  
                 r t _ s c h e d u l e ( ) ;  
  
                 / *   r e s u m e   f r o m   s u s p e n d   s t a t e   * /  
                 i f   ( t h r e a d - > e r r o r   ! =   R T _ E O K )  
                 {  
                         / *   r e t u r n   e r r o r   * /  
                         r e t u r n   t h r e a d - > e r r o r ;  
                 }  
  
                 / *   d i s a b l e   i n t e r r u p t   * /  
                 t e m p   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
                 / *   i f   i t ' s   n o t   w a i t i n g   f o r e v e r   a n d   t h e n   r e - c a l c u l a t e   t i m e o u t   t i c k   * /  
                 i f   ( t i m e o u t   >   0 )  
                 {  
                         t i c k _ d e l t a   =   r t _ t i c k _ g e t ( )   -   t i c k _ d e l t a ;  
                         t i m e o u t   - =   t i c k _ d e l t a ;  
                         i f   ( t i m e o u t   <   0 )  
                                 t i m e o u t   =   0 ;  
                 }  
         }  
  
         / *   m o v e   f r e e   l i s t   p o i n t e r   * /  
         m q - > m s g _ q u e u e _ f r e e   =   m s g - > n e x t ;  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
         / *   t h e   m s g   i s   t h e   n e w   t a i l e r   o f   l i s t ,   t h e   n e x t   s h a l l   b e   N U L L   * /  
         m s g - > n e x t   =   R T _ N U L L ;  
         / *   c o p y   b u f f e r   * /  
         r t _ m e m c p y ( m s g   +   1 ,   b u f f e r ,   s i z e ) ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         t e m p   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
         / *   l i n k   m s g   t o   m e s s a g e   q u e u e   * /  
         i f   ( m q - > m s g _ q u e u e _ t a i l   ! =   R T _ N U L L )  
         {  
                 / *   i f   t h e   t a i l   e x i s t s ,   * /  
                 ( ( s t r u c t   r t _ m q _ m e s s a g e   * ) m q - > m s g _ q u e u e _ t a i l ) - > n e x t   =   m s g ;  
         }  
  
         / *   s e t   n e w   t a i l   * /  
         m q - > m s g _ q u e u e _ t a i l   =   m s g ;  
         / *   i f   t h e   h e a d   i s   e m p t y ,   s e t   h e a d   * /  
         i f   ( m q - > m s g _ q u e u e _ h e a d   = =   R T _ N U L L )  
                 m q - > m s g _ q u e u e _ h e a d   =   m s g ;  
  
         i f ( m q - > e n t r y   <   R T _ M Q _ E N T R Y _ M A X )  
         {  
                 / *   i n c r e a s e   m e s s a g e   e n t r y   * /  
                 m q - > e n t r y   + + ;  
         }  
         e l s e  
         {  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;   / *   e n a b l e   i n t e r r u p t   * /  
                 r e t u r n   - R T _ E F U L L ;   / *   v a l u e   o v e r f l o w e d   * /  
         }  
  
         / *   r e s u m e   s u s p e n d e d   t h r e a d   * /  
         i f   ( ! r t _ l i s t _ i s e m p t y ( & m q - > p a r e n t . s u s p e n d _ t h r e a d ) )  
         {  
                 r t _ i p c _ l i s t _ r e s u m e ( & ( m q - > p a r e n t . s u s p e n d _ t h r e a d ) ) ;  
  
                 / *   e n a b l e   i n t e r r u p t   * /  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
                 r t _ s c h e d u l e ( ) ;  
  
                 r e t u r n   R T _ E O K ;  
         }  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   s e n d   a   m e s s a g e   t o   m e s s a g e   q u e u e   o b j e c t ,   i f   t h e r e   a r e  
   *   t h r e a d s   s u s p e n d e d   o n   m e s s a g e   q u e u e   o b j e c t ,   i t   w i l l   b e   w a k e d   u p .  
   *  
   *   @ p a r a m   m q   t h e   m e s s a g e   q u e u e   o b j e c t  
   *   @ p a r a m   b u f f e r   t h e   m e s s a g e  
   *   @ p a r a m   s i z e   t h e   s i z e   o f   b u f f e r  
   *  
   *   @ r e t u r n   t h e   e r r o r   c o d e  
   * /  
 r t _ e r r _ t   r t _ m q _ s e n d ( r t _ m q _ t   m q ,   c o n s t   v o i d   * b u f f e r ,   r t _ s i z e _ t   s i z e )  
 {  
         r e t u r n   r t _ m q _ s e n d _ w a i t ( m q ,   b u f f e r ,   s i z e ,   0 ) ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   s e n d   a n   u r g e n t   m e s s a g e   t o   m e s s a g e   q u e u e   o b j e c t ,   w h i c h  
   *   m e a n s   t h e   m e s s a g e   w i l l   b e   i n s e r t e d   t o   t h e   h e a d   o f   m e s s a g e   q u e u e .   I f   t h e r e  
   *   a r e   t h r e a d s   s u s p e n d e d   o n   m e s s a g e   q u e u e   o b j e c t ,   i t   w i l l   b e   w a k e d   u p .  
   *  
   *   @ p a r a m   m q   t h e   m e s s a g e   q u e u e   o b j e c t  
   *   @ p a r a m   b u f f e r   t h e   m e s s a g e  
   *   @ p a r a m   s i z e   t h e   s i z e   o f   b u f f e r  
   *  
   *   @ r e t u r n   t h e   e r r o r   c o d e  
   * /  
 r t _ e r r _ t   r t _ m q _ u r g e n t ( r t _ m q _ t   m q ,   c o n s t   v o i d   * b u f f e r ,   r t _ s i z e _ t   s i z e )  
 {  
         r e g i s t e r   r t _ u b a s e _ t   t e m p ;  
         s t r u c t   r t _ m q _ m e s s a g e   * m s g ;  
  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( m q   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & m q - > p a r e n t . p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ M e s s a g e Q u e u e ) ;  
         R T _ A S S E R T ( b u f f e r   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( s i z e   ! =   0 ) ;  
  
         / *   g r e a t e r   t h a n   o n e   m e s s a g e   s i z e   * /  
         i f   ( s i z e   >   m q - > m s g _ s i z e )  
                 r e t u r n   - R T _ E R R O R ;  
  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ o b j e c t _ p u t _ h o o k ,   ( & ( m q - > p a r e n t . p a r e n t ) ) ) ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         t e m p   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         / *   g e t   a   f r e e   l i s t ,   t h e r e   m u s t   b e   a n   e m p t y   i t e m   * /  
         m s g   =   ( s t r u c t   r t _ m q _ m e s s a g e   * ) m q - > m s g _ q u e u e _ f r e e ;  
         / *   m e s s a g e   q u e u e   i s   f u l l   * /  
         i f   ( m s g   = =   R T _ N U L L )  
         {  
                 / *   e n a b l e   i n t e r r u p t   * /  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
                 r e t u r n   - R T _ E F U L L ;  
         }  
         / *   m o v e   f r e e   l i s t   p o i n t e r   * /  
         m q - > m s g _ q u e u e _ f r e e   =   m s g - > n e x t ;  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
         / *   c o p y   b u f f e r   * /  
         r t _ m e m c p y ( m s g   +   1 ,   b u f f e r ,   s i z e ) ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         t e m p   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         / *   l i n k   m s g   t o   t h e   b e g i n n i n g   o f   m e s s a g e   q u e u e   * /  
         m s g - > n e x t   =   ( s t r u c t   r t _ m q _ m e s s a g e   * ) m q - > m s g _ q u e u e _ h e a d ;  
         m q - > m s g _ q u e u e _ h e a d   =   m s g ;  
  
         / *   i f   t h e r e   i s   n o   t a i l   * /  
         i f   ( m q - > m s g _ q u e u e _ t a i l   = =   R T _ N U L L )  
                 m q - > m s g _ q u e u e _ t a i l   =   m s g ;  
  
         i f ( m q - > e n t r y   <   R T _ M Q _ E N T R Y _ M A X )  
         {  
                 / *   i n c r e a s e   m e s s a g e   e n t r y   * /  
                 m q - > e n t r y   + + ;  
         }  
         e l s e  
         {  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;   / *   e n a b l e   i n t e r r u p t   * /  
                 r e t u r n   - R T _ E F U L L ;   / *   v a l u e   o v e r f l o w e d   * /  
         }  
  
         / *   r e s u m e   s u s p e n d e d   t h r e a d   * /  
         i f   ( ! r t _ l i s t _ i s e m p t y ( & m q - > p a r e n t . s u s p e n d _ t h r e a d ) )  
         {  
                 r t _ i p c _ l i s t _ r e s u m e ( & ( m q - > p a r e n t . s u s p e n d _ t h r e a d ) ) ;  
  
                 / *   e n a b l e   i n t e r r u p t   * /  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
                 r t _ s c h e d u l e ( ) ;  
  
                 r e t u r n   R T _ E O K ;  
         }  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   r e c e i v e   a   m e s s a g e   f r o m   m e s s a g e   q u e u e   o b j e c t ,   i f   t h e r e   i s  
   *   n o   m e s s a g e   i n   m e s s a g e   q u e u e   o b j e c t ,   t h e   t h r e a d   s h a l l   w a i t   f o r   a   s p e c i f i e d  
   *   t i m e .  
   *  
   *   @ p a r a m   m q   t h e   m e s s a g e   q u e u e   o b j e c t  
   *   @ p a r a m   b u f f e r   t h e   r e c e i v e d   m e s s a g e   w i l l   b e   s a v e d   i n  
   *   @ p a r a m   s i z e   t h e   s i z e   o f   b u f f e r  
   *   @ p a r a m   t i m e o u t   t h e   w a i t i n g   t i m e  
   *  
   *   @ r e t u r n   t h e   e r r o r   c o d e  
   * /  
 r t _ e r r _ t   r t _ m q _ r e c v ( r t _ m q _ t         m q ,  
                                         v o i d             * b u f f e r ,  
                                         r t _ s i z e _ t     s i z e ,  
                                         r t _ i n t 3 2 _ t   t i m e o u t )  
 {  
         s t r u c t   r t _ t h r e a d   * t h r e a d ;  
         r e g i s t e r   r t _ u b a s e _ t   t e m p ;  
         s t r u c t   r t _ m q _ m e s s a g e   * m s g ;  
         r t _ u i n t 3 2 _ t   t i c k _ d e l t a ;  
  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( m q   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & m q - > p a r e n t . p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ M e s s a g e Q u e u e ) ;  
         R T _ A S S E R T ( b u f f e r   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( s i z e   ! =   0 ) ;  
  
         / *   i n i t i a l i z e   d e l t a   t i c k   * /  
         t i c k _ d e l t a   =   0 ;  
         / *   g e t   c u r r e n t   t h r e a d   * /  
         t h r e a d   =   r t _ t h r e a d _ s e l f ( ) ;  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ o b j e c t _ t r y t a k e _ h o o k ,   ( & ( m q - > p a r e n t . p a r e n t ) ) ) ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         t e m p   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         / *   f o r   n o n - b l o c k i n g   c a l l   * /  
         i f   ( m q - > e n t r y   = =   0   & &   t i m e o u t   = =   0 )  
         {  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
                 r e t u r n   - R T _ E T I M E O U T ;  
         }  
  
         / *   m e s s a g e   q u e u e   i s   e m p t y   * /  
         w h i l e   ( m q - > e n t r y   = =   0 )  
         {  
                 R T _ D E B U G _ I N _ T H R E A D _ C O N T E X T ;  
  
                 / *   r e s e t   e r r o r   n u m b e r   i n   t h r e a d   * /  
                 t h r e a d - > e r r o r   =   R T _ E O K ;  
  
                 / *   n o   w a i t i n g ,   r e t u r n   t i m e o u t   * /  
                 i f   ( t i m e o u t   = =   0 )  
                 {  
                         / *   e n a b l e   i n t e r r u p t   * /  
                         r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
                         t h r e a d - > e r r o r   =   - R T _ E T I M E O U T ;  
  
                         r e t u r n   - R T _ E T I M E O U T ;  
                 }  
  
                 / *   s u s p e n d   c u r r e n t   t h r e a d   * /  
                 r t _ i p c _ l i s t _ s u s p e n d ( & ( m q - > p a r e n t . s u s p e n d _ t h r e a d ) ,  
                                                         t h r e a d ,  
                                                         m q - > p a r e n t . p a r e n t . f l a g ) ;  
  
                 / *   h a s   w a i t i n g   t i m e ,   s t a r t   t h r e a d   t i m e r   * /  
                 i f   ( t i m e o u t   >   0 )  
                 {  
                         / *   g e t   t h e   s t a r t   t i c k   o f   t i m e r   * /  
                         t i c k _ d e l t a   =   r t _ t i c k _ g e t ( ) ;  
  
                         R T _ D E B U G _ L O G ( R T _ D E B U G _ I P C ,   ( " s e t   t h r e a d : % s   t o   t i m e r   l i s t \ n " ,  
                                                                                 t h r e a d - > n a m e ) ) ;  
  
                         / *   r e s e t   t h e   t i m e o u t   o f   t h r e a d   t i m e r   a n d   s t a r t   i t   * /  
                         r t _ t i m e r _ c o n t r o l ( & ( t h r e a d - > t h r e a d _ t i m e r ) ,  
                                                           R T _ T I M E R _ C T R L _ S E T _ T I M E ,  
                                                           & t i m e o u t ) ;  
                         r t _ t i m e r _ s t a r t ( & ( t h r e a d - > t h r e a d _ t i m e r ) ) ;  
                 }  
  
                 / *   e n a b l e   i n t e r r u p t   * /  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
                 / *   r e - s c h e d u l e   * /  
                 r t _ s c h e d u l e ( ) ;  
  
                 / *   r e c v   m e s s a g e   * /  
                 i f   ( t h r e a d - > e r r o r   ! =   R T _ E O K )  
                 {  
                         / *   r e t u r n   e r r o r   * /  
                         r e t u r n   t h r e a d - > e r r o r ;  
                 }  
  
                 / *   d i s a b l e   i n t e r r u p t   * /  
                 t e m p   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
                 / *   i f   i t ' s   n o t   w a i t i n g   f o r e v e r   a n d   t h e n   r e - c a l c u l a t e   t i m e o u t   t i c k   * /  
                 i f   ( t i m e o u t   >   0 )  
                 {  
                         t i c k _ d e l t a   =   r t _ t i c k _ g e t ( )   -   t i c k _ d e l t a ;  
                         t i m e o u t   - =   t i c k _ d e l t a ;  
                         i f   ( t i m e o u t   <   0 )  
                                 t i m e o u t   =   0 ;  
                 }  
         }  
  
         / *   g e t   m e s s a g e   f r o m   q u e u e   * /  
         m s g   =   ( s t r u c t   r t _ m q _ m e s s a g e   * ) m q - > m s g _ q u e u e _ h e a d ;  
  
         / *   m o v e   m e s s a g e   q u e u e   h e a d   * /  
         m q - > m s g _ q u e u e _ h e a d   =   m s g - > n e x t ;  
         / *   r e a c h   q u e u e   t a i l ,   s e t   t o   N U L L   * /  
         i f   ( m q - > m s g _ q u e u e _ t a i l   = =   m s g )  
                 m q - > m s g _ q u e u e _ t a i l   =   R T _ N U L L ;  
  
         / *   d e c r e a s e   m e s s a g e   e n t r y   * /  
         i f ( m q - > e n t r y   >   0 )  
         {  
                 m q - > e n t r y   - - ;  
         }  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
         / *   c o p y   m e s s a g e   * /  
         r t _ m e m c p y ( b u f f e r ,   m s g   +   1 ,   s i z e   >   m q - > m s g _ s i z e   ?   m q - > m s g _ s i z e   :   s i z e ) ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         t e m p   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
         / *   p u t   m e s s a g e   t o   f r e e   l i s t   * /  
         m s g - > n e x t   =   ( s t r u c t   r t _ m q _ m e s s a g e   * ) m q - > m s g _ q u e u e _ f r e e ;  
         m q - > m s g _ q u e u e _ f r e e   =   m s g ;  
  
         / *   r e s u m e   s u s p e n d e d   t h r e a d   * /  
         i f   ( ! r t _ l i s t _ i s e m p t y ( & ( m q - > s u s p e n d _ s e n d e r _ t h r e a d ) ) )  
         {  
                 r t _ i p c _ l i s t _ r e s u m e ( & ( m q - > s u s p e n d _ s e n d e r _ t h r e a d ) ) ;  
  
                 / *   e n a b l e   i n t e r r u p t   * /  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
                 R T _ O B J E C T _ H O O K _ C A L L ( r t _ o b j e c t _ t a k e _ h o o k ,   ( & ( m q - > p a r e n t . p a r e n t ) ) ) ;  
  
                 r t _ s c h e d u l e ( ) ;  
  
                 r e t u r n   R T _ E O K ;  
         }  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( t e m p ) ;  
  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ o b j e c t _ t a k e _ h o o k ,   ( & ( m q - > p a r e n t . p a r e n t ) ) ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   c a n   g e t   o r   s e t   s o m e   e x t r a   a t t r i b u t i o n s   o f   a   m e s s a g e   q u e u e  
   *   o b j e c t .  
   *  
   *   @ p a r a m   m q   t h e   m e s s a g e   q u e u e   o b j e c t  
   *   @ p a r a m   c m d   t h e   e x e c u t i o n   c o m m a n d  
   *   @ p a r a m   a r g   t h e   e x e c u t i o n   a r g u m e n t  
   *  
   *   @ r e t u r n   t h e   e r r o r   c o d e  
   * /  
 r t _ e r r _ t   r t _ m q _ c o n t r o l ( r t _ m q _ t   m q ,   i n t   c m d ,   v o i d   * a r g )  
 {  
         r t _ u b a s e _ t   l e v e l ;  
         s t r u c t   r t _ m q _ m e s s a g e   * m s g ;  
  
         / *   p a r a m e t e r   c h e c k   * /  
         R T _ A S S E R T ( m q   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & m q - > p a r e n t . p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ M e s s a g e Q u e u e ) ;  
  
         i f   ( c m d   = =   R T _ I P C _ C M D _ R E S E T )  
         {  
                 / *   d i s a b l e   i n t e r r u p t   * /  
                 l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
                 / *   r e s u m e   a l l   w a i t i n g   t h r e a d   * /  
                 r t _ i p c _ l i s t _ r e s u m e _ a l l ( & m q - > p a r e n t . s u s p e n d _ t h r e a d ) ;  
                 / *   a l s o   r e s u m e   a l l   m e s s a g e   q u e u e   p r i v a t e   s u s p e n d e d   t h r e a d   * /  
                 r t _ i p c _ l i s t _ r e s u m e _ a l l ( & ( m q - > s u s p e n d _ s e n d e r _ t h r e a d ) ) ;  
  
                 / *   r e l e a s e   a l l   m e s s a g e   i n   t h e   q u e u e   * /  
                 w h i l e   ( m q - > m s g _ q u e u e _ h e a d   ! =   R T _ N U L L )  
                 {  
                         / *   g e t   m e s s a g e   f r o m   q u e u e   * /  
                         m s g   =   ( s t r u c t   r t _ m q _ m e s s a g e   * ) m q - > m s g _ q u e u e _ h e a d ;  
  
                         / *   m o v e   m e s s a g e   q u e u e   h e a d   * /  
                         m q - > m s g _ q u e u e _ h e a d   =   m s g - > n e x t ;  
                         / *   r e a c h   q u e u e   t a i l ,   s e t   t o   N U L L   * /  
                         i f   ( m q - > m s g _ q u e u e _ t a i l   = =   m s g )  
                                 m q - > m s g _ q u e u e _ t a i l   =   R T _ N U L L ;  
  
                         / *   p u t   m e s s a g e   t o   f r e e   l i s t   * /  
                         m s g - > n e x t   =   ( s t r u c t   r t _ m q _ m e s s a g e   * ) m q - > m s g _ q u e u e _ f r e e ;  
                         m q - > m s g _ q u e u e _ f r e e   =   m s g ;  
                 }  
  
                 / *   c l e a n   e n t r y   * /  
                 m q - > e n t r y   =   0 ;  
  
                 / *   e n a b l e   i n t e r r u p t   * /  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
                 r t _ s c h e d u l e ( ) ;  
  
                 r e t u r n   R T _ E O K ;  
         }  
  
         r e t u r n   - R T _ E R R O R ;  
 }  
 # e n d i f   / *   e n d   o f   R T _ U S I N G _ M E S S A G E Q U E U E   * /  
  
 / * * @ } * /  