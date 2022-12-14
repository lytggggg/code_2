??/ *  
   *   C o p y r i g h t   ( c )   2 0 0 6 - 2 0 2 1 ,   R T - T h r e a d   D e v e l o p m e n t   T e a m  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   C h a n g e   L o g s :  
   *   D a t e                       A u t h o r               N o t e s  
   *   2 0 1 0 - 0 3 - 2 2           B e r n a r d             f i r s t   v e r s i o n  
   * /  
 # i f n d e f   _ _ F I N S H _ H _ _  
 # d e f i n e   _ _ F I N S H _ H _ _  
  
 # i n c l u d e   < r t t h r e a d . h >  
 # i n c l u d e   " f i n s h _ a p i . h "  
  
 / *   - -   t h e   b e g i n n i n g   o f   o p t i o n   - -   * /  
 # d e f i n e   F I N S H _ N A M E _ M A X                     1 6             / *   m a x   l e n g t h   o f   i d e n t i f i e r   * /  
 # d e f i n e   F I N S H _ N O D E _ M A X                     1 6             / *   m a x   n u m b e r   o f   n o d e   * /  
  
 # d e f i n e   F I N S H _ H E A P _ M A X                     1 2 8           / *   m a x   l e n g t h   o f   h e a p   * /  
 # d e f i n e   F I N S H _ S T R I N G _ M A X                 1 2 8           / *   m a x   l e n g t h   o f   s t r i n g   * /  
 # d e f i n e   F I N S H _ V A R I A B L E _ M A X             8               / *   m a x   n u m b e r   o f   v a r i a b l e   * /  
  
 # d e f i n e   F I N S H _ S T A C K _ M A X                   6 4             / *   m a x   s t a c k   s i z e   * /  
 # d e f i n e   F I N S H _ T E X T _ M A X                     1 2 8           / *   m a x   t e x t   s e g m e n t   s i z e   * /  
  
 # d e f i n e   H E A P _ A L I G N M E N T                     4               / *   h e a p   a l i g n m e n t   * /  
  
 # d e f i n e   F I N S H _ G E T 1 6 ( x )         ( * ( x ) )   |   ( * ( ( x ) + 1 )   < <   8 )  
 # d e f i n e   F I N S H _ G E T 3 2 ( x )         ( r t _ u i n t 3 2 _ t ) ( * ( x ) )   |   ( ( r t _ u i n t 3 2 _ t ) * ( ( x ) + 1 )   < <   8 )   |   \  
         ( ( r t _ u i n t 3 2 _ t ) * ( ( x ) + 2 )   < <   1 6 )   |   ( ( r t _ u i n t 3 2 _ t ) * ( ( x ) + 3 )   < <   2 4 )  
  
 # d e f i n e   F I N S H _ S E T 1 6 ( x ,   v )                       \  
         d o                                                             \  
         {                                                               \  
                 * ( x )           =   ( v )   &   0 x 0 0 f f ;         \  
                 ( * ( ( x ) + 1 ) )   =   ( v )   > >   8 ;             \  
         }   w h i l e   (   0   )  
  
 # d e f i n e   F I N S H _ S E T 3 2 ( x ,   v )                                                                               \  
         d o                                                                                                                     \  
         {                                                                                                                       \  
                 * ( x )           =   ( r t _ u i n t 3 2 _ t ) ( v )     &   0 x 0 0 0 0 0 0 f f ;                             \  
                 ( * ( ( x ) + 1 ) )   =   ( ( r t _ u i n t 3 2 _ t ) ( v )   > >   8 )   &   0 x 0 0 0 0 0 0 f f ;             \  
                 ( * ( ( x ) + 2 ) )   =   ( ( r t _ u i n t 3 2 _ t ) ( v )   > >   1 6 )   &   0 x 0 0 0 0 0 0 f f ;           \  
                 ( * ( ( x ) + 3 ) )   =   ( ( r t _ u i n t 3 2 _ t ) ( v )   > >   2 4 ) ;                                     \  
         }   w h i l e   (   0   )  
  
 / *   - -   t h e   e n d   o f   o p t i o n   - -   * /  
  
 / *   s t d   h e a d e r   f i l e   * /  
 # i n c l u d e   < s t d i o . h >  
 # i n c l u d e   < c t y p e . h >  
 # i n c l u d e   < s t d l i b . h >  
 # i n c l u d e   < s t d i n t . h >  
 # i n c l u d e   < s t r i n g . h >  
  
 # d e f i n e   F I N S H _ V E R S I O N _ M A J O R                   1  
 # d e f i n e   F I N S H _ V E R S I O N _ M I N O R                   0  
  
 / * *  
   *   @ a d d t o g r o u p   f i n s h  
   * /  
 / * @ { * /  
 # d e f i n e   F I N S H _ E R R O R _ O K                             0       / * * <   N o   e r r o r                       * /  
 # d e f i n e   F I N S H _ E R R O R _ I N V A L I D _ T O K E N       1       / * * <   I n v a l i d   t o k e n             * /  
 # d e f i n e   F I N S H _ E R R O R _ E X P E C T _ T Y P E           2       / * * <   E x p e c t   a   t y p e             * /  
 # d e f i n e   F I N S H _ E R R O R _ U N K N O W N _ T Y P E         3       / * * <   U n k n o w n   t y p e               * /  
 # d e f i n e   F I N S H _ E R R O R _ V A R I A B L E _ E X I S T     4       / * * <   V a r i a b l e   e x i s t           * /  
 # d e f i n e   F I N S H _ E R R O R _ E X P E C T _ O P E R A T O R   5       / * * <   E x p e c t   a   o p e r a t o r     * /  
 # d e f i n e   F I N S H _ E R R O R _ M E M O R Y _ F U L L           6       / * * <   M e m o r y   f u l l                 * /  
 # d e f i n e   F I N S H _ E R R O R _ U N K N O W N _ O P             7       / * * <   U n k n o w n   o p e r a t o r       * /  
 # d e f i n e   F I N S H _ E R R O R _ U N K N O W N _ N O D E         8       / * * <   U n k n o w n   n o d e               * /  
 # d e f i n e   F I N S H _ E R R O R _ E X P E C T _ C H A R           9       / * * <   E x p e c t   a   c h a r a c t e r   * /  
 # d e f i n e   F I N S H _ E R R O R _ U N E X P E C T _ E N D         1 0     / * * <   U n e x p e c t   e n d               * /  
 # d e f i n e   F I N S H _ E R R O R _ U N K N O W N _ T O K E N       1 1     / * * <   U n k n o w n   t o k e n             * /  
 # d e f i n e   F I N S H _ E R R O R _ N O _ F L O A T                 1 2     / * * <   F l o a t   n o t   s u p p o r t e d   * /  
 # d e f i n e   F I N S H _ E R R O R _ U N K N O W N _ S Y M B O L     1 3     / * * <   U n k n o w n   s y m b o l           * /  
 # d e f i n e   F I N S H _ E R R O R _ N U L L _ N O D E               1 4     / * * <   N u l l   n o d e                     * /  
 / * @ } * /  
  
 / *   s y s t e m   c a l l   i t e m   * /  
 s t r u c t   f i n s h _ s y s c a l l _ i t e m  
 {  
         s t r u c t   f i n s h _ s y s c a l l _ i t e m *   n e x t ;         / *   n e x t   i t e m   * /  
         s t r u c t   f i n s h _ s y s c a l l   s y s c a l l ;               / *   s y s c a l l   * /  
 } ;  
 e x t e r n   s t r u c t   f i n s h _ s y s c a l l _ i t e m   * g l o b a l _ s y s c a l l _ l i s t ;  
  
 / *   s y s t e m   v a r i a b l e   t a b l e   * /  
 s t r u c t   f i n s h _ s y s v a r  
 {  
         c o n s t   c h a r *           n a m e ;               / *   t h e   n a m e   o f   v a r i a b l e   * /  
 # i f   d e f i n e d ( F I N S H _ U S I N G _ D E S C R I P T I O N )   & &   d e f i n e d ( F I N S H _ U S I N G _ S Y M T A B )  
         c o n s t   c h a r *           d e s c ;               / *   d e s c r i p t i o n   o f   s y s t e m   v a r i a b l e   * /  
 # e n d i f  
         u i n t 8 _ t             t y p e ;             / *   t h e   t y p e   o f   v a r i a b l e   * /  
         v o i d *                 v a r   ;             / *   t h e   a d d r e s s   o f   v a r i a b l e   * /  
 } ;  
  
 # i f   d e f i n e d ( _ M S C _ V E R )   | |   ( d e f i n e d ( _ _ G N U C _ _ )   & &   d e f i n e d ( _ _ x 8 6 _ 6 4 _ _ ) )  
 s t r u c t   f i n s h _ s y s c a l l *   f i n s h _ s y s c a l l _ n e x t ( s t r u c t   f i n s h _ s y s c a l l *   c a l l ) ;  
 s t r u c t   f i n s h _ s y s v a r *   f i n s h _ s y s v a r _ n e x t ( s t r u c t   f i n s h _ s y s v a r *   c a l l ) ;  
 # d e f i n e   F I N S H _ N E X T _ S Y S C A L L ( i n d e x )     i n d e x = f i n s h _ s y s c a l l _ n e x t ( i n d e x )  
 # d e f i n e   F I N S H _ N E X T _ S Y S V A R ( i n d e x )       i n d e x = f i n s h _ s y s v a r _ n e x t ( i n d e x )  
 # e l s e  
 # d e f i n e   F I N S H _ N E X T _ S Y S C A L L ( i n d e x )     i n d e x + +  
 # d e f i n e   F I N S H _ N E X T _ S Y S V A R ( i n d e x )       i n d e x + +  
 # e n d i f  
  
 / *   s y s t e m   v a r i a b l e   i t e m   * /  
 s t r u c t   f i n s h _ s y s v a r _ i t e m  
 {  
         s t r u c t   f i n s h _ s y s v a r _ i t e m   * n e x t ;           / *   n e x t   i t e m   * /  
         s t r u c t   f i n s h _ s y s v a r   s y s v a r ;                   / *   s y s t e m   v a r i a b l e   * /  
 } ;  
 e x t e r n   s t r u c t   f i n s h _ s y s v a r   * _ s y s v a r _ t a b l e _ b e g i n ,   * _ s y s v a r _ t a b l e _ e n d ;  
 e x t e r n   s t r u c t   f i n s h _ s y s v a r _ i t e m *   g l o b a l _ s y s v a r _ l i s t ;  
  
 / *   f i n d   o u t   s y s t e m   v a r i a b l e ,   w h i c h   s h o u l d   b e   i m p l e m e n t e d   i n   u s e r   p r o g r a m   * /  
 s t r u c t   f i n s h _ s y s v a r *   f i n s h _ s y s v a r _ l o o k u p ( c o n s t   c h a r *   n a m e ) ;  
  
  
 s t r u c t   f i n s h _ t o k e n  
 {  
         c h a r   e o f ;  
         c h a r   r e p l a y ;  
  
         i n t     p o s i t i o n ;  
         u i n t 8 _ t   c u r r e n t _ t o k e n ;  
  
         u n i o n   {  
                 c h a r   c h a r _ v a l u e ;  
                 i n t   i n t _ v a l u e ;  
                 l o n g   l o n g _ v a l u e ;  
         }   v a l u e ;  
         u i n t 8 _ t   s t r i n g [ F I N S H _ S T R I N G _ M A X ] ;  
  
         u i n t 8 _ t *   l i n e ;  
 } ;  
  
 # d e f i n e   F I N S H _ I D T Y P E _ V A R                 0 x 0 1  
 # d e f i n e   F I N S H _ I D T Y P E _ S Y S V A R           0 x 0 2  
 # d e f i n e   F I N S H _ I D T Y P E _ S Y S C A L L         0 x 0 4  
 # d e f i n e   F I N S H _ I D T Y P E _ A D D R E S S         0 x 0 8  
 s t r u c t   f i n s h _ n o d e  
 {  
         u i n t 8 _ t   n o d e _ t y p e ;     / *   n o d e   n o d e _ t y p e   * /  
         u i n t 8 _ t   d a t a _ t y p e ;     / *   n o d e   d a t a   n o d e _ t y p e   * /  
         u i n t 8 _ t   i d t y p e ;           / *   i d   n o d e   i n f o r m a t i o n   * /  
  
         u n i o n   {                   / *   v a l u e   n o d e   * /  
                 c h a r         c h a r _ v a l u e ;  
                 s h o r t       s h o r t _ v a l u e ;  
                 i n t           i n t _ v a l u e ;  
                 l o n g         l o n g _ v a l u e ;  
                 v o i d *       p t r ;  
         }   v a l u e ;  
         u n i o n  
         {  
                 / *   p o i n t   t o   v a r i a b l e   i d e n t i f i e r   o r   f u n c t i o n   i d e n t i f i e r   * /  
                 s t r u c t   f i n s h _ v a r         * v a r ;  
                 s t r u c t   f i n s h _ s y s v a r   * s y s v a r ;  
                 s t r u c t   f i n s h _ s y s c a l l * s y s c a l l ;  
         } i d ;  
  
         / *   s i b l i n g   a n d   c h i l d   n o d e   * /  
         s t r u c t   f i n s h _ n o d e   * s i b l i n g ,   * c h i l d ;  
 } ;  
  
 s t r u c t   f i n s h _ p a r s e r  
 {  
         u i n t 8 _ t *   p a r s e r _ s t r i n g ;  
  
         s t r u c t   f i n s h _ t o k e n   t o k e n ;  
         s t r u c t   f i n s h _ n o d e *   r o o t ;  
 } ;  
  
 / * *  
   *   @ i n g r o u p   f i n s h  
   *  
   *   T h e   b a s i c   d a t a   t y p e   i n   f i n s h   s h e l l  
   * /  
 e n u m   f i n s h _ t y p e   {  
         f i n s h _ t y p e _ u n k n o w n   =   0 ,   / * * <   u n k n o w n   d a t a   t y p e   * /  
         f i n s h _ t y p e _ v o i d ,                 / * * <   v o i d                       * /  
         f i n s h _ t y p e _ v o i d p ,               / * * <   v o i d   p o i n t e r       * /  
         f i n s h _ t y p e _ c h a r ,                 / * * <   c h a r                       * /  
         f i n s h _ t y p e _ u c h a r ,               / * * <   u n s i g n e d   c h a r     * /  
         f i n s h _ t y p e _ c h a r p ,               / * * <   c h a r   p o i n t e r       * /  
         f i n s h _ t y p e _ s h o r t ,               / * * <   s h o r t                     * /  
         f i n s h _ t y p e _ u s h o r t ,             / * * <   u n s i g n e d   s h o r t   * /  
         f i n s h _ t y p e _ s h o r t p ,             / * * <   s h o r t   p o i n t e r     * /  
         f i n s h _ t y p e _ i n t ,                   / * * <   i n t                         * /  
         f i n s h _ t y p e _ u i n t ,                 / * * <   u n s i g n e d   i n t       * /  
         f i n s h _ t y p e _ i n t p ,                 / * * <   i n t   p o i n t e r         * /  
         f i n s h _ t y p e _ l o n g ,                 / * * <   l o n g                       * /  
         f i n s h _ t y p e _ u l o n g ,               / * * <   u n s i g n e d   l o n g     * /  
         f i n s h _ t y p e _ l o n g p                 / * * <   l o n g   p o i n t e r       * /  
 } ;  
  
 / *   i n i t   f i n s h   e n v i r o n m e n t   * /  
 i n t   f i n s h _ i n i t ( s t r u c t   f i n s h _ p a r s e r *   p a r s e r ) ;  
 / *   f l u s h   f i n s h   n o d e ,   t e x t   s e g m e n t   * /  
 i n t   f i n s h _ f l u s h ( s t r u c t   f i n s h _ p a r s e r *   p a r s e r ) ;  
 / *   r e s e t   a l l   o f   f i n s h   * /  
 i n t   f i n s h _ r e s e t ( s t r u c t   f i n s h _ p a r s e r *   p a r s e r ) ;  
 # i f d e f   R T _ U S I N G _ D E V I C E  
 v o i d   f i n s h _ s e t _ d e v i c e ( c o n s t   c h a r *   d e v i c e _ n a m e ) ;  
 # e n d i f  
  
 / *   r u n   f i n s h   p a r s e r   t o   g e n e r a t e   a b s t r a c t   s y n a t x   t r e e   * /  
 v o i d   f i n s h _ p a r s e r _ r u n   ( s t r u c t   f i n s h _ p a r s e r *   p a r s e r ,   c o n s t   u n s i g n e d   c h a r *   s t r i n g ) ;  
 / *   r u n   c o m p i l e r   t o   c o m p i l e   a b s t r a c t   s y n t a x   t r e e   * /  
 i n t   f i n s h _ c o m p i l e r _ r u n ( s t r u c t   f i n s h _ n o d e *   n o d e ) ;  
 / *   r u n   f i n s h   v i r t u a l   m a c h i n e   * /  
 v o i d   f i n s h _ v m _ r u n ( v o i d ) ;  
  
 / *   g e t   v a r i a b l e   v a l u e   * /  
 s t r u c t   f i n s h _ v a r *   f i n s h _ v a r _ l o o k u p ( c o n s t   c h a r *   n a m e ) ;  
 / *   g e t   b o t t o m   v a l u e   o f   s t a c k   * /  
 l o n g   f i n s h _ s t a c k _ b o t t o m ( v o i d ) ;  
  
 / *   g e t   e r r o r   n u m b e r   o f   f i n s h   * /  
 u i n t 8 _ t   f i n s h _ e r r n o ( v o i d ) ;  
 / *   g e t   e r r o r   s t r i n g   * /  
 c o n s t   c h a r *   f i n s h _ e r r o r _ s t r i n g ( u i n t 8 _ t   t y p e ) ;  
  
 # i f d e f   R T _ U S I N G _ H E A P  
 / * *  
   *   @ i n g r o u p   f i n s h  
   *  
   *   T h i s   f u n c t i o n   a p p e n d s   a   s y s t e m   c a l l   t o   f i n s h   r u n t i m e   e n v i r o n m e n t  
   *   @ p a r a m   n a m e   t h e   n a m e   o f   s y s t e m   c a l l  
   *   @ p a r a m   f u n c   t h e   f u n c t i o n   p o i n t e r   o f   s y s t e m   c a l l  
   * /  
 v o i d   f i n s h _ s y s c a l l _ a p p e n d ( c o n s t   c h a r *   n a m e ,   s y s c a l l _ f u n c   f u n c ) ;  
  
 / * *  
   *   @ i n g r o u p   f i n s h  
   *  
   *   T h i s   f u n c t i o n   a p p e n d s   a   s y s t e m   v a r i a b l e   t o   f i n s h   r u n t i m e   e n v i r o n m e n t  
   *   @ p a r a m   n a m e   t h e   n a m e   o f   s y s t e m   v a r i a b l e  
   *   @ p a r a m   t y p e   t h e   d a t a   t y p e   o f   s y s t e m   v a r i a b l e  
   *   @ p a r a m   a d d r   t h e   a d d r e s s   o f   s y s t e m   v a r i a b l e  
   * /  
 v o i d   f i n s h _ s y s v a r _ a p p e n d ( c o n s t   c h a r *   n a m e ,   u i n t 8 _ t   t y p e ,   v o i d *   a d d r ) ;  
 # e n d i f  
 # e n d i f  