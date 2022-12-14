??/ *  
   *   C o p y r i g h t   ( c )   2 0 0 6 - 2 0 2 1 ,   R T - T h r e a d   D e v e l o p m e n t   T e a m  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   C h a n g e   L o g s :  
   *   D a t e                       A u t h o r               N o t e s  
   *   2 0 0 6 - 0 3 - 1 2           B e r n a r d             f i r s t   v e r s i o n  
   *   2 0 0 6 - 0 4 - 2 9           B e r n a r d             i m p l e m e n t   t h r e a d   t i m e r  
   *   2 0 0 6 - 0 6 - 0 4           B e r n a r d             i m p l e m e n t   r t _ t i m e r _ c o n t r o l  
   *   2 0 0 6 - 0 8 - 1 0           B e r n a r d             f i x   t h e   p e r i o d i c   t i m e r   b u g  
   *   2 0 0 6 - 0 9 - 0 3           B e r n a r d             i m p l e m e n t   r t _ t i m e r _ d e t a c h  
   *   2 0 0 9 - 1 1 - 1 1           L i J i n                 a d d   s o f t   t i m e r  
   *   2 0 1 0 - 0 5 - 1 2           B e r n a r d             f i x   t h e   t i m e r   c h e c k   b u g .  
   *   2 0 1 0 - 1 1 - 0 2           C h a r l i e             r e - i m p l e m e n t   t i c k   o v e r f l o w   i s s u e  
   *   2 0 1 2 - 1 2 - 1 5           B e r n a r d             f i x   t h e   n e x t   t i m e o u t   i s s u e   i n   s o f t   t i m e r  
   *   2 0 1 4 - 0 7 - 1 2           B e r n a r d             d o e s   n o t   l o c k   s c h e d u l e r   w h e n   i n v o k i n g   s o f t - t i m e r  
   *                                                           t i m e o u t   f u n c t i o n .  
   * /  
  
 # i n c l u d e   < r t t h r e a d . h >  
 # i n c l u d e   < r t h w . h >  
  
 / *   h a r d   t i m e r   l i s t   * /  
 s t a t i c   r t _ l i s t _ t   r t _ t i m e r _ l i s t [ R T _ T I M E R _ S K I P _ L I S T _ L E V E L ] ;  
  
 # i f d e f   R T _ U S I N G _ T I M E R _ S O F T  
  
 # d e f i n e   R T _ S O F T _ T I M E R _ I D L E                             1  
 # d e f i n e   R T _ S O F T _ T I M E R _ B U S Y                             0  
  
 # i f n d e f   R T _ T I M E R _ T H R E A D _ S T A C K _ S I Z E  
 # d e f i n e   R T _ T I M E R _ T H R E A D _ S T A C K _ S I Z E           5 1 2  
 # e n d i f  
  
 # i f n d e f   R T _ T I M E R _ T H R E A D _ P R I O  
 # d e f i n e   R T _ T I M E R _ T H R E A D _ P R I O                       0  
 # e n d i f  
  
 / *   s o f t   t i m e r   s t a t u s   * /  
 s t a t i c   r t _ u i n t 8 _ t   s o f t _ t i m e r _ s t a t u s   =   R T _ S O F T _ T I M E R _ I D L E ;  
 / *   s o f t   t i m e r   l i s t   * /  
 s t a t i c   r t _ l i s t _ t   r t _ s o f t _ t i m e r _ l i s t [ R T _ T I M E R _ S K I P _ L I S T _ L E V E L ] ;  
 s t a t i c   s t r u c t   r t _ t h r e a d   t i m e r _ t h r e a d ;  
 A L I G N ( R T _ A L I G N _ S I Z E )  
 s t a t i c   r t _ u i n t 8 _ t   t i m e r _ t h r e a d _ s t a c k [ R T _ T I M E R _ T H R E A D _ S T A C K _ S I Z E ] ;  
 # e n d i f  
  
 # i f d e f   R T _ U S I N G _ H O O K  
 e x t e r n   v o i d   ( * r t _ o b j e c t _ t a k e _ h o o k ) ( s t r u c t   r t _ o b j e c t   * o b j e c t ) ;  
 e x t e r n   v o i d   ( * r t _ o b j e c t _ p u t _ h o o k ) ( s t r u c t   r t _ o b j e c t   * o b j e c t ) ;  
 s t a t i c   v o i d   ( * r t _ t i m e r _ e n t e r _ h o o k ) ( s t r u c t   r t _ t i m e r   * t i m e r ) ;  
 s t a t i c   v o i d   ( * r t _ t i m e r _ e x i t _ h o o k ) ( s t r u c t   r t _ t i m e r   * t i m e r ) ;  
  
 / * *  
   *   @ a d d t o g r o u p   H o o k  
   * /  
  
 / * * @ { * /  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   s e t   a   h o o k   f u n c t i o n ,   w h i c h   w i l l   b e   i n v o k e d   w h e n   e n t e r  
   *   t i m e r   t i m e o u t   c a l l b a c k   f u n c t i o n .  
   *  
   *   @ p a r a m   h o o k   t h e   h o o k   f u n c t i o n  
   * /  
 v o i d   r t _ t i m e r _ e n t e r _ s e t h o o k ( v o i d   ( * h o o k ) ( s t r u c t   r t _ t i m e r   * t i m e r ) )  
 {  
         r t _ t i m e r _ e n t e r _ h o o k   =   h o o k ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   s e t   a   h o o k   f u n c t i o n ,   w h i c h   w i l l   b e   i n v o k e d   w h e n   e x i t  
   *   t i m e r   t i m e o u t   c a l l b a c k   f u n c t i o n .  
   *  
   *   @ p a r a m   h o o k   t h e   h o o k   f u n c t i o n  
   * /  
 v o i d   r t _ t i m e r _ e x i t _ s e t h o o k ( v o i d   ( * h o o k ) ( s t r u c t   r t _ t i m e r   * t i m e r ) )  
 {  
         r t _ t i m e r _ e x i t _ h o o k   =   h o o k ;  
 }  
  
 / * * @ } * /  
 # e n d i f  
  
 s t a t i c   v o i d   _ r t _ t i m e r _ i n i t ( r t _ t i m e r _ t   t i m e r ,  
                                                       v o i d   ( * t i m e o u t ) ( v o i d   * p a r a m e t e r ) ,  
                                                       v o i d             * p a r a m e t e r ,  
                                                       r t _ t i c k _ t     t i m e ,  
                                                       r t _ u i n t 8 _ t   f l a g )  
 {  
         i n t   i ;  
  
         / *   s e t   f l a g   * /  
         t i m e r - > p a r e n t . f l a g     =   f l a g ;  
  
         / *   s e t   d e a c t i v a t e d   * /  
         t i m e r - > p a r e n t . f l a g   & =   ~ R T _ T I M E R _ F L A G _ A C T I V A T E D ;  
  
         t i m e r - > t i m e o u t _ f u n c   =   t i m e o u t ;  
         t i m e r - > p a r a m e t e r         =   p a r a m e t e r ;  
  
         t i m e r - > t i m e o u t _ t i c k   =   0 ;  
         t i m e r - > i n i t _ t i c k         =   t i m e ;  
  
         / *   i n i t i a l i z e   t i m e r   l i s t   * /  
         f o r   ( i   =   0 ;   i   <   R T _ T I M E R _ S K I P _ L I S T _ L E V E L ;   i + + )  
         {  
                 r t _ l i s t _ i n i t ( & ( t i m e r - > r o w [ i ] ) ) ;  
         }  
 }  
  
 / *   t h e   f i s t   t i m e r   a l w a y s   i n   t h e   l a s t   r o w   * /  
 s t a t i c   r t _ t i c k _ t   r t _ t i m e r _ l i s t _ n e x t _ t i m e o u t ( r t _ l i s t _ t   t i m e r _ l i s t [ ] )  
 {  
         s t r u c t   r t _ t i m e r   * t i m e r ;  
         r e g i s t e r   r t _ b a s e _ t   l e v e l ;  
         r t _ t i c k _ t   t i m e o u t _ t i c k   =   R T _ T I C K _ M A X ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         i f   ( ! r t _ l i s t _ i s e m p t y ( & t i m e r _ l i s t [ R T _ T I M E R _ S K I P _ L I S T _ L E V E L   -   1 ] ) )  
         {  
                 t i m e r   =   r t _ l i s t _ e n t r y ( t i m e r _ l i s t [ R T _ T I M E R _ S K I P _ L I S T _ L E V E L   -   1 ] . n e x t ,  
                                                             s t r u c t   r t _ t i m e r ,   r o w [ R T _ T I M E R _ S K I P _ L I S T _ L E V E L   -   1 ] ) ;  
                 t i m e o u t _ t i c k   =   t i m e r - > t i m e o u t _ t i c k ;  
         }  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
         r e t u r n   t i m e o u t _ t i c k ;  
 }  
  
 r t _ i n l i n e   v o i d   _ r t _ t i m e r _ r e m o v e ( r t _ t i m e r _ t   t i m e r )  
 {  
         i n t   i ;  
  
         f o r   ( i   =   0 ;   i   <   R T _ T I M E R _ S K I P _ L I S T _ L E V E L ;   i + + )  
         {  
                 r t _ l i s t _ r e m o v e ( & t i m e r - > r o w [ i ] ) ;  
         }  
 }  
  
 # i f   R T _ D E B U G _ T I M E R  
 s t a t i c   i n t   r t _ t i m e r _ c o u n t _ h e i g h t ( s t r u c t   r t _ t i m e r   * t i m e r )  
 {  
         i n t   i ,   c n t   =   0 ;  
  
         f o r   ( i   =   0 ;   i   <   R T _ T I M E R _ S K I P _ L I S T _ L E V E L ;   i + + )  
         {  
                 i f   ( ! r t _ l i s t _ i s e m p t y ( & t i m e r - > r o w [ i ] ) )  
                         c n t + + ;  
         }  
         r e t u r n   c n t ;  
 }  
  
 v o i d   r t _ t i m e r _ d u m p ( r t _ l i s t _ t   t i m e r _ h e a d s [ ] )  
 {  
         r t _ l i s t _ t   * l i s t ;  
  
         f o r   ( l i s t   =   t i m e r _ h e a d s [ R T _ T I M E R _ S K I P _ L I S T _ L E V E L   -   1 ] . n e x t ;  
                   l i s t   ! =   & t i m e r _ h e a d s [ R T _ T I M E R _ S K I P _ L I S T _ L E V E L   -   1 ] ;  
                   l i s t   =   l i s t - > n e x t )  
         {  
                 s t r u c t   r t _ t i m e r   * t i m e r   =   r t _ l i s t _ e n t r y ( l i s t ,  
                                                                                               s t r u c t   r t _ t i m e r ,  
                                                                                               r o w [ R T _ T I M E R _ S K I P _ L I S T _ L E V E L   -   1 ] ) ;  
                 r t _ k p r i n t f ( " % d " ,   r t _ t i m e r _ c o u n t _ h e i g h t ( t i m e r ) ) ;  
         }  
         r t _ k p r i n t f ( " \ n " ) ;  
 }  
 # e n d i f  
  
 / * *  
   *   @ a d d t o g r o u p   C l o c k  
   * /  
  
 / * * @ { * /  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   i n i t i a l i z e   a   t i m e r ,   n o r m a l l y   t h i s   f u n c t i o n   i s   u s e d   t o  
   *   i n i t i a l i z e   a   s t a t i c   t i m e r   o b j e c t .  
   *  
   *   @ p a r a m   t i m e r   t h e   s t a t i c   t i m e r   o b j e c t  
   *   @ p a r a m   n a m e   t h e   n a m e   o f   t i m e r  
   *   @ p a r a m   t i m e o u t   t h e   t i m e o u t   f u n c t i o n  
   *   @ p a r a m   p a r a m e t e r   t h e   p a r a m e t e r   o f   t i m e o u t   f u n c t i o n  
   *   @ p a r a m   t i m e   t h e   t i c k   o f   t i m e r  
   *   @ p a r a m   f l a g   t h e   f l a g   o f   t i m e r  
   * /  
 v o i d   r t _ t i m e r _ i n i t ( r t _ t i m e r _ t     t i m e r ,  
                                       c o n s t   c h a r   * n a m e ,  
                                       v o i d   ( * t i m e o u t ) ( v o i d   * p a r a m e t e r ) ,  
                                       v o i d               * p a r a m e t e r ,  
                                       r t _ t i c k _ t       t i m e ,  
                                       r t _ u i n t 8 _ t     f l a g )  
 {  
         / *   t i m e r   c h e c k   * /  
         R T _ A S S E R T ( t i m e r   ! =   R T _ N U L L ) ;  
  
         / *   t i m e r   o b j e c t   i n i t i a l i z a t i o n   * /  
         r t _ o b j e c t _ i n i t ( ( r t _ o b j e c t _ t ) t i m e r ,   R T _ O b j e c t _ C l a s s _ T i m e r ,   n a m e ) ;  
  
         _ r t _ t i m e r _ i n i t ( t i m e r ,   t i m e o u t ,   p a r a m e t e r ,   t i m e ,   f l a g ) ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   d e t a c h   a   t i m e r   f r o m   t i m e r   m a n a g e m e n t .  
   *  
   *   @ p a r a m   t i m e r   t h e   s t a t i c   t i m e r   o b j e c t  
   *  
   *   @ r e t u r n   t h e   o p e r a t i o n   s t a t u s ,   R T _ E O K   o n   O K ;   R T _ E R R O R   o n   e r r o r  
   * /  
 r t _ e r r _ t   r t _ t i m e r _ d e t a c h ( r t _ t i m e r _ t   t i m e r )  
 {  
         r e g i s t e r   r t _ b a s e _ t   l e v e l ;  
  
         / *   t i m e r   c h e c k   * /  
         R T _ A S S E R T ( t i m e r   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & t i m e r - > p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ T i m e r ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ i s _ s y s t e m o b j e c t ( & t i m e r - > p a r e n t ) ) ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         _ r t _ t i m e r _ r e m o v e ( t i m e r ) ;  
         / *   s t o p   t i m e r   * /  
         t i m e r - > p a r e n t . f l a g   & =   ~ R T _ T I M E R _ F L A G _ A C T I V A T E D ;  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
         r t _ o b j e c t _ d e t a c h ( ( r t _ o b j e c t _ t ) t i m e r ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 # i f d e f   R T _ U S I N G _ H E A P  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   c r e a t e   a   t i m e r  
   *  
   *   @ p a r a m   n a m e   t h e   n a m e   o f   t i m e r  
   *   @ p a r a m   t i m e o u t   t h e   t i m e o u t   f u n c t i o n  
   *   @ p a r a m   p a r a m e t e r   t h e   p a r a m e t e r   o f   t i m e o u t   f u n c t i o n  
   *   @ p a r a m   t i m e   t h e   t i c k   o f   t i m e r  
   *   @ p a r a m   f l a g   t h e   f l a g   o f   t i m e r  
   *  
   *   @ r e t u r n   t h e   c r e a t e d   t i m e r   o b j e c t  
   * /  
 r t _ t i m e r _ t   r t _ t i m e r _ c r e a t e ( c o n s t   c h a r   * n a m e ,  
                                                       v o i d   ( * t i m e o u t ) ( v o i d   * p a r a m e t e r ) ,  
                                                       v o i d               * p a r a m e t e r ,  
                                                       r t _ t i c k _ t       t i m e ,  
                                                       r t _ u i n t 8 _ t     f l a g )  
 {  
         s t r u c t   r t _ t i m e r   * t i m e r ;  
  
         / *   a l l o c a t e   a   o b j e c t   * /  
         t i m e r   =   ( s t r u c t   r t _ t i m e r   * ) r t _ o b j e c t _ a l l o c a t e ( R T _ O b j e c t _ C l a s s _ T i m e r ,   n a m e ) ;  
         i f   ( t i m e r   = =   R T _ N U L L )  
         {  
                 r e t u r n   R T _ N U L L ;  
         }  
  
         _ r t _ t i m e r _ i n i t ( t i m e r ,   t i m e o u t ,   p a r a m e t e r ,   t i m e ,   f l a g ) ;  
  
         r e t u r n   t i m e r ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   d e l e t e   a   t i m e r   a n d   r e l e a s e   t i m e r   m e m o r y  
   *  
   *   @ p a r a m   t i m e r   t h e   t i m e r   t o   b e   d e l e t e d  
   *  
   *   @ r e t u r n   t h e   o p e r a t i o n   s t a t u s ,   R T _ E O K   o n   O K ;   R T _ E R R O R   o n   e r r o r  
   * /  
 r t _ e r r _ t   r t _ t i m e r _ d e l e t e ( r t _ t i m e r _ t   t i m e r )  
 {  
         r e g i s t e r   r t _ b a s e _ t   l e v e l ;  
  
         / *   t i m e r   c h e c k   * /  
         R T _ A S S E R T ( t i m e r   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & t i m e r - > p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ T i m e r ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ i s _ s y s t e m o b j e c t ( & t i m e r - > p a r e n t )   = =   R T _ F A L S E ) ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         _ r t _ t i m e r _ r e m o v e ( t i m e r ) ;  
         / *   s t o p   t i m e r   * /  
         t i m e r - > p a r e n t . f l a g   & =   ~ R T _ T I M E R _ F L A G _ A C T I V A T E D ;  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
         r t _ o b j e c t _ d e l e t e ( ( r t _ o b j e c t _ t ) t i m e r ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
 # e n d i f  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   s t a r t   t h e   t i m e r  
   *  
   *   @ p a r a m   t i m e r   t h e   t i m e r   t o   b e   s t a r t e d  
   *  
   *   @ r e t u r n   t h e   o p e r a t i o n   s t a t u s ,   R T _ E O K   o n   O K ,   - R T _ E R R O R   o n   e r r o r  
   * /  
 r t _ e r r _ t   r t _ t i m e r _ s t a r t ( r t _ t i m e r _ t   t i m e r )  
 {  
         u n s i g n e d   i n t   r o w _ l v l ;  
         r t _ l i s t _ t   * t i m e r _ l i s t ;  
         r e g i s t e r   r t _ b a s e _ t   l e v e l ;  
         r t _ l i s t _ t   * r o w _ h e a d [ R T _ T I M E R _ S K I P _ L I S T _ L E V E L ] ;  
         u n s i g n e d   i n t   t s t _ n r ;  
         s t a t i c   u n s i g n e d   i n t   r a n d o m _ n r ;  
  
         / *   t i m e r   c h e c k   * /  
         R T _ A S S E R T ( t i m e r   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & t i m e r - > p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ T i m e r ) ;  
  
         / *   s t o p   t i m e r   f i r s t l y   * /  
         l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
         / *   r e m o v e   t i m e r   f r o m   l i s t   * /  
         _ r t _ t i m e r _ r e m o v e ( t i m e r ) ;  
         / *   c h a n g e   s t a t u s   o f   t i m e r   * /  
         t i m e r - > p a r e n t . f l a g   & =   ~ R T _ T I M E R _ F L A G _ A C T I V A T E D ;  
  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ o b j e c t _ t a k e _ h o o k ,   ( & ( t i m e r - > p a r e n t ) ) ) ;  
  
         / *  
           *   g e t   t i m e o u t   t i c k ,  
           *   t h e   m a x   t i m e o u t   t i c k   s h a l l   n o t   g r e a t   t h a n   R T _ T I C K _ M A X / 2  
           * /  
         R T _ A S S E R T ( t i m e r - > i n i t _ t i c k   <   R T _ T I C K _ M A X   /   2 ) ;  
         t i m e r - > t i m e o u t _ t i c k   =   r t _ t i c k _ g e t ( )   +   t i m e r - > i n i t _ t i c k ;  
  
 # i f d e f   R T _ U S I N G _ T I M E R _ S O F T  
         i f   ( t i m e r - > p a r e n t . f l a g   &   R T _ T I M E R _ F L A G _ S O F T _ T I M E R )  
         {  
                 / *   i n s e r t   t i m e r   t o   s o f t   t i m e r   l i s t   * /  
                 t i m e r _ l i s t   =   r t _ s o f t _ t i m e r _ l i s t ;  
         }  
         e l s e  
 # e n d i f  
         {  
                 / *   i n s e r t   t i m e r   t o   s y s t e m   t i m e r   l i s t   * /  
                 t i m e r _ l i s t   =   r t _ t i m e r _ l i s t ;  
         }  
  
         r o w _ h e a d [ 0 ]     =   & t i m e r _ l i s t [ 0 ] ;  
         f o r   ( r o w _ l v l   =   0 ;   r o w _ l v l   <   R T _ T I M E R _ S K I P _ L I S T _ L E V E L ;   r o w _ l v l + + )  
         {  
                 f o r   ( ;   r o w _ h e a d [ r o w _ l v l ]   ! =   t i m e r _ l i s t [ r o w _ l v l ] . p r e v ;  
                           r o w _ h e a d [ r o w _ l v l ]     =   r o w _ h e a d [ r o w _ l v l ] - > n e x t )  
                 {  
                         s t r u c t   r t _ t i m e r   * t ;  
                         r t _ l i s t _ t   * p   =   r o w _ h e a d [ r o w _ l v l ] - > n e x t ;  
  
                         / *   f i x   u p   t h e   e n t r y   p o i n t e r   * /  
                         t   =   r t _ l i s t _ e n t r y ( p ,   s t r u c t   r t _ t i m e r ,   r o w [ r o w _ l v l ] ) ;  
  
                         / *   I f   w e   h a v e   t w o   t i m e r s   t h a t   t i m e o u t   a t   t h e   s a m e   t i m e ,   i t ' s  
                           *   p r e f e r r e d   t h a t   t h e   t i m e r   i n s e r t e d   e a r l y   g e t   c a l l e d   e a r l y .  
                           *   S o   i n s e r t   t h e   n e w   t i m e r   t o   t h e   e n d   t h e   t h e   s o m e - t i m e o u t   t i m e r  
                           *   l i s t .  
                           * /  
                         i f   ( ( t - > t i m e o u t _ t i c k   -   t i m e r - > t i m e o u t _ t i c k )   = =   0 )  
                         {  
                                 c o n t i n u e ;  
                         }  
                         e l s e   i f   ( ( t - > t i m e o u t _ t i c k   -   t i m e r - > t i m e o u t _ t i c k )   <   R T _ T I C K _ M A X   /   2 )  
                         {  
                                 b r e a k ;  
                         }  
                 }  
                 i f   ( r o w _ l v l   ! =   R T _ T I M E R _ S K I P _ L I S T _ L E V E L   -   1 )  
                         r o w _ h e a d [ r o w _ l v l   +   1 ]   =   r o w _ h e a d [ r o w _ l v l ]   +   1 ;  
         }  
  
         / *   I n t e r e s t i n g l y ,   t h i s   s u p e r   s i m p l e   t i m e r   i n s e r t   c o u n t e r   w o r k s   v e r y   v e r y  
           *   w e l l   o n   d i s t r i b u t i n g   t h e   l i s t   h e i g h t   u n i f o r m l y .   B y   m e a n s   o f   " v e r y   v e r y  
           *   w e l l " ,   I   m e a n   i t   b e a t s   t h e   r a n d o m n e s s   o f   t i m e r - > t i m e o u t _ t i c k   v e r y   e a s i l y  
           *   ( a c t u a l l y ,   t h e   t i m e o u t _ t i c k   i s   n o t   r a n d o m   a n d   e a s y   t o   b e   a t t a c k e d ) .   * /  
         r a n d o m _ n r + + ;  
         t s t _ n r   =   r a n d o m _ n r ;  
  
         r t _ l i s t _ i n s e r t _ a f t e r ( r o w _ h e a d [ R T _ T I M E R _ S K I P _ L I S T _ L E V E L   -   1 ] ,  
                                                   & ( t i m e r - > r o w [ R T _ T I M E R _ S K I P _ L I S T _ L E V E L   -   1 ] ) ) ;  
         f o r   ( r o w _ l v l   =   2 ;   r o w _ l v l   < =   R T _ T I M E R _ S K I P _ L I S T _ L E V E L ;   r o w _ l v l + + )  
         {  
                 i f   ( ! ( t s t _ n r   &   R T _ T I M E R _ S K I P _ L I S T _ M A S K ) )  
                         r t _ l i s t _ i n s e r t _ a f t e r ( r o w _ h e a d [ R T _ T I M E R _ S K I P _ L I S T _ L E V E L   -   r o w _ l v l ] ,  
                                                                   & ( t i m e r - > r o w [ R T _ T I M E R _ S K I P _ L I S T _ L E V E L   -   r o w _ l v l ] ) ) ;  
                 e l s e  
                         b r e a k ;  
                 / *   S h i f t   o v e r   t h e   b i t s   w e   h a v e   t e s t e d .   W o r k s   w e l l   w i t h   1   b i t   a n d   2  
                   *   b i t s .   * /  
                 t s t _ n r   > > =   ( R T _ T I M E R _ S K I P _ L I S T _ M A S K   +   1 )   > >   1 ;  
         }  
  
         t i m e r - > p a r e n t . f l a g   | =   R T _ T I M E R _ F L A G _ A C T I V A T E D ;  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
 # i f d e f   R T _ U S I N G _ T I M E R _ S O F T  
         i f   ( t i m e r - > p a r e n t . f l a g   &   R T _ T I M E R _ F L A G _ S O F T _ T I M E R )  
         {  
                 / *   c h e c k   w h e t h e r   t i m e r   t h r e a d   i s   r e a d y   * /  
                 i f   ( ( s o f t _ t i m e r _ s t a t u s   = =   R T _ S O F T _ T I M E R _ I D L E )   & &  
                       ( ( t i m e r _ t h r e a d . s t a t   &   R T _ T H R E A D _ S T A T _ M A S K )   = =   R T _ T H R E A D _ S U S P E N D ) )  
                 {  
                         / *   r e s u m e   t i m e r   t h r e a d   t o   c h e c k   s o f t   t i m e r   * /  
                         r t _ t h r e a d _ r e s u m e ( & t i m e r _ t h r e a d ) ;  
                         r t _ s c h e d u l e ( ) ;  
                 }  
         }  
 # e n d i f  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   s t o p   t h e   t i m e r  
   *  
   *   @ p a r a m   t i m e r   t h e   t i m e r   t o   b e   s t o p p e d  
   *  
   *   @ r e t u r n   t h e   o p e r a t i o n   s t a t u s ,   R T _ E O K   o n   O K ,   - R T _ E R R O R   o n   e r r o r  
   * /  
 r t _ e r r _ t   r t _ t i m e r _ s t o p ( r t _ t i m e r _ t   t i m e r )  
 {  
         r e g i s t e r   r t _ b a s e _ t   l e v e l ;  
  
         / *   t i m e r   c h e c k   * /  
         R T _ A S S E R T ( t i m e r   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & t i m e r - > p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ T i m e r ) ;  
  
         i f   ( ! ( t i m e r - > p a r e n t . f l a g   &   R T _ T I M E R _ F L A G _ A C T I V A T E D ) )  
                 r e t u r n   - R T _ E R R O R ;  
  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ o b j e c t _ p u t _ h o o k ,   ( & ( t i m e r - > p a r e n t ) ) ) ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         _ r t _ t i m e r _ r e m o v e ( t i m e r ) ;  
         / *   c h a n g e   s t a t u s   * /  
         t i m e r - > p a r e n t . f l a g   & =   ~ R T _ T I M E R _ F L A G _ A C T I V A T E D ;  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   g e t   o r   s e t   s o m e   o p t i o n s   o f   t h e   t i m e r  
   *  
   *   @ p a r a m   t i m e r   t h e   t i m e r   t o   b e   g e t   o r   s e t  
   *   @ p a r a m   c m d   t h e   c o n t r o l   c o m m a n d  
   *   @ p a r a m   a r g   t h e   a r g u m e n t  
   *  
   *   @ r e t u r n   R T _ E O K  
   * /  
 r t _ e r r _ t   r t _ t i m e r _ c o n t r o l ( r t _ t i m e r _ t   t i m e r ,   i n t   c m d ,   v o i d   * a r g )  
 {  
         r e g i s t e r   r t _ b a s e _ t   l e v e l ;  
  
         / *   t i m e r   c h e c k   * /  
         R T _ A S S E R T ( t i m e r   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & t i m e r - > p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ T i m e r ) ;  
  
         l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
         s w i t c h   ( c m d )  
         {  
         c a s e   R T _ T I M E R _ C T R L _ G E T _ T I M E :  
                 * ( r t _ t i c k _ t   * ) a r g   =   t i m e r - > i n i t _ t i c k ;  
                 b r e a k ;  
  
         c a s e   R T _ T I M E R _ C T R L _ S E T _ T I M E :  
                 t i m e r - > i n i t _ t i c k   =   * ( r t _ t i c k _ t   * ) a r g ;  
                 b r e a k ;  
  
         c a s e   R T _ T I M E R _ C T R L _ S E T _ O N E S H O T :  
                 t i m e r - > p a r e n t . f l a g   & =   ~ R T _ T I M E R _ F L A G _ P E R I O D I C ;  
                 b r e a k ;  
  
         c a s e   R T _ T I M E R _ C T R L _ S E T _ P E R I O D I C :  
                 t i m e r - > p a r e n t . f l a g   | =   R T _ T I M E R _ F L A G _ P E R I O D I C ;  
                 b r e a k ;  
  
         c a s e   R T _ T I M E R _ C T R L _ G E T _ S T A T E :  
                 i f ( t i m e r - > p a r e n t . f l a g   &   R T _ T I M E R _ F L A G _ A C T I V A T E D )  
                 {  
                         / * t i m e r   i s   s t a r t   a n d   r u n * /  
                         * ( r t _ t i c k _ t   * ) a r g   =   R T _ T I M E R _ F L A G _ A C T I V A T E D ;  
                 }  
                 e l s e  
                 {  
                         / * t i m e r   i s   s t o p * /  
                         * ( r t _ t i c k _ t   * ) a r g   =   R T _ T I M E R _ F L A G _ D E A C T I V A T E D ;  
                 }  
                 b r e a k ;  
  
         d e f a u l t :  
                 b r e a k ;  
         }  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   c h e c k   t i m e r   l i s t ,   i f   a   t i m e o u t   e v e n t   h a p p e n s ,   t h e  
   *   c o r r e s p o n d i n g   t i m e o u t   f u n c t i o n   w i l l   b e   i n v o k e d .  
   *  
   *   @ n o t e   t h i s   f u n c t i o n   s h a l l   b e   i n v o k e d   i n   o p e r a t i n g   s y s t e m   t i m e r   i n t e r r u p t .  
   * /  
 v o i d   r t _ t i m e r _ c h e c k ( v o i d )  
 {  
         s t r u c t   r t _ t i m e r   * t ;  
         r t _ t i c k _ t   c u r r e n t _ t i c k ;  
         r e g i s t e r   r t _ b a s e _ t   l e v e l ;  
         r t _ l i s t _ t   l i s t ;  
  
         r t _ l i s t _ i n i t ( & l i s t ) ;  
  
         R T _ D E B U G _ L O G ( R T _ D E B U G _ T I M E R ,   ( " t i m e r   c h e c k   e n t e r \ n " ) ) ;  
  
         c u r r e n t _ t i c k   =   r t _ t i c k _ g e t ( ) ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         w h i l e   ( ! r t _ l i s t _ i s e m p t y ( & r t _ t i m e r _ l i s t [ R T _ T I M E R _ S K I P _ L I S T _ L E V E L   -   1 ] ) )  
         {  
                 t   =   r t _ l i s t _ e n t r y ( r t _ t i m e r _ l i s t [ R T _ T I M E R _ S K I P _ L I S T _ L E V E L   -   1 ] . n e x t ,  
                                                     s t r u c t   r t _ t i m e r ,   r o w [ R T _ T I M E R _ S K I P _ L I S T _ L E V E L   -   1 ] ) ;  
  
                 / *  
                   *   I t   s u p p o s e s   t h a t   t h e   n e w   t i c k   s h a l l   l e s s   t h a n   t h e   h a l f   d u r a t i o n   o f  
                   *   t i c k   m a x .  
                   * /  
                 i f   ( ( c u r r e n t _ t i c k   -   t - > t i m e o u t _ t i c k )   <   R T _ T I C K _ M A X   /   2 )  
                 {  
                         R T _ O B J E C T _ H O O K _ C A L L ( r t _ t i m e r _ e n t e r _ h o o k ,   ( t ) ) ;  
  
                         / *   r e m o v e   t i m e r   f r o m   t i m e r   l i s t   f i r s t l y   * /  
                         _ r t _ t i m e r _ r e m o v e ( t ) ;  
                         i f   ( ! ( t - > p a r e n t . f l a g   &   R T _ T I M E R _ F L A G _ P E R I O D I C ) )  
                         {  
                                 t - > p a r e n t . f l a g   & =   ~ R T _ T I M E R _ F L A G _ A C T I V A T E D ;  
                         }  
                         / *   a d d   t i m e r   t o   t e m p o r a r y   l i s t     * /  
                         r t _ l i s t _ i n s e r t _ a f t e r ( & l i s t ,   & ( t - > r o w [ R T _ T I M E R _ S K I P _ L I S T _ L E V E L   -   1 ] ) ) ;  
                         / *   c a l l   t i m e o u t   f u n c t i o n   * /  
                         t - > t i m e o u t _ f u n c ( t - > p a r a m e t e r ) ;  
  
                         / *   r e - g e t   t i c k   * /  
                         c u r r e n t _ t i c k   =   r t _ t i c k _ g e t ( ) ;  
  
                         R T _ O B J E C T _ H O O K _ C A L L ( r t _ t i m e r _ e x i t _ h o o k ,   ( t ) ) ;  
                         R T _ D E B U G _ L O G ( R T _ D E B U G _ T I M E R ,   ( " c u r r e n t   t i c k :   % d \ n " ,   c u r r e n t _ t i c k ) ) ;  
  
                         / *   C h e c k   w h e t h e r   t h e   t i m e r   o b j e c t   i s   d e t a c h e d   o r   s t a r t e d   a g a i n   * /  
                         i f   ( r t _ l i s t _ i s e m p t y ( & l i s t ) )  
                         {  
                                 c o n t i n u e ;  
                         }  
                         r t _ l i s t _ r e m o v e ( & ( t - > r o w [ R T _ T I M E R _ S K I P _ L I S T _ L E V E L   -   1 ] ) ) ;  
                         i f   ( ( t - > p a r e n t . f l a g   &   R T _ T I M E R _ F L A G _ P E R I O D I C )   & &  
                                 ( t - > p a r e n t . f l a g   &   R T _ T I M E R _ F L A G _ A C T I V A T E D ) )  
                         {  
                                 / *   s t a r t   i t   * /  
                                 t - > p a r e n t . f l a g   & =   ~ R T _ T I M E R _ F L A G _ A C T I V A T E D ;  
                                 r t _ t i m e r _ s t a r t ( t ) ;  
                         }  
                 }  
                 e l s e   b r e a k ;  
         }  
  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
         R T _ D E B U G _ L O G ( R T _ D E B U G _ T I M E R ,   ( " t i m e r   c h e c k   l e a v e \ n " ) ) ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   r e t u r n   t h e   n e x t   t i m e o u t   t i c k   i n   t h e   s y s t e m .  
   *  
   *   @ r e t u r n   t h e   n e x t   t i m e o u t   t i c k   i n   t h e   s y s t e m  
   * /  
 r t _ t i c k _ t   r t _ t i m e r _ n e x t _ t i m e o u t _ t i c k ( v o i d )  
 {  
         r e t u r n   r t _ t i m e r _ l i s t _ n e x t _ t i m e o u t ( r t _ t i m e r _ l i s t ) ;  
 }  
  
 # i f d e f   R T _ U S I N G _ T I M E R _ S O F T  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   c h e c k   s o f t w a r e - t i m e r   l i s t ,   i f   a   t i m e o u t   e v e n t   h a p p e n s ,   t h e  
   *   c o r r e s p o n d i n g   t i m e o u t   f u n c t i o n   w i l l   b e   i n v o k e d .  
   * /  
 v o i d   r t _ s o f t _ t i m e r _ c h e c k ( v o i d )  
 {  
         r t _ t i c k _ t   c u r r e n t _ t i c k ;  
         s t r u c t   r t _ t i m e r   * t ;  
         r e g i s t e r   r t _ b a s e _ t   l e v e l ;  
         r t _ l i s t _ t   l i s t ;  
  
         r t _ l i s t _ i n i t ( & l i s t ) ;  
  
         R T _ D E B U G _ L O G ( R T _ D E B U G _ T I M E R ,   ( " s o f t w a r e   t i m e r   c h e c k   e n t e r \ n " ) ) ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         w h i l e   ( ! r t _ l i s t _ i s e m p t y ( & r t _ s o f t _ t i m e r _ l i s t [ R T _ T I M E R _ S K I P _ L I S T _ L E V E L   -   1 ] ) )  
         {  
                 t   =   r t _ l i s t _ e n t r y ( r t _ s o f t _ t i m e r _ l i s t [ R T _ T I M E R _ S K I P _ L I S T _ L E V E L   -   1 ] . n e x t ,  
                                                         s t r u c t   r t _ t i m e r ,   r o w [ R T _ T I M E R _ S K I P _ L I S T _ L E V E L   -   1 ] ) ;  
  
                 c u r r e n t _ t i c k   =   r t _ t i c k _ g e t ( ) ;  
  
                 / *  
                   *   I t   s u p p o s e s   t h a t   t h e   n e w   t i c k   s h a l l   l e s s   t h a n   t h e   h a l f   d u r a t i o n   o f  
                   *   t i c k   m a x .  
                   * /  
                 i f   ( ( c u r r e n t _ t i c k   -   t - > t i m e o u t _ t i c k )   <   R T _ T I C K _ M A X   /   2 )  
                 {  
                         R T _ O B J E C T _ H O O K _ C A L L ( r t _ t i m e r _ e n t e r _ h o o k ,   ( t ) ) ;  
  
                         / *   r e m o v e   t i m e r   f r o m   t i m e r   l i s t   f i r s t l y   * /  
                         _ r t _ t i m e r _ r e m o v e ( t ) ;  
                         i f   ( ! ( t - > p a r e n t . f l a g   &   R T _ T I M E R _ F L A G _ P E R I O D I C ) )  
                         {  
                                 t - > p a r e n t . f l a g   & =   ~ R T _ T I M E R _ F L A G _ A C T I V A T E D ;  
                         }  
                         / *   a d d   t i m e r   t o   t e m p o r a r y   l i s t     * /  
                         r t _ l i s t _ i n s e r t _ a f t e r ( & l i s t ,   & ( t - > r o w [ R T _ T I M E R _ S K I P _ L I S T _ L E V E L   -   1 ] ) ) ;  
  
                         s o f t _ t i m e r _ s t a t u s   =   R T _ S O F T _ T I M E R _ B U S Y ;  
                         / *   e n a b l e   i n t e r r u p t   * /  
                         r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
                         / *   c a l l   t i m e o u t   f u n c t i o n   * /  
                         t - > t i m e o u t _ f u n c ( t - > p a r a m e t e r ) ;  
  
                         R T _ O B J E C T _ H O O K _ C A L L ( r t _ t i m e r _ e x i t _ h o o k ,   ( t ) ) ;  
                         R T _ D E B U G _ L O G ( R T _ D E B U G _ T I M E R ,   ( " c u r r e n t   t i c k :   % d \ n " ,   c u r r e n t _ t i c k ) ) ;  
  
                         / *   d i s a b l e   i n t e r r u p t   * /  
                         l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
                         s o f t _ t i m e r _ s t a t u s   =   R T _ S O F T _ T I M E R _ I D L E ;  
                         / *   C h e c k   w h e t h e r   t h e   t i m e r   o b j e c t   i s   d e t a c h e d   o r   s t a r t e d   a g a i n   * /  
                         i f   ( r t _ l i s t _ i s e m p t y ( & l i s t ) )  
                         {  
                                 c o n t i n u e ;  
                         }  
                         r t _ l i s t _ r e m o v e ( & ( t - > r o w [ R T _ T I M E R _ S K I P _ L I S T _ L E V E L   -   1 ] ) ) ;  
                         i f   ( ( t - > p a r e n t . f l a g   &   R T _ T I M E R _ F L A G _ P E R I O D I C )   & &  
                                 ( t - > p a r e n t . f l a g   &   R T _ T I M E R _ F L A G _ A C T I V A T E D ) )  
                         {  
                                 / *   s t a r t   i t   * /  
                                 t - > p a r e n t . f l a g   & =   ~ R T _ T I M E R _ F L A G _ A C T I V A T E D ;  
                                 r t _ t i m e r _ s t a r t ( t ) ;  
                         }  
                 }  
                 e l s e   b r e a k ;   / *   n o t   c h e c k   a n y m o r e   * /  
         }  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
         R T _ D E B U G _ L O G ( R T _ D E B U G _ T I M E R ,   ( " s o f t w a r e   t i m e r   c h e c k   l e a v e \ n " ) ) ;  
 }  
  
 / *   s y s t e m   t i m e r   t h r e a d   e n t r y   * /  
 s t a t i c   v o i d   r t _ t h r e a d _ t i m e r _ e n t r y ( v o i d   * p a r a m e t e r )  
 {  
         r t _ t i c k _ t   n e x t _ t i m e o u t ;  
  
         w h i l e   ( 1 )  
         {  
                 / *   g e t   t h e   n e x t   t i m e o u t   t i c k   * /  
                 n e x t _ t i m e o u t   =   r t _ t i m e r _ l i s t _ n e x t _ t i m e o u t ( r t _ s o f t _ t i m e r _ l i s t ) ;  
                 i f   ( n e x t _ t i m e o u t   = =   R T _ T I C K _ M A X )  
                 {  
                         / *   n o   s o f t w a r e   t i m e r   e x i s t ,   s u s p e n d   s e l f .   * /  
                         r t _ t h r e a d _ s u s p e n d ( r t _ t h r e a d _ s e l f ( ) ) ;  
                         r t _ s c h e d u l e ( ) ;  
                 }  
                 e l s e  
                 {  
                         r t _ t i c k _ t   c u r r e n t _ t i c k ;  
  
                         / *   g e t   c u r r e n t   t i c k   * /  
                         c u r r e n t _ t i c k   =   r t _ t i c k _ g e t ( ) ;  
  
                         i f   ( ( n e x t _ t i m e o u t   -   c u r r e n t _ t i c k )   <   R T _ T I C K _ M A X   /   2 )  
                         {  
                                 / *   g e t   t h e   d e l t a   t i m e o u t   t i c k   * /  
                                 n e x t _ t i m e o u t   =   n e x t _ t i m e o u t   -   c u r r e n t _ t i c k ;  
                                 r t _ t h r e a d _ d e l a y ( n e x t _ t i m e o u t ) ;  
                         }  
                 }  
  
                 / *   c h e c k   s o f t w a r e   t i m e r   * /  
                 r t _ s o f t _ t i m e r _ c h e c k ( ) ;  
         }  
 }  
 # e n d i f  
  
 / * *  
   *   @ i n g r o u p   S y s t e m I n i t  
   *  
   *   T h i s   f u n c t i o n   w i l l   i n i t i a l i z e   s y s t e m   t i m e r  
   * /  
 v o i d   r t _ s y s t e m _ t i m e r _ i n i t ( v o i d )  
 {  
         i n t   i ;  
  
         f o r   ( i   =   0 ;   i   <   s i z e o f ( r t _ t i m e r _ l i s t )   /   s i z e o f ( r t _ t i m e r _ l i s t [ 0 ] ) ;   i + + )  
         {  
                 r t _ l i s t _ i n i t ( r t _ t i m e r _ l i s t   +   i ) ;  
         }  
 }  
  
 / * *  
   *   @ i n g r o u p   S y s t e m I n i t  
   *  
   *   T h i s   f u n c t i o n   w i l l   i n i t i a l i z e   s y s t e m   t i m e r   t h r e a d  
   * /  
 v o i d   r t _ s y s t e m _ t i m e r _ t h r e a d _ i n i t ( v o i d )  
 {  
 # i f d e f   R T _ U S I N G _ T I M E R _ S O F T  
         i n t   i ;  
  
         f o r   ( i   =   0 ;  
                   i   <   s i z e o f ( r t _ s o f t _ t i m e r _ l i s t )   /   s i z e o f ( r t _ s o f t _ t i m e r _ l i s t [ 0 ] ) ;  
                   i + + )  
         {  
                 r t _ l i s t _ i n i t ( r t _ s o f t _ t i m e r _ l i s t   +   i ) ;  
         }  
  
         / *   s t a r t   s o f t w a r e   t i m e r   t h r e a d   * /  
         r t _ t h r e a d _ i n i t ( & t i m e r _ t h r e a d ,  
                                       " t i m e r " ,  
                                       r t _ t h r e a d _ t i m e r _ e n t r y ,  
                                       R T _ N U L L ,  
                                       & t i m e r _ t h r e a d _ s t a c k [ 0 ] ,  
                                       s i z e o f ( t i m e r _ t h r e a d _ s t a c k ) ,  
                                       R T _ T I M E R _ T H R E A D _ P R I O ,  
                                       1 0 ) ;  
  
         / *   s t a r t u p   * /  
         r t _ t h r e a d _ s t a r t u p ( & t i m e r _ t h r e a d ) ;  
 # e n d i f  
 }  
  
 / * * @ } * /  