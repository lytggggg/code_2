??/ * * 
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ t i m _ e x . h 
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m 
     *   @ b r i e f       H e a d e r   f i l e   o f   T I M   H A L   E x t e n d e d   m o d u l e . 
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
     *   @ a t t e n t i o n 
     * 
     *   < h 2 > < c e n t e r > & c o p y ;   C o p y r i g h t   ( c )   2 0 1 6   S T M i c r o e l e c t r o n i c s . 
     *   A l l   r i g h t s   r e s e r v e d . < / c e n t e r > < / h 2 > 
     * 
     *   T h i s   s o f t w a r e   c o m p o n e n t   i s   l i c e n s e d   b y   S T   u n d e r   B S D   3 - C l a u s e   l i c e n s e , 
     *   t h e   " L i c e n s e " ;   Y o u   m a y   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e 
     *   L i c e n s e .   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t : 
     *                                                 o p e n s o u r c e . o r g / l i c e n s e s / B S D - 3 - C l a u s e 
     * 
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
     * / 
 
 / *   D e f i n e   t o   p r e v e n t   r e c u r s i v e   i n c l u s i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 # i f n d e f   S T M 3 2 F 1 x x _ H A L _ T I M _ E X _ H 
 # d e f i n e   S T M 3 2 F 1 x x _ H A L _ T I M _ E X _ H 
 
 # i f d e f   _ _ c p l u s p l u s 
 e x t e r n   " C "   { 
 # e n d i f 
 
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ d e f . h " 
 
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r 
     *   @ { 
     * / 
 
 / * *   @ a d d t o g r o u p   T I M E x 
     *   @ { 
     * / 
 
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / * *   @ d e f g r o u p   T I M E x _ E x p o r t e d _ T y p e s   T I M   E x t e n d e d   E x p o r t e d   T y p e s 
     *   @ { 
     * / 
 
 / * * 
     *   @ b r i e f     T I M   H a l l   s e n s o r   C o n f i g u r a t i o n   S t r u c t u r e   d e f i n i t i o n 
     * / 
 
 t y p e d e f   s t r u c t 
 { 
     u i n t 3 2 _ t   I C 1 P o l a r i t y ;                   / * ! <   S p e c i f i e s   t h e   a c t i v e   e d g e   o f   t h e   i n p u t   s i g n a l . 
                                                                           T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ I n p u t _ C a p t u r e _ P o l a r i t y   * / 
 
     u i n t 3 2 _ t   I C 1 P r e s c a l e r ;                 / * ! <   S p e c i f i e s   t h e   I n p u t   C a p t u r e   P r e s c a l e r . 
                                                                           T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   T I M _ I n p u t _ C a p t u r e _ P r e s c a l e r   * / 
 
     u i n t 3 2 _ t   I C 1 F i l t e r ;                       / * ! <   S p e c i f i e s   t h e   i n p u t   c a p t u r e   f i l t e r . 
                                                                           T h i s   p a r a m e t e r   c a n   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 0   a n d   M a x _ D a t a   =   0 x F   * / 
 
     u i n t 3 2 _ t   C o m m u t a t i o n _ D e l a y ;       / * ! <   S p e c i f i e s   t h e   p u l s e   v a l u e   t o   b e   l o a d e d   i n t o   t h e   C a p t u r e   C o m p a r e   R e g i s t e r . 
                                                                           T h i s   p a r a m e t e r   c a n   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 0 0 0 0   a n d   M a x _ D a t a   =   0 x F F F F   * / 
 }   T I M _ H a l l S e n s o r _ I n i t T y p e D e f ; 
 / * * 
     *   @ } 
     * / 
 / *   E n d   o f   e x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / * *   @ d e f g r o u p   T I M E x _ E x p o r t e d _ C o n s t a n t s   T I M   E x t e n d e d   E x p o r t e d   C o n s t a n t s 
     *   @ { 
     * / 
 
 / * *   @ d e f g r o u p   T I M E x _ R e m a p   T I M   E x t e n d e d   R e m a p p i n g 
     *   @ { 
     * / 
 / * * 
     *   @ } 
     * / 
 
 / * * 
     *   @ } 
     * / 
 / *   E n d   o f   e x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 
 / *   E x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / * *   @ d e f g r o u p   T I M E x _ E x p o r t e d _ M a c r o s   T I M   E x t e n d e d   E x p o r t e d   M a c r o s 
     *   @ { 
     * / 
 
 / * * 
     *   @ } 
     * / 
 / *   E n d   o f   e x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / * *   @ d e f g r o u p   T I M E x _ P r i v a t e _ M a c r o s   T I M   E x t e n d e d   P r i v a t e   M a c r o s 
     *   @ { 
     * / 
 
 / * * 
     *   @ } 
     * / 
 / *   E n d   o f   p r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / * *   @ a d d t o g r o u p   T I M E x _ E x p o r t e d _ F u n c t i o n s   T I M   E x t e n d e d   E x p o r t e d   F u n c t i o n s 
     *   @ { 
     * / 
 
 / * *   @ a d d t o g r o u p   T I M E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   E x t e n d e d   T i m e r   H a l l   S e n s o r   f u n c t i o n s 
     *     @ b r i e f         T i m e r   H a l l   S e n s o r   f u n c t i o n s 
     *   @ { 
     * / 
 / *     T i m e r   H a l l   S e n s o r   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ H a l l S e n s o r _ I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   T I M _ H a l l S e n s o r _ I n i t T y p e D e f   * s C o n f i g ) ; 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ H a l l S e n s o r _ D e I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) ; 
 
 v o i d   H A L _ T I M E x _ H a l l S e n s o r _ M s p I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) ; 
 v o i d   H A L _ T I M E x _ H a l l S e n s o r _ M s p D e I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) ; 
 
 / *   B l o c k i n g   m o d e :   P o l l i n g   * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ H a l l S e n s o r _ S t a r t ( T I M _ H a n d l e T y p e D e f   * h t i m ) ; 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ H a l l S e n s o r _ S t o p ( T I M _ H a n d l e T y p e D e f   * h t i m ) ; 
 / *   N o n - B l o c k i n g   m o d e :   I n t e r r u p t   * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ H a l l S e n s o r _ S t a r t _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ) ; 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ H a l l S e n s o r _ S t o p _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ) ; 
 / *   N o n - B l o c k i n g   m o d e :   D M A   * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ H a l l S e n s o r _ S t a r t _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   * p D a t a ,   u i n t 1 6 _ t   L e n g t h ) ; 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ H a l l S e n s o r _ S t o p _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ) ; 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ a d d t o g r o u p   T I M E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   E x t e n d e d   T i m e r   C o m p l e m e n t a r y   O u t p u t   C o m p a r e   f u n c t i o n s 
     *     @ b r i e f       T i m e r   C o m p l e m e n t a r y   O u t p u t   C o m p a r e   f u n c t i o n s 
     *   @ { 
     * / 
 / *     T i m e r   C o m p l e m e n t a r y   O u t p u t   C o m p a r e   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 / *   B l o c k i n g   m o d e :   P o l l i n g   * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ O C N _ S t a r t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ; 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ O C N _ S t o p ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ; 
 
 / *   N o n - B l o c k i n g   m o d e :   I n t e r r u p t   * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ O C N _ S t a r t _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ; 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ O C N _ S t o p _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ; 
 
 / *   N o n - B l o c k i n g   m o d e :   D M A   * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ O C N _ S t a r t _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   * p D a t a ,   u i n t 1 6 _ t   L e n g t h ) ; 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ O C N _ S t o p _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ; 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ a d d t o g r o u p   T I M E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   E x t e n d e d   T i m e r   C o m p l e m e n t a r y   P W M   f u n c t i o n s 
     *     @ b r i e f         T i m e r   C o m p l e m e n t a r y   P W M   f u n c t i o n s 
     *   @ { 
     * / 
 / *     T i m e r   C o m p l e m e n t a r y   P W M   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 / *   B l o c k i n g   m o d e :   P o l l i n g   * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ P W M N _ S t a r t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ; 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ P W M N _ S t o p ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ; 
 
 / *   N o n - B l o c k i n g   m o d e :   I n t e r r u p t   * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ P W M N _ S t a r t _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ; 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ P W M N _ S t o p _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ; 
 / *   N o n - B l o c k i n g   m o d e :   D M A   * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ P W M N _ S t a r t _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   * p D a t a ,   u i n t 1 6 _ t   L e n g t h ) ; 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ P W M N _ S t o p _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) ; 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ a d d t o g r o u p   T I M E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 4   E x t e n d e d   T i m e r   C o m p l e m e n t a r y   O n e   P u l s e   f u n c t i o n s 
     *     @ b r i e f         T i m e r   C o m p l e m e n t a r y   O n e   P u l s e   f u n c t i o n s 
     *   @ { 
     * / 
 / *     T i m e r   C o m p l e m e n t a r y   O n e   P u l s e   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 / *   B l o c k i n g   m o d e :   P o l l i n g   * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ O n e P u l s e N _ S t a r t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   O u t p u t C h a n n e l ) ; 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ O n e P u l s e N _ S t o p ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   O u t p u t C h a n n e l ) ; 
 
 / *   N o n - B l o c k i n g   m o d e :   I n t e r r u p t   * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ O n e P u l s e N _ S t a r t _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   O u t p u t C h a n n e l ) ; 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ O n e P u l s e N _ S t o p _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   O u t p u t C h a n n e l ) ; 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ a d d t o g r o u p   T I M E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 5   E x t e n d e d   P e r i p h e r a l   C o n t r o l   f u n c t i o n s 
     *     @ b r i e f         P e r i p h e r a l   C o n t r o l   f u n c t i o n s 
     *   @ { 
     * / 
 / *   E x t e n d e d   C o n t r o l   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ C o n f i g C o m m u t E v e n t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t     I n p u t T r i g g e r , 
                                                                                             u i n t 3 2 _ t     C o m m u t a t i o n S o u r c e ) ; 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ C o n f i g C o m m u t E v e n t _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t     I n p u t T r i g g e r , 
                                                                                                   u i n t 3 2 _ t     C o m m u t a t i o n S o u r c e ) ; 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ C o n f i g C o m m u t E v e n t _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t     I n p u t T r i g g e r , 
                                                                                                     u i n t 3 2 _ t     C o m m u t a t i o n S o u r c e ) ; 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ M a s t e r C o n f i g S y n c h r o n i z a t i o n ( T I M _ H a n d l e T y p e D e f   * h t i m , 
                                                                                                                 T I M _ M a s t e r C o n f i g T y p e D e f   * s M a s t e r C o n f i g ) ; 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ C o n f i g B r e a k D e a d T i m e ( T I M _ H a n d l e T y p e D e f   * h t i m , 
                                                                                                 T I M _ B r e a k D e a d T i m e C o n f i g T y p e D e f   * s B r e a k D e a d T i m e C o n f i g ) ; 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ R e m a p C o n f i g ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   R e m a p ) ; 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ a d d t o g r o u p   T I M E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 6   E x t e n d e d   C a l l b a c k s   f u n c t i o n s 
     *   @ b r i e f         E x t e n d e d   C a l l b a c k s   f u n c t i o n s 
     *   @ { 
     * / 
 / *   E x t e n d e d   C a l l b a c k   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 v o i d   H A L _ T I M E x _ C o m m u t C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ) ; 
 v o i d   H A L _ T I M E x _ C o m m u t H a l f C p l t C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ) ; 
 v o i d   H A L _ T I M E x _ B r e a k C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ) ; 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ a d d t o g r o u p   T I M E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 7   E x t e n d e d   P e r i p h e r a l   S t a t e   f u n c t i o n s 
     *   @ b r i e f         E x t e n d e d   P e r i p h e r a l   S t a t e   f u n c t i o n s 
     *   @ { 
     * / 
 / *   E x t e n d e d   P e r i p h e r a l   S t a t e   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 H A L _ T I M _ S t a t e T y p e D e f   H A L _ T I M E x _ H a l l S e n s o r _ G e t S t a t e ( T I M _ H a n d l e T y p e D e f   * h t i m ) ; 
 H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   H A L _ T I M E x _ G e t C h a n n e l N S t a t e ( T I M _ H a n d l e T y p e D e f   * h t i m ,     u i n t 3 2 _ t   C h a n n e l N ) ; 
 / * * 
     *   @ } 
     * / 
 
 / * * 
     *   @ } 
     * / 
 / *   E n d   o f   e x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 
 / *   P r i v a t e   f u n c t i o n s - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / * *   @ a d d t o g r o u p   T I M E x _ P r i v a t e _ F u n c t i o n s   T I M E x   P r i v a t e   F u n c t i o n s 
     *   @ { 
     * / 
 v o i d   T I M E x _ D M A C o m m u t a t i o n C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ; 
 v o i d   T I M E x _ D M A C o m m u t a t i o n H a l f C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ; 
 / * * 
     *   @ } 
     * / 
 / *   E n d   o f   p r i v a t e   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 
 / * * 
     *   @ } 
     * / 
 
 / * * 
     *   @ } 
     * / 
 
 # i f d e f   _ _ c p l u s p l u s 
 } 
 # e n d i f 
 
 
 # e n d i f   / *   S T M 3 2 F 1 x x _ H A L _ T I M _ E X _ H   * / 
 
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * / 