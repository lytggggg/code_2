??/ *  
   *   C o p y r i g h t   ( c )   2 0 0 6 - 2 0 2 1 ,   R T - T h r e a d   D e v e l o p m e n t   T e a m  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   C h a n g e   L o g s :  
   *   D a t e                       A u t h o r               N o t e s  
   *   2 0 0 8 - 7 - 1 2             B e r n a r d             t h e   f i r s t   v e r s i o n  
   *   2 0 1 0 - 0 6 - 0 9           B e r n a r d             f i x   t h e   e n d   s t u b   o f   h e a p  
   *                                                           f i x   m e m o r y   c h e c k   i n   r t _ r e a l l o c   f u n c t i o n  
   *   2 0 1 0 - 0 7 - 1 3           B e r n a r d             f i x   R T _ A L I G N   i s s u e   f o u n d   b y   k u r o n c a  
   *   2 0 1 0 - 1 0 - 1 4           B e r n a r d             f i x   r t _ r e a l l o c   i s s u e   w h e n   r e a l l o c   a   N U L L   p o i n t e r .  
   *   2 0 1 7 - 0 7 - 1 4           a r m i n k               f i x   r t _ r e a l l o c   i s s u e   w h e n   n e w   s i z e   i s   0  
   *   2 0 1 8 - 1 0 - 0 2           B e r n a r d             A d d   6 4 b i t   s u p p o r t  
   * /  
  
 / *  
   *   C o p y r i g h t   ( c )   2 0 0 1 - 2 0 0 4   S w e d i s h   I n s t i t u t e   o f   C o m p u t e r   S c i e n c e .  
   *   A l l   r i g h t s   r e s e r v e d .  
   *  
   *   R e d i s t r i b u t i o n   a n d   u s e   i n   s o u r c e   a n d   b i n a r y   f o r m s ,   w i t h   o r   w i t h o u t   m o d i f i c a t i o n ,  
   *   a r e   p e r m i t t e d   p r o v i d e d   t h a t   t h e   f o l l o w i n g   c o n d i t i o n s   a r e   m e t :  
   *  
   *   1 .   R e d i s t r i b u t i o n s   o f   s o u r c e   c o d e   m u s t   r e t a i n   t h e   a b o v e   c o p y r i g h t   n o t i c e ,  
   *         t h i s   l i s t   o f   c o n d i t i o n s   a n d   t h e   f o l l o w i n g   d i s c l a i m e r .  
   *   2 .   R e d i s t r i b u t i o n s   i n   b i n a r y   f o r m   m u s t   r e p r o d u c e   t h e   a b o v e   c o p y r i g h t   n o t i c e ,  
   *         t h i s   l i s t   o f   c o n d i t i o n s   a n d   t h e   f o l l o w i n g   d i s c l a i m e r   i n   t h e   d o c u m e n t a t i o n  
   *         a n d / o r   o t h e r   m a t e r i a l s   p r o v i d e d   w i t h   t h e   d i s t r i b u t i o n .  
   *   3 .   T h e   n a m e   o f   t h e   a u t h o r   m a y   n o t   b e   u s e d   t o   e n d o r s e   o r   p r o m o t e   p r o d u c t s  
   *         d e r i v e d   f r o m   t h i s   s o f t w a r e   w i t h o u t   s p e c i f i c   p r i o r   w r i t t e n   p e r m i s s i o n .  
   *  
   *   T H I S   S O F T W A R E   I S   P R O V I D E D   B Y   T H E   A U T H O R   ` ` A S   I S ' '   A N D   A N Y   E X P R E S S   O R   I M P L I E D  
   *   W A R R A N T I E S ,   I N C L U D I N G ,   B U T   N O T   L I M I T E D   T O ,   T H E   I M P L I E D   W A R R A N T I E S   O F  
   *   M E R C H A N T A B I L I T Y   A N D   F I T N E S S   F O R   A   P A R T I C U L A R   P U R P O S E   A R E   D I S C L A I M E D .   I N   N O   E V E N T  
   *   S H A L L   T H E   A U T H O R   B E   L I A B L E   F O R   A N Y   D I R E C T ,   I N D I R E C T ,   I N C I D E N T A L ,   S P E C I A L ,  
   *   E X E M P L A R Y ,   O R   C O N S E Q U E N T I A L   D A M A G E S   ( I N C L U D I N G ,   B U T   N O T   L I M I T E D   T O ,   P R O C U R E M E N T  
   *   O F   S U B S T I T U T E   G O O D S   O R   S E R V I C E S ;   L O S S   O F   U S E ,   D A T A ,   O R   P R O F I T S ;   O R   B U S I N E S S  
   *   I N T E R R U P T I O N )   H O W E V E R   C A U S E D   A N D   O N   A N Y   T H E O R Y   O F   L I A B I L I T Y ,   W H E T H E R   I N  
   *   C O N T R A C T ,   S T R I C T   L I A B I L I T Y ,   O R   T O R T   ( I N C L U D I N G   N E G L I G E N C E   O R   O T H E R W I S E )   A R I S I N G  
   *   I N   A N Y   W A Y   O U T   O F   T H E   U S E   O F   T H I S   S O F T W A R E ,   E V E N   I F   A D V I S E D   O F   T H E   P O S S I B I L I T Y  
   *   O F   S U C H   D A M A G E .  
   *  
   *   T h i s   f i l e   i s   p a r t   o f   t h e   l w I P   T C P / I P   s t a c k .  
   *  
   *   A u t h o r :   A d a m   D u n k e l s   < a d a m @ s i c s . s e >  
   *                   S i m o n   G o l d s c h m i d t  
   *  
   * /  
  
 # i n c l u d e   < r t h w . h >  
 # i n c l u d e   < r t t h r e a d . h >  
  
 # i f n d e f   R T _ U S I N G _ M E M H E A P _ A S _ H E A P  
  
 / *   # d e f i n e   R T _ M E M _ D E B U G   * /  
 # d e f i n e   R T _ M E M _ S T A T S  
  
 # i f   d e f i n e d   ( R T _ U S I N G _ H E A P )   & &   d e f i n e d   ( R T _ U S I N G _ S M A L L _ M E M )  
 # i f d e f   R T _ U S I N G _ H O O K  
 s t a t i c   v o i d   ( * r t _ m a l l o c _ h o o k ) ( v o i d   * p t r ,   r t _ s i z e _ t   s i z e ) ;  
 s t a t i c   v o i d   ( * r t _ f r e e _ h o o k ) ( v o i d   * p t r ) ;  
  
 / * *  
   *   @ a d d t o g r o u p   H o o k  
   * /  
  
 / * * @ { * /  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   s e t   a   h o o k   f u n c t i o n ,   w h i c h   w i l l   b e   i n v o k e d   w h e n   a   m e m o r y  
   *   b l o c k   i s   a l l o c a t e d   f r o m   h e a p   m e m o r y .  
   *  
   *   @ p a r a m   h o o k   t h e   h o o k   f u n c t i o n  
   * /  
 v o i d   r t _ m a l l o c _ s e t h o o k ( v o i d   ( * h o o k ) ( v o i d   * p t r ,   r t _ s i z e _ t   s i z e ) )  
 {  
         r t _ m a l l o c _ h o o k   =   h o o k ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   s e t   a   h o o k   f u n c t i o n ,   w h i c h   w i l l   b e   i n v o k e d   w h e n   a   m e m o r y  
   *   b l o c k   i s   r e l e a s e d   t o   h e a p   m e m o r y .  
   *  
   *   @ p a r a m   h o o k   t h e   h o o k   f u n c t i o n  
   * /  
 v o i d   r t _ f r e e _ s e t h o o k ( v o i d   ( * h o o k ) ( v o i d   * p t r ) )  
 {  
         r t _ f r e e _ h o o k   =   h o o k ;  
 }  
  
 / * * @ } * /  
  
 # e n d i f  
  
 # d e f i n e   H E A P _ M A G I C   0 x 1 e a 0  
 s t r u c t   h e a p _ m e m  
 {  
         / *   m a g i c   a n d   u s e d   f l a g   * /  
         r t _ u i n t 1 6 _ t   m a g i c ;  
         r t _ u i n t 1 6 _ t   u s e d ;  
 # i f d e f   A R C H _ C P U _ 6 4 B I T  
         r t _ u i n t 3 2 _ t   r e s v ;  
 # e n d i f  
  
         r t _ s i z e _ t   n e x t ,   p r e v ;  
  
 # i f d e f   R T _ U S I N G _ M E M T R A C E  
 # i f d e f   A R C H _ C P U _ 6 4 B I T  
         r t _ u i n t 8 _ t   t h r e a d [ 8 ] ;  
 # e l s e  
         r t _ u i n t 8 _ t   t h r e a d [ 4 ] ;       / *   t h r e a d   n a m e   * /  
 # e n d i f  
 # e n d i f  
 } ;  
  
 / * *   p o i n t e r   t o   t h e   h e a p :   f o r   a l i g n m e n t ,   h e a p _ p t r   i s   n o w   a   p o i n t e r   i n s t e a d   o f   a n   a r r a y   * /  
 s t a t i c   r t _ u i n t 8 _ t   * h e a p _ p t r ;  
  
 / * *   t h e   l a s t   e n t r y ,   a l w a y s   u n u s e d !   * /  
 s t a t i c   s t r u c t   h e a p _ m e m   * h e a p _ e n d ;  
  
 # i f d e f   A R C H _ C P U _ 6 4 B I T  
 # d e f i n e   M I N _ S I Z E   2 4  
 # e l s e  
 # d e f i n e   M I N _ S I Z E   1 2  
 # e n d i f  
  
 # d e f i n e   M I N _ S I Z E _ A L I G N E D           R T _ A L I G N ( M I N _ S I Z E ,   R T _ A L I G N _ S I Z E )  
 # d e f i n e   S I Z E O F _ S T R U C T _ M E M         R T _ A L I G N ( s i z e o f ( s t r u c t   h e a p _ m e m ) ,   R T _ A L I G N _ S I Z E )  
  
 s t a t i c   s t r u c t   h e a p _ m e m   * l f r e e ;       / *   p o i n t e r   t o   t h e   l o w e s t   f r e e   b l o c k   * /  
  
 s t a t i c   s t r u c t   r t _ s e m a p h o r e   h e a p _ s e m ;  
 s t a t i c   r t _ s i z e _ t   m e m _ s i z e _ a l i g n e d ;  
  
 # i f d e f   R T _ M E M _ S T A T S  
 s t a t i c   r t _ s i z e _ t   u s e d _ m e m ,   m a x _ m e m ;  
 # e n d i f  
 # i f d e f   R T _ U S I N G _ M E M T R A C E  
 r t _ i n l i n e   v o i d   r t _ m e m _ s e t n a m e ( s t r u c t   h e a p _ m e m   * m e m ,   c o n s t   c h a r   * n a m e )  
 {  
         i n t   i n d e x ;  
         f o r   ( i n d e x   =   0 ;   i n d e x   <   s i z e o f ( m e m - > t h r e a d ) ;   i n d e x   + + )  
         {  
                 i f   ( n a m e [ i n d e x ]   = =   ' \ 0 ' )   b r e a k ;  
                 m e m - > t h r e a d [ i n d e x ]   =   n a m e [ i n d e x ] ;  
         }  
  
         f o r   ( ;   i n d e x   <   s i z e o f ( m e m - > t h r e a d ) ;   i n d e x   + + )  
         {  
                 m e m - > t h r e a d [ i n d e x ]   =   '   ' ;  
         }  
 }  
 # e n d i f  
  
 s t a t i c   v o i d   p l u g _ h o l e s ( s t r u c t   h e a p _ m e m   * m e m )  
 {  
         s t r u c t   h e a p _ m e m   * n m e m ;  
         s t r u c t   h e a p _ m e m   * p m e m ;  
  
         R T _ A S S E R T ( ( r t _ u i n t 8 _ t   * ) m e m   > =   h e a p _ p t r ) ;  
         R T _ A S S E R T ( ( r t _ u i n t 8 _ t   * ) m e m   <   ( r t _ u i n t 8 _ t   * ) h e a p _ e n d ) ;  
         R T _ A S S E R T ( m e m - > u s e d   = =   0 ) ;  
  
         / *   p l u g   h o l e   f o r w a r d   * /  
         n m e m   =   ( s t r u c t   h e a p _ m e m   * ) & h e a p _ p t r [ m e m - > n e x t ] ;  
         i f   ( m e m   ! =   n m e m   & &  
                 n m e m - > u s e d   = =   0   & &  
                 ( r t _ u i n t 8 _ t   * ) n m e m   ! =   ( r t _ u i n t 8 _ t   * ) h e a p _ e n d )  
         {  
                 / *   i f   m e m - > n e x t   i s   u n u s e d   a n d   n o t   e n d   o f   h e a p _ p t r ,  
                   *   c o m b i n e   m e m   a n d   m e m - > n e x t  
                   * /  
                 i f   ( l f r e e   = =   n m e m )  
                 {  
                         l f r e e   =   m e m ;  
                 }  
                 m e m - > n e x t   =   n m e m - > n e x t ;  
                 ( ( s t r u c t   h e a p _ m e m   * ) & h e a p _ p t r [ n m e m - > n e x t ] ) - > p r e v   =   ( r t _ u i n t 8 _ t   * ) m e m   -   h e a p _ p t r ;  
         }  
  
         / *   p l u g   h o l e   b a c k w a r d   * /  
         p m e m   =   ( s t r u c t   h e a p _ m e m   * ) & h e a p _ p t r [ m e m - > p r e v ] ;  
         i f   ( p m e m   ! =   m e m   & &   p m e m - > u s e d   = =   0 )  
         {  
                 / *   i f   m e m - > p r e v   i s   u n u s e d ,   c o m b i n e   m e m   a n d   m e m - > p r e v   * /  
                 i f   ( l f r e e   = =   m e m )  
                 {  
                         l f r e e   =   p m e m ;  
                 }  
                 p m e m - > n e x t   =   m e m - > n e x t ;  
                 ( ( s t r u c t   h e a p _ m e m   * ) & h e a p _ p t r [ m e m - > n e x t ] ) - > p r e v   =   ( r t _ u i n t 8 _ t   * ) p m e m   -   h e a p _ p t r ;  
         }  
 }  
  
 / * *  
   *   @ i n g r o u p   S y s t e m I n i t  
   *  
   *   T h i s   f u n c t i o n   w i l l   i n i t i a l i z e   s y s t e m   h e a p   m e m o r y .  
   *  
   *   @ p a r a m   b e g i n _ a d d r   t h e   b e g i n n i n g   a d d r e s s   o f   s y s t e m   h e a p   m e m o r y .  
   *   @ p a r a m   e n d _ a d d r   t h e   e n d   a d d r e s s   o f   s y s t e m   h e a p   m e m o r y .  
   * /  
 v o i d   r t _ s y s t e m _ h e a p _ i n i t ( v o i d   * b e g i n _ a d d r ,   v o i d   * e n d _ a d d r )  
 {  
         s t r u c t   h e a p _ m e m   * m e m ;  
         r t _ u b a s e _ t   b e g i n _ a l i g n   =   R T _ A L I G N ( ( r t _ u b a s e _ t ) b e g i n _ a d d r ,   R T _ A L I G N _ S I Z E ) ;  
         r t _ u b a s e _ t   e n d _ a l i g n       =   R T _ A L I G N _ D O W N ( ( r t _ u b a s e _ t ) e n d _ a d d r ,   R T _ A L I G N _ S I Z E ) ;  
  
         R T _ D E B U G _ N O T _ I N _ I N T E R R U P T ;  
  
         / *   a l i g n m e n t   a d d r   * /  
         i f   ( ( e n d _ a l i g n   >   ( 2   *   S I Z E O F _ S T R U C T _ M E M ) )   & &  
                 ( ( e n d _ a l i g n   -   2   *   S I Z E O F _ S T R U C T _ M E M )   > =   b e g i n _ a l i g n ) )  
         {  
                 / *   c a l c u l a t e   t h e   a l i g n e d   m e m o r y   s i z e   * /  
                 m e m _ s i z e _ a l i g n e d   =   e n d _ a l i g n   -   b e g i n _ a l i g n   -   2   *   S I Z E O F _ S T R U C T _ M E M ;  
         }  
         e l s e  
         {  
                 r t _ k p r i n t f ( " m e m   i n i t ,   e r r o r   b e g i n   a d d r e s s   0 x % x ,   a n d   e n d   a d d r e s s   0 x % x \ n " ,  
                                       ( r t _ u b a s e _ t ) b e g i n _ a d d r ,   ( r t _ u b a s e _ t ) e n d _ a d d r ) ;  
  
                 r e t u r n ;  
         }  
  
         / *   p o i n t   t o   b e g i n   a d d r e s s   o f   h e a p   * /  
         h e a p _ p t r   =   ( r t _ u i n t 8 _ t   * ) b e g i n _ a l i g n ;  
  
         R T _ D E B U G _ L O G ( R T _ D E B U G _ M E M ,   ( " m e m   i n i t ,   h e a p   b e g i n   a d d r e s s   0 x % x ,   s i z e   % d \ n " ,  
                                                                 ( r t _ u b a s e _ t ) h e a p _ p t r ,   m e m _ s i z e _ a l i g n e d ) ) ;  
  
         / *   i n i t i a l i z e   t h e   s t a r t   o f   t h e   h e a p   * /  
         m e m                 =   ( s t r u c t   h e a p _ m e m   * ) h e a p _ p t r ;  
         m e m - > m a g i c   =   H E A P _ M A G I C ;  
         m e m - > n e x t     =   m e m _ s i z e _ a l i g n e d   +   S I Z E O F _ S T R U C T _ M E M ;  
         m e m - > p r e v     =   0 ;  
         m e m - > u s e d     =   0 ;  
 # i f d e f   R T _ U S I N G _ M E M T R A C E  
         r t _ m e m _ s e t n a m e ( m e m ,   " I N I T " ) ;  
 # e n d i f  
  
         / *   i n i t i a l i z e   t h e   e n d   o f   t h e   h e a p   * /  
         h e a p _ e n d                 =   ( s t r u c t   h e a p _ m e m   * ) & h e a p _ p t r [ m e m - > n e x t ] ;  
         h e a p _ e n d - > m a g i c   =   H E A P _ M A G I C ;  
         h e a p _ e n d - > u s e d     =   1 ;  
         h e a p _ e n d - > n e x t     =   m e m _ s i z e _ a l i g n e d   +   S I Z E O F _ S T R U C T _ M E M ;  
         h e a p _ e n d - > p r e v     =   m e m _ s i z e _ a l i g n e d   +   S I Z E O F _ S T R U C T _ M E M ;  
 # i f d e f   R T _ U S I N G _ M E M T R A C E  
         r t _ m e m _ s e t n a m e ( h e a p _ e n d ,   " I N I T " ) ;  
 # e n d i f  
  
         r t _ s e m _ i n i t ( & h e a p _ s e m ,   " h e a p " ,   1 ,   R T _ I P C _ F L A G _ F I F O ) ;  
  
         / *   i n i t i a l i z e   t h e   l o w e s t - f r e e   p o i n t e r   t o   t h e   s t a r t   o f   t h e   h e a p   * /  
         l f r e e   =   ( s t r u c t   h e a p _ m e m   * ) h e a p _ p t r ;  
 }  
  
 / * *  
   *   @ a d d t o g r o u p   M M  
   * /  
  
 / * * @ { * /  
  
 / * *  
   *   A l l o c a t e   a   b l o c k   o f   m e m o r y   w i t h   a   m i n i m u m   o f   ' s i z e '   b y t e s .  
   *  
   *   @ p a r a m   s i z e   i s   t h e   m i n i m u m   s i z e   o f   t h e   r e q u e s t e d   b l o c k   i n   b y t e s .  
   *  
   *   @ r e t u r n   p o i n t e r   t o   a l l o c a t e d   m e m o r y   o r   N U L L   i f   n o   f r e e   m e m o r y   w a s   f o u n d .  
   * /  
 v o i d   * r t _ m a l l o c ( r t _ s i z e _ t   s i z e )  
 {  
         r t _ s i z e _ t   p t r ,   p t r 2 ;  
         s t r u c t   h e a p _ m e m   * m e m ,   * m e m 2 ;  
  
         i f   ( s i z e   = =   0 )  
                 r e t u r n   R T _ N U L L ;  
  
         R T _ D E B U G _ N O T _ I N _ I N T E R R U P T ;  
  
         i f   ( s i z e   ! =   R T _ A L I G N ( s i z e ,   R T _ A L I G N _ S I Z E ) )  
                 R T _ D E B U G _ L O G ( R T _ D E B U G _ M E M ,   ( " m a l l o c   s i z e   % d ,   b u t   a l i g n   t o   % d \ n " ,  
                                                                         s i z e ,   R T _ A L I G N ( s i z e ,   R T _ A L I G N _ S I Z E ) ) ) ;  
         e l s e  
                 R T _ D E B U G _ L O G ( R T _ D E B U G _ M E M ,   ( " m a l l o c   s i z e   % d \ n " ,   s i z e ) ) ;  
  
         / *   a l i g n m e n t   s i z e   * /  
         s i z e   =   R T _ A L I G N ( s i z e ,   R T _ A L I G N _ S I Z E ) ;  
  
         i f   ( s i z e   >   m e m _ s i z e _ a l i g n e d )  
         {  
                 R T _ D E B U G _ L O G ( R T _ D E B U G _ M E M ,   ( " n o   m e m o r y \ n " ) ) ;  
  
                 r e t u r n   R T _ N U L L ;  
         }  
  
         / *   e v e r y   d a t a   b l o c k   m u s t   b e   a t   l e a s t   M I N _ S I Z E _ A L I G N E D   l o n g   * /  
         i f   ( s i z e   <   M I N _ S I Z E _ A L I G N E D )  
                 s i z e   =   M I N _ S I Z E _ A L I G N E D ;  
  
         / *   t a k e   m e m o r y   s e m a p h o r e   * /  
         r t _ s e m _ t a k e ( & h e a p _ s e m ,   R T _ W A I T I N G _ F O R E V E R ) ;  
  
         f o r   ( p t r   =   ( r t _ u i n t 8 _ t   * ) l f r e e   -   h e a p _ p t r ;  
                   p t r   <   m e m _ s i z e _ a l i g n e d   -   s i z e ;  
                   p t r   =   ( ( s t r u c t   h e a p _ m e m   * ) & h e a p _ p t r [ p t r ] ) - > n e x t )  
         {  
                 m e m   =   ( s t r u c t   h e a p _ m e m   * ) & h e a p _ p t r [ p t r ] ;  
  
                 i f   ( ( ! m e m - > u s e d )   & &   ( m e m - > n e x t   -   ( p t r   +   S I Z E O F _ S T R U C T _ M E M ) )   > =   s i z e )  
                 {  
                         / *   m e m   i s   n o t   u s e d   a n d   a t   l e a s t   p e r f e c t   f i t   i s   p o s s i b l e :  
                           *   m e m - > n e x t   -   ( p t r   +   S I Z E O F _ S T R U C T _ M E M )   g i v e s   u s   t h e   ' u s e r   d a t a   s i z e '   o f   m e m   * /  
  
                         i f   ( m e m - > n e x t   -   ( p t r   +   S I Z E O F _ S T R U C T _ M E M )   > =  
                                 ( s i z e   +   S I Z E O F _ S T R U C T _ M E M   +   M I N _ S I Z E _ A L I G N E D ) )  
                         {  
                                 / *   ( i n   a d d i t i o n   t o   t h e   a b o v e ,   w e   t e s t   i f   a n o t h e r   s t r u c t   h e a p _ m e m   ( S I Z E O F _ S T R U C T _ M E M )   c o n t a i n i n g  
                                   *   a t   l e a s t   M I N _ S I Z E _ A L I G N E D   o f   d a t a   a l s o   f i t s   i n   t h e   ' u s e r   d a t a   s p a c e '   o f   ' m e m ' )  
                                   *   - >   s p l i t   l a r g e   b l o c k ,   c r e a t e   e m p t y   r e m a i n d e r ,  
                                   *   r e m a i n d e r   m u s t   b e   l a r g e   e n o u g h   t o   c o n t a i n   M I N _ S I Z E _ A L I G N E D   d a t a :   i f  
                                   *   m e m - > n e x t   -   ( p t r   +   ( 2 * S I Z E O F _ S T R U C T _ M E M ) )   = =   s i z e ,  
                                   *   s t r u c t   h e a p _ m e m   w o u l d   f i t   i n   b u t   n o   d a t a   b e t w e e n   m e m 2   a n d   m e m 2 - > n e x t  
                                   *   @ t o d o   w e   c o u l d   l e a v e   o u t   M I N _ S I Z E _ A L I G N E D .   W e   w o u l d   c r e a t e   a n   e m p t y  
                                   *               r e g i o n   t h a t   c o u l d n ' t   h o l d   d a t a ,   b u t   w h e n   m e m - > n e x t   g e t s   f r e e d ,  
                                   *               t h e   2   r e g i o n s   w o u l d   b e   c o m b i n e d ,   r e s u l t i n g   i n   m o r e   f r e e   m e m o r y  
                                   * /  
                                 p t r 2   =   p t r   +   S I Z E O F _ S T R U C T _ M E M   +   s i z e ;  
  
                                 / *   c r e a t e   m e m 2   s t r u c t   * /  
                                 m e m 2               =   ( s t r u c t   h e a p _ m e m   * ) & h e a p _ p t r [ p t r 2 ] ;  
                                 m e m 2 - > m a g i c   =   H E A P _ M A G I C ;  
                                 m e m 2 - > u s e d   =   0 ;  
                                 m e m 2 - > n e x t   =   m e m - > n e x t ;  
                                 m e m 2 - > p r e v   =   p t r ;  
 # i f d e f   R T _ U S I N G _ M E M T R A C E  
                                 r t _ m e m _ s e t n a m e ( m e m 2 ,   "         " ) ;  
 # e n d i f  
  
                                 / *   a n d   i n s e r t   i t   b e t w e e n   m e m   a n d   m e m - > n e x t   * /  
                                 m e m - > n e x t   =   p t r 2 ;  
                                 m e m - > u s e d   =   1 ;  
  
                                 i f   ( m e m 2 - > n e x t   ! =   m e m _ s i z e _ a l i g n e d   +   S I Z E O F _ S T R U C T _ M E M )  
                                 {  
                                         ( ( s t r u c t   h e a p _ m e m   * ) & h e a p _ p t r [ m e m 2 - > n e x t ] ) - > p r e v   =   p t r 2 ;  
                                 }  
 # i f d e f   R T _ M E M _ S T A T S  
                                 u s e d _ m e m   + =   ( s i z e   +   S I Z E O F _ S T R U C T _ M E M ) ;  
                                 i f   ( m a x _ m e m   <   u s e d _ m e m )  
                                         m a x _ m e m   =   u s e d _ m e m ;  
 # e n d i f  
                         }  
                         e l s e  
                         {  
                                 / *   ( a   m e m 2   s t r u c t   d o e s   n o   f i t   i n t o   t h e   u s e r   d a t a   s p a c e   o f   m e m   a n d   m e m - > n e x t   w i l l   a l w a y s  
                                   *   b e   u s e d   a t   t h i s   p o i n t :   i f   n o t   w e   h a v e   2   u n u s e d   s t r u c t s   i n   a   r o w ,   p l u g _ h o l e s   s h o u l d   h a v e  
                                   *   t a k e   c a r e   o f   t h i s ) .  
                                   *   - >   n e a r   f i t   o r   e x c a c t   f i t :   d o   n o t   s p l i t ,   n o   m e m 2   c r e a t i o n  
                                   *   a l s o   c a n ' t   m o v e   m e m - > n e x t   d i r e c t l y   b e h i n d   m e m ,   s i n c e   m e m - > n e x t  
                                   *   w i l l   a l w a y s   b e   u s e d   a t   t h i s   p o i n t !  
                                   * /  
                                 m e m - > u s e d   =   1 ;  
 # i f d e f   R T _ M E M _ S T A T S  
                                 u s e d _ m e m   + =   m e m - > n e x t   -   ( ( r t _ u i n t 8 _ t   * ) m e m   -   h e a p _ p t r ) ;  
                                 i f   ( m a x _ m e m   <   u s e d _ m e m )  
                                         m a x _ m e m   =   u s e d _ m e m ;  
 # e n d i f  
                         }  
                         / *   s e t   m e m o r y   b l o c k   m a g i c   * /  
                         m e m - > m a g i c   =   H E A P _ M A G I C ;  
 # i f d e f   R T _ U S I N G _ M E M T R A C E  
                         i f   ( r t _ t h r e a d _ s e l f ( ) )  
                                 r t _ m e m _ s e t n a m e ( m e m ,   r t _ t h r e a d _ s e l f ( ) - > n a m e ) ;  
                         e l s e  
                                 r t _ m e m _ s e t n a m e ( m e m ,   " N O N E " ) ;  
 # e n d i f  
  
                         i f   ( m e m   = =   l f r e e )  
                         {  
                                 / *   F i n d   n e x t   f r e e   b l o c k   a f t e r   m e m   a n d   u p d a t e   l o w e s t   f r e e   p o i n t e r   * /  
                                 w h i l e   ( l f r e e - > u s e d   & &   l f r e e   ! =   h e a p _ e n d )  
                                         l f r e e   =   ( s t r u c t   h e a p _ m e m   * ) & h e a p _ p t r [ l f r e e - > n e x t ] ;  
  
                                 R T _ A S S E R T ( ( ( l f r e e   = =   h e a p _ e n d )   | |   ( ! l f r e e - > u s e d ) ) ) ;  
                         }  
  
                         r t _ s e m _ r e l e a s e ( & h e a p _ s e m ) ;  
                         R T _ A S S E R T ( ( r t _ u b a s e _ t ) m e m   +   S I Z E O F _ S T R U C T _ M E M   +   s i z e   < =   ( r t _ u b a s e _ t ) h e a p _ e n d ) ;  
                         R T _ A S S E R T ( ( r t _ u b a s e _ t ) ( ( r t _ u i n t 8 _ t   * ) m e m   +   S I Z E O F _ S T R U C T _ M E M )   %   R T _ A L I G N _ S I Z E   = =   0 ) ;  
                         R T _ A S S E R T ( ( ( ( r t _ u b a s e _ t ) m e m )   &   ( R T _ A L I G N _ S I Z E   -   1 ) )   = =   0 ) ;  
  
                         R T _ D E B U G _ L O G ( R T _ D E B U G _ M E M ,  
                                                   ( " a l l o c a t e   m e m o r y   a t   0 x % x ,   s i z e :   % d \ n " ,  
                                                     ( r t _ u b a s e _ t ) ( ( r t _ u i n t 8 _ t   * ) m e m   +   S I Z E O F _ S T R U C T _ M E M ) ,  
                                                     ( r t _ u b a s e _ t ) ( m e m - > n e x t   -   ( ( r t _ u i n t 8 _ t   * ) m e m   -   h e a p _ p t r ) ) ) ) ;  
  
                         R T _ O B J E C T _ H O O K _ C A L L ( r t _ m a l l o c _ h o o k ,  
                                                                 ( ( ( v o i d   * ) ( ( r t _ u i n t 8 _ t   * ) m e m   +   S I Z E O F _ S T R U C T _ M E M ) ) ,   s i z e ) ) ;  
  
                         / *   r e t u r n   t h e   m e m o r y   d a t a   e x c e p t   m e m   s t r u c t   * /  
                         r e t u r n   ( r t _ u i n t 8 _ t   * ) m e m   +   S I Z E O F _ S T R U C T _ M E M ;  
                 }  
         }  
  
         r t _ s e m _ r e l e a s e ( & h e a p _ s e m ) ;  
  
         r e t u r n   R T _ N U L L ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   c h a n g e   t h e   p r e v i o u s l y   a l l o c a t e d   m e m o r y   b l o c k .  
   *  
   *   @ p a r a m   r m e m   p o i n t e r   t o   m e m o r y   a l l o c a t e d   b y   r t _ m a l l o c  
   *   @ p a r a m   n e w s i z e   t h e   r e q u i r e d   n e w   s i z e  
   *  
   *   @ r e t u r n   t h e   c h a n g e d   m e m o r y   b l o c k   a d d r e s s  
   * /  
 v o i d   * r t _ r e a l l o c ( v o i d   * r m e m ,   r t _ s i z e _ t   n e w s i z e )  
 {  
         r t _ s i z e _ t   s i z e ;  
         r t _ s i z e _ t   p t r ,   p t r 2 ;  
         s t r u c t   h e a p _ m e m   * m e m ,   * m e m 2 ;  
         v o i d   * n m e m ;  
  
         R T _ D E B U G _ N O T _ I N _ I N T E R R U P T ;  
  
         / *   a l i g n m e n t   s i z e   * /  
         n e w s i z e   =   R T _ A L I G N ( n e w s i z e ,   R T _ A L I G N _ S I Z E ) ;  
         i f   ( n e w s i z e   >   m e m _ s i z e _ a l i g n e d )  
         {  
                 R T _ D E B U G _ L O G ( R T _ D E B U G _ M E M ,   ( " r e a l l o c :   o u t   o f   m e m o r y \ n " ) ) ;  
  
                 r e t u r n   R T _ N U L L ;  
         }  
         e l s e   i f   ( n e w s i z e   = =   0 )  
         {  
                 r t _ f r e e ( r m e m ) ;  
                 r e t u r n   R T _ N U L L ;  
         }  
  
         / *   a l l o c a t e   a   n e w   m e m o r y   b l o c k   * /  
         i f   ( r m e m   = =   R T _ N U L L )  
                 r e t u r n   r t _ m a l l o c ( n e w s i z e ) ;  
  
         r t _ s e m _ t a k e ( & h e a p _ s e m ,   R T _ W A I T I N G _ F O R E V E R ) ;  
  
         i f   ( ( r t _ u i n t 8 _ t   * ) r m e m   <   ( r t _ u i n t 8 _ t   * ) h e a p _ p t r   | |  
                 ( r t _ u i n t 8 _ t   * ) r m e m   > =   ( r t _ u i n t 8 _ t   * ) h e a p _ e n d )  
         {  
                 / *   i l l e g a l   m e m o r y   * /  
                 r t _ s e m _ r e l e a s e ( & h e a p _ s e m ) ;  
  
                 r e t u r n   r m e m ;  
         }  
  
         m e m   =   ( s t r u c t   h e a p _ m e m   * ) ( ( r t _ u i n t 8 _ t   * ) r m e m   -   S I Z E O F _ S T R U C T _ M E M ) ;  
  
         p t r   =   ( r t _ u i n t 8 _ t   * ) m e m   -   h e a p _ p t r ;  
         s i z e   =   m e m - > n e x t   -   p t r   -   S I Z E O F _ S T R U C T _ M E M ;  
         i f   ( s i z e   = =   n e w s i z e )  
         {  
                 / *   t h e   s i z e   i s   t h e   s a m e   a s   * /  
                 r t _ s e m _ r e l e a s e ( & h e a p _ s e m ) ;  
  
                 r e t u r n   r m e m ;  
         }  
  
         i f   ( n e w s i z e   +   S I Z E O F _ S T R U C T _ M E M   +   M I N _ S I Z E   <   s i z e )  
         {  
                 / *   s p l i t   m e m o r y   b l o c k   * /  
 # i f d e f   R T _ M E M _ S T A T S  
                 u s e d _ m e m   - =   ( s i z e   -   n e w s i z e ) ;  
 # e n d i f  
  
                 p t r 2   =   p t r   +   S I Z E O F _ S T R U C T _ M E M   +   n e w s i z e ;  
                 m e m 2   =   ( s t r u c t   h e a p _ m e m   * ) & h e a p _ p t r [ p t r 2 ] ;  
                 m e m 2 - > m a g i c   =   H E A P _ M A G I C ;  
                 m e m 2 - > u s e d   =   0 ;  
                 m e m 2 - > n e x t   =   m e m - > n e x t ;  
                 m e m 2 - > p r e v   =   p t r ;  
 # i f d e f   R T _ U S I N G _ M E M T R A C E  
                 r t _ m e m _ s e t n a m e ( m e m 2 ,   "         " ) ;  
 # e n d i f  
                 m e m - > n e x t   =   p t r 2 ;  
                 i f   ( m e m 2 - > n e x t   ! =   m e m _ s i z e _ a l i g n e d   +   S I Z E O F _ S T R U C T _ M E M )  
                 {  
                         ( ( s t r u c t   h e a p _ m e m   * ) & h e a p _ p t r [ m e m 2 - > n e x t ] ) - > p r e v   =   p t r 2 ;  
                 }  
  
                 i f   ( m e m 2   <   l f r e e )  
                 {  
                         / *   t h e   s p l i t e d   s t r u c t   i s   n o w   t h e   l o w e s t   * /  
                         l f r e e   =   m e m 2 ;  
                 }  
  
                 p l u g _ h o l e s ( m e m 2 ) ;  
  
                 r t _ s e m _ r e l e a s e ( & h e a p _ s e m ) ;  
  
                 r e t u r n   r m e m ;  
         }  
         r t _ s e m _ r e l e a s e ( & h e a p _ s e m ) ;  
  
         / *   e x p a n d   m e m o r y   * /  
         n m e m   =   r t _ m a l l o c ( n e w s i z e ) ;  
         i f   ( n m e m   ! =   R T _ N U L L )   / *   c h e c k   m e m o r y   * /  
         {  
                 r t _ m e m c p y ( n m e m ,   r m e m ,   s i z e   <   n e w s i z e   ?   s i z e   :   n e w s i z e ) ;  
                 r t _ f r e e ( r m e m ) ;  
         }  
  
         r e t u r n   n m e m ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   c o n t i g u o u s l y   a l l o c a t e   e n o u g h   s p a c e   f o r   c o u n t   o b j e c t s  
   *   t h a t   a r e   s i z e   b y t e s   o f   m e m o r y   e a c h   a n d   r e t u r n s   a   p o i n t e r   t o   t h e   a l l o c a t e d  
   *   m e m o r y .  
   *  
   *   T h e   a l l o c a t e d   m e m o r y   i s   f i l l e d   w i t h   b y t e s   o f   v a l u e   z e r o .  
   *  
   *   @ p a r a m   c o u n t   n u m b e r   o f   o b j e c t s   t o   a l l o c a t e  
   *   @ p a r a m   s i z e   s i z e   o f   t h e   o b j e c t s   t o   a l l o c a t e  
   *  
   *   @ r e t u r n   p o i n t e r   t o   a l l o c a t e d   m e m o r y   /   N U L L   p o i n t e r   i f   t h e r e   i s   a n   e r r o r  
   * /  
 v o i d   * r t _ c a l l o c ( r t _ s i z e _ t   c o u n t ,   r t _ s i z e _ t   s i z e )  
 {  
         v o i d   * p ;  
  
         / *   a l l o c a t e   ' c o u n t '   o b j e c t s   o f   s i z e   ' s i z e '   * /  
         p   =   r t _ m a l l o c ( c o u n t   *   s i z e ) ;  
  
         / *   z e r o   t h e   m e m o r y   * /  
         i f   ( p )  
                 r t _ m e m s e t ( p ,   0 ,   c o u n t   *   s i z e ) ;  
  
         r e t u r n   p ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   r e l e a s e   t h e   p r e v i o u s l y   a l l o c a t e d   m e m o r y   b l o c k   b y  
   *   r t _ m a l l o c .   T h e   r e l e a s e d   m e m o r y   b l o c k   i s   t a k e n   b a c k   t o   s y s t e m   h e a p .  
   *  
   *   @ p a r a m   r m e m   t h e   a d d r e s s   o f   m e m o r y   w h i c h   w i l l   b e   r e l e a s e d  
   * /  
 v o i d   r t _ f r e e ( v o i d   * r m e m )  
 {  
         s t r u c t   h e a p _ m e m   * m e m ;  
  
         i f   ( r m e m   = =   R T _ N U L L )  
                 r e t u r n ;  
  
         R T _ D E B U G _ N O T _ I N _ I N T E R R U P T ;  
  
         R T _ A S S E R T ( ( ( ( r t _ u b a s e _ t ) r m e m )   &   ( R T _ A L I G N _ S I Z E   -   1 ) )   = =   0 ) ;  
         R T _ A S S E R T ( ( r t _ u i n t 8 _ t   * ) r m e m   > =   ( r t _ u i n t 8 _ t   * ) h e a p _ p t r   & &  
                             ( r t _ u i n t 8 _ t   * ) r m e m   <   ( r t _ u i n t 8 _ t   * ) h e a p _ e n d ) ;  
  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ f r e e _ h o o k ,   ( r m e m ) ) ;  
  
         i f   ( ( r t _ u i n t 8 _ t   * ) r m e m   <   ( r t _ u i n t 8 _ t   * ) h e a p _ p t r   | |  
                 ( r t _ u i n t 8 _ t   * ) r m e m   > =   ( r t _ u i n t 8 _ t   * ) h e a p _ e n d )  
         {  
                 R T _ D E B U G _ L O G ( R T _ D E B U G _ M E M ,   ( " i l l e g a l   m e m o r y \ n " ) ) ;  
  
                 r e t u r n ;  
         }  
  
         / *   G e t   t h e   c o r r e s p o n d i n g   s t r u c t   h e a p _ m e m   . . .   * /  
         m e m   =   ( s t r u c t   h e a p _ m e m   * ) ( ( r t _ u i n t 8 _ t   * ) r m e m   -   S I Z E O F _ S T R U C T _ M E M ) ;  
  
         R T _ D E B U G _ L O G ( R T _ D E B U G _ M E M ,  
                                   ( " r e l e a s e   m e m o r y   0 x % x ,   s i z e :   % d \ n " ,  
                                     ( r t _ u b a s e _ t ) r m e m ,  
                                     ( r t _ u b a s e _ t ) ( m e m - > n e x t   -   ( ( r t _ u i n t 8 _ t   * ) m e m   -   h e a p _ p t r ) ) ) ) ;  
  
  
         / *   p r o t e c t   t h e   h e a p   f r o m   c o n c u r r e n t   a c c e s s   * /  
         r t _ s e m _ t a k e ( & h e a p _ s e m ,   R T _ W A I T I N G _ F O R E V E R ) ;  
  
         / *   . . .   w h i c h   h a s   t o   b e   i n   a   u s e d   s t a t e   . . .   * /  
         i f   ( ! m e m - > u s e d   | |   m e m - > m a g i c   ! =   H E A P _ M A G I C )  
         {  
                 r t _ k p r i n t f ( " t o   f r e e   a   b a d   d a t a   b l o c k : \ n " ) ;  
                 r t _ k p r i n t f ( " m e m :   0 x % 0 8 x ,   u s e d   f l a g :   % d ,   m a g i c   c o d e :   0 x % 0 4 x \ n " ,   m e m ,   m e m - > u s e d ,   m e m - > m a g i c ) ;  
         }  
         R T _ A S S E R T ( m e m - > u s e d ) ;  
         R T _ A S S E R T ( m e m - > m a g i c   = =   H E A P _ M A G I C ) ;  
         / *   . . .   a n d   i s   n o w   u n u s e d .   * /  
         m e m - > u s e d     =   0 ;  
         m e m - > m a g i c   =   H E A P _ M A G I C ;  
 # i f d e f   R T _ U S I N G _ M E M T R A C E  
         r t _ m e m _ s e t n a m e ( m e m ,   "         " ) ;  
 # e n d i f  
  
         i f   ( m e m   <   l f r e e )  
         {  
                 / *   t h e   n e w l y   f r e e d   s t r u c t   i s   n o w   t h e   l o w e s t   * /  
                 l f r e e   =   m e m ;  
         }  
  
 # i f d e f   R T _ M E M _ S T A T S  
         u s e d _ m e m   - =   ( m e m - > n e x t   -   ( ( r t _ u i n t 8 _ t   * ) m e m   -   h e a p _ p t r ) ) ;  
 # e n d i f  
  
         / *   f i n a l l y ,   s e e   i f   p r e v   o r   n e x t   a r e   f r e e   a l s o   * /  
         p l u g _ h o l e s ( m e m ) ;  
         r t _ s e m _ r e l e a s e ( & h e a p _ s e m ) ;  
 }  
  
 # i f d e f   R T _ M E M _ S T A T S  
 v o i d   r t _ m e m o r y _ i n f o ( r t _ u i n t 3 2 _ t   * t o t a l ,  
                                         r t _ u i n t 3 2 _ t   * u s e d ,  
                                         r t _ u i n t 3 2 _ t   * m a x _ u s e d )  
 {  
         i f   ( t o t a l   ! =   R T _ N U L L )  
                 * t o t a l   =   m e m _ s i z e _ a l i g n e d ;  
         i f   ( u s e d     ! =   R T _ N U L L )  
                 * u s e d   =   u s e d _ m e m ;  
         i f   ( m a x _ u s e d   ! =   R T _ N U L L )  
                 * m a x _ u s e d   =   m a x _ m e m ;  
 }  
  
 # i f d e f   R T _ U S I N G _ F I N S H  
 # i n c l u d e   < f i n s h . h >  
  
 v o i d   l i s t _ m e m ( v o i d )  
 {  
         r t _ k p r i n t f ( " t o t a l   m e m o r y :   % d \ n " ,   m e m _ s i z e _ a l i g n e d ) ;  
         r t _ k p r i n t f ( " u s e d   m e m o r y   :   % d \ n " ,   u s e d _ m e m ) ;  
         r t _ k p r i n t f ( " m a x i m u m   a l l o c a t e d   m e m o r y :   % d \ n " ,   m a x _ m e m ) ;  
 }  
 F I N S H _ F U N C T I O N _ E X P O R T ( l i s t _ m e m ,   l i s t   m e m o r y   u s a g e   i n f o r m a t i o n )  
  
 # i f d e f   R T _ U S I N G _ M E M T R A C E  
 i n t   m e m c h e c k ( v o i d )  
 {  
         i n t   p o s i t i o n ;  
         r t _ u b a s e _ t   l e v e l ;  
         s t r u c t   h e a p _ m e m   * m e m ;  
         l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
         f o r   ( m e m   =   ( s t r u c t   h e a p _ m e m   * ) h e a p _ p t r ;   m e m   ! =   h e a p _ e n d ;   m e m   =   ( s t r u c t   h e a p _ m e m   * ) & h e a p _ p t r [ m e m - > n e x t ] )  
         {  
                 p o s i t i o n   =   ( r t _ u b a s e _ t ) m e m   -   ( r t _ u b a s e _ t ) h e a p _ p t r ;  
                 i f   ( p o s i t i o n   <   0 )   g o t o   _ _ e x i t ;  
                 i f   ( p o s i t i o n   >   ( i n t ) m e m _ s i z e _ a l i g n e d )   g o t o   _ _ e x i t ;  
                 i f   ( m e m - > m a g i c   ! =   H E A P _ M A G I C )   g o t o   _ _ e x i t ;  
                 i f   ( m e m - > u s e d   ! =   0   & &   m e m - > u s e d   ! =   1 )   g o t o   _ _ e x i t ;  
         }  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
         r e t u r n   0 ;  
 _ _ e x i t :  
         r t _ k p r i n t f ( " M e m o r y   b l o c k   w r o n g : \ n " ) ;  
         r t _ k p r i n t f ( " a d d r e s s :   0 x % 0 8 x \ n " ,   m e m ) ;  
         r t _ k p r i n t f ( "     m a g i c :   0 x % 0 4 x \ n " ,   m e m - > m a g i c ) ;  
         r t _ k p r i n t f ( "       u s e d :   % d \ n " ,   m e m - > u s e d ) ;  
         r t _ k p r i n t f ( "     s i z e :   % d \ n " ,   m e m - > n e x t   -   p o s i t i o n   -   S I Z E O F _ S T R U C T _ M E M ) ;  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
  
         r e t u r n   0 ;  
 }  
 M S H _ C M D _ E X P O R T ( m e m c h e c k ,   c h e c k   m e m o r y   d a t a ) ;  
  
 i n t   m e m t r a c e ( i n t   a r g c ,   c h a r   * * a r g v )  
 {  
         s t r u c t   h e a p _ m e m   * m e m ;  
  
         l i s t _ m e m ( ) ;  
  
         r t _ k p r i n t f ( " \ n m e m o r y   h e a p   a d d r e s s : \ n " ) ;  
         r t _ k p r i n t f ( " h e a p _ p t r :   0 x % 0 8 x \ n " ,   h e a p _ p t r ) ;  
         r t _ k p r i n t f ( " l f r e e       :   0 x % 0 8 x \ n " ,   l f r e e ) ;  
         r t _ k p r i n t f ( " h e a p _ e n d :   0 x % 0 8 x \ n " ,   h e a p _ e n d ) ;  
  
         r t _ k p r i n t f ( " \ n - - m e m o r y   i t e m   i n f o r m a t i o n   - - \ n " ) ;  
         f o r   ( m e m   =   ( s t r u c t   h e a p _ m e m   * ) h e a p _ p t r ;   m e m   ! =   h e a p _ e n d ;   m e m   =   ( s t r u c t   h e a p _ m e m   * ) & h e a p _ p t r [ m e m - > n e x t ] )  
         {  
                 i n t   p o s i t i o n   =   ( r t _ u b a s e _ t ) m e m   -   ( r t _ u b a s e _ t ) h e a p _ p t r ;  
                 i n t   s i z e ;  
  
                 r t _ k p r i n t f ( " [ 0 x % 0 8 x   -   " ,   m e m ) ;  
  
                 s i z e   =   m e m - > n e x t   -   p o s i t i o n   -   S I Z E O F _ S T R U C T _ M E M ;  
                 i f   ( s i z e   <   1 0 2 4 )  
                         r t _ k p r i n t f ( " % 5 d " ,   s i z e ) ;  
                 e l s e   i f   ( s i z e   <   1 0 2 4   *   1 0 2 4 )  
                         r t _ k p r i n t f ( " % 4 d K " ,   s i z e   /   1 0 2 4 ) ;  
                 e l s e  
                         r t _ k p r i n t f ( " % 4 d M " ,   s i z e   /   ( 1 0 2 4   *   1 0 2 4 ) ) ;  
  
                 r t _ k p r i n t f ( " ]   % c % c % c % c " ,   m e m - > t h r e a d [ 0 ] ,   m e m - > t h r e a d [ 1 ] ,   m e m - > t h r e a d [ 2 ] ,   m e m - > t h r e a d [ 3 ] ) ;  
                 i f   ( m e m - > m a g i c   ! =   H E A P _ M A G I C )  
                         r t _ k p r i n t f ( " :   * * * \ n " ) ;  
                 e l s e  
                         r t _ k p r i n t f ( " \ n " ) ;  
         }  
  
         r e t u r n   0 ;  
 }  
 M S H _ C M D _ E X P O R T ( m e m t r a c e ,   d u m p   m e m o r y   t r a c e   i n f o r m a t i o n ) ;  
 # e n d i f   / *   e n d   o f   R T _ U S I N G _ M E M T R A C E   * /  
 # e n d i f   / *   e n d   o f   R T _ U S I N G _ F I N S H         * /  
  
 # e n d i f  
  
 / * * @ } * /  
  
 # e n d i f   / *   e n d   o f   R T _ U S I N G _ H E A P   * /  
 # e n d i f   / *   e n d   o f   R T _ U S I N G _ M E M H E A P _ A S _ H E A P   * /  