??/ *  
   *   C o p y r i g h t   ( c )   2 0 0 6 - 2 0 2 1 ,   R T - T h r e a d   D e v e l o p m e n t   T e a m  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   C h a n g e   L o g s :  
   *   D a t e                       A u t h o r               N o t e s  
   *   2 0 0 6 - 0 3 - 2 3           B e r n a r d             t h e   f i r s t   v e r s i o n  
   *   2 0 1 0 - 1 1 - 1 0           B e r n a r d             a d d   c l e a n u p   c a l l b a c k   f u n c t i o n   i n   t h r e a d   e x i t .  
   *   2 0 1 2 - 1 2 - 2 9           B e r n a r d             f i x   c o m p i l i n g   w a r n i n g .  
   *   2 0 1 3 - 1 2 - 2 1           G r i s s i o m           l e t   r t _ t h r e a d _ i d l e _ e x c u t e   l o o p   u n t i l   t h e r e   i s   n o  
   *                                                           d e a d   t h r e a d .  
   *   2 0 1 6 - 0 8 - 0 9           A r d a F u               a d d   m e t h o d   t o   g e t   t h e   h a n d l e r   o f   t h e   i d l e   t h r e a d .  
   *   2 0 1 8 - 0 2 - 0 7           B e r n a r d             l o c k   s c h e d u l e r   t o   p r o t e c t   t i d - > c l e a n u p .  
   *   2 0 1 8 - 0 7 - 1 4           a r m i n k               a d d   i d l e   h o o k   l i s t  
   *   2 0 1 8 - 1 1 - 2 2           J e s v e n               a d d   p e r   c p u   i d l e   t a s k  
   *                                                           c o m b i n e   t h e   c o d e   o f   p r i m a r y   a n d   s e c o n d a r y   c p u  
   * /  
  
 # i n c l u d e   < r t h w . h >  
 # i n c l u d e   < r t t h r e a d . h >  
  
 # i f   d e f i n e d   ( R T _ U S I N G _ H O O K )  
 # i f n d e f   R T _ U S I N G _ I D L E _ H O O K  
 # d e f i n e   R T _ U S I N G _ I D L E _ H O O K  
 # e n d i f  
 # e n d i f  
  
 # i f n d e f   I D L E _ T H R E A D _ S T A C K _ S I Z E  
 # i f   d e f i n e d   ( R T _ U S I N G _ I D L E _ H O O K )   | |   d e f i n e d ( R T _ U S I N G _ H E A P )  
 # d e f i n e   I D L E _ T H R E A D _ S T A C K _ S I Z E     2 5 6  
 # e l s e  
 # d e f i n e   I D L E _ T H R E A D _ S T A C K _ S I Z E     1 2 8  
 # e n d i f  
 # e n d i f  
  
 e x t e r n   r t _ l i s t _ t   r t _ t h r e a d _ d e f u n c t ;  
  
 s t a t i c   s t r u c t   r t _ t h r e a d   i d l e ;  
 A L I G N ( R T _ A L I G N _ S I Z E )  
 s t a t i c   r t _ u i n t 8 _ t   r t _ t h r e a d _ s t a c k [ I D L E _ T H R E A D _ S T A C K _ S I Z E ] ;  
  
 # i f d e f   R T _ U S I N G _ I D L E _ H O O K  
 # i f n d e f   R T _ I D L E _ H O O K _ L I S T _ S I Z E  
 # d e f i n e   R T _ I D L E _ H O O K _ L I S T _ S I Z E     4  
 # e n d i f  
  
 s t a t i c   v o i d   ( * i d l e _ h o o k _ l i s t [ R T _ I D L E _ H O O K _ L I S T _ S I Z E ] ) ( v o i d ) ;  
  
 / * *  
   *   @ i n g r o u p   H o o k  
   *   T h i s   f u n c t i o n   s e t s   a   h o o k   f u n c t i o n   t o   i d l e   t h r e a d   l o o p .   W h e n   t h e   s y s t e m   p e r f o r m s  
   *   i d l e   l o o p ,   t h i s   h o o k   f u n c t i o n   s h o u l d   b e   i n v o k e d .  
   *  
   *   @ p a r a m   h o o k   t h e   s p e c i f i e d   h o o k   f u n c t i o n  
   *  
   *   @ r e t u r n   R T _ E O K :   s e t   O K  
   *                   - R T _ E F U L L :   h o o k   l i s t   i s   f u l l  
   *  
   *   @ n o t e   t h e   h o o k   f u n c t i o n   m u s t   b e   s i m p l e   a n d   n e v e r   b e   b l o c k e d   o r   s u s p e n d .  
   * /  
 r t _ e r r _ t   r t _ t h r e a d _ i d l e _ s e t h o o k ( v o i d   ( * h o o k ) ( v o i d ) )  
 {  
         r t _ s i z e _ t   i ;  
         r t _ b a s e _ t   l e v e l ;  
         r t _ e r r _ t   r e t   =   - R T _ E F U L L ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         f o r   ( i   =   0 ;   i   <   R T _ I D L E _ H O O K _ L I S T _ S I Z E ;   i + + )  
         {  
                 i f   ( i d l e _ h o o k _ l i s t [ i ]   = =   R T _ N U L L )  
                 {  
                         i d l e _ h o o k _ l i s t [ i ]   =   h o o k ;  
                         r e t   =   R T _ E O K ;  
                         b r e a k ;  
                 }  
         }  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
         r e t u r n   r e t ;  
 }  
  
 / * *  
   *   d e l e t e   t h e   i d l e   h o o k   o n   h o o k   l i s t  
   *  
   *   @ p a r a m   h o o k   t h e   s p e c i f i e d   h o o k   f u n c t i o n  
   *  
   *   @ r e t u r n   R T _ E O K :   d e l e t e   O K  
   *                   - R T _ E N O S Y S :   h o o k   w a s   n o t   f o u n d  
   * /  
 r t _ e r r _ t   r t _ t h r e a d _ i d l e _ d e l h o o k ( v o i d   ( * h o o k ) ( v o i d ) )  
 {  
         r t _ s i z e _ t   i ;  
         r t _ b a s e _ t   l e v e l ;  
         r t _ e r r _ t   r e t   =   - R T _ E N O S Y S ;  
  
         / *   d i s a b l e   i n t e r r u p t   * /  
         l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         f o r   ( i   =   0 ;   i   <   R T _ I D L E _ H O O K _ L I S T _ S I Z E ;   i + + )  
         {  
                 i f   ( i d l e _ h o o k _ l i s t [ i ]   = =   h o o k )  
                 {  
                         i d l e _ h o o k _ l i s t [ i ]   =   R T _ N U L L ;  
                         r e t   =   R T _ E O K ;  
                         b r e a k ;  
                 }  
         }  
         / *   e n a b l e   i n t e r r u p t   * /  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
         r e t u r n   r e t ;  
 }  
  
 # e n d i f  
  
 # i f d e f   R T _ U S I N G _ H E A P  
 / *   R e t u r n   w h e t h e r   t h e r e   i s   d e f u n c t i o n a l   t h r e a d   t o   b e   d e l e t e d .   * /  
 r t _ i n l i n e   i n t   _ h a s _ d e f u n c t _ t h r e a d ( v o i d )  
 {  
         / *   T h e   r t _ l i s t _ i s e m p t y   h a s   p r o t o t y p e   o f   " i n t   r t _ l i s t _ i s e m p t y ( c o n s t   r t _ l i s t _ t   * l ) " .  
           *   S o   t h e   c o m p i l e r   h a s   a   g o o d   r e a s o n   t h a t   t h e   r t _ t h r e a d _ d e f u n c t   l i s t   d o e s  
           *   n o t   c h a n g e   w i t h i n   r t _ t h r e a d _ i d l e _ e x c u t e   t h u s   o p t i m i z e   t h e   " w h i l e "   l o o p  
           *   i n t o   a   " i f " .  
           *  
           *   S o   a d d   t h e   v o l a t i l e   q u a l i f i e r   h e r e .   * /  
         c o n s t   v o l a t i l e   r t _ l i s t _ t   * l   =   ( c o n s t   v o l a t i l e   r t _ l i s t _ t   * ) & r t _ t h r e a d _ d e f u n c t ;  
  
         r e t u r n   l - > n e x t   ! =   l ;  
 }  
 # e n d i f  
  
 / * *  
   *   @ i n g r o u p   T h r e a d  
   *  
   *   T h i s   f u n c t i o n   w i l l   p e r f o r m   s y s t e m   b a c k g r o u n d   j o b   w h e n   s y s t e m   i d l e .  
   * /  
 v o i d   r t _ t h r e a d _ i d l e _ e x c u t e ( v o i d )  
 {  
         / *   L o o p   u n t i l   t h e r e   i s   n o   d e a d   t h r e a d .   S o   o n e   c a l l   t o   r t _ t h r e a d _ i d l e _ e x c u t e  
           *   w i l l   d o   a l l   t h e   c l e a n u p s .   * /  
         / *   d i s a b l e   i n t e r r u p t   * /  
  
         R T _ D E B U G _ N O T _ I N _ I N T E R R U P T ;  
  
 # i f d e f   R T _ U S I N G _ H E A P  
         w h i l e   ( 1 )  
         {  
                 r t _ b a s e _ t   l o c k ;  
                 r t _ t h r e a d _ t   t h r e a d ;  
  
                 l o c k   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
                 / *   c h e c k   w h e t h e r   l i s t   i s   e m p t y   * /  
                 i f   ( ! _ h a s _ d e f u n c t _ t h r e a d ( ) )  
                 {  
                         r t _ h w _ i n t e r r u p t _ e n a b l e ( l o c k ) ;  
                         b r e a k ;  
                 }  
                 / *   g e t   d e f u n c t   t h r e a d   * /  
                 t h r e a d   =   r t _ l i s t _ e n t r y ( r t _ t h r e a d _ d e f u n c t . n e x t ,  
                                 s t r u c t   r t _ t h r e a d ,  
                                 t l i s t ) ;  
                 / *   r e m o v e   d e f u n c t   t h r e a d   * /  
                 r t _ l i s t _ r e m o v e ( & ( t h r e a d - > t l i s t ) ) ;  
                 / *   r e l e a s e   t h r e a d ' s   s t a c k   * /  
                 R T _ K E R N E L _ F R E E ( t h r e a d - > s t a c k _ a d d r ) ;  
                 / *   d e l e t e   t h r e a d   o b j e c t   * /  
                 r t _ o b j e c t _ d e l e t e ( ( r t _ o b j e c t _ t ) t h r e a d ) ;  
                 r t _ h w _ i n t e r r u p t _ e n a b l e ( l o c k ) ;  
         }  
 # e n d i f  
 }  
  
 e x t e r n   v o i d   r t _ s y s t e m _ p o w e r _ m a n a g e r ( v o i d ) ;  
 s t a t i c   v o i d   r t _ t h r e a d _ i d l e _ e n t r y ( v o i d   * p a r a m e t e r )  
 {  
         w h i l e   ( 1 )  
         {  
  
 # i f d e f   R T _ U S I N G _ I D L E _ H O O K  
                 r t _ s i z e _ t   i ;  
  
                 f o r   ( i   =   0 ;   i   <   R T _ I D L E _ H O O K _ L I S T _ S I Z E ;   i + + )  
                 {  
                         i f   ( i d l e _ h o o k _ l i s t [ i ]   ! =   R T _ N U L L )  
                         {  
                                 i d l e _ h o o k _ l i s t [ i ] ( ) ;  
                         }  
                 }  
 # e n d i f  
  
                 r t _ t h r e a d _ i d l e _ e x c u t e ( ) ;  
 # i f d e f   R T _ U S I N G _ P M  
                 r t _ s y s t e m _ p o w e r _ m a n a g e r ( ) ;  
 # e n d i f  
         }  
 }  
  
 / * *  
   *   @ i n g r o u p   S y s t e m I n i t  
   *  
   *   T h i s   f u n c t i o n   w i l l   i n i t i a l i z e   i d l e   t h r e a d ,   t h e n   s t a r t   i t .  
   *  
   *   @ n o t e   t h i s   f u n c t i o n   m u s t   b e   i n v o k e d   w h e n   s y s t e m   i n i t .  
   * /  
 v o i d   r t _ t h r e a d _ i d l e _ i n i t ( v o i d )  
 {  
         / *   i n i t i a l i z e   t h r e a d   * /  
         r t _ t h r e a d _ i n i t ( & i d l e ,  
                                       " t i d l e " ,  
                                       r t _ t h r e a d _ i d l e _ e n t r y ,  
                                       R T _ N U L L ,  
                                       & r t _ t h r e a d _ s t a c k [ 0 ] ,  
                                       s i z e o f ( r t _ t h r e a d _ s t a c k ) ,  
                                       R T _ T H R E A D _ P R I O R I T Y _ M A X   -   1 ,  
                                       3 2 ) ;  
  
         / *   s t a r t u p   * /  
         r t _ t h r e a d _ s t a r t u p ( & i d l e ) ;  
 }  
  
 / * *  
   *   @ i n g r o u p   T h r e a d  
   *  
   *   T h i s   f u n c t i o n   w i l l   g e t   t h e   h a n d l e r   o f   t h e   i d l e   t h r e a d .  
   *  
   * /  
 r t _ t h r e a d _ t   r t _ t h r e a d _ i d l e _ g e t h a n d l e r ( v o i d )  
 {  
         r e t u r n   ( r t _ t h r e a d _ t ) ( & i d l e ) ;  
 }  