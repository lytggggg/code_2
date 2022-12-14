??/ *  
   *   C o p y r i g h t   ( c )   2 0 1 3 - 2 0 1 8   A r m   L i m i t e d .   A l l   r i g h t s   r e s e r v e d .  
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
   *  
   *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *  
   *   $ D a t e :                 1 8 .   J u n e   2 0 1 8  
   *   $ R e v i s i o n :         V 2 . 1 . 3  
   *  
   *   P r o j e c t :             C M S I S - R T O S 2   A P I  
   *   T i t l e :                 c m s i s _ o s 2 . h   h e a d e r   f i l e  
   *  
   *   V e r s i o n   2 . 1 . 3  
   *         A d d i t i o n a l   f u n c t i o n s   a l l o w e d   t o   b e   c a l l e d   f r o m   I n t e r r u p t   S e r v i c e   R o u t i n e s :  
   *         -   o s T h r e a d G e t I d  
   *   V e r s i o n   2 . 1 . 2  
   *         A d d i t i o n a l   f u n c t i o n s   a l l o w e d   t o   b e   c a l l e d   f r o m   I n t e r r u p t   S e r v i c e   R o u t i n e s :  
   *         -   o s K e r n e l G e t I n f o ,   o s K e r n e l G e t S t a t e  
   *   V e r s i o n   2 . 1 . 1  
   *         A d d i t i o n a l   f u n c t i o n s   a l l o w e d   t o   b e   c a l l e d   f r o m   I n t e r r u p t   S e r v i c e   R o u t i n e s :  
   *         -   o s K e r n e l G e t T i c k C o u n t ,   o s K e r n e l G e t T i c k F r e q  
   *         C h a n g e d   K e r n e l   T i c k   t y p e   t o   u i n t 3 2 _ t :  
   *         -   u p d a t e d :   o s K e r n e l G e t T i c k C o u n t ,   o s D e l a y U n t i l  
   *   V e r s i o n   2 . 1 . 0  
   *         S u p p o r t   f o r   c r i t i c a l   a n d   u n c r i t i c a l   s e c t i o n s   ( n e s t i n g   s a f e ) :  
   *         -   u p d a t e d :   o s K e r n e l L o c k ,   o s K e r n e l U n l o c k  
   *         -   a d d e d :   o s K e r n e l R e s t o r e L o c k  
   *         U p d a t e d   T h r e a d   a n d   E v e n t   F l a g s :  
   *         -   c h a n g e d   f l a g s   p a r a m e t e r   a n d   r e t u r n   t y p e   f r o m   i n t 3 2 _ t   t o   u i n t 3 2 _ t  
   *   V e r s i o n   2 . 0 . 0  
   *         I n i t i a l   R e l e a s e  
   * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
    
 # i f n d e f   C M S I S _ O S 2 _ H _  
 # d e f i n e   C M S I S _ O S 2 _ H _  
    
 # i f n d e f   _ _ N O _ R E T U R N  
 # i f       d e f i n e d ( _ _ C C _ A R M )  
 # d e f i n e   _ _ N O _ R E T U R N   _ _ d e c l s p e c ( n o r e t u r n )  
 # e l i f   d e f i n e d ( _ _ A R M C C _ V E R S I O N )   & &   ( _ _ A R M C C _ V E R S I O N   > =   6 0 1 0 0 5 0 )  
 # d e f i n e   _ _ N O _ R E T U R N   _ _ a t t r i b u t e _ _ ( ( _ _ n o r e t u r n _ _ ) )  
 # e l i f   d e f i n e d ( _ _ G N U C _ _ )  
 # d e f i n e   _ _ N O _ R E T U R N   _ _ a t t r i b u t e _ _ ( ( _ _ n o r e t u r n _ _ ) )  
 # e l i f   d e f i n e d ( _ _ I C C A R M _ _ )  
 # d e f i n e   _ _ N O _ R E T U R N   _ _ n o r e t u r n  
 # e l s e  
 # d e f i n e   _ _ N O _ R E T U R N  
 # e n d i f  
 # e n d i f  
    
 # i n c l u d e   < s t d i n t . h >  
 # i n c l u d e   < s t d d e f . h >  
    
 # i f d e f     _ _ c p l u s p l u s  
 e x t e r n   " C "  
 {  
 # e n d i f  
    
    
 / /     = = = =   E n u m e r a t i o n s ,   s t r u c t u r e s ,   d e f i n e s   = = = =  
    
 / / /   V e r s i o n   i n f o r m a t i o n .  
 t y p e d e f   s t r u c t   {  
     u i n t 3 2 _ t                                               a p i ;       / / / <   A P I   v e r s i o n   ( m a j o r . m i n o r . r e v :   m m n n n r r r r   d e c ) .  
     u i n t 3 2 _ t                                         k e r n e l ;       / / / <   K e r n e l   v e r s i o n   ( m a j o r . m i n o r . r e v :   m m n n n r r r r   d e c ) .  
 }   o s V e r s i o n _ t ;  
    
 / / /   K e r n e l   s t a t e .  
 t y p e d e f   e n u m   {  
     o s K e r n e l I n a c t i v e                 =     0 ,                   / / / <   I n a c t i v e .  
     o s K e r n e l R e a d y                       =     1 ,                   / / / <   R e a d y .  
     o s K e r n e l R u n n i n g                   =     2 ,                   / / / <   R u n n i n g .  
     o s K e r n e l L o c k e d                     =     3 ,                   / / / <   L o c k e d .  
     o s K e r n e l S u s p e n d e d               =     4 ,                   / / / <   S u s p e n d e d .  
     o s K e r n e l E r r o r                       =   - 1 ,                   / / / <   E r r o r .  
     o s K e r n e l R e s e r v e d                 =   0 x 7 F F F F F F F U   / / / <   P r e v e n t s   e n u m   d o w n - s i z e   c o m p i l e r   o p t i m i z a t i o n .  
 }   o s K e r n e l S t a t e _ t ;  
    
 / / /   T h r e a d   s t a t e .  
 t y p e d e f   e n u m   {  
     o s T h r e a d I n a c t i v e                 =     0 ,                   / / / <   I n a c t i v e .  
     o s T h r e a d R e a d y                       =     1 ,                   / / / <   R e a d y .  
     o s T h r e a d R u n n i n g                   =     2 ,                   / / / <   R u n n i n g .  
     o s T h r e a d B l o c k e d                   =     3 ,                   / / / <   B l o c k e d .  
     o s T h r e a d T e r m i n a t e d             =     4 ,                   / / / <   T e r m i n a t e d .  
     o s T h r e a d E r r o r                       =   - 1 ,                   / / / <   E r r o r .  
     o s T h r e a d R e s e r v e d                 =   0 x 7 F F F F F F F     / / / <   P r e v e n t s   e n u m   d o w n - s i z e   c o m p i l e r   o p t i m i z a t i o n .  
 }   o s T h r e a d S t a t e _ t ;  
    
 / / /   P r i o r i t y   v a l u e s .  
 t y p e d e f   e n u m   {  
     o s P r i o r i t y N o n e                     =     0 ,                   / / / <   N o   p r i o r i t y   ( n o t   i n i t i a l i z e d ) .  
     o s P r i o r i t y I d l e                     =     1 ,                   / / / <   R e s e r v e d   f o r   I d l e   t h r e a d .  
     o s P r i o r i t y L o w                       =     8 ,                   / / / <   P r i o r i t y :   l o w  
     o s P r i o r i t y L o w 1                     =     8 + 1 ,               / / / <   P r i o r i t y :   l o w   +   1  
     o s P r i o r i t y L o w 2                     =     8 + 2 ,               / / / <   P r i o r i t y :   l o w   +   2  
     o s P r i o r i t y L o w 3                     =     8 + 3 ,               / / / <   P r i o r i t y :   l o w   +   3  
     o s P r i o r i t y L o w 4                     =     8 + 4 ,               / / / <   P r i o r i t y :   l o w   +   4  
     o s P r i o r i t y L o w 5                     =     8 + 5 ,               / / / <   P r i o r i t y :   l o w   +   5  
     o s P r i o r i t y L o w 6                     =     8 + 6 ,               / / / <   P r i o r i t y :   l o w   +   6  
     o s P r i o r i t y L o w 7                     =     8 + 7 ,               / / / <   P r i o r i t y :   l o w   +   7  
     o s P r i o r i t y B e l o w N o r m a l       =   1 6 ,                   / / / <   P r i o r i t y :   b e l o w   n o r m a l  
     o s P r i o r i t y B e l o w N o r m a l 1     =   1 6 + 1 ,               / / / <   P r i o r i t y :   b e l o w   n o r m a l   +   1  
     o s P r i o r i t y B e l o w N o r m a l 2     =   1 6 + 2 ,               / / / <   P r i o r i t y :   b e l o w   n o r m a l   +   2  
     o s P r i o r i t y B e l o w N o r m a l 3     =   1 6 + 3 ,               / / / <   P r i o r i t y :   b e l o w   n o r m a l   +   3  
     o s P r i o r i t y B e l o w N o r m a l 4     =   1 6 + 4 ,               / / / <   P r i o r i t y :   b e l o w   n o r m a l   +   4  
     o s P r i o r i t y B e l o w N o r m a l 5     =   1 6 + 5 ,               / / / <   P r i o r i t y :   b e l o w   n o r m a l   +   5  
     o s P r i o r i t y B e l o w N o r m a l 6     =   1 6 + 6 ,               / / / <   P r i o r i t y :   b e l o w   n o r m a l   +   6  
     o s P r i o r i t y B e l o w N o r m a l 7     =   1 6 + 7 ,               / / / <   P r i o r i t y :   b e l o w   n o r m a l   +   7  
     o s P r i o r i t y N o r m a l                 =   2 4 ,                   / / / <   P r i o r i t y :   n o r m a l  
     o s P r i o r i t y N o r m a l 1               =   2 4 + 1 ,               / / / <   P r i o r i t y :   n o r m a l   +   1  
     o s P r i o r i t y N o r m a l 2               =   2 4 + 2 ,               / / / <   P r i o r i t y :   n o r m a l   +   2  
     o s P r i o r i t y N o r m a l 3               =   2 4 + 3 ,               / / / <   P r i o r i t y :   n o r m a l   +   3  
     o s P r i o r i t y N o r m a l 4               =   2 4 + 4 ,               / / / <   P r i o r i t y :   n o r m a l   +   4  
     o s P r i o r i t y N o r m a l 5               =   2 4 + 5 ,               / / / <   P r i o r i t y :   n o r m a l   +   5  
     o s P r i o r i t y N o r m a l 6               =   2 4 + 6 ,               / / / <   P r i o r i t y :   n o r m a l   +   6  
     o s P r i o r i t y N o r m a l 7               =   2 4 + 7 ,               / / / <   P r i o r i t y :   n o r m a l   +   7  
     o s P r i o r i t y A b o v e N o r m a l       =   3 2 ,                   / / / <   P r i o r i t y :   a b o v e   n o r m a l  
     o s P r i o r i t y A b o v e N o r m a l 1     =   3 2 + 1 ,               / / / <   P r i o r i t y :   a b o v e   n o r m a l   +   1  
     o s P r i o r i t y A b o v e N o r m a l 2     =   3 2 + 2 ,               / / / <   P r i o r i t y :   a b o v e   n o r m a l   +   2  
     o s P r i o r i t y A b o v e N o r m a l 3     =   3 2 + 3 ,               / / / <   P r i o r i t y :   a b o v e   n o r m a l   +   3  
     o s P r i o r i t y A b o v e N o r m a l 4     =   3 2 + 4 ,               / / / <   P r i o r i t y :   a b o v e   n o r m a l   +   4  
     o s P r i o r i t y A b o v e N o r m a l 5     =   3 2 + 5 ,               / / / <   P r i o r i t y :   a b o v e   n o r m a l   +   5  
     o s P r i o r i t y A b o v e N o r m a l 6     =   3 2 + 6 ,               / / / <   P r i o r i t y :   a b o v e   n o r m a l   +   6  
     o s P r i o r i t y A b o v e N o r m a l 7     =   3 2 + 7 ,               / / / <   P r i o r i t y :   a b o v e   n o r m a l   +   7  
     o s P r i o r i t y H i g h                     =   4 0 ,                   / / / <   P r i o r i t y :   h i g h  
     o s P r i o r i t y H i g h 1                   =   4 0 + 1 ,               / / / <   P r i o r i t y :   h i g h   +   1  
     o s P r i o r i t y H i g h 2                   =   4 0 + 2 ,               / / / <   P r i o r i t y :   h i g h   +   2  
     o s P r i o r i t y H i g h 3                   =   4 0 + 3 ,               / / / <   P r i o r i t y :   h i g h   +   3  
     o s P r i o r i t y H i g h 4                   =   4 0 + 4 ,               / / / <   P r i o r i t y :   h i g h   +   4  
     o s P r i o r i t y H i g h 5                   =   4 0 + 5 ,               / / / <   P r i o r i t y :   h i g h   +   5  
     o s P r i o r i t y H i g h 6                   =   4 0 + 6 ,               / / / <   P r i o r i t y :   h i g h   +   6  
     o s P r i o r i t y H i g h 7                   =   4 0 + 7 ,               / / / <   P r i o r i t y :   h i g h   +   7  
     o s P r i o r i t y R e a l t i m e             =   4 8 ,                   / / / <   P r i o r i t y :   r e a l t i m e  
     o s P r i o r i t y R e a l t i m e 1           =   4 8 + 1 ,               / / / <   P r i o r i t y :   r e a l t i m e   +   1  
     o s P r i o r i t y R e a l t i m e 2           =   4 8 + 2 ,               / / / <   P r i o r i t y :   r e a l t i m e   +   2  
     o s P r i o r i t y R e a l t i m e 3           =   4 8 + 3 ,               / / / <   P r i o r i t y :   r e a l t i m e   +   3  
     o s P r i o r i t y R e a l t i m e 4           =   4 8 + 4 ,               / / / <   P r i o r i t y :   r e a l t i m e   +   4  
     o s P r i o r i t y R e a l t i m e 5           =   4 8 + 5 ,               / / / <   P r i o r i t y :   r e a l t i m e   +   5  
     o s P r i o r i t y R e a l t i m e 6           =   4 8 + 6 ,               / / / <   P r i o r i t y :   r e a l t i m e   +   6  
     o s P r i o r i t y R e a l t i m e 7           =   4 8 + 7 ,               / / / <   P r i o r i t y :   r e a l t i m e   +   7  
     o s P r i o r i t y I S R                       =   5 6 ,                   / / / <   R e s e r v e d   f o r   I S R   d e f e r r e d   t h r e a d .  
     o s P r i o r i t y E r r o r                   =   - 1 ,                   / / / <   S y s t e m   c a n n o t   d e t e r m i n e   p r i o r i t y   o r   i l l e g a l   p r i o r i t y .  
     o s P r i o r i t y R e s e r v e d             =   0 x 7 F F F F F F F     / / / <   P r e v e n t s   e n u m   d o w n - s i z e   c o m p i l e r   o p t i m i z a t i o n .  
 }   o s P r i o r i t y _ t ;  
    
 / / /   E n t r y   p o i n t   o f   a   t h r e a d .  
 t y p e d e f   v o i d   ( * o s T h r e a d F u n c _ t )   ( v o i d   * a r g u m e n t ) ;  
    
 / / /   T i m e r   c a l l b a c k   f u n c t i o n .  
 t y p e d e f   v o i d   ( * o s T i m e r F u n c _ t )   ( v o i d   * a r g u m e n t ) ;  
    
 / / /   T i m e r   t y p e .  
 t y p e d e f   e n u m   {  
     o s T i m e r O n c e                               =   0 ,                     / / / <   O n e - s h o t   t i m e r .  
     o s T i m e r P e r i o d i c                       =   1                       / / / <   R e p e a t i n g   t i m e r .  
 }   o s T i m e r T y p e _ t ;  
    
 / /   T i m e o u t   v a l u e .  
 # d e f i n e   o s W a i t F o r e v e r                   0 x F F F F F F F F U   / / / <   W a i t   f o r e v e r   t i m e o u t   v a l u e .  
    
 / /   F l a g s   o p t i o n s   ( \ r e f   o s T h r e a d F l a g s W a i t   a n d   \ r e f   o s E v e n t F l a g s W a i t ) .  
 # d e f i n e   o s F l a g s W a i t A n y                 0 x 0 0 0 0 0 0 0 0 U   / / / <   W a i t   f o r   a n y   f l a g   ( d e f a u l t ) .  
 # d e f i n e   o s F l a g s W a i t A l l                 0 x 0 0 0 0 0 0 0 1 U   / / / <   W a i t   f o r   a l l   f l a g s .  
 # d e f i n e   o s F l a g s N o C l e a r                 0 x 0 0 0 0 0 0 0 2 U   / / / <   D o   n o t   c l e a r   f l a g s   w h i c h   h a v e   b e e n   s p e c i f i e d   t o   w a i t   f o r .  
    
 / /   F l a g s   e r r o r s   ( r e t u r n e d   b y   o s T h r e a d F l a g s X x x x   a n d   o s E v e n t F l a g s X x x x ) .  
 # d e f i n e   o s F l a g s E r r o r                     0 x 8 0 0 0 0 0 0 0 U   / / / <   E r r o r   i n d i c a t o r .  
 # d e f i n e   o s F l a g s E r r o r U n k n o w n       0 x F F F F F F F F U   / / / <   o s E r r o r   ( - 1 ) .  
 # d e f i n e   o s F l a g s E r r o r T i m e o u t       0 x F F F F F F F E U   / / / <   o s E r r o r T i m e o u t   ( - 2 ) .  
 # d e f i n e   o s F l a g s E r r o r R e s o u r c e     0 x F F F F F F F D U   / / / <   o s E r r o r R e s o u r c e   ( - 3 ) .  
 # d e f i n e   o s F l a g s E r r o r P a r a m e t e r   0 x F F F F F F F C U   / / / <   o s E r r o r P a r a m e t e r   ( - 4 ) .  
 # d e f i n e   o s F l a g s E r r o r I S R               0 x F F F F F F F A U   / / / <   o s E r r o r I S R   ( - 6 ) .  
    
 / /   T h r e a d   a t t r i b u t e s   ( a t t r _ b i t s   i n   \ r e f   o s T h r e a d A t t r _ t ) .  
 # d e f i n e   o s T h r e a d D e t a c h e d             0 x 0 0 0 0 0 0 0 0 U   / / / <   T h r e a d   c r e a t e d   i n   d e t a c h e d   m o d e   ( d e f a u l t )  
 # d e f i n e   o s T h r e a d J o i n a b l e             0 x 0 0 0 0 0 0 0 1 U   / / / <   T h r e a d   c r e a t e d   i n   j o i n a b l e   m o d e  
    
 / /   M u t e x   a t t r i b u t e s   ( a t t r _ b i t s   i n   \ r e f   o s M u t e x A t t r _ t ) .  
 # d e f i n e   o s M u t e x R e c u r s i v e             0 x 0 0 0 0 0 0 0 1 U   / / / <   R e c u r s i v e   m u t e x .  
 # d e f i n e   o s M u t e x P r i o I n h e r i t         0 x 0 0 0 0 0 0 0 2 U   / / / <   P r i o r i t y   i n h e r i t   p r o t o c o l .  
 # d e f i n e   o s M u t e x R o b u s t                   0 x 0 0 0 0 0 0 0 8 U   / / / <   R o b u s t   m u t e x .  
    
 / / /   S t a t u s   c o d e   v a l u e s   r e t u r n e d   b y   C M S I S - R T O S   f u n c t i o n s .  
 t y p e d e f   e n u m   {  
     o s O K                                             =     0 ,                   / / / <   O p e r a t i o n   c o m p l e t e d   s u c c e s s f u l l y .  
     o s E r r o r                                       =   - 1 ,                   / / / <   U n s p e c i f i e d   R T O S   e r r o r :   r u n - t i m e   e r r o r   b u t   n o   o t h e r   e r r o r   m e s s a g e   f i t s .  
     o s E r r o r T i m e o u t                         =   - 2 ,                   / / / <   O p e r a t i o n   n o t   c o m p l e t e d   w i t h i n   t h e   t i m e o u t   p e r i o d .  
     o s E r r o r R e s o u r c e                       =   - 3 ,                   / / / <   R e s o u r c e   n o t   a v a i l a b l e .  
     o s E r r o r P a r a m e t e r                     =   - 4 ,                   / / / <   P a r a m e t e r   e r r o r .  
     o s E r r o r N o M e m o r y                       =   - 5 ,                   / / / <   S y s t e m   i s   o u t   o f   m e m o r y :   i t   w a s   i m p o s s i b l e   t o   a l l o c a t e   o r   r e s e r v e   m e m o r y   f o r   t h e   o p e r a t i o n .  
     o s E r r o r I S R                                 =   - 6 ,                   / / / <   N o t   a l l o w e d   i n   I S R   c o n t e x t :   t h e   f u n c t i o n   c a n n o t   b e   c a l l e d   f r o m   i n t e r r u p t   s e r v i c e   r o u t i n e s .  
     o s S t a t u s R e s e r v e d                     =   0 x 7 F F F F F F F     / / / <   P r e v e n t s   e n u m   d o w n - s i z e   c o m p i l e r   o p t i m i z a t i o n .  
 }   o s S t a t u s _ t ;  
    
    
 / / /   \ d e t a i l s   T h r e a d   I D   i d e n t i f i e s   t h e   t h r e a d .  
 t y p e d e f   v o i d   * o s T h r e a d I d _ t ;  
    
 / / /   \ d e t a i l s   T i m e r   I D   i d e n t i f i e s   t h e   t i m e r .  
 t y p e d e f   v o i d   * o s T i m e r I d _ t ;  
    
 / / /   \ d e t a i l s   E v e n t   F l a g s   I D   i d e n t i f i e s   t h e   e v e n t   f l a g s .  
 t y p e d e f   v o i d   * o s E v e n t F l a g s I d _ t ;  
    
 / / /   \ d e t a i l s   M u t e x   I D   i d e n t i f i e s   t h e   m u t e x .  
 t y p e d e f   v o i d   * o s M u t e x I d _ t ;  
    
 / / /   \ d e t a i l s   S e m a p h o r e   I D   i d e n t i f i e s   t h e   s e m a p h o r e .  
 t y p e d e f   v o i d   * o s S e m a p h o r e I d _ t ;  
    
 / / /   \ d e t a i l s   M e m o r y   P o o l   I D   i d e n t i f i e s   t h e   m e m o r y   p o o l .  
 t y p e d e f   v o i d   * o s M e m o r y P o o l I d _ t ;  
    
 / / /   \ d e t a i l s   M e s s a g e   Q u e u e   I D   i d e n t i f i e s   t h e   m e s s a g e   q u e u e .  
 t y p e d e f   v o i d   * o s M e s s a g e Q u e u e I d _ t ;  
    
    
 # i f n d e f   T Z _ M O D U L E I D _ T  
 # d e f i n e   T Z _ M O D U L E I D _ T  
 / / /   \ d e t a i l s   D a t a   t y p e   t h a t   i d e n t i f i e s   s e c u r e   s o f t w a r e   m o d u l e s   c a l l e d   b y   a   p r o c e s s .  
 t y p e d e f   u i n t 3 2 _ t   T Z _ M o d u l e I d _ t ;  
 # e n d i f  
    
    
 / / /   A t t r i b u t e s   s t r u c t u r e   f o r   t h r e a d .  
 t y p e d e f   s t r u c t   {  
     c o n s t   c h a r                                       * n a m e ;       / / / <   n a m e   o f   t h e   t h r e a d  
     u i n t 3 2 _ t                                   a t t r _ b i t s ;       / / / <   a t t r i b u t e   b i t s  
     v o i d                                             * c b _ m e m ;         / / / <   m e m o r y   f o r   c o n t r o l   b l o c k  
     u i n t 3 2 _ t                                       c b _ s i z e ;       / / / <   s i z e   o f   p r o v i d e d   m e m o r y   f o r   c o n t r o l   b l o c k  
     v o i d                                       * s t a c k _ m e m ;         / / / <   m e m o r y   f o r   s t a c k  
     u i n t 3 2 _ t                                 s t a c k _ s i z e ;       / / / <   s i z e   o f   s t a c k  
     o s P r i o r i t y _ t                             p r i o r i t y ;       / / / <   i n i t i a l   t h r e a d   p r i o r i t y   ( d e f a u l t :   o s P r i o r i t y N o r m a l )  
     T Z _ M o d u l e I d _ t                         t z _ m o d u l e ;       / / / <   T r u s t Z o n e   m o d u l e   i d e n t i f i e r  
     u i n t 3 2 _ t                                     r e s e r v e d ;       / / / <   r e s e r v e d   ( m u s t   b e   0 )  
 }   o s T h r e a d A t t r _ t ;  
    
 / / /   A t t r i b u t e s   s t r u c t u r e   f o r   t i m e r .  
 t y p e d e f   s t r u c t   {  
     c o n s t   c h a r                                       * n a m e ;       / / / <   n a m e   o f   t h e   t i m e r  
     u i n t 3 2 _ t                                   a t t r _ b i t s ;       / / / <   a t t r i b u t e   b i t s  
     v o i d                                             * c b _ m e m ;         / / / <   m e m o r y   f o r   c o n t r o l   b l o c k  
     u i n t 3 2 _ t                                       c b _ s i z e ;       / / / <   s i z e   o f   p r o v i d e d   m e m o r y   f o r   c o n t r o l   b l o c k  
 }   o s T i m e r A t t r _ t ;  
    
 / / /   A t t r i b u t e s   s t r u c t u r e   f o r   e v e n t   f l a g s .  
 t y p e d e f   s t r u c t   {  
     c o n s t   c h a r                                       * n a m e ;       / / / <   n a m e   o f   t h e   e v e n t   f l a g s  
     u i n t 3 2 _ t                                   a t t r _ b i t s ;       / / / <   a t t r i b u t e   b i t s  
     v o i d                                             * c b _ m e m ;         / / / <   m e m o r y   f o r   c o n t r o l   b l o c k  
     u i n t 3 2 _ t                                       c b _ s i z e ;       / / / <   s i z e   o f   p r o v i d e d   m e m o r y   f o r   c o n t r o l   b l o c k  
 }   o s E v e n t F l a g s A t t r _ t ;  
    
 / / /   A t t r i b u t e s   s t r u c t u r e   f o r   m u t e x .  
 t y p e d e f   s t r u c t   {  
     c o n s t   c h a r                                       * n a m e ;       / / / <   n a m e   o f   t h e   m u t e x  
     u i n t 3 2 _ t                                   a t t r _ b i t s ;       / / / <   a t t r i b u t e   b i t s  
     v o i d                                             * c b _ m e m ;         / / / <   m e m o r y   f o r   c o n t r o l   b l o c k  
     u i n t 3 2 _ t                                       c b _ s i z e ;       / / / <   s i z e   o f   p r o v i d e d   m e m o r y   f o r   c o n t r o l   b l o c k  
 }   o s M u t e x A t t r _ t ;  
    
 / / /   A t t r i b u t e s   s t r u c t u r e   f o r   s e m a p h o r e .  
 t y p e d e f   s t r u c t   {  
     c o n s t   c h a r                                       * n a m e ;       / / / <   n a m e   o f   t h e   s e m a p h o r e  
     u i n t 3 2 _ t                                   a t t r _ b i t s ;       / / / <   a t t r i b u t e   b i t s  
     v o i d                                             * c b _ m e m ;         / / / <   m e m o r y   f o r   c o n t r o l   b l o c k  
     u i n t 3 2 _ t                                       c b _ s i z e ;       / / / <   s i z e   o f   p r o v i d e d   m e m o r y   f o r   c o n t r o l   b l o c k  
 }   o s S e m a p h o r e A t t r _ t ;  
    
 / / /   A t t r i b u t e s   s t r u c t u r e   f o r   m e m o r y   p o o l .  
 t y p e d e f   s t r u c t   {  
     c o n s t   c h a r                                       * n a m e ;       / / / <   n a m e   o f   t h e   m e m o r y   p o o l  
     u i n t 3 2 _ t                                   a t t r _ b i t s ;       / / / <   a t t r i b u t e   b i t s  
     v o i d                                             * c b _ m e m ;         / / / <   m e m o r y   f o r   c o n t r o l   b l o c k  
     u i n t 3 2 _ t                                       c b _ s i z e ;       / / / <   s i z e   o f   p r o v i d e d   m e m o r y   f o r   c o n t r o l   b l o c k  
     v o i d                                             * m p _ m e m ;         / / / <   m e m o r y   f o r   d a t a   s t o r a g e  
     u i n t 3 2 _ t                                       m p _ s i z e ;       / / / <   s i z e   o f   p r o v i d e d   m e m o r y   f o r   d a t a   s t o r a g e    
 }   o s M e m o r y P o o l A t t r _ t ;  
    
 / / /   A t t r i b u t e s   s t r u c t u r e   f o r   m e s s a g e   q u e u e .  
 t y p e d e f   s t r u c t   {  
     c o n s t   c h a r                                       * n a m e ;       / / / <   n a m e   o f   t h e   m e s s a g e   q u e u e  
     u i n t 3 2 _ t                                   a t t r _ b i t s ;       / / / <   a t t r i b u t e   b i t s  
     v o i d                                             * c b _ m e m ;         / / / <   m e m o r y   f o r   c o n t r o l   b l o c k  
     u i n t 3 2 _ t                                       c b _ s i z e ;       / / / <   s i z e   o f   p r o v i d e d   m e m o r y   f o r   c o n t r o l   b l o c k  
     v o i d                                             * m q _ m e m ;         / / / <   m e m o r y   f o r   d a t a   s t o r a g e  
     u i n t 3 2 _ t                                       m q _ s i z e ;       / / / <   s i z e   o f   p r o v i d e d   m e m o r y   f o r   d a t a   s t o r a g e    
 }   o s M e s s a g e Q u e u e A t t r _ t ;  
    
    
 / /     = = = =   K e r n e l   M a n a g e m e n t   F u n c t i o n s   = = = =  
    
 / / /   I n i t i a l i z e   t h e   R T O S   K e r n e l .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s _ t   o s K e r n e l I n i t i a l i z e   ( v o i d ) ;  
    
 / / /     G e t   R T O S   K e r n e l   I n f o r m a t i o n .  
 / / /   \ p a r a m [ o u t ]         v e r s i o n               p o i n t e r   t o   b u f f e r   f o r   r e t r i e v i n g   v e r s i o n   i n f o r m a t i o n .  
 / / /   \ p a r a m [ o u t ]         i d _ b u f                 p o i n t e r   t o   b u f f e r   f o r   r e t r i e v i n g   k e r n e l   i d e n t i f i c a t i o n   s t r i n g .  
 / / /   \ p a r a m [ i n ]           i d _ s i z e               s i z e   o f   b u f f e r   f o r   k e r n e l   i d e n t i f i c a t i o n   s t r i n g .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s _ t   o s K e r n e l G e t I n f o   ( o s V e r s i o n _ t   * v e r s i o n ,   c h a r   * i d _ b u f ,   u i n t 3 2 _ t   i d _ s i z e ) ;  
    
 / / /   G e t   t h e   c u r r e n t   R T O S   K e r n e l   s t a t e .  
 / / /   \ r e t u r n   c u r r e n t   R T O S   K e r n e l   s t a t e .  
 o s K e r n e l S t a t e _ t   o s K e r n e l G e t S t a t e   ( v o i d ) ;  
    
 / / /   S t a r t   t h e   R T O S   K e r n e l   s c h e d u l e r .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s _ t   o s K e r n e l S t a r t   ( v o i d ) ;  
    
 / / /   L o c k   t h e   R T O S   K e r n e l   s c h e d u l e r .  
 / / /   \ r e t u r n   p r e v i o u s   l o c k   s t a t e   ( 1   -   l o c k e d ,   0   -   n o t   l o c k e d ,   e r r o r   c o d e   i f   n e g a t i v e ) .  
 i n t 3 2 _ t   o s K e r n e l L o c k   ( v o i d ) ;  
    
 / / /   U n l o c k   t h e   R T O S   K e r n e l   s c h e d u l e r .  
 / / /   \ r e t u r n   p r e v i o u s   l o c k   s t a t e   ( 1   -   l o c k e d ,   0   -   n o t   l o c k e d ,   e r r o r   c o d e   i f   n e g a t i v e ) .  
 i n t 3 2 _ t   o s K e r n e l U n l o c k   ( v o i d ) ;  
    
 / / /   R e s t o r e   t h e   R T O S   K e r n e l   s c h e d u l e r   l o c k   s t a t e .  
 / / /   \ p a r a m [ i n ]           l o c k                     l o c k   s t a t e   o b t a i n e d   b y   \ r e f   o s K e r n e l L o c k   o r   \ r e f   o s K e r n e l U n l o c k .  
 / / /   \ r e t u r n   n e w   l o c k   s t a t e   ( 1   -   l o c k e d ,   0   -   n o t   l o c k e d ,   e r r o r   c o d e   i f   n e g a t i v e ) .  
 i n t 3 2 _ t   o s K e r n e l R e s t o r e L o c k   ( i n t 3 2 _ t   l o c k ) ;  
    
 / / /   S u s p e n d   t h e   R T O S   K e r n e l   s c h e d u l e r .  
 / / /   \ r e t u r n   t i m e   i n   t i c k s ,   f o r   h o w   l o n g   t h e   s y s t e m   c a n   s l e e p   o r   p o w e r - d o w n .  
 u i n t 3 2 _ t   o s K e r n e l S u s p e n d   ( v o i d ) ;  
    
 / / /   R e s u m e   t h e   R T O S   K e r n e l   s c h e d u l e r .  
 / / /   \ p a r a m [ i n ]           s l e e p _ t i c k s       t i m e   i n   t i c k s   f o r   h o w   l o n g   t h e   s y s t e m   w a s   i n   s l e e p   o r   p o w e r - d o w n   m o d e .  
 v o i d   o s K e r n e l R e s u m e   ( u i n t 3 2 _ t   s l e e p _ t i c k s ) ;  
    
 / / /   G e t   t h e   R T O S   k e r n e l   t i c k   c o u n t .  
 / / /   \ r e t u r n   R T O S   k e r n e l   c u r r e n t   t i c k   c o u n t .  
 u i n t 3 2 _ t   o s K e r n e l G e t T i c k C o u n t   ( v o i d ) ;  
    
 / / /   G e t   t h e   R T O S   k e r n e l   t i c k   f r e q u e n c y .  
 / / /   \ r e t u r n   f r e q u e n c y   o f   t h e   k e r n e l   t i c k   i n   h e r t z ,   i . e .   k e r n e l   t i c k s   p e r   s e c o n d .  
 u i n t 3 2 _ t   o s K e r n e l G e t T i c k F r e q   ( v o i d ) ;  
    
 / / /   G e t   t h e   R T O S   k e r n e l   s y s t e m   t i m e r   c o u n t .  
 / / /   \ r e t u r n   R T O S   k e r n e l   c u r r e n t   s y s t e m   t i m e r   c o u n t   a s   3 2 - b i t   v a l u e .  
 u i n t 3 2 _ t   o s K e r n e l G e t S y s T i m e r C o u n t   ( v o i d ) ;  
    
 / / /   G e t   t h e   R T O S   k e r n e l   s y s t e m   t i m e r   f r e q u e n c y .  
 / / /   \ r e t u r n   f r e q u e n c y   o f   t h e   s y s t e m   t i m e r   i n   h e r t z ,   i . e .   t i m e r   t i c k s   p e r   s e c o n d .  
 u i n t 3 2 _ t   o s K e r n e l G e t S y s T i m e r F r e q   ( v o i d ) ;  
    
    
 / /     = = = =   T h r e a d   M a n a g e m e n t   F u n c t i o n s   = = = =  
    
 / / /   C r e a t e   a   t h r e a d   a n d   a d d   i t   t o   A c t i v e   T h r e a d s .  
 / / /   \ p a r a m [ i n ]           f u n c                     t h r e a d   f u n c t i o n .  
 / / /   \ p a r a m [ i n ]           a r g u m e n t             p o i n t e r   t h a t   i s   p a s s e d   t o   t h e   t h r e a d   f u n c t i o n   a s   s t a r t   a r g u m e n t .  
 / / /   \ p a r a m [ i n ]           a t t r                     t h r e a d   a t t r i b u t e s ;   N U L L :   d e f a u l t   v a l u e s .  
 / / /   \ r e t u r n   t h r e a d   I D   f o r   r e f e r e n c e   b y   o t h e r   f u n c t i o n s   o r   N U L L   i n   c a s e   o f   e r r o r .  
 o s T h r e a d I d _ t   o s T h r e a d N e w   ( o s T h r e a d F u n c _ t   f u n c ,   v o i d   * a r g u m e n t ,   c o n s t   o s T h r e a d A t t r _ t   * a t t r ) ;  
    
 / / /   G e t   n a m e   o f   a   t h r e a d .  
 / / /   \ p a r a m [ i n ]           t h r e a d _ i d           t h r e a d   I D   o b t a i n e d   b y   \ r e f   o s T h r e a d N e w   o r   \ r e f   o s T h r e a d G e t I d .  
 / / /   \ r e t u r n   n a m e   a s   n u l l - t e r m i n a t e d   s t r i n g .  
 c o n s t   c h a r   * o s T h r e a d G e t N a m e   ( o s T h r e a d I d _ t   t h r e a d _ i d ) ;  
    
 / / /   R e t u r n   t h e   t h r e a d   I D   o f   t h e   c u r r e n t   r u n n i n g   t h r e a d .  
 / / /   \ r e t u r n   t h r e a d   I D   f o r   r e f e r e n c e   b y   o t h e r   f u n c t i o n s   o r   N U L L   i n   c a s e   o f   e r r o r .  
 o s T h r e a d I d _ t   o s T h r e a d G e t I d   ( v o i d ) ;  
    
 / / /   G e t   c u r r e n t   t h r e a d   s t a t e   o f   a   t h r e a d .  
 / / /   \ p a r a m [ i n ]           t h r e a d _ i d           t h r e a d   I D   o b t a i n e d   b y   \ r e f   o s T h r e a d N e w   o r   \ r e f   o s T h r e a d G e t I d .  
 / / /   \ r e t u r n   c u r r e n t   t h r e a d   s t a t e   o f   t h e   s p e c i f i e d   t h r e a d .  
 o s T h r e a d S t a t e _ t   o s T h r e a d G e t S t a t e   ( o s T h r e a d I d _ t   t h r e a d _ i d ) ;  
    
 / / /   G e t   s t a c k   s i z e   o f   a   t h r e a d .  
 / / /   \ p a r a m [ i n ]           t h r e a d _ i d           t h r e a d   I D   o b t a i n e d   b y   \ r e f   o s T h r e a d N e w   o r   \ r e f   o s T h r e a d G e t I d .  
 / / /   \ r e t u r n   s t a c k   s i z e   i n   b y t e s .  
 u i n t 3 2 _ t   o s T h r e a d G e t S t a c k S i z e   ( o s T h r e a d I d _ t   t h r e a d _ i d ) ;  
    
 / / /   G e t   a v a i l a b l e   s t a c k   s p a c e   o f   a   t h r e a d   b a s e d   o n   s t a c k   w a t e r m a r k   r e c o r d i n g   d u r i n g   e x e c u t i o n .  
 / / /   \ p a r a m [ i n ]           t h r e a d _ i d           t h r e a d   I D   o b t a i n e d   b y   \ r e f   o s T h r e a d N e w   o r   \ r e f   o s T h r e a d G e t I d .  
 / / /   \ r e t u r n   r e m a i n i n g   s t a c k   s p a c e   i n   b y t e s .  
 u i n t 3 2 _ t   o s T h r e a d G e t S t a c k S p a c e   ( o s T h r e a d I d _ t   t h r e a d _ i d ) ;  
    
 / / /   C h a n g e   p r i o r i t y   o f   a   t h r e a d .  
 / / /   \ p a r a m [ i n ]           t h r e a d _ i d           t h r e a d   I D   o b t a i n e d   b y   \ r e f   o s T h r e a d N e w   o r   \ r e f   o s T h r e a d G e t I d .  
 / / /   \ p a r a m [ i n ]           p r i o r i t y             n e w   p r i o r i t y   v a l u e   f o r   t h e   t h r e a d   f u n c t i o n .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s _ t   o s T h r e a d S e t P r i o r i t y   ( o s T h r e a d I d _ t   t h r e a d _ i d ,   o s P r i o r i t y _ t   p r i o r i t y ) ;  
    
 / / /   G e t   c u r r e n t   p r i o r i t y   o f   a   t h r e a d .  
 / / /   \ p a r a m [ i n ]           t h r e a d _ i d           t h r e a d   I D   o b t a i n e d   b y   \ r e f   o s T h r e a d N e w   o r   \ r e f   o s T h r e a d G e t I d .  
 / / /   \ r e t u r n   c u r r e n t   p r i o r i t y   v a l u e   o f   t h e   s p e c i f i e d   t h r e a d .  
 o s P r i o r i t y _ t   o s T h r e a d G e t P r i o r i t y   ( o s T h r e a d I d _ t   t h r e a d _ i d ) ;  
    
 / / /   P a s s   c o n t r o l   t o   n e x t   t h r e a d   t h a t   i s   i n   s t a t e   \ b   R E A D Y .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s _ t   o s T h r e a d Y i e l d   ( v o i d ) ;  
    
 / / /   S u s p e n d   e x e c u t i o n   o f   a   t h r e a d .  
 / / /   \ p a r a m [ i n ]           t h r e a d _ i d           t h r e a d   I D   o b t a i n e d   b y   \ r e f   o s T h r e a d N e w   o r   \ r e f   o s T h r e a d G e t I d .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s _ t   o s T h r e a d S u s p e n d   ( o s T h r e a d I d _ t   t h r e a d _ i d ) ;  
    
 / / /   R e s u m e   e x e c u t i o n   o f   a   t h r e a d .  
 / / /   \ p a r a m [ i n ]           t h r e a d _ i d           t h r e a d   I D   o b t a i n e d   b y   \ r e f   o s T h r e a d N e w   o r   \ r e f   o s T h r e a d G e t I d .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s _ t   o s T h r e a d R e s u m e   ( o s T h r e a d I d _ t   t h r e a d _ i d ) ;  
    
 / / /   D e t a c h   a   t h r e a d   ( t h r e a d   s t o r a g e   c a n   b e   r e c l a i m e d   w h e n   t h r e a d   t e r m i n a t e s ) .  
 / / /   \ p a r a m [ i n ]           t h r e a d _ i d           t h r e a d   I D   o b t a i n e d   b y   \ r e f   o s T h r e a d N e w   o r   \ r e f   o s T h r e a d G e t I d .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s _ t   o s T h r e a d D e t a c h   ( o s T h r e a d I d _ t   t h r e a d _ i d ) ;  
    
 / / /   W a i t   f o r   s p e c i f i e d   t h r e a d   t o   t e r m i n a t e .  
 / / /   \ p a r a m [ i n ]           t h r e a d _ i d           t h r e a d   I D   o b t a i n e d   b y   \ r e f   o s T h r e a d N e w   o r   \ r e f   o s T h r e a d G e t I d .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s _ t   o s T h r e a d J o i n   ( o s T h r e a d I d _ t   t h r e a d _ i d ) ;  
    
 / / /   T e r m i n a t e   e x e c u t i o n   o f   c u r r e n t   r u n n i n g   t h r e a d .  
 _ _ N O _ R E T U R N   v o i d   o s T h r e a d E x i t   ( v o i d ) ;  
    
 / / /   T e r m i n a t e   e x e c u t i o n   o f   a   t h r e a d .  
 / / /   \ p a r a m [ i n ]           t h r e a d _ i d           t h r e a d   I D   o b t a i n e d   b y   \ r e f   o s T h r e a d N e w   o r   \ r e f   o s T h r e a d G e t I d .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s _ t   o s T h r e a d T e r m i n a t e   ( o s T h r e a d I d _ t   t h r e a d _ i d ) ;  
    
 / / /   G e t   n u m b e r   o f   a c t i v e   t h r e a d s .  
 / / /   \ r e t u r n   n u m b e r   o f   a c t i v e   t h r e a d s .  
 u i n t 3 2 _ t   o s T h r e a d G e t C o u n t   ( v o i d ) ;  
    
 / / /   E n u m e r a t e   a c t i v e   t h r e a d s .  
 / / /   \ p a r a m [ o u t ]         t h r e a d _ a r r a y     p o i n t e r   t o   a r r a y   f o r   r e t r i e v i n g   t h r e a d   I D s .  
 / / /   \ p a r a m [ i n ]           a r r a y _ i t e m s       m a x i m u m   n u m b e r   o f   i t e m s   i n   a r r a y   f o r   r e t r i e v i n g   t h r e a d   I D s .  
 / / /   \ r e t u r n   n u m b e r   o f   e n u m e r a t e d   t h r e a d s .  
 u i n t 3 2 _ t   o s T h r e a d E n u m e r a t e   ( o s T h r e a d I d _ t   * t h r e a d _ a r r a y ,   u i n t 3 2 _ t   a r r a y _ i t e m s ) ;  
    
    
 / /     = = = =   T h r e a d   F l a g s   F u n c t i o n s   = = = =  
    
 / / /   S e t   t h e   s p e c i f i e d   T h r e a d   F l a g s   o f   a   t h r e a d .  
 / / /   \ p a r a m [ i n ]           t h r e a d _ i d           t h r e a d   I D   o b t a i n e d   b y   \ r e f   o s T h r e a d N e w   o r   \ r e f   o s T h r e a d G e t I d .  
 / / /   \ p a r a m [ i n ]           f l a g s                   s p e c i f i e s   t h e   f l a g s   o f   t h e   t h r e a d   t h a t   s h a l l   b e   s e t .  
 / / /   \ r e t u r n   t h r e a d   f l a g s   a f t e r   s e t t i n g   o r   e r r o r   c o d e   i f   h i g h e s t   b i t   s e t .  
 u i n t 3 2 _ t   o s T h r e a d F l a g s S e t   ( o s T h r e a d I d _ t   t h r e a d _ i d ,   u i n t 3 2 _ t   f l a g s ) ;  
    
 / / /   C l e a r   t h e   s p e c i f i e d   T h r e a d   F l a g s   o f   c u r r e n t   r u n n i n g   t h r e a d .  
 / / /   \ p a r a m [ i n ]           f l a g s                   s p e c i f i e s   t h e   f l a g s   o f   t h e   t h r e a d   t h a t   s h a l l   b e   c l e a r e d .  
 / / /   \ r e t u r n   t h r e a d   f l a g s   b e f o r e   c l e a r i n g   o r   e r r o r   c o d e   i f   h i g h e s t   b i t   s e t .  
 u i n t 3 2 _ t   o s T h r e a d F l a g s C l e a r   ( u i n t 3 2 _ t   f l a g s ) ;  
    
 / / /   G e t   t h e   c u r r e n t   T h r e a d   F l a g s   o f   c u r r e n t   r u n n i n g   t h r e a d .  
 / / /   \ r e t u r n   c u r r e n t   t h r e a d   f l a g s .  
 u i n t 3 2 _ t   o s T h r e a d F l a g s G e t   ( v o i d ) ;  
    
 / / /   W a i t   f o r   o n e   o r   m o r e   T h r e a d   F l a g s   o f   t h e   c u r r e n t   r u n n i n g   t h r e a d   t o   b e c o m e   s i g n a l e d .  
 / / /   \ p a r a m [ i n ]           f l a g s                   s p e c i f i e s   t h e   f l a g s   t o   w a i t   f o r .  
 / / /   \ p a r a m [ i n ]           o p t i o n s               s p e c i f i e s   f l a g s   o p t i o n s   ( o s F l a g s X x x x ) .  
 / / /   \ p a r a m [ i n ]           t i m e o u t               \ r e f   C M S I S _ R T O S _ T i m e O u t V a l u e   o r   0   i n   c a s e   o f   n o   t i m e - o u t .  
 / / /   \ r e t u r n   t h r e a d   f l a g s   b e f o r e   c l e a r i n g   o r   e r r o r   c o d e   i f   h i g h e s t   b i t   s e t .  
 u i n t 3 2 _ t   o s T h r e a d F l a g s W a i t   ( u i n t 3 2 _ t   f l a g s ,   u i n t 3 2 _ t   o p t i o n s ,   u i n t 3 2 _ t   t i m e o u t ) ;  
    
    
 / /     = = = =   G e n e r i c   W a i t   F u n c t i o n s   = = = =  
    
 / / /   W a i t   f o r   T i m e o u t   ( T i m e   D e l a y ) .  
 / / /   \ p a r a m [ i n ]           t i c k s                   \ r e f   C M S I S _ R T O S _ T i m e O u t V a l u e   " t i m e   t i c k s "   v a l u e  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s _ t   o s D e l a y   ( u i n t 3 2 _ t   t i c k s ) ;  
    
 / / /   W a i t   u n t i l   s p e c i f i e d   t i m e .  
 / / /   \ p a r a m [ i n ]           t i c k s                   a b s o l u t e   t i m e   i n   t i c k s  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s _ t   o s D e l a y U n t i l   ( u i n t 3 2 _ t   t i c k s ) ;  
    
    
 / /     = = = =   T i m e r   M a n a g e m e n t   F u n c t i o n s   = = = =  
    
 / / /   C r e a t e   a n d   I n i t i a l i z e   a   t i m e r .  
 / / /   \ p a r a m [ i n ]           f u n c                     f u n c t i o n   p o i n t e r   t o   c a l l b a c k   f u n c t i o n .  
 / / /   \ p a r a m [ i n ]           t y p e                     \ r e f   o s T i m e r O n c e   f o r   o n e - s h o t   o r   \ r e f   o s T i m e r P e r i o d i c   f o r   p e r i o d i c   b e h a v i o r .  
 / / /   \ p a r a m [ i n ]           a r g u m e n t             a r g u m e n t   t o   t h e   t i m e r   c a l l b a c k   f u n c t i o n .  
 / / /   \ p a r a m [ i n ]           a t t r                     t i m e r   a t t r i b u t e s ;   N U L L :   d e f a u l t   v a l u e s .  
 / / /   \ r e t u r n   t i m e r   I D   f o r   r e f e r e n c e   b y   o t h e r   f u n c t i o n s   o r   N U L L   i n   c a s e   o f   e r r o r .  
 o s T i m e r I d _ t   o s T i m e r N e w   ( o s T i m e r F u n c _ t   f u n c ,   o s T i m e r T y p e _ t   t y p e ,   v o i d   * a r g u m e n t ,   c o n s t   o s T i m e r A t t r _ t   * a t t r ) ;  
    
 / / /   G e t   n a m e   o f   a   t i m e r .  
 / / /   \ p a r a m [ i n ]           t i m e r _ i d             t i m e r   I D   o b t a i n e d   b y   \ r e f   o s T i m e r N e w .  
 / / /   \ r e t u r n   n a m e   a s   n u l l - t e r m i n a t e d   s t r i n g .  
 c o n s t   c h a r   * o s T i m e r G e t N a m e   ( o s T i m e r I d _ t   t i m e r _ i d ) ;  
    
 / / /   S t a r t   o r   r e s t a r t   a   t i m e r .  
 / / /   \ p a r a m [ i n ]           t i m e r _ i d             t i m e r   I D   o b t a i n e d   b y   \ r e f   o s T i m e r N e w .  
 / / /   \ p a r a m [ i n ]           t i c k s                   \ r e f   C M S I S _ R T O S _ T i m e O u t V a l u e   " t i m e   t i c k s "   v a l u e   o f   t h e   t i m e r .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s _ t   o s T i m e r S t a r t   ( o s T i m e r I d _ t   t i m e r _ i d ,   u i n t 3 2 _ t   t i c k s ) ;  
    
 / / /   S t o p   a   t i m e r .  
 / / /   \ p a r a m [ i n ]           t i m e r _ i d             t i m e r   I D   o b t a i n e d   b y   \ r e f   o s T i m e r N e w .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s _ t   o s T i m e r S t o p   ( o s T i m e r I d _ t   t i m e r _ i d ) ;  
    
 / / /   C h e c k   i f   a   t i m e r   i s   r u n n i n g .  
 / / /   \ p a r a m [ i n ]           t i m e r _ i d             t i m e r   I D   o b t a i n e d   b y   \ r e f   o s T i m e r N e w .  
 / / /   \ r e t u r n   0   n o t   r u n n i n g ,   1   r u n n i n g .  
 u i n t 3 2 _ t   o s T i m e r I s R u n n i n g   ( o s T i m e r I d _ t   t i m e r _ i d ) ;  
    
 / / /   D e l e t e   a   t i m e r .  
 / / /   \ p a r a m [ i n ]           t i m e r _ i d             t i m e r   I D   o b t a i n e d   b y   \ r e f   o s T i m e r N e w .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s _ t   o s T i m e r D e l e t e   ( o s T i m e r I d _ t   t i m e r _ i d ) ;  
    
    
 / /     = = = =   E v e n t   F l a g s   M a n a g e m e n t   F u n c t i o n s   = = = =  
    
 / / /   C r e a t e   a n d   I n i t i a l i z e   a n   E v e n t   F l a g s   o b j e c t .  
 / / /   \ p a r a m [ i n ]           a t t r                     e v e n t   f l a g s   a t t r i b u t e s ;   N U L L :   d e f a u l t   v a l u e s .  
 / / /   \ r e t u r n   e v e n t   f l a g s   I D   f o r   r e f e r e n c e   b y   o t h e r   f u n c t i o n s   o r   N U L L   i n   c a s e   o f   e r r o r .  
 o s E v e n t F l a g s I d _ t   o s E v e n t F l a g s N e w   ( c o n s t   o s E v e n t F l a g s A t t r _ t   * a t t r ) ;  
    
 / / /   G e t   n a m e   o f   a n   E v e n t   F l a g s   o b j e c t .  
 / / /   \ p a r a m [ i n ]           e f _ i d                   e v e n t   f l a g s   I D   o b t a i n e d   b y   \ r e f   o s E v e n t F l a g s N e w .  
 / / /   \ r e t u r n   n a m e   a s   n u l l - t e r m i n a t e d   s t r i n g .  
 c o n s t   c h a r   * o s E v e n t F l a g s G e t N a m e   ( o s E v e n t F l a g s I d _ t   e f _ i d ) ;  
    
 / / /   S e t   t h e   s p e c i f i e d   E v e n t   F l a g s .  
 / / /   \ p a r a m [ i n ]           e f _ i d                   e v e n t   f l a g s   I D   o b t a i n e d   b y   \ r e f   o s E v e n t F l a g s N e w .  
 / / /   \ p a r a m [ i n ]           f l a g s                   s p e c i f i e s   t h e   f l a g s   t h a t   s h a l l   b e   s e t .  
 / / /   \ r e t u r n   e v e n t   f l a g s   a f t e r   s e t t i n g   o r   e r r o r   c o d e   i f   h i g h e s t   b i t   s e t .  
 u i n t 3 2 _ t   o s E v e n t F l a g s S e t   ( o s E v e n t F l a g s I d _ t   e f _ i d ,   u i n t 3 2 _ t   f l a g s ) ;  
    
 / / /   C l e a r   t h e   s p e c i f i e d   E v e n t   F l a g s .  
 / / /   \ p a r a m [ i n ]           e f _ i d                   e v e n t   f l a g s   I D   o b t a i n e d   b y   \ r e f   o s E v e n t F l a g s N e w .  
 / / /   \ p a r a m [ i n ]           f l a g s                   s p e c i f i e s   t h e   f l a g s   t h a t   s h a l l   b e   c l e a r e d .  
 / / /   \ r e t u r n   e v e n t   f l a g s   b e f o r e   c l e a r i n g   o r   e r r o r   c o d e   i f   h i g h e s t   b i t   s e t .  
 u i n t 3 2 _ t   o s E v e n t F l a g s C l e a r   ( o s E v e n t F l a g s I d _ t   e f _ i d ,   u i n t 3 2 _ t   f l a g s ) ;  
    
 / / /   G e t   t h e   c u r r e n t   E v e n t   F l a g s .  
 / / /   \ p a r a m [ i n ]           e f _ i d                   e v e n t   f l a g s   I D   o b t a i n e d   b y   \ r e f   o s E v e n t F l a g s N e w .  
 / / /   \ r e t u r n   c u r r e n t   e v e n t   f l a g s .  
 u i n t 3 2 _ t   o s E v e n t F l a g s G e t   ( o s E v e n t F l a g s I d _ t   e f _ i d ) ;  
    
 / / /   W a i t   f o r   o n e   o r   m o r e   E v e n t   F l a g s   t o   b e c o m e   s i g n a l e d .  
 / / /   \ p a r a m [ i n ]           e f _ i d                   e v e n t   f l a g s   I D   o b t a i n e d   b y   \ r e f   o s E v e n t F l a g s N e w .  
 / / /   \ p a r a m [ i n ]           f l a g s                   s p e c i f i e s   t h e   f l a g s   t o   w a i t   f o r .  
 / / /   \ p a r a m [ i n ]           o p t i o n s               s p e c i f i e s   f l a g s   o p t i o n s   ( o s F l a g s X x x x ) .  
 / / /   \ p a r a m [ i n ]           t i m e o u t               \ r e f   C M S I S _ R T O S _ T i m e O u t V a l u e   o r   0   i n   c a s e   o f   n o   t i m e - o u t .  
 / / /   \ r e t u r n   e v e n t   f l a g s   b e f o r e   c l e a r i n g   o r   e r r o r   c o d e   i f   h i g h e s t   b i t   s e t .  
 u i n t 3 2 _ t   o s E v e n t F l a g s W a i t   ( o s E v e n t F l a g s I d _ t   e f _ i d ,   u i n t 3 2 _ t   f l a g s ,   u i n t 3 2 _ t   o p t i o n s ,   u i n t 3 2 _ t   t i m e o u t ) ;  
    
 / / /   D e l e t e   a n   E v e n t   F l a g s   o b j e c t .  
 / / /   \ p a r a m [ i n ]           e f _ i d                   e v e n t   f l a g s   I D   o b t a i n e d   b y   \ r e f   o s E v e n t F l a g s N e w .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s _ t   o s E v e n t F l a g s D e l e t e   ( o s E v e n t F l a g s I d _ t   e f _ i d ) ;  
    
    
 / /     = = = =   M u t e x   M a n a g e m e n t   F u n c t i o n s   = = = =  
    
 / / /   C r e a t e   a n d   I n i t i a l i z e   a   M u t e x   o b j e c t .  
 / / /   \ p a r a m [ i n ]           a t t r                     m u t e x   a t t r i b u t e s ;   N U L L :   d e f a u l t   v a l u e s .  
 / / /   \ r e t u r n   m u t e x   I D   f o r   r e f e r e n c e   b y   o t h e r   f u n c t i o n s   o r   N U L L   i n   c a s e   o f   e r r o r .  
 o s M u t e x I d _ t   o s M u t e x N e w   ( c o n s t   o s M u t e x A t t r _ t   * a t t r ) ;  
    
 / / /   G e t   n a m e   o f   a   M u t e x   o b j e c t .  
 / / /   \ p a r a m [ i n ]           m u t e x _ i d             m u t e x   I D   o b t a i n e d   b y   \ r e f   o s M u t e x N e w .  
 / / /   \ r e t u r n   n a m e   a s   n u l l - t e r m i n a t e d   s t r i n g .  
 c o n s t   c h a r   * o s M u t e x G e t N a m e   ( o s M u t e x I d _ t   m u t e x _ i d ) ;  
    
 / / /   A c q u i r e   a   M u t e x   o r   t i m e o u t   i f   i t   i s   l o c k e d .  
 / / /   \ p a r a m [ i n ]           m u t e x _ i d             m u t e x   I D   o b t a i n e d   b y   \ r e f   o s M u t e x N e w .  
 / / /   \ p a r a m [ i n ]           t i m e o u t               \ r e f   C M S I S _ R T O S _ T i m e O u t V a l u e   o r   0   i n   c a s e   o f   n o   t i m e - o u t .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s _ t   o s M u t e x A c q u i r e   ( o s M u t e x I d _ t   m u t e x _ i d ,   u i n t 3 2 _ t   t i m e o u t ) ;  
    
 / / /   R e l e a s e   a   M u t e x   t h a t   w a s   a c q u i r e d   b y   \ r e f   o s M u t e x A c q u i r e .  
 / / /   \ p a r a m [ i n ]           m u t e x _ i d             m u t e x   I D   o b t a i n e d   b y   \ r e f   o s M u t e x N e w .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s _ t   o s M u t e x R e l e a s e   ( o s M u t e x I d _ t   m u t e x _ i d ) ;  
    
 / / /   G e t   T h r e a d   w h i c h   o w n s   a   M u t e x   o b j e c t .  
 / / /   \ p a r a m [ i n ]           m u t e x _ i d             m u t e x   I D   o b t a i n e d   b y   \ r e f   o s M u t e x N e w .  
 / / /   \ r e t u r n   t h r e a d   I D   o f   o w n e r   t h r e a d   o r   N U L L   w h e n   m u t e x   w a s   n o t   a c q u i r e d .  
 o s T h r e a d I d _ t   o s M u t e x G e t O w n e r   ( o s M u t e x I d _ t   m u t e x _ i d ) ;  
    
 / / /   D e l e t e   a   M u t e x   o b j e c t .  
 / / /   \ p a r a m [ i n ]           m u t e x _ i d             m u t e x   I D   o b t a i n e d   b y   \ r e f   o s M u t e x N e w .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s _ t   o s M u t e x D e l e t e   ( o s M u t e x I d _ t   m u t e x _ i d ) ;  
    
    
 / /     = = = =   S e m a p h o r e   M a n a g e m e n t   F u n c t i o n s   = = = =  
    
 / / /   C r e a t e   a n d   I n i t i a l i z e   a   S e m a p h o r e   o b j e c t .  
 / / /   \ p a r a m [ i n ]           m a x _ c o u n t           m a x i m u m   n u m b e r   o f   a v a i l a b l e   t o k e n s .  
 / / /   \ p a r a m [ i n ]           i n i t i a l _ c o u n t   i n i t i a l   n u m b e r   o f   a v a i l a b l e   t o k e n s .  
 / / /   \ p a r a m [ i n ]           a t t r                     s e m a p h o r e   a t t r i b u t e s ;   N U L L :   d e f a u l t   v a l u e s .  
 / / /   \ r e t u r n   s e m a p h o r e   I D   f o r   r e f e r e n c e   b y   o t h e r   f u n c t i o n s   o r   N U L L   i n   c a s e   o f   e r r o r .  
 o s S e m a p h o r e I d _ t   o s S e m a p h o r e N e w   ( u i n t 3 2 _ t   m a x _ c o u n t ,   u i n t 3 2 _ t   i n i t i a l _ c o u n t ,   c o n s t   o s S e m a p h o r e A t t r _ t   * a t t r ) ;  
    
 / / /   G e t   n a m e   o f   a   S e m a p h o r e   o b j e c t .  
 / / /   \ p a r a m [ i n ]           s e m a p h o r e _ i d     s e m a p h o r e   I D   o b t a i n e d   b y   \ r e f   o s S e m a p h o r e N e w .  
 / / /   \ r e t u r n   n a m e   a s   n u l l - t e r m i n a t e d   s t r i n g .  
 c o n s t   c h a r   * o s S e m a p h o r e G e t N a m e   ( o s S e m a p h o r e I d _ t   s e m a p h o r e _ i d ) ;  
    
 / / /   A c q u i r e   a   S e m a p h o r e   t o k e n   o r   t i m e o u t   i f   n o   t o k e n s   a r e   a v a i l a b l e .  
 / / /   \ p a r a m [ i n ]           s e m a p h o r e _ i d     s e m a p h o r e   I D   o b t a i n e d   b y   \ r e f   o s S e m a p h o r e N e w .  
 / / /   \ p a r a m [ i n ]           t i m e o u t               \ r e f   C M S I S _ R T O S _ T i m e O u t V a l u e   o r   0   i n   c a s e   o f   n o   t i m e - o u t .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s _ t   o s S e m a p h o r e A c q u i r e   ( o s S e m a p h o r e I d _ t   s e m a p h o r e _ i d ,   u i n t 3 2 _ t   t i m e o u t ) ;  
    
 / / /   R e l e a s e   a   S e m a p h o r e   t o k e n   u p   t o   t h e   i n i t i a l   m a x i m u m   c o u n t .  
 / / /   \ p a r a m [ i n ]           s e m a p h o r e _ i d     s e m a p h o r e   I D   o b t a i n e d   b y   \ r e f   o s S e m a p h o r e N e w .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s _ t   o s S e m a p h o r e R e l e a s e   ( o s S e m a p h o r e I d _ t   s e m a p h o r e _ i d ) ;  
    
 / / /   G e t   c u r r e n t   S e m a p h o r e   t o k e n   c o u n t .  
 / / /   \ p a r a m [ i n ]           s e m a p h o r e _ i d     s e m a p h o r e   I D   o b t a i n e d   b y   \ r e f   o s S e m a p h o r e N e w .  
 / / /   \ r e t u r n   n u m b e r   o f   t o k e n s   a v a i l a b l e .  
 u i n t 3 2 _ t   o s S e m a p h o r e G e t C o u n t   ( o s S e m a p h o r e I d _ t   s e m a p h o r e _ i d ) ;  
    
 / / /   D e l e t e   a   S e m a p h o r e   o b j e c t .  
 / / /   \ p a r a m [ i n ]           s e m a p h o r e _ i d     s e m a p h o r e   I D   o b t a i n e d   b y   \ r e f   o s S e m a p h o r e N e w .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s _ t   o s S e m a p h o r e D e l e t e   ( o s S e m a p h o r e I d _ t   s e m a p h o r e _ i d ) ;  
    
    
 / /     = = = =   M e m o r y   P o o l   M a n a g e m e n t   F u n c t i o n s   = = = =  
    
 / / /   C r e a t e   a n d   I n i t i a l i z e   a   M e m o r y   P o o l   o b j e c t .  
 / / /   \ p a r a m [ i n ]           b l o c k _ c o u n t       m a x i m u m   n u m b e r   o f   m e m o r y   b l o c k s   i n   m e m o r y   p o o l .  
 / / /   \ p a r a m [ i n ]           b l o c k _ s i z e         m e m o r y   b l o c k   s i z e   i n   b y t e s .  
 / / /   \ p a r a m [ i n ]           a t t r                     m e m o r y   p o o l   a t t r i b u t e s ;   N U L L :   d e f a u l t   v a l u e s .  
 / / /   \ r e t u r n   m e m o r y   p o o l   I D   f o r   r e f e r e n c e   b y   o t h e r   f u n c t i o n s   o r   N U L L   i n   c a s e   o f   e r r o r .  
 o s M e m o r y P o o l I d _ t   o s M e m o r y P o o l N e w   ( u i n t 3 2 _ t   b l o c k _ c o u n t ,   u i n t 3 2 _ t   b l o c k _ s i z e ,   c o n s t   o s M e m o r y P o o l A t t r _ t   * a t t r ) ;  
    
 / / /   G e t   n a m e   o f   a   M e m o r y   P o o l   o b j e c t .  
 / / /   \ p a r a m [ i n ]           m p _ i d                   m e m o r y   p o o l   I D   o b t a i n e d   b y   \ r e f   o s M e m o r y P o o l N e w .  
 / / /   \ r e t u r n   n a m e   a s   n u l l - t e r m i n a t e d   s t r i n g .  
 c o n s t   c h a r   * o s M e m o r y P o o l G e t N a m e   ( o s M e m o r y P o o l I d _ t   m p _ i d ) ;  
    
 / / /   A l l o c a t e   a   m e m o r y   b l o c k   f r o m   a   M e m o r y   P o o l .  
 / / /   \ p a r a m [ i n ]           m p _ i d                   m e m o r y   p o o l   I D   o b t a i n e d   b y   \ r e f   o s M e m o r y P o o l N e w .  
 / / /   \ p a r a m [ i n ]           t i m e o u t               \ r e f   C M S I S _ R T O S _ T i m e O u t V a l u e   o r   0   i n   c a s e   o f   n o   t i m e - o u t .  
 / / /   \ r e t u r n   a d d r e s s   o f   t h e   a l l o c a t e d   m e m o r y   b l o c k   o r   N U L L   i n   c a s e   o f   n o   m e m o r y   i s   a v a i l a b l e .  
 v o i d   * o s M e m o r y P o o l A l l o c   ( o s M e m o r y P o o l I d _ t   m p _ i d ,   u i n t 3 2 _ t   t i m e o u t ) ;  
    
 / / /   R e t u r n   a n   a l l o c a t e d   m e m o r y   b l o c k   b a c k   t o   a   M e m o r y   P o o l .  
 / / /   \ p a r a m [ i n ]           m p _ i d                   m e m o r y   p o o l   I D   o b t a i n e d   b y   \ r e f   o s M e m o r y P o o l N e w .  
 / / /   \ p a r a m [ i n ]           b l o c k                   a d d r e s s   o f   t h e   a l l o c a t e d   m e m o r y   b l o c k   t o   b e   r e t u r n e d   t o   t h e   m e m o r y   p o o l .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s _ t   o s M e m o r y P o o l F r e e   ( o s M e m o r y P o o l I d _ t   m p _ i d ,   v o i d   * b l o c k ) ;  
    
 / / /   G e t   m a x i m u m   n u m b e r   o f   m e m o r y   b l o c k s   i n   a   M e m o r y   P o o l .  
 / / /   \ p a r a m [ i n ]           m p _ i d                   m e m o r y   p o o l   I D   o b t a i n e d   b y   \ r e f   o s M e m o r y P o o l N e w .  
 / / /   \ r e t u r n   m a x i m u m   n u m b e r   o f   m e m o r y   b l o c k s .  
 u i n t 3 2 _ t   o s M e m o r y P o o l G e t C a p a c i t y   ( o s M e m o r y P o o l I d _ t   m p _ i d ) ;  
    
 / / /   G e t   m e m o r y   b l o c k   s i z e   i n   a   M e m o r y   P o o l .  
 / / /   \ p a r a m [ i n ]           m p _ i d                   m e m o r y   p o o l   I D   o b t a i n e d   b y   \ r e f   o s M e m o r y P o o l N e w .  
 / / /   \ r e t u r n   m e m o r y   b l o c k   s i z e   i n   b y t e s .  
 u i n t 3 2 _ t   o s M e m o r y P o o l G e t B l o c k S i z e   ( o s M e m o r y P o o l I d _ t   m p _ i d ) ;  
    
 / / /   G e t   n u m b e r   o f   m e m o r y   b l o c k s   u s e d   i n   a   M e m o r y   P o o l .  
 / / /   \ p a r a m [ i n ]           m p _ i d                   m e m o r y   p o o l   I D   o b t a i n e d   b y   \ r e f   o s M e m o r y P o o l N e w .  
 / / /   \ r e t u r n   n u m b e r   o f   m e m o r y   b l o c k s   u s e d .  
 u i n t 3 2 _ t   o s M e m o r y P o o l G e t C o u n t   ( o s M e m o r y P o o l I d _ t   m p _ i d ) ;  
    
 / / /   G e t   n u m b e r   o f   m e m o r y   b l o c k s   a v a i l a b l e   i n   a   M e m o r y   P o o l .  
 / / /   \ p a r a m [ i n ]           m p _ i d                   m e m o r y   p o o l   I D   o b t a i n e d   b y   \ r e f   o s M e m o r y P o o l N e w .  
 / / /   \ r e t u r n   n u m b e r   o f   m e m o r y   b l o c k s   a v a i l a b l e .  
 u i n t 3 2 _ t   o s M e m o r y P o o l G e t S p a c e   ( o s M e m o r y P o o l I d _ t   m p _ i d ) ;  
    
 / / /   D e l e t e   a   M e m o r y   P o o l   o b j e c t .  
 / / /   \ p a r a m [ i n ]           m p _ i d                   m e m o r y   p o o l   I D   o b t a i n e d   b y   \ r e f   o s M e m o r y P o o l N e w .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s _ t   o s M e m o r y P o o l D e l e t e   ( o s M e m o r y P o o l I d _ t   m p _ i d ) ;  
    
    
 / /     = = = =   M e s s a g e   Q u e u e   M a n a g e m e n t   F u n c t i o n s   = = = =  
    
 / / /   C r e a t e   a n d   I n i t i a l i z e   a   M e s s a g e   Q u e u e   o b j e c t .  
 / / /   \ p a r a m [ i n ]           m s g _ c o u n t           m a x i m u m   n u m b e r   o f   m e s s a g e s   i n   q u e u e .  
 / / /   \ p a r a m [ i n ]           m s g _ s i z e             m a x i m u m   m e s s a g e   s i z e   i n   b y t e s .  
 / / /   \ p a r a m [ i n ]           a t t r                     m e s s a g e   q u e u e   a t t r i b u t e s ;   N U L L :   d e f a u l t   v a l u e s .  
 / / /   \ r e t u r n   m e s s a g e   q u e u e   I D   f o r   r e f e r e n c e   b y   o t h e r   f u n c t i o n s   o r   N U L L   i n   c a s e   o f   e r r o r .  
 o s M e s s a g e Q u e u e I d _ t   o s M e s s a g e Q u e u e N e w   ( u i n t 3 2 _ t   m s g _ c o u n t ,   u i n t 3 2 _ t   m s g _ s i z e ,   c o n s t   o s M e s s a g e Q u e u e A t t r _ t   * a t t r ) ;  
    
 / / /   G e t   n a m e   o f   a   M e s s a g e   Q u e u e   o b j e c t .  
 / / /   \ p a r a m [ i n ]           m q _ i d                   m e s s a g e   q u e u e   I D   o b t a i n e d   b y   \ r e f   o s M e s s a g e Q u e u e N e w .  
 / / /   \ r e t u r n   n a m e   a s   n u l l - t e r m i n a t e d   s t r i n g .  
 c o n s t   c h a r   * o s M e s s a g e Q u e u e G e t N a m e   ( o s M e s s a g e Q u e u e I d _ t   m q _ i d ) ;  
    
 / / /   P u t   a   M e s s a g e   i n t o   a   Q u e u e   o r   t i m e o u t   i f   Q u e u e   i s   f u l l .  
 / / /   \ p a r a m [ i n ]           m q _ i d                   m e s s a g e   q u e u e   I D   o b t a i n e d   b y   \ r e f   o s M e s s a g e Q u e u e N e w .  
 / / /   \ p a r a m [ i n ]           m s g _ p t r               p o i n t e r   t o   b u f f e r   w i t h   m e s s a g e   t o   p u t   i n t o   a   q u e u e .  
 / / /   \ p a r a m [ i n ]           m s g _ p r i o             m e s s a g e   p r i o r i t y .  
 / / /   \ p a r a m [ i n ]           t i m e o u t               \ r e f   C M S I S _ R T O S _ T i m e O u t V a l u e   o r   0   i n   c a s e   o f   n o   t i m e - o u t .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s _ t   o s M e s s a g e Q u e u e P u t   ( o s M e s s a g e Q u e u e I d _ t   m q _ i d ,   c o n s t   v o i d   * m s g _ p t r ,   u i n t 8 _ t   m s g _ p r i o ,   u i n t 3 2 _ t   t i m e o u t ) ;  
    
 / / /   G e t   a   M e s s a g e   f r o m   a   Q u e u e   o r   t i m e o u t   i f   Q u e u e   i s   e m p t y .  
 / / /   \ p a r a m [ i n ]           m q _ i d                   m e s s a g e   q u e u e   I D   o b t a i n e d   b y   \ r e f   o s M e s s a g e Q u e u e N e w .  
 / / /   \ p a r a m [ o u t ]         m s g _ p t r               p o i n t e r   t o   b u f f e r   f o r   m e s s a g e   t o   g e t   f r o m   a   q u e u e .  
 / / /   \ p a r a m [ o u t ]         m s g _ p r i o             p o i n t e r   t o   b u f f e r   f o r   m e s s a g e   p r i o r i t y   o r   N U L L .  
 / / /   \ p a r a m [ i n ]           t i m e o u t               \ r e f   C M S I S _ R T O S _ T i m e O u t V a l u e   o r   0   i n   c a s e   o f   n o   t i m e - o u t .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s _ t   o s M e s s a g e Q u e u e G e t   ( o s M e s s a g e Q u e u e I d _ t   m q _ i d ,   v o i d   * m s g _ p t r ,   u i n t 8 _ t   * m s g _ p r i o ,   u i n t 3 2 _ t   t i m e o u t ) ;  
    
 / / /   G e t   m a x i m u m   n u m b e r   o f   m e s s a g e s   i n   a   M e s s a g e   Q u e u e .  
 / / /   \ p a r a m [ i n ]           m q _ i d                   m e s s a g e   q u e u e   I D   o b t a i n e d   b y   \ r e f   o s M e s s a g e Q u e u e N e w .  
 / / /   \ r e t u r n   m a x i m u m   n u m b e r   o f   m e s s a g e s .  
 u i n t 3 2 _ t   o s M e s s a g e Q u e u e G e t C a p a c i t y   ( o s M e s s a g e Q u e u e I d _ t   m q _ i d ) ;  
    
 / / /   G e t   m a x i m u m   m e s s a g e   s i z e   i n   a   M e m o r y   P o o l .  
 / / /   \ p a r a m [ i n ]           m q _ i d                   m e s s a g e   q u e u e   I D   o b t a i n e d   b y   \ r e f   o s M e s s a g e Q u e u e N e w .  
 / / /   \ r e t u r n   m a x i m u m   m e s s a g e   s i z e   i n   b y t e s .  
 u i n t 3 2 _ t   o s M e s s a g e Q u e u e G e t M s g S i z e   ( o s M e s s a g e Q u e u e I d _ t   m q _ i d ) ;  
    
 / / /   G e t   n u m b e r   o f   q u e u e d   m e s s a g e s   i n   a   M e s s a g e   Q u e u e .  
 / / /   \ p a r a m [ i n ]           m q _ i d                   m e s s a g e   q u e u e   I D   o b t a i n e d   b y   \ r e f   o s M e s s a g e Q u e u e N e w .  
 / / /   \ r e t u r n   n u m b e r   o f   q u e u e d   m e s s a g e s .  
 u i n t 3 2 _ t   o s M e s s a g e Q u e u e G e t C o u n t   ( o s M e s s a g e Q u e u e I d _ t   m q _ i d ) ;  
    
 / / /   G e t   n u m b e r   o f   a v a i l a b l e   s l o t s   f o r   m e s s a g e s   i n   a   M e s s a g e   Q u e u e .  
 / / /   \ p a r a m [ i n ]           m q _ i d                   m e s s a g e   q u e u e   I D   o b t a i n e d   b y   \ r e f   o s M e s s a g e Q u e u e N e w .  
 / / /   \ r e t u r n   n u m b e r   o f   a v a i l a b l e   s l o t s   f o r   m e s s a g e s .  
 u i n t 3 2 _ t   o s M e s s a g e Q u e u e G e t S p a c e   ( o s M e s s a g e Q u e u e I d _ t   m q _ i d ) ;  
    
 / / /   R e s e t   a   M e s s a g e   Q u e u e   t o   i n i t i a l   e m p t y   s t a t e .  
 / / /   \ p a r a m [ i n ]           m q _ i d                   m e s s a g e   q u e u e   I D   o b t a i n e d   b y   \ r e f   o s M e s s a g e Q u e u e N e w .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s _ t   o s M e s s a g e Q u e u e R e s e t   ( o s M e s s a g e Q u e u e I d _ t   m q _ i d ) ;  
    
 / / /   D e l e t e   a   M e s s a g e   Q u e u e   o b j e c t .  
 / / /   \ p a r a m [ i n ]           m q _ i d                   m e s s a g e   q u e u e   I D   o b t a i n e d   b y   \ r e f   o s M e s s a g e Q u e u e N e w .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s _ t   o s M e s s a g e Q u e u e D e l e t e   ( o s M e s s a g e Q u e u e I d _ t   m q _ i d ) ;  
    
    
 # i f d e f     _ _ c p l u s p l u s  
 }  
 # e n d i f  
    
 # e n d i f     / /   C M S I S _ O S 2 _ H _  