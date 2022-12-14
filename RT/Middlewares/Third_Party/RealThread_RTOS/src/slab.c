??/ *  
   *   C o p y r i g h t   ( c )   2 0 0 6 - 2 0 2 1 ,   R T - T h r e a d   D e v e l o p m e n t   T e a m  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   * /  
  
 / *  
   *   F i l e             :   s l a b . c  
   *  
   *   C h a n g e   L o g s :  
   *   D a t e                       A u t h o r               N o t e s  
   *   2 0 0 8 - 0 7 - 1 2           B e r n a r d             t h e   f i r s t   v e r s i o n  
   *   2 0 1 0 - 0 7 - 1 3           B e r n a r d             f i x   R T _ A L I G N   i s s u e   f o u n d   b y   k u r o n c a  
   *   2 0 1 0 - 1 0 - 2 3           y i . q i u               a d d   m o d u l e   m e m o r y   a l l o c a t o r  
   *   2 0 1 0 - 1 2 - 1 8           y i . q i u               f i x   z o n e   r e l e a s e   b u g  
   * /  
  
 / *  
   *   K E R N _ S L A B A L L O C . C   -   K e r n e l   S L A B   m e m o r y   a l l o c a t o r  
   *  
   *   C o p y r i g h t   ( c )   2 0 0 3 , 2 0 0 4   T h e   D r a g o n F l y   P r o j e c t .     A l l   r i g h t s   r e s e r v e d .  
   *  
   *   T h i s   c o d e   i s   d e r i v e d   f r o m   s o f t w a r e   c o n t r i b u t e d   t o   T h e   D r a g o n F l y   P r o j e c t  
   *   b y   M a t t h e w   D i l l o n   < d i l l o n @ b a c k p l a n e . c o m >  
   *  
   *   R e d i s t r i b u t i o n   a n d   u s e   i n   s o u r c e   a n d   b i n a r y   f o r m s ,   w i t h   o r   w i t h o u t  
   *   m o d i f i c a t i o n ,   a r e   p e r m i t t e d   p r o v i d e d   t h a t   t h e   f o l l o w i n g   c o n d i t i o n s  
   *   a r e   m e t :  
   *  
   *   1 .   R e d i s t r i b u t i o n s   o f   s o u r c e   c o d e   m u s t   r e t a i n   t h e   a b o v e   c o p y r i g h t  
   *         n o t i c e ,   t h i s   l i s t   o f   c o n d i t i o n s   a n d   t h e   f o l l o w i n g   d i s c l a i m e r .  
   *   2 .   R e d i s t r i b u t i o n s   i n   b i n a r y   f o r m   m u s t   r e p r o d u c e   t h e   a b o v e   c o p y r i g h t  
   *         n o t i c e ,   t h i s   l i s t   o f   c o n d i t i o n s   a n d   t h e   f o l l o w i n g   d i s c l a i m e r   i n  
   *         t h e   d o c u m e n t a t i o n   a n d / o r   o t h e r   m a t e r i a l s   p r o v i d e d   w i t h   t h e  
   *         d i s t r i b u t i o n .  
   *   3 .   N e i t h e r   t h e   n a m e   o f   T h e   D r a g o n F l y   P r o j e c t   n o r   t h e   n a m e s   o f   i t s  
   *         c o n t r i b u t o r s   m a y   b e   u s e d   t o   e n d o r s e   o r   p r o m o t e   p r o d u c t s   d e r i v e d  
   *         f r o m   t h i s   s o f t w a r e   w i t h o u t   s p e c i f i c ,   p r i o r   w r i t t e n   p e r m i s s i o n .  
   *  
   *   T H I S   S O F T W A R E   I S   P R O V I D E D   B Y   T H E   C O P Y R I G H T   H O L D E R S   A N D   C O N T R I B U T O R S  
   *   ` ` A S   I S ' '   A N D   A N Y   E X P R E S S   O R   I M P L I E D   W A R R A N T I E S ,   I N C L U D I N G ,   B U T   N O T  
   *   L I M I T E D   T O ,   T H E   I M P L I E D   W A R R A N T I E S   O F   M E R C H A N T A B I L I T Y   A N D   F I T N E S S  
   *   F O R   A   P A R T I C U L A R   P U R P O S E   A R E   D I S C L A I M E D .     I N   N O   E V E N T   S H A L L   T H E  
   *   C O P Y R I G H T   H O L D E R S   O R   C O N T R I B U T O R S   B E   L I A B L E   F O R   A N Y   D I R E C T ,   I N D I R E C T ,  
   *   I N C I D E N T A L ,   S P E C I A L ,   E X E M P L A R Y   O R   C O N S E Q U E N T I A L   D A M A G E S   ( I N C L U D I N G ,  
   *   B U T   N O T   L I M I T E D   T O ,   P R O C U R E M E N T   O F   S U B S T I T U T E   G O O D S   O R   S E R V I C E S ;  
   *   L O S S   O F   U S E ,   D A T A ,   O R   P R O F I T S ;   O R   B U S I N E S S   I N T E R R U P T I O N )   H O W E V E R   C A U S E D  
   *   A N D   O N   A N Y   T H E O R Y   O F   L I A B I L I T Y ,   W H E T H E R   I N   C O N T R A C T ,   S T R I C T   L I A B I L I T Y ,  
   *   O R   T O R T   ( I N C L U D I N G   N E G L I G E N C E   O R   O T H E R W I S E )   A R I S I N G   I N   A N Y   W A Y   O U T  
   *   O F   T H E   U S E   O F   T H I S   S O F T W A R E ,   E V E N   I F   A D V I S E D   O F   T H E   P O S S I B I L I T Y   O F  
   *   S U C H   D A M A G E .  
   *  
   * /  
  
 # i n c l u d e   < r t h w . h >  
 # i n c l u d e   < r t t h r e a d . h >  
  
 # d e f i n e   R T _ M E M _ S T A T S  
  
 # i f   d e f i n e d   ( R T _ U S I N G _ H E A P )   & &   d e f i n e d   ( R T _ U S I N G _ S L A B )  
 / *   s o m e   s t a t i s t i c a l   v a r i a b l e   * /  
 # i f d e f   R T _ M E M _ S T A T S  
 s t a t i c   r t _ s i z e _ t   u s e d _ m e m ,   m a x _ m e m ;  
 # e n d i f  
  
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
 / *  
   *   s l a b   a l l o c a t o r   i m p l e m e n t a t i o n  
   *  
   *   A   s l a b   a l l o c a t o r   r e s e r v e s   a   Z O N E   f o r   e a c h   c h u n k   s i z e ,   t h e n   l a y s   t h e  
   *   c h u n k s   o u t   i n   a n   a r r a y   w i t h i n   t h e   z o n e .     A l l o c a t i o n   a n d   d e a l l o c a t i o n  
   *   i s   n e a r l y   i n s t a n t a n i o u s ,   a n d   f r a g m e n t a t i o n / o v e r h e a d   l o s s e s   a r e   l i m i t e d  
   *   t o   a   f i x e d   w o r s t - c a s e   a m o u n t .  
   *  
   *   T h e   d o w n s i d e   o f   t h i s   s l a b   i m p l e m e n t a t i o n   i s   i n   t h e   c h u n k   s i z e  
   *   m u l t i p l i e d   b y   t h e   n u m b e r   o f   z o n e s .     ~ 8 0   z o n e s   *   1 2 8 K   =   1 0 M B   o f   V M   p e r   c p u .  
   *   I n   a   k e r n e l   i m p l e m e n t a t i o n   a l l   t h i s   m e m o r y   w i l l   b e   p h y s i c a l   s o  
   *   t h e   z o n e   s i z e   i s   a d j u s t e d   d o w n w a r d   o n   m a c h i n e s   w i t h   l e s s   p h y s i c a l  
   *   m e m o r y .     T h e   u p s i d e   i s   t h a t   o v e r h e a d   i s   b o u n d e d . . .   t h i s   i s   t h e   * w o r s t *  
   *   c a s e   o v e r h e a d .  
   *  
   *   S l a b   m a n a g e m e n t   i s   d o n e   o n   a   p e r - c p u   b a s i s   a n d   n o   l o c k i n g   o r   m u t e x e s  
   *   a r e   r e q u i r e d ,   o n l y   a   c r i t i c a l   s e c t i o n .     W h e n   o n e   c p u   f r e e s   m e m o r y  
   *   b e l o n g i n g   t o   a n o t h e r   c p u ' s   s l a b   m a n a g e r   a n   a s y n c h r o n o u s   I P I   m e s s a g e  
   *   w i l l   b e   q u e u e d   t o   e x e c u t e   t h e   o p e r a t i o n .       I n   a d d i t i o n ,   b o t h   t h e  
   *   h i g h   l e v e l   s l a b   a l l o c a t o r   a n d   t h e   l o w   l e v e l   z o n e   a l l o c a t o r   o p t i m i z e  
   *   M _ Z E R O   r e q u e s t s ,   a n d   t h e   s l a b   a l l o c a t o r   d o e s   n o t   h a v e   t o   p r e   i n i t i a l i z e  
   *   t h e   l i n k e d   l i s t   o f   c h u n k s .  
   *  
   *   X X X   B a l a n c i n g   i s   n e e d e d   b e t w e e n   c p u s .     B a l a n c e   w i l l   b e   h a n d l e d   t h r o u g h  
   *   a s y n c h r o n o u s   I P I s   p r i m a r i l y   b y   r e a s s i g n i n g   t h e   z _ C p u   o w n e r s h i p   o f   c h u n k s .  
   *  
   *   X X X   I f   w e   h a v e   t o   a l l o c a t e   a   n e w   z o n e   a n d   M _ U S E _ R E S E R V E   i s   s e t ,   u s e   o f  
   *   t h e   n e w   z o n e   s h o u l d   b e   r e s t r i c t e d   t o   M _ U S E _ R E S E R V E   r e q u e s t s   o n l y .  
   *  
   *     A l l o c   S i z e     C h u n k i n g                 N u m b e r   o f   z o n e s  
   *     0 - 1 2 7               8                               1 6  
   *     1 2 8 - 2 5 5           1 6                             8  
   *     2 5 6 - 5 1 1           3 2                             8  
   *     5 1 2 - 1 0 2 3         6 4                             8  
   *     1 0 2 4 - 2 0 4 7       1 2 8                           8  
   *     2 0 4 8 - 4 0 9 5       2 5 6                           8  
   *     4 0 9 6 - 8 1 9 1       5 1 2                           8  
   *     8 1 9 2 - 1 6 3 8 3     1 0 2 4                         8  
   *     1 6 3 8 4 - 3 2 7 6 7   2 0 4 8                         8  
   *     ( i f   R T _ M M _ P A G E _ S I Z E   i s   4 K   t h e   m a x i m u m   z o n e   a l l o c a t i o n   i s   1 6 3 8 3 )  
   *  
   *     A l l o c a t i o n s   > =   z o n e _ l i m i t   g o   d i r e c t l y   t o   k m e m .  
   *  
   *                     A P I   R E Q U I R E M E N T S   A N D   S I D E   E F F E C T S  
   *  
   *         T o   o p e r a t e   a s   a   d r o p - i n   r e p l a c e m e n t   t o   t h e   F r e e B S D - 4 . x   m a l l o c ( )   w e  
   *         h a v e   r e m a i n e d   c o m p a t i b l e   w i t h   t h e   f o l l o w i n g   A P I   r e q u i r e m e n t s :  
   *  
   *         +   s m a l l   p o w e r - o f - 2   s i z e d   a l l o c a t i o n s   a r e   p o w e r - o f - 2   a l i g n e d   ( k e r n _ t t y )  
   *         +   a l l   p o w e r - o f - 2   s i z e d   a l l o c a t i o n s   a r e   p o w e r - o f - 2   a l i g n e d   ( t w e )  
   *         +   m a l l o c ( 0 )   i s   a l l o w e d   a n d   r e t u r n s   n o n - R T _ N U L L   ( a h c   d r i v e r )  
   *         +   a b i l i t y   t o   a l l o c a t e   a r b i t r a r i l y   l a r g e   c h u n k s   o f   m e m o r y  
   * /  
  
 / *  
   *   C h u n k   s t r u c t u r e   f o r   f r e e   e l e m e n t s  
   * /  
 t y p e d e f   s t r u c t   s l a b _ c h u n k  
 {  
         s t r u c t   s l a b _ c h u n k   * c _ n e x t ;  
 }   s l a b _ c h u n k ;  
  
 / *  
   *   T h e   I N - B A N D   z o n e   h e a d e r   i s   p l a c e d   a t   t h e   b e g i n n i n g   o f   e a c h   z o n e .  
   * /  
 t y p e d e f   s t r u c t   s l a b _ z o n e  
 {  
         r t _ i n t 3 2 _ t     z _ m a g i c ;                 / *   m a g i c   n u m b e r   f o r   s a n i t y   c h e c k   * /  
         r t _ i n t 3 2 _ t     z _ n f r e e ;                 / *   t o t a l   f r e e   c h u n k s   /   u a l l o c   s p a c e   i n   z o n e   * /  
         r t _ i n t 3 2 _ t     z _ n m a x ;                   / *   m a x i m u m   f r e e   c h u n k s   * /  
  
         s t r u c t   s l a b _ z o n e   * z _ n e x t ;       / *   z o n e a r y [ ]   l i n k   i f   z _ n f r e e   n o n - z e r o   * /  
         r t _ u i n t 8 _ t     * z _ b a s e p t r ;           / *   p o i n t e r   t o   s t a r t   o f   c h u n k   a r r a y   * /  
  
         r t _ i n t 3 2 _ t     z _ u i n d e x ;               / *   c u r r e n t   i n i t i a l   a l l o c a t i o n   i n d e x   * /  
         r t _ i n t 3 2 _ t     z _ c h u n k s i z e ;         / *   c h u n k   s i z e   f o r   v a l i d a t i o n   * /  
  
         r t _ i n t 3 2 _ t     z _ z o n e i n d e x ;         / *   z o n e   i n d e x   * /  
         s l a b _ c h u n k     * z _ f r e e c h u n k ;       / *   f r e e   c h u n k   l i s t   * /  
 }   s l a b _ z o n e ;  
  
 # d e f i n e   Z A L L O C _ S L A B _ M A G I C               0 x 5 1 a b 5 1 a b  
 # d e f i n e   Z A L L O C _ Z O N E _ L I M I T               ( 1 6   *   1 0 2 4 )           / *   m a x   s l a b - m a n a g e d   a l l o c   * /  
 # d e f i n e   Z A L L O C _ M I N _ Z O N E _ S I Z E         ( 3 2   *   1 0 2 4 )           / *   m i n i m u m   z o n e   s i z e   * /  
 # d e f i n e   Z A L L O C _ M A X _ Z O N E _ S I Z E         ( 1 2 8   *   1 0 2 4 )         / *   m a x i m u m   z o n e   s i z e   * /  
 # d e f i n e   N Z O N E S                                     7 2                             / *   n u m b e r   o f   z o n e s   * /  
 # d e f i n e   Z O N E _ R E L E A S E _ T H R E S H           2                               / *   t h r e s h o l d   n u m b e r   o f   z o n e s   * /  
  
 s t a t i c   s l a b _ z o n e   * z o n e _ a r r a y [ N Z O N E S ] ;       / *   l i n k e d   l i s t   o f   z o n e s   N F r e e   >   0   * /  
 s t a t i c   s l a b _ z o n e   * z o n e _ f r e e ;                         / *   w h o l e   z o n e s   t h a t   h a v e   b e c o m e   f r e e   * /  
  
 s t a t i c   i n t   z o n e _ f r e e _ c n t ;  
 s t a t i c   i n t   z o n e _ s i z e ;  
 s t a t i c   i n t   z o n e _ l i m i t ;  
 s t a t i c   i n t   z o n e _ p a g e _ c n t ;  
  
 / *  
   *   M i s c   c o n s t a n t s .     N o t e   t h a t   a l l o c a t i o n s   t h a t   a r e   e x a c t   m u l t i p l e s   o f  
   *   R T _ M M _ P A G E _ S I Z E ,   o r   e x c e e d   t h e   z o n e   l i m i t ,   f a l l   t h r o u g h   t o   t h e   k m e m   m o d u l e .  
   * /  
 # d e f i n e   M I N _ C H U N K _ S I Z E             8               / *   i n   b y t e s   * /  
 # d e f i n e   M I N _ C H U N K _ M A S K             ( M I N _ C H U N K _ S I Z E   -   1 )  
  
 / *  
   *   A r r a y   o f   d e s c r i p t o r s   t h a t   d e s c r i b e   t h e   c o n t e n t s   o f   e a c h   p a g e  
   * /  
 # d e f i n e   P A G E _ T Y P E _ F R E E             0 x 0 0  
 # d e f i n e   P A G E _ T Y P E _ S M A L L           0 x 0 1  
 # d e f i n e   P A G E _ T Y P E _ L A R G E           0 x 0 2  
 s t r u c t   m e m u s a g e  
 {  
         r t _ u i n t 3 2 _ t   t y p e :   2   ;               / *   p a g e   t y p e   * /  
         r t _ u i n t 3 2 _ t   s i z e :   3 0 ;               / *   p a g e s   a l l o c a t e d   o r   o f f s e t   f r o m   z o n e   * /  
 } ;  
 s t a t i c   s t r u c t   m e m u s a g e   * m e m u s a g e   =   R T _ N U L L ;  
 # d e f i n e   b t o k u p ( a d d r )         \  
         ( & m e m u s a g e [ ( ( r t _ u b a s e _ t ) ( a d d r )   -   h e a p _ s t a r t )   > >   R T _ M M _ P A G E _ B I T S ] )  
  
 s t a t i c   r t _ u b a s e _ t   h e a p _ s t a r t ,   h e a p _ e n d ;  
  
 / *   p a g e   a l l o c a t o r   * /  
 s t r u c t   r t _ p a g e _ h e a d  
 {  
         s t r u c t   r t _ p a g e _ h e a d   * n e x t ;             / *   n e x t   v a l i d   p a g e   * /  
         r t _ s i z e _ t   p a g e ;                                   / *   n u m b e r   o f   p a g e     * /  
  
         / *   d u m m y   * /  
         c h a r   d u m m y [ R T _ M M _ P A G E _ S I Z E   -   ( s i z e o f ( s t r u c t   r t _ p a g e _ h e a d   * )   +   s i z e o f ( r t _ s i z e _ t ) ) ] ;  
 } ;  
 s t a t i c   s t r u c t   r t _ p a g e _ h e a d   * r t _ p a g e _ l i s t ;  
 s t a t i c   s t r u c t   r t _ s e m a p h o r e   h e a p _ s e m ;  
  
 v o i d   * r t _ p a g e _ a l l o c ( r t _ s i z e _ t   n p a g e s )  
 {  
         s t r u c t   r t _ p a g e _ h e a d   * b ,   * n ;  
         s t r u c t   r t _ p a g e _ h e a d   * * p r e v ;  
  
         i f   ( n p a g e s   = =   0 )  
                 r e t u r n   R T _ N U L L ;  
  
         / *   l o c k   h e a p   * /  
         r t _ s e m _ t a k e ( & h e a p _ s e m ,   R T _ W A I T I N G _ F O R E V E R ) ;  
         f o r   ( p r e v   =   & r t _ p a g e _ l i s t ;   ( b   =   * p r e v )   ! =   R T _ N U L L ;   p r e v   =   & ( b - > n e x t ) )  
         {  
                 i f   ( b - > p a g e   >   n p a g e s )  
                 {  
                         / *   s p l i t e   p a g e s   * /  
                         n               =   b   +   n p a g e s ;  
                         n - > n e x t   =   b - > n e x t ;  
                         n - > p a g e   =   b - > p a g e   -   n p a g e s ;  
                         * p r e v       =   n ;  
                         b r e a k ;  
                 }  
  
                 i f   ( b - > p a g e   = =   n p a g e s )  
                 {  
                         / *   t h i s   n o d e   f i t ,   r e m o v e   t h i s   n o d e   * /  
                         * p r e v   =   b - > n e x t ;  
                         b r e a k ;  
                 }  
         }  
  
         / *   u n l o c k   h e a p   * /  
         r t _ s e m _ r e l e a s e ( & h e a p _ s e m ) ;  
  
         r e t u r n   b ;  
 }  
  
 v o i d   r t _ p a g e _ f r e e ( v o i d   * a d d r ,   r t _ s i z e _ t   n p a g e s )  
 {  
         s t r u c t   r t _ p a g e _ h e a d   * b ,   * n ;  
         s t r u c t   r t _ p a g e _ h e a d   * * p r e v ;  
  
         R T _ A S S E R T ( a d d r   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( ( r t _ u b a s e _ t ) a d d r   %   R T _ M M _ P A G E _ S I Z E   = =   0 ) ;  
         R T _ A S S E R T ( n p a g e s   ! =   0 ) ;  
  
         n   =   ( s t r u c t   r t _ p a g e _ h e a d   * ) a d d r ;  
  
         / *   l o c k   h e a p   * /  
         r t _ s e m _ t a k e ( & h e a p _ s e m ,   R T _ W A I T I N G _ F O R E V E R ) ;  
  
         f o r   ( p r e v   =   & r t _ p a g e _ l i s t ;   ( b   =   * p r e v )   ! =   R T _ N U L L ;   p r e v   =   & ( b - > n e x t ) )  
         {  
                 R T _ A S S E R T ( b - > p a g e   >   0 ) ;  
                 R T _ A S S E R T ( b   >   n   | |   b   +   b - > p a g e   < =   n ) ;  
  
                 i f   ( b   +   b - > p a g e   = =   n )  
                 {  
                         i f   ( b   +   ( b - > p a g e   + =   n p a g e s )   = =   b - > n e x t )  
                         {  
                                 b - > p a g e   + =   b - > n e x t - > p a g e ;  
                                 b - > n e x t     =   b - > n e x t - > n e x t ;  
                         }  
  
                         g o t o   _ r e t u r n ;  
                 }  
  
                 i f   ( b   = =   n   +   n p a g e s )  
                 {  
                         n - > p a g e   =   b - > p a g e   +   n p a g e s ;  
                         n - > n e x t   =   b - > n e x t ;  
                         * p r e v       =   n ;  
  
                         g o t o   _ r e t u r n ;  
                 }  
  
                 i f   ( b   >   n   +   n p a g e s )  
                         b r e a k ;  
         }  
  
         n - > p a g e   =   n p a g e s ;  
         n - > n e x t   =   b ;  
         * p r e v       =   n ;  
  
 _ r e t u r n :  
         / *   u n l o c k   h e a p   * /  
         r t _ s e m _ r e l e a s e ( & h e a p _ s e m ) ;  
 }  
  
 / *  
   *   I n i t i a l i z e   t h e   p a g e   a l l o c a t o r  
   * /  
 s t a t i c   v o i d   r t _ p a g e _ i n i t ( v o i d   * a d d r ,   r t _ s i z e _ t   n p a g e s )  
 {  
         R T _ A S S E R T ( a d d r   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( n p a g e s   ! =   0 ) ;  
  
         r t _ p a g e _ l i s t   =   R T _ N U L L ;  
         r t _ p a g e _ f r e e ( a d d r ,   n p a g e s ) ;  
 }  
  
 / * *  
   *   @ i n g r o u p   S y s t e m I n i t  
   *  
   *   T h i s   f u n c t i o n   w i l l   i n i t   s y s t e m   h e a p  
   *  
   *   @ p a r a m   b e g i n _ a d d r   t h e   b e g i n n i n g   a d d r e s s   o f   s y s t e m   p a g e  
   *   @ p a r a m   e n d _ a d d r   t h e   e n d   a d d r e s s   o f   s y s t e m   p a g e  
   * /  
 v o i d   r t _ s y s t e m _ h e a p _ i n i t ( v o i d   * b e g i n _ a d d r ,   v o i d   * e n d _ a d d r )  
 {  
         r t _ u i n t 3 2 _ t   l i m s i z e ,   n p a g e s ;  
  
         R T _ D E B U G _ N O T _ I N _ I N T E R R U P T ;  
  
         / *   a l i g n   b e g i n   a n d   e n d   a d d r   t o   p a g e   * /  
         h e a p _ s t a r t   =   R T _ A L I G N ( ( r t _ u b a s e _ t ) b e g i n _ a d d r ,   R T _ M M _ P A G E _ S I Z E ) ;  
         h e a p _ e n d       =   R T _ A L I G N _ D O W N ( ( r t _ u b a s e _ t ) e n d _ a d d r ,   R T _ M M _ P A G E _ S I Z E ) ;  
  
         i f   ( h e a p _ s t a r t   > =   h e a p _ e n d )  
         {  
                 r t _ k p r i n t f ( " r t _ s y s t e m _ h e a p _ i n i t ,   w r o n g   a d d r e s s [ 0 x % x   -   0 x % x ] \ n " ,  
                                       ( r t _ u b a s e _ t ) b e g i n _ a d d r ,   ( r t _ u b a s e _ t ) e n d _ a d d r ) ;  
  
                 r e t u r n ;  
         }  
  
         l i m s i z e   =   h e a p _ e n d   -   h e a p _ s t a r t ;  
         n p a g e s     =   l i m s i z e   /   R T _ M M _ P A G E _ S I Z E ;  
  
         / *   i n i t i a l i z e   h e a p   s e m a p h o r e   * /  
         r t _ s e m _ i n i t ( & h e a p _ s e m ,   " h e a p " ,   1 ,   R T _ I P C _ F L A G _ F I F O ) ;  
  
         R T _ D E B U G _ L O G ( R T _ D E B U G _ S L A B ,   ( " h e a p [ 0 x % x   -   0 x % x ] ,   s i z e   0 x % x ,   0 x % x   p a g e s \ n " ,  
                                                                   h e a p _ s t a r t ,   h e a p _ e n d ,   l i m s i z e ,   n p a g e s ) ) ;  
  
         / *   i n i t   p a g e s   * /  
         r t _ p a g e _ i n i t ( ( v o i d   * ) h e a p _ s t a r t ,   n p a g e s ) ;  
  
         / *   c a l c u l a t e   z o n e   s i z e   * /  
         z o n e _ s i z e   =   Z A L L O C _ M I N _ Z O N E _ S I Z E ;  
         w h i l e   ( z o n e _ s i z e   <   Z A L L O C _ M A X _ Z O N E _ S I Z E   & &   ( z o n e _ s i z e   < <   1 )   <   ( l i m s i z e   /   1 0 2 4 ) )  
                 z o n e _ s i z e   < < =   1 ;  
  
         z o n e _ l i m i t   =   z o n e _ s i z e   /   4 ;  
         i f   ( z o n e _ l i m i t   >   Z A L L O C _ Z O N E _ L I M I T )  
                 z o n e _ l i m i t   =   Z A L L O C _ Z O N E _ L I M I T ;  
  
         z o n e _ p a g e _ c n t   =   z o n e _ s i z e   /   R T _ M M _ P A G E _ S I Z E ;  
  
         R T _ D E B U G _ L O G ( R T _ D E B U G _ S L A B ,   ( " z o n e   s i z e   0 x % x ,   z o n e   p a g e   c o u n t   0 x % x \ n " ,  
                                                                   z o n e _ s i z e ,   z o n e _ p a g e _ c n t ) ) ;  
  
         / *   a l l o c a t e   m e m u s a g e   a r r a y   * /  
         l i m s i z e     =   n p a g e s   *   s i z e o f ( s t r u c t   m e m u s a g e ) ;  
         l i m s i z e     =   R T _ A L I G N ( l i m s i z e ,   R T _ M M _ P A G E _ S I Z E ) ;  
         m e m u s a g e   =   r t _ p a g e _ a l l o c ( l i m s i z e   /   R T _ M M _ P A G E _ S I Z E ) ;  
  
         R T _ D E B U G _ L O G ( R T _ D E B U G _ S L A B ,   ( " m e m u s a g e   0 x % x ,   s i z e   0 x % x \ n " ,  
                                                                   ( r t _ u b a s e _ t ) m e m u s a g e ,   l i m s i z e ) ) ;  
 }  
  
 / *  
   *   C a l c u l a t e   t h e   z o n e   i n d e x   f o r   t h e   a l l o c a t i o n   r e q u e s t   s i z e   a n d   s e t   t h e  
   *   a l l o c a t i o n   r e q u e s t   s i z e   t o   t h a t   p a r t i c u l a r   z o n e ' s   c h u n k   s i z e .  
   * /  
 r t _ i n l i n e   i n t   z o n e i n d e x ( r t _ s i z e _ t   * b y t e s )  
 {  
         / *   u n s i g n e d   f o r   s h i f t   o p t   * /  
         r t _ u b a s e _ t   n   =   ( r t _ u b a s e _ t ) ( * b y t e s ) ;  
  
         i f   ( n   <   1 2 8 )  
         {  
                 * b y t e s   =   n   =   ( n   +   7 )   &   ~ 7 ;  
  
                 / *   8   b y t e   c h u n k s ,   1 6   z o n e s   * /  
                 r e t u r n   ( n   /   8   -   1 ) ;  
         }  
         i f   ( n   <   2 5 6 )  
         {  
                 * b y t e s   =   n   =   ( n   +   1 5 )   &   ~ 1 5 ;  
  
                 r e t u r n   ( n   /   1 6   +   7 ) ;  
         }  
         i f   ( n   <   8 1 9 2 )  
         {  
                 i f   ( n   <   5 1 2 )  
                 {  
                         * b y t e s   =   n   =   ( n   +   3 1 )   &   ~ 3 1 ;  
  
                         r e t u r n   ( n   /   3 2   +   1 5 ) ;  
                 }  
                 i f   ( n   <   1 0 2 4 )  
                 {  
                         * b y t e s   =   n   =   ( n   +   6 3 )   &   ~ 6 3 ;  
  
                         r e t u r n   ( n   /   6 4   +   2 3 ) ;  
                 }  
                 i f   ( n   <   2 0 4 8 )  
                 {  
                         * b y t e s   =   n   =   ( n   +   1 2 7 )   &   ~ 1 2 7 ;  
  
                         r e t u r n   ( n   /   1 2 8   +   3 1 ) ;  
                 }  
                 i f   ( n   <   4 0 9 6 )  
                 {  
                         * b y t e s   =   n   =   ( n   +   2 5 5 )   &   ~ 2 5 5 ;  
  
                         r e t u r n   ( n   /   2 5 6   +   3 9 ) ;  
                 }  
                 * b y t e s   =   n   =   ( n   +   5 1 1 )   &   ~ 5 1 1 ;  
  
                 r e t u r n   ( n   /   5 1 2   +   4 7 ) ;  
         }  
         i f   ( n   <   1 6 3 8 4 )  
         {  
                 * b y t e s   =   n   =   ( n   +   1 0 2 3 )   &   ~ 1 0 2 3 ;  
  
                 r e t u r n   ( n   /   1 0 2 4   +   5 5 ) ;  
         }  
  
         r t _ k p r i n t f ( " U n e x p e c t e d   b y t e   c o u n t   % d " ,   n ) ;  
  
         r e t u r n   0 ;  
 }  
  
 / * *  
   *   @ a d d t o g r o u p   M M  
   * /  
  
 / * * @ { * /  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   a l l o c a t e   a   b l o c k   f r o m   s y s t e m   h e a p   m e m o r y .  
   *   -   I f   t h e   n b y t e s   i s   l e s s   t h a n   z e r o ,  
   *   o r  
   *   -   I f   t h e r e   i s   n o   n b y t e s   s i z e d   m e m o r y   v a l i d   i n   s y s t e m ,  
   *   t h e   R T _ N U L L   i s   r e t u r n e d .  
   *  
   *   @ p a r a m   s i z e   t h e   s i z e   o f   m e m o r y   t o   b e   a l l o c a t e d  
   *  
   *   @ r e t u r n   t h e   a l l o c a t e d   m e m o r y  
   * /  
 v o i d   * r t _ m a l l o c ( r t _ s i z e _ t   s i z e )  
 {  
         s l a b _ z o n e   * z ;  
         r t _ i n t 3 2 _ t   z i ;  
         s l a b _ c h u n k   * c h u n k ;  
         s t r u c t   m e m u s a g e   * k u p ;  
  
         / *   z e r o   s i z e ,   r e t u r n   R T _ N U L L   * /  
         i f   ( s i z e   = =   0 )  
                 r e t u r n   R T _ N U L L ;  
  
         / *  
           *   H a n d l e   l a r g e   a l l o c a t i o n s   d i r e c t l y .     T h e r e   s h o u l d   n o t   b e   v e r y   m a n y   o f  
           *   t h e s e   s o   p e r f o r m a n c e   i s   n o t   a   b i g   i s s u e .  
           * /  
         i f   ( s i z e   > =   z o n e _ l i m i t )  
         {  
                 s i z e   =   R T _ A L I G N ( s i z e ,   R T _ M M _ P A G E _ S I Z E ) ;  
  
                 c h u n k   =   r t _ p a g e _ a l l o c ( s i z e   > >   R T _ M M _ P A G E _ B I T S ) ;  
                 i f   ( c h u n k   = =   R T _ N U L L )  
                         r e t u r n   R T _ N U L L ;  
  
                 / *   s e t   k u p   * /  
                 k u p   =   b t o k u p ( c h u n k ) ;  
                 k u p - > t y p e   =   P A G E _ T Y P E _ L A R G E ;  
                 k u p - > s i z e   =   s i z e   > >   R T _ M M _ P A G E _ B I T S ;  
  
                 R T _ D E B U G _ L O G ( R T _ D E B U G _ S L A B ,  
                                           ( " m a l l o c   a   l a r g e   m e m o r y   0 x % x ,   p a g e   c n t   % d ,   k u p   % d \ n " ,  
                                             s i z e ,  
                                             s i z e   > >   R T _ M M _ P A G E _ B I T S ,  
                                             ( ( r t _ u b a s e _ t ) c h u n k   -   h e a p _ s t a r t )   > >   R T _ M M _ P A G E _ B I T S ) ) ;  
  
                 / *   l o c k   h e a p   * /  
                 r t _ s e m _ t a k e ( & h e a p _ s e m ,   R T _ W A I T I N G _ F O R E V E R ) ;  
  
 # i f d e f   R T _ M E M _ S T A T S  
                 u s e d _ m e m   + =   s i z e ;  
                 i f   ( u s e d _ m e m   >   m a x _ m e m )  
                         m a x _ m e m   =   u s e d _ m e m ;  
 # e n d i f  
                 g o t o   d o n e ;  
         }  
  
         / *   l o c k   h e a p   * /  
         r t _ s e m _ t a k e ( & h e a p _ s e m ,   R T _ W A I T I N G _ F O R E V E R ) ;  
  
         / *  
           *   A t t e m p t   t o   a l l o c a t e   o u t   o f   a n   e x i s t i n g   z o n e .     F i r s t   t r y   t h e   f r e e   l i s t ,  
           *   t h e n   a l l o c a t e   o u t   o f   u n a l l o c a t e d   s p a c e .     I f   w e   f i n d   a   g o o d   z o n e   m o v e  
           *   i t   t o   t h e   h e a d   o f   t h e   l i s t   s o   l a t e r   a l l o c a t i o n s   f i n d   i t   q u i c k l y  
           *   ( w e   m i g h t   h a v e   t h o u s a n d s   o f   z o n e s   i n   t h e   l i s t ) .  
           *  
           *   N o t e :   z o n e i n d e x ( )   w i l l   p a n i c   o f   s i z e   i s   t o o   l a r g e .  
           * /  
         z i   =   z o n e i n d e x ( & s i z e ) ;  
         R T _ A S S E R T ( z i   <   N Z O N E S ) ;  
  
         R T _ D E B U G _ L O G ( R T _ D E B U G _ S L A B ,   ( " t r y   t o   m a l l o c   0 x % x   o n   z o n e :   % d \ n " ,   s i z e ,   z i ) ) ;  
  
         i f   ( ( z   =   z o n e _ a r r a y [ z i ] )   ! =   R T _ N U L L )  
         {  
                 R T _ A S S E R T ( z - > z _ n f r e e   >   0 ) ;  
  
                 / *   R e m o v e   u s   f r o m   t h e   z o n e _ a r r a y [ ]   w h e n   w e   b e c o m e   e m p t y   * /  
                 i f   ( - - z - > z _ n f r e e   = =   0 )  
                 {  
                         z o n e _ a r r a y [ z i ]   =   z - > z _ n e x t ;  
                         z - > z _ n e x t   =   R T _ N U L L ;  
                 }  
  
                 / *  
                   *   N o   c h u n k s   a r e   a v a i l a b l e   b u t   n f r e e   s a i d   w e   h a d   s o m e   m e m o r y ,   s o  
                   *   i t   m u s t   b e   a v a i l a b l e   i n   t h e   n e v e r - b e f o r e - u s e d - m e m o r y   a r e a  
                   *   g o v e r n e d   b y   u i n d e x .     T h e   c o n s e q u e n c e s   a r e   v e r y   s e r i o u s   i f   o u r   z o n e  
                   *   g o t   c o r r u p t e d   s o   w e   u s e   a n   e x p l i c i t   r t _ k p r i n t f   r a t h e r   t h e n   a   K A S S E R T .  
                   * /  
                 i f   ( z - > z _ u i n d e x   +   1   ! =   z - > z _ n m a x )  
                 {  
                         z - > z _ u i n d e x   =   z - > z _ u i n d e x   +   1 ;  
                         c h u n k   =   ( s l a b _ c h u n k   * ) ( z - > z _ b a s e p t r   +   z - > z _ u i n d e x   *   s i z e ) ;  
                 }  
                 e l s e  
                 {  
                         / *   f i n d   o n   f r e e   c h u n k   l i s t   * /  
                         c h u n k   =   z - > z _ f r e e c h u n k ;  
  
                         / *   r e m o v e   t h i s   c h u n k   f r o m   l i s t   * /  
                         z - > z _ f r e e c h u n k   =   z - > z _ f r e e c h u n k - > c _ n e x t ;  
                 }  
  
 # i f d e f   R T _ M E M _ S T A T S  
                 u s e d _ m e m   + =   z - > z _ c h u n k s i z e ;  
                 i f   ( u s e d _ m e m   >   m a x _ m e m )  
                         m a x _ m e m   =   u s e d _ m e m ;  
 # e n d i f  
  
                 g o t o   d o n e ;  
         }  
  
         / *  
           *   I f   a l l   z o n e s   a r e   e x h a u s t e d   w e   n e e d   t o   a l l o c a t e   a   n e w   z o n e   f o r   t h i s  
           *   i n d e x .  
           *  
           *   A t   l e a s t   o n e   s u b s y s t e m ,   t h e   t t y   c o d e   ( s e e   C R O U N D )   e x p e c t s   p o w e r - o f - 2  
           *   a l l o c a t i o n s   t o   b e   p o w e r - o f - 2   a l i g n e d .     W e   m a i n t a i n   c o m p a t i b i l i t y   b y  
           *   a d j u s t i n g   t h e   b a s e   o f f s e t   b e l o w .  
           * /  
         {  
                 r t _ i n t 3 2 _ t   o f f ;  
  
                 i f   ( ( z   =   z o n e _ f r e e )   ! =   R T _ N U L L )  
                 {  
                         / *   r e m o v e   z o n e   f r o m   f r e e   z o n e   l i s t   * /  
                         z o n e _ f r e e   =   z - > z _ n e x t ;  
                         - -   z o n e _ f r e e _ c n t ;  
                 }  
                 e l s e  
                 {  
                         / *   u n l o c k   h e a p ,   s i n c e   p a g e   a l l o c a t o r   w i l l   t h i n k   a b o u t   l o c k   * /  
                         r t _ s e m _ r e l e a s e ( & h e a p _ s e m ) ;  
  
                         / *   a l l o c a t e   a   z o n e   f r o m   p a g e   * /  
                         z   =   r t _ p a g e _ a l l o c ( z o n e _ s i z e   /   R T _ M M _ P A G E _ S I Z E ) ;  
                         i f   ( z   = =   R T _ N U L L )  
                         {  
                                 c h u n k   =   R T _ N U L L ;  
                                 g o t o   _ _ e x i t ;  
                         }  
  
                         / *   l o c k   h e a p   * /  
                         r t _ s e m _ t a k e ( & h e a p _ s e m ,   R T _ W A I T I N G _ F O R E V E R ) ;  
  
                         R T _ D E B U G _ L O G ( R T _ D E B U G _ S L A B ,   ( " a l l o c   a   n e w   z o n e :   0 x % x \ n " ,  
                                                                                   ( r t _ u b a s e _ t ) z ) ) ;  
  
                         / *   s e t   m e s s a g e   u s a g e   * /  
                         f o r   ( o f f   =   0 ,   k u p   =   b t o k u p ( z ) ;   o f f   <   z o n e _ p a g e _ c n t ;   o f f   + + )  
                         {  
                                 k u p - > t y p e   =   P A G E _ T Y P E _ S M A L L ;  
                                 k u p - > s i z e   =   o f f ;  
  
                                 k u p   + + ;  
                         }  
                 }  
  
                 / *   c l e a r   t o   z e r o   * /  
                 r t _ m e m s e t ( z ,   0 ,   s i z e o f ( s l a b _ z o n e ) ) ;  
  
                 / *   o f f s e t   o f   s l a b   z o n e   s t r u c t   i n   z o n e   * /  
                 o f f   =   s i z e o f ( s l a b _ z o n e ) ;  
  
                 / *  
                   *   G u a r e n t e e   p o w e r - o f - 2   a l i g n m e n t   f o r   p o w e r - o f - 2 - s i z e d   c h u n k s .  
                   *   O t h e r w i s e   j u s t   8 - b y t e   a l i g n   t h e   d a t a .  
                   * /  
                 i f   ( ( s i z e   |   ( s i z e   -   1 ) )   +   1   = =   ( s i z e   < <   1 ) )  
                         o f f   =   ( o f f   +   s i z e   -   1 )   &   ~ ( s i z e   -   1 ) ;  
                 e l s e  
                         o f f   =   ( o f f   +   M I N _ C H U N K _ M A S K )   &   ~ M I N _ C H U N K _ M A S K ;  
  
                 z - > z _ m a g i c           =   Z A L L O C _ S L A B _ M A G I C ;  
                 z - > z _ z o n e i n d e x   =   z i ;  
                 z - > z _ n m a x             =   ( z o n e _ s i z e   -   o f f )   /   s i z e ;  
                 z - > z _ n f r e e           =   z - > z _ n m a x   -   1 ;  
                 z - > z _ b a s e p t r       =   ( r t _ u i n t 8 _ t   * ) z   +   o f f ;  
                 z - > z _ u i n d e x         =   0 ;  
                 z - > z _ c h u n k s i z e   =   s i z e ;  
  
                 c h u n k   =   ( s l a b _ c h u n k   * ) ( z - > z _ b a s e p t r   +   z - > z _ u i n d e x   *   s i z e ) ;  
  
                 / *   l i n k   t o   z o n e   a r r a y   * /  
                 z - > z _ n e x t   =   z o n e _ a r r a y [ z i ] ;  
                 z o n e _ a r r a y [ z i ]   =   z ;  
  
 # i f d e f   R T _ M E M _ S T A T S  
                 u s e d _ m e m   + =   z - > z _ c h u n k s i z e ;  
                 i f   ( u s e d _ m e m   >   m a x _ m e m )  
                         m a x _ m e m   =   u s e d _ m e m ;  
 # e n d i f  
         }  
  
 d o n e :  
         r t _ s e m _ r e l e a s e ( & h e a p _ s e m ) ;  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ m a l l o c _ h o o k ,   ( ( c h a r   * ) c h u n k ,   s i z e ) ) ;  
  
 _ _ e x i t :  
         r e t u r n   c h u n k ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   c h a n g e   t h e   s i z e   o f   p r e v i o u s l y   a l l o c a t e d   m e m o r y   b l o c k .  
   *  
   *   @ p a r a m   p t r   t h e   p r e v i o u s l y   a l l o c a t e d   m e m o r y   b l o c k  
   *   @ p a r a m   s i z e   t h e   n e w   s i z e   o f   m e m o r y   b l o c k  
   *  
   *   @ r e t u r n   t h e   a l l o c a t e d   m e m o r y  
   * /  
 v o i d   * r t _ r e a l l o c ( v o i d   * p t r ,   r t _ s i z e _ t   s i z e )  
 {  
         v o i d   * n p t r ;  
         s l a b _ z o n e   * z ;  
         s t r u c t   m e m u s a g e   * k u p ;  
  
         i f   ( p t r   = =   R T _ N U L L )  
                 r e t u r n   r t _ m a l l o c ( s i z e ) ;  
         i f   ( s i z e   = =   0 )  
         {  
                 r t _ f r e e ( p t r ) ;  
  
                 r e t u r n   R T _ N U L L ;  
         }  
  
         / *  
           *   G e t   t h e   o r i g i n a l   a l l o c a t i o n ' s   z o n e .     I f   t h e   n e w   r e q u e s t   w i n d s   u p  
           *   u s i n g   t h e   s a m e   c h u n k   s i z e   w e   d o   n o t   h a v e   t o   d o   a n y t h i n g .  
           * /  
         k u p   =   b t o k u p ( ( r t _ u b a s e _ t ) p t r   &   ~ R T _ M M _ P A G E _ M A S K ) ;  
         i f   ( k u p - > t y p e   = =   P A G E _ T Y P E _ L A R G E )  
         {  
                 r t _ s i z e _ t   o s i z e ;  
  
                 o s i z e   =   k u p - > s i z e   < <   R T _ M M _ P A G E _ B I T S ;  
                 i f   ( ( n p t r   =   r t _ m a l l o c ( s i z e ) )   = =   R T _ N U L L )  
                         r e t u r n   R T _ N U L L ;  
                 r t _ m e m c p y ( n p t r ,   p t r ,   s i z e   >   o s i z e   ?   o s i z e   :   s i z e ) ;  
                 r t _ f r e e ( p t r ) ;  
  
                 r e t u r n   n p t r ;  
         }  
         e l s e   i f   ( k u p - > t y p e   = =   P A G E _ T Y P E _ S M A L L )  
         {  
                 z   =   ( s l a b _ z o n e   * ) ( ( ( r t _ u b a s e _ t ) p t r   &   ~ R T _ M M _ P A G E _ M A S K )   -  
                                                     k u p - > s i z e   *   R T _ M M _ P A G E _ S I Z E ) ;  
                 R T _ A S S E R T ( z - > z _ m a g i c   = =   Z A L L O C _ S L A B _ M A G I C ) ;  
  
                 z o n e i n d e x ( & s i z e ) ;  
                 i f   ( z - > z _ c h u n k s i z e   = =   s i z e )  
                         r e t u r n   ( p t r ) ;   / *   s a m e   c h u n k   * /  
  
                 / *  
                   *   A l l o c a t e   m e m o r y   f o r   t h e   n e w   r e q u e s t   s i z e .     N o t e   t h a t   z o n e i n d e x   h a s  
                   *   a l r e a d y   a d j u s t e d   t h e   r e q u e s t   s i z e   t o   t h e   a p p r o p r i a t e   c h u n k   s i z e ,   w h i c h  
                   *   s h o u l d   o p t i m i z e   o u r   b c o p y ( ) .     T h e n   c o p y   a n d   r e t u r n   t h e   n e w   p o i n t e r .  
                   * /  
                 i f   ( ( n p t r   =   r t _ m a l l o c ( s i z e ) )   = =   R T _ N U L L )  
                         r e t u r n   R T _ N U L L ;  
  
                 r t _ m e m c p y ( n p t r ,   p t r ,   s i z e   >   z - > z _ c h u n k s i z e   ?   z - > z _ c h u n k s i z e   :   s i z e ) ;  
                 r t _ f r e e ( p t r ) ;  
  
                 r e t u r n   n p t r ;  
         }  
  
         r e t u r n   R T _ N U L L ;  
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
   *   T h i s   f u n c t i o n   w i l l   r e l e a s e   t h e   p r e v i o u s   a l l o c a t e d   m e m o r y   b l o c k   b y   r t _ m a l l o c .  
   *   T h e   r e l e a s e d   m e m o r y   b l o c k   i s   t a k e n   b a c k   t o   s y s t e m   h e a p .  
   *  
   *   @ p a r a m   p t r   t h e   a d d r e s s   o f   m e m o r y   w h i c h   w i l l   b e   r e l e a s e d  
   * /  
 v o i d   r t _ f r e e ( v o i d   * p t r )  
 {  
         s l a b _ z o n e   * z ;  
         s l a b _ c h u n k   * c h u n k ;  
         s t r u c t   m e m u s a g e   * k u p ;  
  
         / *   f r e e   a   R T _ N U L L   p o i n t e r   * /  
         i f   ( p t r   = =   R T _ N U L L )  
                 r e t u r n   ;  
  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ f r e e _ h o o k ,   ( p t r ) ) ;  
  
         / *   g e t   m e m o r y   u s a g e   * /  
 # i f   R T _ D E B U G _ S L A B  
         {  
                 r t _ u b a s e _ t   a d d r   =   ( ( r t _ u b a s e _ t ) p t r   &   ~ R T _ M M _ P A G E _ M A S K ) ;  
                 R T _ D E B U G _ L O G ( R T _ D E B U G _ S L A B ,  
                                           ( " f r e e   a   m e m o r y   0 x % x   a n d   a l i g n   t o   0 x % x ,   k u p   i n d e x   % d \ n " ,  
                                             ( r t _ u b a s e _ t ) p t r ,  
                                             ( r t _ u b a s e _ t ) a d d r ,  
                                             ( ( r t _ u b a s e _ t ) ( a d d r )   -   h e a p _ s t a r t )   > >   R T _ M M _ P A G E _ B I T S ) ) ;  
         }  
 # e n d i f  
  
         k u p   =   b t o k u p ( ( r t _ u b a s e _ t ) p t r   &   ~ R T _ M M _ P A G E _ M A S K ) ;  
         / *   r e l e a s e   l a r g e   a l l o c a t i o n   * /  
         i f   ( k u p - > t y p e   = =   P A G E _ T Y P E _ L A R G E )  
         {  
                 r t _ u b a s e _ t   s i z e ;  
  
                 / *   l o c k   h e a p   * /  
                 r t _ s e m _ t a k e ( & h e a p _ s e m ,   R T _ W A I T I N G _ F O R E V E R ) ;  
                 / *   c l e a r   p a g e   c o u n t e r   * /  
                 s i z e   =   k u p - > s i z e ;  
                 k u p - > s i z e   =   0 ;  
  
 # i f d e f   R T _ M E M _ S T A T S  
                 u s e d _ m e m   - =   s i z e   *   R T _ M M _ P A G E _ S I Z E ;  
 # e n d i f  
                 r t _ s e m _ r e l e a s e ( & h e a p _ s e m ) ;  
  
                 R T _ D E B U G _ L O G ( R T _ D E B U G _ S L A B ,  
                                           ( " f r e e   l a r g e   m e m o r y   b l o c k   0 x % x ,   p a g e   c o u n t   % d \ n " ,  
                                             ( r t _ u b a s e _ t ) p t r ,   s i z e ) ) ;  
  
                 / *   f r e e   t h i s   p a g e   * /  
                 r t _ p a g e _ f r e e ( p t r ,   s i z e ) ;  
  
                 r e t u r n ;  
         }  
  
         / *   l o c k   h e a p   * /  
         r t _ s e m _ t a k e ( & h e a p _ s e m ,   R T _ W A I T I N G _ F O R E V E R ) ;  
  
         / *   z o n e   c a s e .   g e t   o u t   z o n e .   * /  
         z   =   ( s l a b _ z o n e   * ) ( ( ( r t _ u b a s e _ t ) p t r   &   ~ R T _ M M _ P A G E _ M A S K )   -  
                                             k u p - > s i z e   *   R T _ M M _ P A G E _ S I Z E ) ;  
         R T _ A S S E R T ( z - > z _ m a g i c   = =   Z A L L O C _ S L A B _ M A G I C ) ;  
  
         c h u n k                     =   ( s l a b _ c h u n k   * ) p t r ;  
         c h u n k - > c _ n e x t     =   z - > z _ f r e e c h u n k ;  
         z - > z _ f r e e c h u n k   =   c h u n k ;  
  
 # i f d e f   R T _ M E M _ S T A T S  
         u s e d _ m e m   - =   z - > z _ c h u n k s i z e ;  
 # e n d i f  
  
         / *  
           *   B u m p   t h e   n u m b e r   o f   f r e e   c h u n k s .     I f   i t   b e c o m e s   n o n - z e r o   t h e   z o n e  
           *   m u s t   b e   a d d e d   b a c k   o n t o   t h e   a p p r o p r i a t e   l i s t .  
           * /  
         i f   ( z - > z _ n f r e e + +   = =   0 )  
         {  
                 z - > z _ n e x t   =   z o n e _ a r r a y [ z - > z _ z o n e i n d e x ] ;  
                 z o n e _ a r r a y [ z - > z _ z o n e i n d e x ]   =   z ;  
         }  
  
         / *  
           *   I f   t h e   z o n e   b e c o m e s   t o t a l l y   f r e e ,   a n d   t h e r e   a r e   o t h e r   z o n e s   w e  
           *   c a n   a l l o c a t e   f r o m ,   m o v e   t h i s   z o n e   t o   t h e   F r e e Z o n e s   l i s t .     S i n c e  
           *   t h i s   c o d e   c a n   b e   c a l l e d   f r o m   a n   I P I   c a l l b a c k ,   d o   * N O T *   t r y   t o   m e s s  
           *   w i t h   k e r n e l _ m a p   h e r e .     H y s t e r e s i s   w i l l   b e   p e r f o r m e d   a t   m a l l o c ( )   t i m e .  
           * /  
         i f   ( z - > z _ n f r e e   = =   z - > z _ n m a x   & &  
                 ( z - > z _ n e x t   | |   z o n e _ a r r a y [ z - > z _ z o n e i n d e x ]   ! =   z ) )  
         {  
                 s l a b _ z o n e   * * p z ;  
  
                 R T _ D E B U G _ L O G ( R T _ D E B U G _ S L A B ,   ( " f r e e   z o n e   0 x % x \ n " ,  
                                                                           ( r t _ u b a s e _ t ) z ,   z - > z _ z o n e i n d e x ) ) ;  
  
                 / *   r e m o v e   z o n e   f r o m   z o n e   a r r a y   l i s t   * /  
                 f o r   ( p z   =   & z o n e _ a r r a y [ z - > z _ z o n e i n d e x ] ;   z   ! =   * p z ;   p z   =   & ( * p z ) - > z _ n e x t )  
                         ;  
                 * p z   =   z - > z _ n e x t ;  
  
                 / *   r e s e t   z o n e   * /  
                 z - > z _ m a g i c   =   - 1 ;  
  
                 / *   i n s e r t   t o   f r e e   z o n e   l i s t   * /  
                 z - > z _ n e x t   =   z o n e _ f r e e ;  
                 z o n e _ f r e e   =   z ;  
  
                 + +   z o n e _ f r e e _ c n t ;  
  
                 / *   r e l e a s e   z o n e   t o   p a g e   a l l o c a t o r   * /  
                 i f   ( z o n e _ f r e e _ c n t   >   Z O N E _ R E L E A S E _ T H R E S H )  
                 {  
                         r e g i s t e r   r t _ b a s e _ t   i ;  
  
                         z                   =   z o n e _ f r e e ;  
                         z o n e _ f r e e   =   z - > z _ n e x t ;  
                         - -   z o n e _ f r e e _ c n t ;  
  
                         / *   s e t   m e s s a g e   u s a g e   * /  
                         f o r   ( i   =   0 ,   k u p   =   b t o k u p ( z ) ;   i   <   z o n e _ p a g e _ c n t ;   i   + + )  
                         {  
                                 k u p - > t y p e   =   P A G E _ T Y P E _ F R E E ;  
                                 k u p - > s i z e   =   0 ;  
                                 k u p   + + ;  
                         }  
  
                         / *   u n l o c k   h e a p   * /  
                         r t _ s e m _ r e l e a s e ( & h e a p _ s e m ) ;  
  
                         / *   r e l e a s e   p a g e s   * /  
                         r t _ p a g e _ f r e e ( z ,   z o n e _ s i z e   /   R T _ M M _ P A G E _ S I Z E ) ;  
  
                         r e t u r n ;  
                 }  
         }  
         / *   u n l o c k   h e a p   * /  
         r t _ s e m _ r e l e a s e ( & h e a p _ s e m ) ;  
 }  
  
 # i f d e f   R T _ M E M _ S T A T S  
 v o i d   r t _ m e m o r y _ i n f o ( r t _ u i n t 3 2 _ t   * t o t a l ,  
                                         r t _ u i n t 3 2 _ t   * u s e d ,  
                                         r t _ u i n t 3 2 _ t   * m a x _ u s e d )  
 {  
         i f   ( t o t a l   ! =   R T _ N U L L )  
                 * t o t a l   =   h e a p _ e n d   -   h e a p _ s t a r t ;  
  
         i f   ( u s e d     ! =   R T _ N U L L )  
                 * u s e d   =   u s e d _ m e m ;  
  
         i f   ( m a x _ u s e d   ! =   R T _ N U L L )  
                 * m a x _ u s e d   =   m a x _ m e m ;  
 }  
  
 # i f d e f   R T _ U S I N G _ F I N S H  
 # i n c l u d e   < f i n s h . h >  
  
 v o i d   l i s t _ m e m ( v o i d )  
 {  
         r t _ k p r i n t f ( " t o t a l   m e m o r y :   % d \ n " ,   h e a p _ e n d   -   h e a p _ s t a r t ) ;  
         r t _ k p r i n t f ( " u s e d   m e m o r y   :   % d \ n " ,   u s e d _ m e m ) ;  
         r t _ k p r i n t f ( " m a x i m u m   a l l o c a t e d   m e m o r y :   % d \ n " ,   m a x _ m e m ) ;  
 }  
 F I N S H _ F U N C T I O N _ E X P O R T ( l i s t _ m e m ,   l i s t   m e m o r y   u s a g e   i n f o r m a t i o n )  
 # e n d i f  
 # e n d i f  
  
 / * * @ } * /  
  
 # e n d i f  