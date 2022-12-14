??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ c a n . h  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H e a d e r   f i l e   o f   C A N   H A L   m o d u l e .  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ a t t e n t i o n  
     *  
     *   < h 2 > < c e n t e r > & c o p y ;   C o p y r i g h t   ( c )   2 0 1 6   S T M i c r o e l e c t r o n i c s .  
     *   A l l   r i g h t s   r e s e r v e d . < / c e n t e r > < / h 2 >  
     *  
     *   T h i s   s o f t w a r e   c o m p o n e n t   i s   l i c e n s e d   b y   S T   u n d e r   B S D   3 - C l a u s e   l i c e n s e ,  
     *   t h e   " L i c e n s e " ;   Y o u   m a y   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e  
     *   L i c e n s e .   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t :  
     *                                                 o p e n s o u r c e . o r g / l i c e n s e s / B S D - 3 - C l a u s e  
     *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     * /  
  
 / *   D e f i n e   t o   p r e v e n t   r e c u r s i v e   i n c l u s i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i f n d e f   S T M 3 2 F 1 x x _ H A L _ C A N _ H  
 # d e f i n e   S T M 3 2 F 1 x x _ H A L _ C A N _ H  
  
 # i f d e f   _ _ c p l u s p l u s  
 e x t e r n   " C "   {  
 # e n d i f  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ d e f . h "  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 # i f   d e f i n e d   ( C A N 1 )  
 / * *   @ a d d t o g r o u p   C A N  
     *   @ {  
     * /  
  
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   C A N _ E x p o r t e d _ T y p e s   C A N   E x p o r t e d   T y p e s  
     *   @ {  
     * /  
 / * *  
     *   @ b r i e f     H A L   S t a t e   s t r u c t u r e s   d e f i n i t i o n  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ C A N _ S T A T E _ R E S E T                           =   0 x 0 0 U ,     / * ! <   C A N   n o t   y e t   i n i t i a l i z e d   o r   d i s a b l e d   * /  
     H A L _ C A N _ S T A T E _ R E A D Y                           =   0 x 0 1 U ,     / * ! <   C A N   i n i t i a l i z e d   a n d   r e a d y   f o r   u s e       * /  
     H A L _ C A N _ S T A T E _ L I S T E N I N G                   =   0 x 0 2 U ,     / * ! <   C A N   r e c e i v e   p r o c e s s   i s   o n g o i n g             * /  
     H A L _ C A N _ S T A T E _ S L E E P _ P E N D I N G           =   0 x 0 3 U ,     / * ! <   C A N   s l e e p   r e q u e s t   i s   p e n d i n g                 * /  
     H A L _ C A N _ S T A T E _ S L E E P _ A C T I V E             =   0 x 0 4 U ,     / * ! <   C A N   s l e e p   m o d e   i s   a c t i v e                         * /  
     H A L _ C A N _ S T A T E _ E R R O R                           =   0 x 0 5 U       / * ! <   C A N   e r r o r   s t a t e                                           * /  
  
 }   H A L _ C A N _ S t a t e T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     C A N   i n i t   s t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   P r e s c a l e r ;                                     / * ! <   S p e c i f i e s   t h e   l e n g t h   o f   a   t i m e   q u a n t u m .  
                                                                                         T h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   1   a n d   M a x _ D a t a   =   1 0 2 4 .   * /  
  
     u i n t 3 2 _ t   M o d e ;                                               / * ! <   S p e c i f i e s   t h e   C A N   o p e r a t i n g   m o d e .  
                                                                                         T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   C A N _ o p e r a t i n g _ m o d e   * /  
  
     u i n t 3 2 _ t   S y n c J u m p W i d t h ;                             / * ! <   S p e c i f i e s   t h e   m a x i m u m   n u m b e r   o f   t i m e   q u a n t a   t h e   C A N   h a r d w a r e  
                                                                                         i s   a l l o w e d   t o   l e n g t h e n   o r   s h o r t e n   a   b i t   t o   p e r f o r m   r e s y n c h r o n i z a t i o n .  
                                                                                         T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   C A N _ s y n c h r o n i s a t i o n _ j u m p _ w i d t h   * /  
  
     u i n t 3 2 _ t   T i m e S e g 1 ;                                       / * ! <   S p e c i f i e s   t h e   n u m b e r   o f   t i m e   q u a n t a   i n   B i t   S e g m e n t   1 .  
                                                                                         T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   C A N _ t i m e _ q u a n t u m _ i n _ b i t _ s e g m e n t _ 1   * /  
  
     u i n t 3 2 _ t   T i m e S e g 2 ;                                       / * ! <   S p e c i f i e s   t h e   n u m b e r   o f   t i m e   q u a n t a   i n   B i t   S e g m e n t   2 .  
                                                                                         T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   C A N _ t i m e _ q u a n t u m _ i n _ b i t _ s e g m e n t _ 2   * /  
  
     F u n c t i o n a l S t a t e   T i m e T r i g g e r e d M o d e ;       / * ! <   E n a b l e   o r   d i s a b l e   t h e   t i m e   t r i g g e r e d   c o m m u n i c a t i o n   m o d e .  
                                                                                         T h i s   p a r a m e t e r   c a n   b e   s e t   t o   E N A B L E   o r   D I S A B L E .   * /  
  
     F u n c t i o n a l S t a t e   A u t o B u s O f f ;                     / * ! <   E n a b l e   o r   d i s a b l e   t h e   a u t o m a t i c   b u s - o f f   m a n a g e m e n t .  
                                                                                         T h i s   p a r a m e t e r   c a n   b e   s e t   t o   E N A B L E   o r   D I S A B L E .   * /  
  
     F u n c t i o n a l S t a t e   A u t o W a k e U p ;                     / * ! <   E n a b l e   o r   d i s a b l e   t h e   a u t o m a t i c   w a k e - u p   m o d e .  
                                                                                         T h i s   p a r a m e t e r   c a n   b e   s e t   t o   E N A B L E   o r   D I S A B L E .   * /  
  
     F u n c t i o n a l S t a t e   A u t o R e t r a n s m i s s i o n ;     / * ! <   E n a b l e   o r   d i s a b l e   t h e   n o n - a u t o m a t i c   r e t r a n s m i s s i o n   m o d e .  
                                                                                         T h i s   p a r a m e t e r   c a n   b e   s e t   t o   E N A B L E   o r   D I S A B L E .   * /  
  
     F u n c t i o n a l S t a t e   R e c e i v e F i f o L o c k e d ;       / * ! <   E n a b l e   o r   d i s a b l e   t h e   R e c e i v e   F I F O   L o c k e d   m o d e .  
                                                                                         T h i s   p a r a m e t e r   c a n   b e   s e t   t o   E N A B L E   o r   D I S A B L E .   * /  
  
     F u n c t i o n a l S t a t e   T r a n s m i t F i f o P r i o r i t y ; / * ! <   E n a b l e   o r   d i s a b l e   t h e   t r a n s m i t   F I F O   p r i o r i t y .  
                                                                                         T h i s   p a r a m e t e r   c a n   b e   s e t   t o   E N A B L E   o r   D I S A B L E .   * /  
  
 }   C A N _ I n i t T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     C A N   f i l t e r   c o n f i g u r a t i o n   s t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   F i l t e r I d H i g h ;                     / * ! <   S p e c i f i e s   t h e   f i l t e r   i d e n t i f i c a t i o n   n u m b e r   ( M S B s   f o r   a   3 2 - b i t  
                                                                               c o n f i g u r a t i o n ,   f i r s t   o n e   f o r   a   1 6 - b i t   c o n f i g u r a t i o n ) .  
                                                                               T h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 0 0 0 0   a n d   M a x _ D a t a   =   0 x F F F F .   * /  
  
     u i n t 3 2 _ t   F i l t e r I d L o w ;                       / * ! <   S p e c i f i e s   t h e   f i l t e r   i d e n t i f i c a t i o n   n u m b e r   ( L S B s   f o r   a   3 2 - b i t  
                                                                               c o n f i g u r a t i o n ,   s e c o n d   o n e   f o r   a   1 6 - b i t   c o n f i g u r a t i o n ) .  
                                                                               T h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 0 0 0 0   a n d   M a x _ D a t a   =   0 x F F F F .   * /  
  
     u i n t 3 2 _ t   F i l t e r M a s k I d H i g h ;             / * ! <   S p e c i f i e s   t h e   f i l t e r   m a s k   n u m b e r   o r   i d e n t i f i c a t i o n   n u m b e r ,  
                                                                               a c c o r d i n g   t o   t h e   m o d e   ( M S B s   f o r   a   3 2 - b i t   c o n f i g u r a t i o n ,  
                                                                               f i r s t   o n e   f o r   a   1 6 - b i t   c o n f i g u r a t i o n ) .  
                                                                               T h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 0 0 0 0   a n d   M a x _ D a t a   =   0 x F F F F .   * /  
  
     u i n t 3 2 _ t   F i l t e r M a s k I d L o w ;               / * ! <   S p e c i f i e s   t h e   f i l t e r   m a s k   n u m b e r   o r   i d e n t i f i c a t i o n   n u m b e r ,  
                                                                               a c c o r d i n g   t o   t h e   m o d e   ( L S B s   f o r   a   3 2 - b i t   c o n f i g u r a t i o n ,  
                                                                               s e c o n d   o n e   f o r   a   1 6 - b i t   c o n f i g u r a t i o n ) .  
                                                                               T h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 0 0 0 0   a n d   M a x _ D a t a   =   0 x F F F F .   * /  
  
     u i n t 3 2 _ t   F i l t e r F I F O A s s i g n m e n t ;     / * ! <   S p e c i f i e s   t h e   F I F O   ( 0   o r   1 U )   w h i c h   w i l l   b e   a s s i g n e d   t o   t h e   f i l t e r .  
                                                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   C A N _ f i l t e r _ F I F O   * /  
  
     u i n t 3 2 _ t   F i l t e r B a n k ;                         / * ! <   S p e c i f i e s   t h e   f i l t e r   b a n k   w h i c h   w i l l   b e   i n i t i a l i z e d .  
                                                                               F o r   s i n g l e   C A N   i n s t a n c e ( 1 4   d e d i c a t e d   f i l t e r   b a n k s ) ,  
                                                                               t h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0   a n d   M a x _ D a t a   =   1 3 .  
                                                                               F o r   d u a l   C A N   i n s t a n c e s ( 2 8   f i l t e r   b a n k s   s h a r e d ) ,  
                                                                               t h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0   a n d   M a x _ D a t a   =   2 7 .   * /  
  
     u i n t 3 2 _ t   F i l t e r M o d e ;                         / * ! <   S p e c i f i e s   t h e   f i l t e r   m o d e   t o   b e   i n i t i a l i z e d .  
                                                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   C A N _ f i l t e r _ m o d e   * /  
  
     u i n t 3 2 _ t   F i l t e r S c a l e ;                       / * ! <   S p e c i f i e s   t h e   f i l t e r   s c a l e .  
                                                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   C A N _ f i l t e r _ s c a l e   * /  
  
     u i n t 3 2 _ t   F i l t e r A c t i v a t i o n ;             / * ! <   E n a b l e   o r   d i s a b l e   t h e   f i l t e r .  
                                                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   C A N _ f i l t e r _ a c t i v a t i o n   * /  
  
     u i n t 3 2 _ t   S l a v e S t a r t F i l t e r B a n k ;     / * ! <   S e l e c t   t h e   s t a r t   f i l t e r   b a n k   f o r   t h e   s l a v e   C A N   i n s t a n c e .  
                                                                               F o r   s i n g l e   C A N   i n s t a n c e s ,   t h i s   p a r a m e t e r   i s   m e a n i n g l e s s .  
                                                                               F o r   d u a l   C A N   i n s t a n c e s ,   a l l   f i l t e r   b a n k s   w i t h   l o w e r   i n d e x   a r e   a s s i g n e d   t o   m a s t e r  
                                                                               C A N   i n s t a n c e ,   w h e r e a s   a l l   f i l t e r   b a n k s   w i t h   g r e a t e r   i n d e x   a r e   a s s i g n e d   t o   s l a v e  
                                                                               C A N   i n s t a n c e .  
                                                                               T h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0   a n d   M a x _ D a t a   =   2 7 .   * /  
  
 }   C A N _ F i l t e r T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     C A N   T x   m e s s a g e   h e a d e r   s t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   S t d I d ;         / * ! <   S p e c i f i e s   t h e   s t a n d a r d   i d e n t i f i e r .  
                                                     T h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0   a n d   M a x _ D a t a   =   0 x 7 F F .   * /  
  
     u i n t 3 2 _ t   E x t I d ;         / * ! <   S p e c i f i e s   t h e   e x t e n d e d   i d e n t i f i e r .  
                                                     T h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0   a n d   M a x _ D a t a   =   0 x 1 F F F F F F F .   * /  
  
     u i n t 3 2 _ t   I D E ;             / * ! <   S p e c i f i e s   t h e   t y p e   o f   i d e n t i f i e r   f o r   t h e   m e s s a g e   t h a t   w i l l   b e   t r a n s m i t t e d .  
                                                     T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   C A N _ i d e n t i f i e r _ t y p e   * /  
  
     u i n t 3 2 _ t   R T R ;             / * ! <   S p e c i f i e s   t h e   t y p e   o f   f r a m e   f o r   t h e   m e s s a g e   t h a t   w i l l   b e   t r a n s m i t t e d .  
                                                     T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   C A N _ r e m o t e _ t r a n s m i s s i o n _ r e q u e s t   * /  
  
     u i n t 3 2 _ t   D L C ;             / * ! <   S p e c i f i e s   t h e   l e n g t h   o f   t h e   f r a m e   t h a t   w i l l   b e   t r a n s m i t t e d .  
                                                     T h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0   a n d   M a x _ D a t a   =   8 .   * /  
  
     F u n c t i o n a l S t a t e   T r a n s m i t G l o b a l T i m e ;   / * ! <   S p e c i f i e s   w h e t h e r   t h e   t i m e s t a m p   c o u n t e r   v a l u e   c a p t u r e d   o n   s t a r t  
                                                     o f   f r a m e   t r a n s m i s s i o n ,   i s   s e n t   i n   D A T A 6   a n d   D A T A 7   r e p l a c i n g   p D a t a [ 6 ]   a n d   p D a t a [ 7 ] .  
                                                     @ n o t e :   T i m e   T r i g g e r e d   C o m m u n i c a t i o n   M o d e   m u s t   b e   e n a b l e d .  
                                                     @ n o t e :   D L C   m u s t   b e   p r o g r a m m e d   a s   8   b y t e s ,   i n   o r d e r   t h e s e   2   b y t e s   a r e   s e n t .  
                                                     T h i s   p a r a m e t e r   c a n   b e   s e t   t o   E N A B L E   o r   D I S A B L E .   * /  
  
 }   C A N _ T x H e a d e r T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     C A N   R x   m e s s a g e   h e a d e r   s t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   S t d I d ;         / * ! <   S p e c i f i e s   t h e   s t a n d a r d   i d e n t i f i e r .  
                                                     T h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0   a n d   M a x _ D a t a   =   0 x 7 F F .   * /  
  
     u i n t 3 2 _ t   E x t I d ;         / * ! <   S p e c i f i e s   t h e   e x t e n d e d   i d e n t i f i e r .  
                                                     T h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0   a n d   M a x _ D a t a   =   0 x 1 F F F F F F F .   * /  
  
     u i n t 3 2 _ t   I D E ;             / * ! <   S p e c i f i e s   t h e   t y p e   o f   i d e n t i f i e r   f o r   t h e   m e s s a g e   t h a t   w i l l   b e   t r a n s m i t t e d .  
                                                     T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   C A N _ i d e n t i f i e r _ t y p e   * /  
  
     u i n t 3 2 _ t   R T R ;             / * ! <   S p e c i f i e s   t h e   t y p e   o f   f r a m e   f o r   t h e   m e s s a g e   t h a t   w i l l   b e   t r a n s m i t t e d .  
                                                     T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   C A N _ r e m o t e _ t r a n s m i s s i o n _ r e q u e s t   * /  
  
     u i n t 3 2 _ t   D L C ;             / * ! <   S p e c i f i e s   t h e   l e n g t h   o f   t h e   f r a m e   t h a t   w i l l   b e   t r a n s m i t t e d .  
                                                     T h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0   a n d   M a x _ D a t a   =   8 .   * /  
  
     u i n t 3 2 _ t   T i m e s t a m p ;   / * ! <   S p e c i f i e s   t h e   t i m e s t a m p   c o u n t e r   v a l u e   c a p t u r e d   o n   s t a r t   o f   f r a m e   r e c e p t i o n .  
                                                     @ n o t e :   T i m e   T r i g g e r e d   C o m m u n i c a t i o n   M o d e   m u s t   b e   e n a b l e d .  
                                                     T h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0   a n d   M a x _ D a t a   =   0 x F F F F .   * /  
  
     u i n t 3 2 _ t   F i l t e r M a t c h I n d e x ;   / * ! <   S p e c i f i e s   t h e   i n d e x   o f   m a t c h i n g   a c c e p t a n c e   f i l t e r   e l e m e n t .  
                                                     T h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0   a n d   M a x _ D a t a   =   0 x F F .   * /  
  
 }   C A N _ R x H e a d e r T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     C A N   h a n d l e   S t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t   _ _ C A N _ H a n d l e T y p e D e f  
 {  
     C A N _ T y p e D e f                                   * I n s t a n c e ;                                   / * ! <   R e g i s t e r   b a s e   a d d r e s s   * /  
  
     C A N _ I n i t T y p e D e f                           I n i t ;                                             / * ! <   C A N   r e q u i r e d   p a r a m e t e r s   * /  
  
     _ _ I O   H A L _ C A N _ S t a t e T y p e D e f       S t a t e ;                                           / * ! <   C A N   c o m m u n i c a t i o n   s t a t e   * /  
  
     _ _ I O   u i n t 3 2 _ t                               E r r o r C o d e ;                                   / * ! <   C A N   E r r o r   c o d e .  
                                                                                                                             T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   C A N _ E r r o r _ C o d e   * /  
  
 # i f   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   = =   1  
     v o i d   ( *   T x M a i l b o x 0 C o m p l e t e C a l l b a c k ) ( s t r u c t   _ _ C A N _ H a n d l e T y p e D e f   * h c a n ) ; / * ! <   C A N   T x   M a i l b o x   0   c o m p l e t e   c a l l b a c k         * /  
     v o i d   ( *   T x M a i l b o x 1 C o m p l e t e C a l l b a c k ) ( s t r u c t   _ _ C A N _ H a n d l e T y p e D e f   * h c a n ) ; / * ! <   C A N   T x   M a i l b o x   1   c o m p l e t e   c a l l b a c k         * /  
     v o i d   ( *   T x M a i l b o x 2 C o m p l e t e C a l l b a c k ) ( s t r u c t   _ _ C A N _ H a n d l e T y p e D e f   * h c a n ) ; / * ! <   C A N   T x   M a i l b o x   2   c o m p l e t e   c a l l b a c k         * /  
     v o i d   ( *   T x M a i l b o x 0 A b o r t C a l l b a c k ) ( s t r u c t   _ _ C A N _ H a n d l e T y p e D e f   * h c a n ) ;       / * ! <   C A N   T x   M a i l b o x   0   a b o r t   c a l l b a c k               * /  
     v o i d   ( *   T x M a i l b o x 1 A b o r t C a l l b a c k ) ( s t r u c t   _ _ C A N _ H a n d l e T y p e D e f   * h c a n ) ;       / * ! <   C A N   T x   M a i l b o x   1   a b o r t   c a l l b a c k               * /  
     v o i d   ( *   T x M a i l b o x 2 A b o r t C a l l b a c k ) ( s t r u c t   _ _ C A N _ H a n d l e T y p e D e f   * h c a n ) ;       / * ! <   C A N   T x   M a i l b o x   2   a b o r t   c a l l b a c k               * /  
     v o i d   ( *   R x F i f o 0 M s g P e n d i n g C a l l b a c k ) ( s t r u c t   _ _ C A N _ H a n d l e T y p e D e f   * h c a n ) ;   / * ! <   C A N   R x   F I F O   0   m s g   p e n d i n g   c a l l b a c k         * /  
     v o i d   ( *   R x F i f o 0 F u l l C a l l b a c k ) ( s t r u c t   _ _ C A N _ H a n d l e T y p e D e f   * h c a n ) ;               / * ! <   C A N   R x   F I F O   0   f u l l   c a l l b a c k                       * /  
     v o i d   ( *   R x F i f o 1 M s g P e n d i n g C a l l b a c k ) ( s t r u c t   _ _ C A N _ H a n d l e T y p e D e f   * h c a n ) ;   / * ! <   C A N   R x   F I F O   1   m s g   p e n d i n g   c a l l b a c k         * /  
     v o i d   ( *   R x F i f o 1 F u l l C a l l b a c k ) ( s t r u c t   _ _ C A N _ H a n d l e T y p e D e f   * h c a n ) ;               / * ! <   C A N   R x   F I F O   1   f u l l   c a l l b a c k                       * /  
     v o i d   ( *   S l e e p C a l l b a c k ) ( s t r u c t   _ _ C A N _ H a n d l e T y p e D e f   * h c a n ) ;                           / * ! <   C A N   S l e e p   c a l l b a c k                                         * /  
     v o i d   ( *   W a k e U p F r o m R x M s g C a l l b a c k ) ( s t r u c t   _ _ C A N _ H a n d l e T y p e D e f   * h c a n ) ;       / * ! <   C A N   W a k e   U p   f r o m   R x   m s g   c a l l b a c k             * /  
     v o i d   ( *   E r r o r C a l l b a c k ) ( s t r u c t   _ _ C A N _ H a n d l e T y p e D e f   * h c a n ) ;                           / * ! <   C A N   E r r o r   c a l l b a c k                                         * /  
  
     v o i d   ( *   M s p I n i t C a l l b a c k ) ( s t r u c t   _ _ C A N _ H a n d l e T y p e D e f   * h c a n ) ;                       / * ! <   C A N   M s p   I n i t   c a l l b a c k                                   * /  
     v o i d   ( *   M s p D e I n i t C a l l b a c k ) ( s t r u c t   _ _ C A N _ H a n d l e T y p e D e f   * h c a n ) ;                   / * ! <   C A N   M s p   D e I n i t   c a l l b a c k                               * /  
  
 # e n d i f   / *   ( U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S )   * /  
 }   C A N _ H a n d l e T y p e D e f ;  
  
 # i f   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   = =   1  
 / * *  
     *   @ b r i e f     H A L   C A N   c o m m o n   C a l l b a c k   I D   e n u m e r a t i o n   d e f i n i t i o n  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ C A N _ T X _ M A I L B O X 0 _ C O M P L E T E _ C B _ I D               =   0 x 0 0 U ,         / * ! <   C A N   T x   M a i l b o x   0   c o m p l e t e   c a l l b a c k   I D                   * /  
     H A L _ C A N _ T X _ M A I L B O X 1 _ C O M P L E T E _ C B _ I D               =   0 x 0 1 U ,         / * ! <   C A N   T x   M a i l b o x   1   c o m p l e t e   c a l l b a c k   I D                   * /  
     H A L _ C A N _ T X _ M A I L B O X 2 _ C O M P L E T E _ C B _ I D               =   0 x 0 2 U ,         / * ! <   C A N   T x   M a i l b o x   2   c o m p l e t e   c a l l b a c k   I D                   * /  
     H A L _ C A N _ T X _ M A I L B O X 0 _ A B O R T _ C B _ I D                     =   0 x 0 3 U ,         / * ! <   C A N   T x   M a i l b o x   0   a b o r t   c a l l b a c k   I D                         * /  
     H A L _ C A N _ T X _ M A I L B O X 1 _ A B O R T _ C B _ I D                     =   0 x 0 4 U ,         / * ! <   C A N   T x   M a i l b o x   1   a b o r t   c a l l b a c k   I D                         * /  
     H A L _ C A N _ T X _ M A I L B O X 2 _ A B O R T _ C B _ I D                     =   0 x 0 5 U ,         / * ! <   C A N   T x   M a i l b o x   2   a b o r t   c a l l b a c k   I D                         * /  
     H A L _ C A N _ R X _ F I F O 0 _ M S G _ P E N D I N G _ C B _ I D               =   0 x 0 6 U ,         / * ! <   C A N   R x   F I F O   0   m e s s a g e   p e n d i n g   c a l l b a c k   I D           * /  
     H A L _ C A N _ R X _ F I F O 0 _ F U L L _ C B _ I D                             =   0 x 0 7 U ,         / * ! <   C A N   R x   F I F O   0   f u l l   c a l l b a c k   I D                                 * /  
     H A L _ C A N _ R X _ F I F O 1 _ M S G _ P E N D I N G _ C B _ I D               =   0 x 0 8 U ,         / * ! <   C A N   R x   F I F O   1   m e s s a g e   p e n d i n g   c a l l b a c k   I D           * /  
     H A L _ C A N _ R X _ F I F O 1 _ F U L L _ C B _ I D                             =   0 x 0 9 U ,         / * ! <   C A N   R x   F I F O   1   f u l l   c a l l b a c k   I D                                 * /  
     H A L _ C A N _ S L E E P _ C B _ I D                                             =   0 x 0 A U ,         / * ! <   C A N   S l e e p   c a l l b a c k   I D                                                   * /  
     H A L _ C A N _ W A K E U P _ F R O M _ R X _ M S G _ C B _ I D                   =   0 x 0 B U ,         / * ! <   C A N   W a k e   U p   f r o m   R x   m s g   c a l l b a c k   I D                     * /  
     H A L _ C A N _ E R R O R _ C B _ I D                                             =   0 x 0 C U ,         / * ! <   C A N   E r r o r   c a l l b a c k   I D                                                   * /  
  
     H A L _ C A N _ M S P I N I T _ C B _ I D                                         =   0 x 0 D U ,         / * ! <   C A N   M s p I n i t   c a l l b a c k   I D                                               * /  
     H A L _ C A N _ M S P D E I N I T _ C B _ I D                                     =   0 x 0 E U ,         / * ! <   C A N   M s p D e I n i t   c a l l b a c k   I D                                           * /  
  
 }   H A L _ C A N _ C a l l b a c k I D T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     H A L   C A N   C a l l b a c k   p o i n t e r   d e f i n i t i o n  
     * /  
 t y p e d e f     v o i d   ( * p C A N _ C a l l b a c k T y p e D e f ) ( C A N _ H a n d l e T y p e D e f   * h c a n ) ;   / * ! <   p o i n t e r   t o   a   C A N   c a l l b a c k   f u n c t i o n       * /  
  
 # e n d i f   / *   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   * /  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   C A N _ E x p o r t e d _ C o n s t a n t s   C A N   E x p o r t e d   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   C A N _ E r r o r _ C o d e   C A N   E r r o r   C o d e  
     *   @ {  
     * /  
 # d e f i n e   H A L _ C A N _ E R R O R _ N O N E                         ( 0 x 0 0 0 0 0 0 0 0 U )     / * ! <   N o   e r r o r                                                                                           * /  
 # d e f i n e   H A L _ C A N _ E R R O R _ E W G                           ( 0 x 0 0 0 0 0 0 0 1 U )     / * ! <   P r o t o c o l   E r r o r   W a r n i n g                                                               * /  
 # d e f i n e   H A L _ C A N _ E R R O R _ E P V                           ( 0 x 0 0 0 0 0 0 0 2 U )     / * ! <   E r r o r   P a s s i v e                                                                                 * /  
 # d e f i n e   H A L _ C A N _ E R R O R _ B O F                           ( 0 x 0 0 0 0 0 0 0 4 U )     / * ! <   B u s - o f f   e r r o r                                                                                 * /  
 # d e f i n e   H A L _ C A N _ E R R O R _ S T F                           ( 0 x 0 0 0 0 0 0 0 8 U )     / * ! <   S t u f f   e r r o r                                                                                     * /  
 # d e f i n e   H A L _ C A N _ E R R O R _ F O R                           ( 0 x 0 0 0 0 0 0 1 0 U )     / * ! <   F o r m   e r r o r                                                                                       * /  
 # d e f i n e   H A L _ C A N _ E R R O R _ A C K                           ( 0 x 0 0 0 0 0 0 2 0 U )     / * ! <   A c k n o w l e d g m e n t   e r r o r                                                                   * /  
 # d e f i n e   H A L _ C A N _ E R R O R _ B R                             ( 0 x 0 0 0 0 0 0 4 0 U )     / * ! <   B i t   r e c e s s i v e   e r r o r                                                                     * /  
 # d e f i n e   H A L _ C A N _ E R R O R _ B D                             ( 0 x 0 0 0 0 0 0 8 0 U )     / * ! <   B i t   d o m i n a n t   e r r o r                                                                       * /  
 # d e f i n e   H A L _ C A N _ E R R O R _ C R C                           ( 0 x 0 0 0 0 0 1 0 0 U )     / * ! <   C R C   e r r o r                                                                                         * /  
 # d e f i n e   H A L _ C A N _ E R R O R _ R X _ F O V 0                   ( 0 x 0 0 0 0 0 2 0 0 U )     / * ! <   R x   F I F O 0   o v e r r u n   e r r o r                                                               * /  
 # d e f i n e   H A L _ C A N _ E R R O R _ R X _ F O V 1                   ( 0 x 0 0 0 0 0 4 0 0 U )     / * ! <   R x   F I F O 1   o v e r r u n   e r r o r                                                               * /  
 # d e f i n e   H A L _ C A N _ E R R O R _ T X _ A L S T 0                 ( 0 x 0 0 0 0 0 8 0 0 U )     / * ! <   T x M a i l b o x   0   t r a n s m i t   f a i l u r e   d u e   t o   a r b i t r a t i o n   l o s t   * /  
 # d e f i n e   H A L _ C A N _ E R R O R _ T X _ T E R R 0                 ( 0 x 0 0 0 0 1 0 0 0 U )     / * ! <   T x M a i l b o x   0   t r a n s m i t   f a i l u r e   d u e   t o   t r a n s m i t   e r r o r         * /  
 # d e f i n e   H A L _ C A N _ E R R O R _ T X _ A L S T 1                 ( 0 x 0 0 0 0 2 0 0 0 U )     / * ! <   T x M a i l b o x   1   t r a n s m i t   f a i l u r e   d u e   t o   a r b i t r a t i o n   l o s t   * /  
 # d e f i n e   H A L _ C A N _ E R R O R _ T X _ T E R R 1                 ( 0 x 0 0 0 0 4 0 0 0 U )     / * ! <   T x M a i l b o x   1   t r a n s m i t   f a i l u r e   d u e   t o   t r a n s m i t   e r r o r         * /  
 # d e f i n e   H A L _ C A N _ E R R O R _ T X _ A L S T 2                 ( 0 x 0 0 0 0 8 0 0 0 U )     / * ! <   T x M a i l b o x   2   t r a n s m i t   f a i l u r e   d u e   t o   a r b i t r a t i o n   l o s t   * /  
 # d e f i n e   H A L _ C A N _ E R R O R _ T X _ T E R R 2                 ( 0 x 0 0 0 1 0 0 0 0 U )     / * ! <   T x M a i l b o x   2   t r a n s m i t   f a i l u r e   d u e   t o   t r a n s m i t   e r r o r         * /  
 # d e f i n e   H A L _ C A N _ E R R O R _ T I M E O U T                   ( 0 x 0 0 0 2 0 0 0 0 U )     / * ! <   T i m e o u t   e r r o r                                                                                 * /  
 # d e f i n e   H A L _ C A N _ E R R O R _ N O T _ I N I T I A L I Z E D   ( 0 x 0 0 0 4 0 0 0 0 U )     / * ! <   P e r i p h e r a l   n o t   i n i t i a l i z e d                                                       * /  
 # d e f i n e   H A L _ C A N _ E R R O R _ N O T _ R E A D Y               ( 0 x 0 0 0 8 0 0 0 0 U )     / * ! <   P e r i p h e r a l   n o t   r e a d y                                                                   * /  
 # d e f i n e   H A L _ C A N _ E R R O R _ N O T _ S T A R T E D           ( 0 x 0 0 1 0 0 0 0 0 U )     / * ! <   P e r i p h e r a l   n o t   s t a r t e d                                                               * /  
 # d e f i n e   H A L _ C A N _ E R R O R _ P A R A M                       ( 0 x 0 0 2 0 0 0 0 0 U )     / * ! <   P a r a m e t e r   e r r o r                                                                             * /  
  
 # i f   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   = =   1  
 # d e f i n e   H A L _ C A N _ E R R O R _ I N V A L I D _ C A L L B A C K   ( 0 x 0 0 4 0 0 0 0 0 U )   / * ! <   I n v a l i d   C a l l b a c k   e r r o r                                                               * /  
 # e n d i f   / *   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   * /  
 # d e f i n e   H A L _ C A N _ E R R O R _ I N T E R N A L                 ( 0 x 0 0 8 0 0 0 0 0 U )     / * ! <   I n t e r n a l   e r r o r                                                                               * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C A N _ I n i t S t a t u s   C A N   I n i t S t a t u s  
     *   @ {  
     * /  
 # d e f i n e   C A N _ I N I T S T A T U S _ F A I L E D               ( 0 x 0 0 0 0 0 0 0 0 U )     / * ! <   C A N   i n i t i a l i z a t i o n   f a i l e d   * /  
 # d e f i n e   C A N _ I N I T S T A T U S _ S U C C E S S             ( 0 x 0 0 0 0 0 0 0 1 U )     / * ! <   C A N   i n i t i a l i z a t i o n   O K           * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C A N _ o p e r a t i n g _ m o d e   C A N   O p e r a t i n g   M o d e  
     *   @ {  
     * /  
 # d e f i n e   C A N _ M O D E _ N O R M A L                           ( 0 x 0 0 0 0 0 0 0 0 U )                                                             / * ! <   N o r m a l   m o d e       * /  
 # d e f i n e   C A N _ M O D E _ L O O P B A C K                       ( ( u i n t 3 2 _ t ) C A N _ B T R _ L B K M )                                       / * ! <   L o o p b a c k   m o d e   * /  
 # d e f i n e   C A N _ M O D E _ S I L E N T                           ( ( u i n t 3 2 _ t ) C A N _ B T R _ S I L M )                                       / * ! <   S i l e n t   m o d e       * /  
 # d e f i n e   C A N _ M O D E _ S I L E N T _ L O O P B A C K         ( ( u i n t 3 2 _ t ) ( C A N _ B T R _ L B K M   |   C A N _ B T R _ S I L M ) )     / * ! <   L o o p b a c k   c o m b i n e d   w i t h   s i l e n t   m o d e   * /  
 / * *  
     *   @ }  
     * /  
  
  
 / * *   @ d e f g r o u p   C A N _ s y n c h r o n i s a t i o n _ j u m p _ w i d t h   C A N   S y n c h r o n i z a t i o n   J u m p   W i d t h  
     *   @ {  
     * /  
 # d e f i n e   C A N _ S J W _ 1 T Q                                   ( 0 x 0 0 0 0 0 0 0 0 U )                             / * ! <   1   t i m e   q u a n t u m   * /  
 # d e f i n e   C A N _ S J W _ 2 T Q                                   ( ( u i n t 3 2 _ t ) C A N _ B T R _ S J W _ 0 )     / * ! <   2   t i m e   q u a n t u m   * /  
 # d e f i n e   C A N _ S J W _ 3 T Q                                   ( ( u i n t 3 2 _ t ) C A N _ B T R _ S J W _ 1 )     / * ! <   3   t i m e   q u a n t u m   * /  
 # d e f i n e   C A N _ S J W _ 4 T Q                                   ( ( u i n t 3 2 _ t ) C A N _ B T R _ S J W )         / * ! <   4   t i m e   q u a n t u m   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C A N _ t i m e _ q u a n t u m _ i n _ b i t _ s e g m e n t _ 1   C A N   T i m e   Q u a n t u m   i n   B i t   S e g m e n t   1  
     *   @ {  
     * /  
 # d e f i n e   C A N _ B S 1 _ 1 T Q                                   ( 0 x 0 0 0 0 0 0 0 0 U )                                                                                                 / * ! <   1   t i m e   q u a n t u m     * /  
 # d e f i n e   C A N _ B S 1 _ 2 T Q                                   ( ( u i n t 3 2 _ t ) C A N _ B T R _ T S 1 _ 0 )                                                                         / * ! <   2   t i m e   q u a n t u m     * /  
 # d e f i n e   C A N _ B S 1 _ 3 T Q                                   ( ( u i n t 3 2 _ t ) C A N _ B T R _ T S 1 _ 1 )                                                                         / * ! <   3   t i m e   q u a n t u m     * /  
 # d e f i n e   C A N _ B S 1 _ 4 T Q                                   ( ( u i n t 3 2 _ t ) ( C A N _ B T R _ T S 1 _ 1   |   C A N _ B T R _ T S 1 _ 0 ) )                                     / * ! <   4   t i m e   q u a n t u m     * /  
 # d e f i n e   C A N _ B S 1 _ 5 T Q                                   ( ( u i n t 3 2 _ t ) C A N _ B T R _ T S 1 _ 2 )                                                                         / * ! <   5   t i m e   q u a n t u m     * /  
 # d e f i n e   C A N _ B S 1 _ 6 T Q                                   ( ( u i n t 3 2 _ t ) ( C A N _ B T R _ T S 1 _ 2   |   C A N _ B T R _ T S 1 _ 0 ) )                                     / * ! <   6   t i m e   q u a n t u m     * /  
 # d e f i n e   C A N _ B S 1 _ 7 T Q                                   ( ( u i n t 3 2 _ t ) ( C A N _ B T R _ T S 1 _ 2   |   C A N _ B T R _ T S 1 _ 1 ) )                                     / * ! <   7   t i m e   q u a n t u m     * /  
 # d e f i n e   C A N _ B S 1 _ 8 T Q                                   ( ( u i n t 3 2 _ t ) ( C A N _ B T R _ T S 1 _ 2   |   C A N _ B T R _ T S 1 _ 1   |   C A N _ B T R _ T S 1 _ 0 ) )     / * ! <   8   t i m e   q u a n t u m     * /  
 # d e f i n e   C A N _ B S 1 _ 9 T Q                                   ( ( u i n t 3 2 _ t ) C A N _ B T R _ T S 1 _ 3 )                                                                         / * ! <   9   t i m e   q u a n t u m     * /  
 # d e f i n e   C A N _ B S 1 _ 1 0 T Q                                 ( ( u i n t 3 2 _ t ) ( C A N _ B T R _ T S 1 _ 3   |   C A N _ B T R _ T S 1 _ 0 ) )                                     / * ! <   1 0   t i m e   q u a n t u m   * /  
 # d e f i n e   C A N _ B S 1 _ 1 1 T Q                                 ( ( u i n t 3 2 _ t ) ( C A N _ B T R _ T S 1 _ 3   |   C A N _ B T R _ T S 1 _ 1 ) )                                     / * ! <   1 1   t i m e   q u a n t u m   * /  
 # d e f i n e   C A N _ B S 1 _ 1 2 T Q                                 ( ( u i n t 3 2 _ t ) ( C A N _ B T R _ T S 1 _ 3   |   C A N _ B T R _ T S 1 _ 1   |   C A N _ B T R _ T S 1 _ 0 ) )     / * ! <   1 2   t i m e   q u a n t u m   * /  
 # d e f i n e   C A N _ B S 1 _ 1 3 T Q                                 ( ( u i n t 3 2 _ t ) ( C A N _ B T R _ T S 1 _ 3   |   C A N _ B T R _ T S 1 _ 2 ) )                                     / * ! <   1 3   t i m e   q u a n t u m   * /  
 # d e f i n e   C A N _ B S 1 _ 1 4 T Q                                 ( ( u i n t 3 2 _ t ) ( C A N _ B T R _ T S 1 _ 3   |   C A N _ B T R _ T S 1 _ 2   |   C A N _ B T R _ T S 1 _ 0 ) )     / * ! <   1 4   t i m e   q u a n t u m   * /  
 # d e f i n e   C A N _ B S 1 _ 1 5 T Q                                 ( ( u i n t 3 2 _ t ) ( C A N _ B T R _ T S 1 _ 3   |   C A N _ B T R _ T S 1 _ 2   |   C A N _ B T R _ T S 1 _ 1 ) )     / * ! <   1 5   t i m e   q u a n t u m   * /  
 # d e f i n e   C A N _ B S 1 _ 1 6 T Q                                 ( ( u i n t 3 2 _ t ) C A N _ B T R _ T S 1 )   / * ! <   1 6   t i m e   q u a n t u m   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C A N _ t i m e _ q u a n t u m _ i n _ b i t _ s e g m e n t _ 2   C A N   T i m e   Q u a n t u m   i n   B i t   S e g m e n t   2  
     *   @ {  
     * /  
 # d e f i n e   C A N _ B S 2 _ 1 T Q                                   ( 0 x 0 0 0 0 0 0 0 0 U )                                                                 / * ! <   1   t i m e   q u a n t u m   * /  
 # d e f i n e   C A N _ B S 2 _ 2 T Q                                   ( ( u i n t 3 2 _ t ) C A N _ B T R _ T S 2 _ 0 )                                         / * ! <   2   t i m e   q u a n t u m   * /  
 # d e f i n e   C A N _ B S 2 _ 3 T Q                                   ( ( u i n t 3 2 _ t ) C A N _ B T R _ T S 2 _ 1 )                                         / * ! <   3   t i m e   q u a n t u m   * /  
 # d e f i n e   C A N _ B S 2 _ 4 T Q                                   ( ( u i n t 3 2 _ t ) ( C A N _ B T R _ T S 2 _ 1   |   C A N _ B T R _ T S 2 _ 0 ) )     / * ! <   4   t i m e   q u a n t u m   * /  
 # d e f i n e   C A N _ B S 2 _ 5 T Q                                   ( ( u i n t 3 2 _ t ) C A N _ B T R _ T S 2 _ 2 )                                         / * ! <   5   t i m e   q u a n t u m   * /  
 # d e f i n e   C A N _ B S 2 _ 6 T Q                                   ( ( u i n t 3 2 _ t ) ( C A N _ B T R _ T S 2 _ 2   |   C A N _ B T R _ T S 2 _ 0 ) )     / * ! <   6   t i m e   q u a n t u m   * /  
 # d e f i n e   C A N _ B S 2 _ 7 T Q                                   ( ( u i n t 3 2 _ t ) ( C A N _ B T R _ T S 2 _ 2   |   C A N _ B T R _ T S 2 _ 1 ) )     / * ! <   7   t i m e   q u a n t u m   * /  
 # d e f i n e   C A N _ B S 2 _ 8 T Q                                   ( ( u i n t 3 2 _ t ) C A N _ B T R _ T S 2 )                                             / * ! <   8   t i m e   q u a n t u m   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C A N _ f i l t e r _ m o d e   C A N   F i l t e r   M o d e  
     *   @ {  
     * /  
 # d e f i n e   C A N _ F I L T E R M O D E _ I D M A S K               ( 0 x 0 0 0 0 0 0 0 0 U )     / * ! <   I d e n t i f i e r   m a s k   m o d e   * /  
 # d e f i n e   C A N _ F I L T E R M O D E _ I D L I S T               ( 0 x 0 0 0 0 0 0 0 1 U )     / * ! <   I d e n t i f i e r   l i s t   m o d e   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C A N _ f i l t e r _ s c a l e   C A N   F i l t e r   S c a l e  
     *   @ {  
     * /  
 # d e f i n e   C A N _ F I L T E R S C A L E _ 1 6 B I T               ( 0 x 0 0 0 0 0 0 0 0 U )     / * ! <   T w o   1 6 - b i t   f i l t e r s   * /  
 # d e f i n e   C A N _ F I L T E R S C A L E _ 3 2 B I T               ( 0 x 0 0 0 0 0 0 0 1 U )     / * ! <   O n e   3 2 - b i t   f i l t e r     * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C A N _ f i l t e r _ a c t i v a t i o n   C A N   F i l t e r   A c t i v a t i o n  
     *   @ {  
     * /  
 # d e f i n e   C A N _ F I L T E R _ D I S A B L E                     ( 0 x 0 0 0 0 0 0 0 0 U )     / * ! <   D i s a b l e   f i l t e r   * /  
 # d e f i n e   C A N _ F I L T E R _ E N A B L E                       ( 0 x 0 0 0 0 0 0 0 1 U )     / * ! <   E n a b l e   f i l t e r     * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C A N _ f i l t e r _ F I F O   C A N   F i l t e r   F I F O  
     *   @ {  
     * /  
 # d e f i n e   C A N _ F I L T E R _ F I F O 0                         ( 0 x 0 0 0 0 0 0 0 0 U )     / * ! <   F i l t e r   F I F O   0   a s s i g n m e n t   f o r   f i l t e r   x   * /  
 # d e f i n e   C A N _ F I L T E R _ F I F O 1                         ( 0 x 0 0 0 0 0 0 0 1 U )     / * ! <   F i l t e r   F I F O   1   a s s i g n m e n t   f o r   f i l t e r   x   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C A N _ i d e n t i f i e r _ t y p e   C A N   I d e n t i f i e r   T y p e  
     *   @ {  
     * /  
 # d e f i n e   C A N _ I D _ S T D                                     ( 0 x 0 0 0 0 0 0 0 0 U )     / * ! <   S t a n d a r d   I d   * /  
 # d e f i n e   C A N _ I D _ E X T                                     ( 0 x 0 0 0 0 0 0 0 4 U )     / * ! <   E x t e n d e d   I d   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C A N _ r e m o t e _ t r a n s m i s s i o n _ r e q u e s t   C A N   R e m o t e   T r a n s m i s s i o n   R e q u e s t  
     *   @ {  
     * /  
 # d e f i n e   C A N _ R T R _ D A T A                                 ( 0 x 0 0 0 0 0 0 0 0 U )     / * ! <   D a t a   f r a m e       * /  
 # d e f i n e   C A N _ R T R _ R E M O T E                             ( 0 x 0 0 0 0 0 0 0 2 U )     / * ! <   R e m o t e   f r a m e   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C A N _ r e c e i v e _ F I F O _ n u m b e r   C A N   R e c e i v e   F I F O   N u m b e r  
     *   @ {  
     * /  
 # d e f i n e   C A N _ R X _ F I F O 0                                 ( 0 x 0 0 0 0 0 0 0 0 U )     / * ! <   C A N   r e c e i v e   F I F O   0   * /  
 # d e f i n e   C A N _ R X _ F I F O 1                                 ( 0 x 0 0 0 0 0 0 0 1 U )     / * ! <   C A N   r e c e i v e   F I F O   1   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C A N _ T x _ M a i l b o x e s   C A N   T x   M a i l b o x e s  
     *   @ {  
     * /  
 # d e f i n e   C A N _ T X _ M A I L B O X 0                           ( 0 x 0 0 0 0 0 0 0 1 U )     / * ! <   T x   M a i l b o x   0     * /  
 # d e f i n e   C A N _ T X _ M A I L B O X 1                           ( 0 x 0 0 0 0 0 0 0 2 U )     / * ! <   T x   M a i l b o x   1     * /  
 # d e f i n e   C A N _ T X _ M A I L B O X 2                           ( 0 x 0 0 0 0 0 0 0 4 U )     / * ! <   T x   M a i l b o x   2     * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C A N _ f l a g s   C A N   F l a g s  
     *   @ {  
     * /  
 / *   T r a n s m i t   F l a g s   * /  
 # d e f i n e   C A N _ F L A G _ R Q C P 0                             ( 0 x 0 0 0 0 0 5 0 0 U )     / * ! <   R e q u e s t   c o m p l e t e   M a i l B o x   0   f l a g       * /  
 # d e f i n e   C A N _ F L A G _ T X O K 0                             ( 0 x 0 0 0 0 0 5 0 1 U )     / * ! <   T r a n s m i s s i o n   O K   M a i l B o x   0   f l a g         * /  
 # d e f i n e   C A N _ F L A G _ A L S T 0                             ( 0 x 0 0 0 0 0 5 0 2 U )     / * ! <   A r b i t r a t i o n   L o s t   M a i l B o x   0   f l a g       * /  
 # d e f i n e   C A N _ F L A G _ T E R R 0                             ( 0 x 0 0 0 0 0 5 0 3 U )     / * ! <   T r a n s m i s s i o n   e r r o r   M a i l B o x   0   f l a g   * /  
 # d e f i n e   C A N _ F L A G _ R Q C P 1                             ( 0 x 0 0 0 0 0 5 0 8 U )     / * ! <   R e q u e s t   c o m p l e t e   M a i l B o x 1   f l a g         * /  
 # d e f i n e   C A N _ F L A G _ T X O K 1                             ( 0 x 0 0 0 0 0 5 0 9 U )     / * ! <   T r a n s m i s s i o n   O K   M a i l B o x   1   f l a g         * /  
 # d e f i n e   C A N _ F L A G _ A L S T 1                             ( 0 x 0 0 0 0 0 5 0 A U )     / * ! <   A r b i t r a t i o n   L o s t   M a i l B o x   1   f l a g       * /  
 # d e f i n e   C A N _ F L A G _ T E R R 1                             ( 0 x 0 0 0 0 0 5 0 B U )     / * ! <   T r a n s m i s s i o n   e r r o r   M a i l B o x   1   f l a g   * /  
 # d e f i n e   C A N _ F L A G _ R Q C P 2                             ( 0 x 0 0 0 0 0 5 1 0 U )     / * ! <   R e q u e s t   c o m p l e t e   M a i l B o x 2   f l a g         * /  
 # d e f i n e   C A N _ F L A G _ T X O K 2                             ( 0 x 0 0 0 0 0 5 1 1 U )     / * ! <   T r a n s m i s s i o n   O K   M a i l B o x   2   f l a g         * /  
 # d e f i n e   C A N _ F L A G _ A L S T 2                             ( 0 x 0 0 0 0 0 5 1 2 U )     / * ! <   A r b i t r a t i o n   L o s t   M a i l B o x   2   f l a g       * /  
 # d e f i n e   C A N _ F L A G _ T E R R 2                             ( 0 x 0 0 0 0 0 5 1 3 U )     / * ! <   T r a n s m i s s i o n   e r r o r   M a i l B o x   2   f l a g   * /  
 # d e f i n e   C A N _ F L A G _ T M E 0                               ( 0 x 0 0 0 0 0 5 1 A U )     / * ! <   T r a n s m i t   m a i l b o x   0   e m p t y   f l a g           * /  
 # d e f i n e   C A N _ F L A G _ T M E 1                               ( 0 x 0 0 0 0 0 5 1 B U )     / * ! <   T r a n s m i t   m a i l b o x   1   e m p t y   f l a g           * /  
 # d e f i n e   C A N _ F L A G _ T M E 2                               ( 0 x 0 0 0 0 0 5 1 C U )     / * ! <   T r a n s m i t   m a i l b o x   2   e m p t y   f l a g           * /  
 # d e f i n e   C A N _ F L A G _ L O W 0                               ( 0 x 0 0 0 0 0 5 1 D U )     / * ! <   L o w e s t   p r i o r i t y   m a i l b o x   0   f l a g         * /  
 # d e f i n e   C A N _ F L A G _ L O W 1                               ( 0 x 0 0 0 0 0 5 1 E U )     / * ! <   L o w e s t   p r i o r i t y   m a i l b o x   1   f l a g         * /  
 # d e f i n e   C A N _ F L A G _ L O W 2                               ( 0 x 0 0 0 0 0 5 1 F U )     / * ! <   L o w e s t   p r i o r i t y   m a i l b o x   2   f l a g         * /  
  
 / *   R e c e i v e   F l a g s   * /  
 # d e f i n e   C A N _ F L A G _ F F 0                                 ( 0 x 0 0 0 0 0 2 0 3 U )     / * ! <   R X   F I F O   0   F u l l   f l a g                               * /  
 # d e f i n e   C A N _ F L A G _ F O V 0                               ( 0 x 0 0 0 0 0 2 0 4 U )     / * ! <   R X   F I F O   0   O v e r r u n   f l a g                         * /  
 # d e f i n e   C A N _ F L A G _ F F 1                                 ( 0 x 0 0 0 0 0 4 0 3 U )     / * ! <   R X   F I F O   1   F u l l   f l a g                               * /  
 # d e f i n e   C A N _ F L A G _ F O V 1                               ( 0 x 0 0 0 0 0 4 0 4 U )     / * ! <   R X   F I F O   1   O v e r r u n   f l a g                         * /  
  
 / *   O p e r a t i n g   M o d e   F l a g s   * /  
 # d e f i n e   C A N _ F L A G _ I N A K                               ( 0 x 0 0 0 0 0 1 0 0 U )     / * ! <   I n i t i a l i z a t i o n   a c k n o w l e d g e   f l a g       * /  
 # d e f i n e   C A N _ F L A G _ S L A K                               ( 0 x 0 0 0 0 0 1 0 1 U )     / * ! <   S l e e p   a c k n o w l e d g e   f l a g                         * /  
 # d e f i n e   C A N _ F L A G _ E R R I                               ( 0 x 0 0 0 0 0 1 0 2 U )     / * ! <   E r r o r   f l a g                                                 * /  
 # d e f i n e   C A N _ F L A G _ W K U                                 ( 0 x 0 0 0 0 0 1 0 3 U )     / * ! <   W a k e   u p   i n t e r r u p t   f l a g                         * /  
 # d e f i n e   C A N _ F L A G _ S L A K I                             ( 0 x 0 0 0 0 0 1 0 4 U )     / * ! <   S l e e p   a c k n o w l e d g e   i n t e r r u p t   f l a g     * /  
  
 / *   E r r o r   F l a g s   * /  
 # d e f i n e   C A N _ F L A G _ E W G                                 ( 0 x 0 0 0 0 0 3 0 0 U )     / * ! <   E r r o r   w a r n i n g   f l a g                                 * /  
 # d e f i n e   C A N _ F L A G _ E P V                                 ( 0 x 0 0 0 0 0 3 0 1 U )     / * ! <   E r r o r   p a s s i v e   f l a g                                 * /  
 # d e f i n e   C A N _ F L A G _ B O F                                 ( 0 x 0 0 0 0 0 3 0 2 U )     / * ! <   B u s - O f f   f l a g                                             * /  
 / * *  
     *   @ }  
     * /  
  
  
 / * *   @ d e f g r o u p   C A N _ I n t e r r u p t s   C A N   I n t e r r u p t s  
     *   @ {  
     * /  
 / *   T r a n s m i t   I n t e r r u p t   * /  
 # d e f i n e   C A N _ I T _ T X _ M A I L B O X _ E M P T Y           ( ( u i n t 3 2 _ t ) C A N _ I E R _ T M E I E )       / * ! <   T r a n s m i t   m a i l b o x   e m p t y   i n t e r r u p t   * /  
  
 / *   R e c e i v e   I n t e r r u p t s   * /  
 # d e f i n e   C A N _ I T _ R X _ F I F O 0 _ M S G _ P E N D I N G   ( ( u i n t 3 2 _ t ) C A N _ I E R _ F M P I E 0 )     / * ! <   F I F O   0   m e s s a g e   p e n d i n g   i n t e r r u p t   * /  
 # d e f i n e   C A N _ I T _ R X _ F I F O 0 _ F U L L                 ( ( u i n t 3 2 _ t ) C A N _ I E R _ F F I E 0 )       / * ! <   F I F O   0   f u l l   i n t e r r u p t                         * /  
 # d e f i n e   C A N _ I T _ R X _ F I F O 0 _ O V E R R U N           ( ( u i n t 3 2 _ t ) C A N _ I E R _ F O V I E 0 )     / * ! <   F I F O   0   o v e r r u n   i n t e r r u p t                   * /  
 # d e f i n e   C A N _ I T _ R X _ F I F O 1 _ M S G _ P E N D I N G   ( ( u i n t 3 2 _ t ) C A N _ I E R _ F M P I E 1 )     / * ! <   F I F O   1   m e s s a g e   p e n d i n g   i n t e r r u p t   * /  
 # d e f i n e   C A N _ I T _ R X _ F I F O 1 _ F U L L                 ( ( u i n t 3 2 _ t ) C A N _ I E R _ F F I E 1 )       / * ! <   F I F O   1   f u l l   i n t e r r u p t                         * /  
 # d e f i n e   C A N _ I T _ R X _ F I F O 1 _ O V E R R U N           ( ( u i n t 3 2 _ t ) C A N _ I E R _ F O V I E 1 )     / * ! <   F I F O   1   o v e r r u n   i n t e r r u p t                   * /  
  
 / *   O p e r a t i n g   M o d e   I n t e r r u p t s   * /  
 # d e f i n e   C A N _ I T _ W A K E U P                               ( ( u i n t 3 2 _ t ) C A N _ I E R _ W K U I E )       / * ! <   W a k e - u p   i n t e r r u p t                                 * /  
 # d e f i n e   C A N _ I T _ S L E E P _ A C K                         ( ( u i n t 3 2 _ t ) C A N _ I E R _ S L K I E )       / * ! <   S l e e p   a c k n o w l e d g e   i n t e r r u p t             * /  
  
 / *   E r r o r   I n t e r r u p t s   * /  
 # d e f i n e   C A N _ I T _ E R R O R _ W A R N I N G                 ( ( u i n t 3 2 _ t ) C A N _ I E R _ E W G I E )       / * ! <   E r r o r   w a r n i n g   i n t e r r u p t                     * /  
 # d e f i n e   C A N _ I T _ E R R O R _ P A S S I V E                 ( ( u i n t 3 2 _ t ) C A N _ I E R _ E P V I E )       / * ! <   E r r o r   p a s s i v e   i n t e r r u p t                     * /  
 # d e f i n e   C A N _ I T _ B U S O F F                               ( ( u i n t 3 2 _ t ) C A N _ I E R _ B O F I E )       / * ! <   B u s - o f f   i n t e r r u p t                                 * /  
 # d e f i n e   C A N _ I T _ L A S T _ E R R O R _ C O D E             ( ( u i n t 3 2 _ t ) C A N _ I E R _ L E C I E )       / * ! <   L a s t   e r r o r   c o d e   i n t e r r u p t                 * /  
 # d e f i n e   C A N _ I T _ E R R O R                                 ( ( u i n t 3 2 _ t ) C A N _ I E R _ E R R I E )       / * ! <   E r r o r   I n t e r r u p t                                     * /  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   C A N _ E x p o r t e d _ M a c r o s   C A N   E x p o r t e d   M a c r o s  
     *   @ {  
     * /  
  
 / * *   @ b r i e f     R e s e t   C A N   h a n d l e   s t a t e  
     *   @ p a r a m     _ _ H A N D L E _ _   C A N   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 # i f   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   = =   1  
 # d e f i n e   _ _ H A L _ C A N _ R E S E T _ H A N D L E _ S T A T E ( _ _ H A N D L E _ _ )   d o {                                                                                             \  
                                                                                                           ( _ _ H A N D L E _ _ ) - > S t a t e   =   H A L _ C A N _ S T A T E _ R E S E T ;       \  
                                                                                                           ( _ _ H A N D L E _ _ ) - > M s p I n i t C a l l b a c k   =   N U L L ;                 \  
                                                                                                           ( _ _ H A N D L E _ _ ) - > M s p D e I n i t C a l l b a c k   =   N U L L ;             \  
                                                                                                       }   w h i l e ( 0 )  
 # e l s e  
 # d e f i n e   _ _ H A L _ C A N _ R E S E T _ H A N D L E _ S T A T E ( _ _ H A N D L E _ _ )   ( ( _ _ H A N D L E _ _ ) - > S t a t e   =   H A L _ C A N _ S T A T E _ R E S E T )  
 # e n d i f   / * U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   t h e   s p e c i f i e d   C A N   i n t e r r u p t s .  
     *   @ p a r a m     _ _ H A N D L E _ _   C A N   h a n d l e .  
     *   @ p a r a m     _ _ I N T E R R U P T _ _   C A N   I n t e r r u p t   s o u r c e s   t o   e n a b l e .  
     *                       T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   @ a r g   C A N _ I n t e r r u p t s  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ C A N _ E N A B L E _ I T ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )   ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > I E R )   | =   ( _ _ I N T E R R U P T _ _ ) )  
  
 / * *  
     *   @ b r i e f     D i s a b l e   t h e   s p e c i f i e d   C A N   i n t e r r u p t s .  
     *   @ p a r a m     _ _ H A N D L E _ _   C A N   h a n d l e .  
     *   @ p a r a m     _ _ I N T E R R U P T _ _   C A N   I n t e r r u p t   s o u r c e s   t o   d i s a b l e .  
     *                       T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   @ a r g   C A N _ I n t e r r u p t s  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ C A N _ D I S A B L E _ I T ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )   ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > I E R )   & =   ~ ( _ _ I N T E R R U P T _ _ ) )  
  
 / * *   @ b r i e f     C h e c k   i f   t h e   s p e c i f i e d   C A N   i n t e r r u p t   s o u r c e   i s   e n a b l e d   o r   d i s a b l e d .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   C A N   H a n d l e .  
     *   @ p a r a m     _ _ I N T E R R U P T _ _   s p e c i f i e s   t h e   C A N   i n t e r r u p t   s o u r c e   t o   c h e c k .  
     *                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ a r g   C A N _ I n t e r r u p t s  
     *   @ r e t v a l   T h e   s t a t e   o f   _ _ I T _ _   ( T R U E   o r   F A L S E ) .  
     * /  
 # d e f i n e   _ _ H A L _ C A N _ G E T _ I T _ S O U R C E ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )   ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > I E R )   &   ( _ _ I N T E R R U P T _ _ ) )  
  
 / * *   @ b r i e f     C h e c k   w h e t h e r   t h e   s p e c i f i e d   C A N   f l a g   i s   s e t   o r   n o t .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   C A N   H a n d l e .  
     *   @ p a r a m     _ _ F L A G _ _   s p e c i f i e s   t h e   f l a g   t o   c h e c k .  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   @ a r g   C A N _ f l a g s  
     *   @ r e t v a l   T h e   s t a t e   o f   _ _ F L A G _ _   ( T R U E   o r   F A L S E ) .  
     * /  
 # d e f i n e   _ _ H A L _ C A N _ G E T _ F L A G ( _ _ H A N D L E _ _ ,   _ _ F L A G _ _ )   \  
     ( ( ( ( _ _ F L A G _ _ )   > >   8 U )   = =   5 U ) ?   ( ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > T S R )   &   ( 1 U   < <   ( ( _ _ F L A G _ _ )   &   C A N _ F L A G _ M A S K ) ) )   = =   ( 1 U   < <   ( ( _ _ F L A G _ _ )   &   C A N _ F L A G _ M A S K ) ) ) :   \  
       ( ( ( _ _ F L A G _ _ )   > >   8 U )   = =   2 U ) ?   ( ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > R F 0 R )   &   ( 1 U   < <   ( ( _ _ F L A G _ _ )   &   C A N _ F L A G _ M A S K ) ) )   = =   ( 1 U   < <   ( ( _ _ F L A G _ _ )   &   C A N _ F L A G _ M A S K ) ) ) :   \  
       ( ( ( _ _ F L A G _ _ )   > >   8 U )   = =   4 U ) ?   ( ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > R F 1 R )   &   ( 1 U   < <   ( ( _ _ F L A G _ _ )   &   C A N _ F L A G _ M A S K ) ) )   = =   ( 1 U   < <   ( ( _ _ F L A G _ _ )   &   C A N _ F L A G _ M A S K ) ) ) :   \  
       ( ( ( _ _ F L A G _ _ )   > >   8 U )   = =   1 U ) ?   ( ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > M S R )   &   ( 1 U   < <   ( ( _ _ F L A G _ _ )   &   C A N _ F L A G _ M A S K ) ) )   = =   ( 1 U   < <   ( ( _ _ F L A G _ _ )   &   C A N _ F L A G _ M A S K ) ) ) :   \  
       ( ( ( _ _ F L A G _ _ )   > >   8 U )   = =   3 U ) ?   ( ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > E S R )   &   ( 1 U   < <   ( ( _ _ F L A G _ _ )   &   C A N _ F L A G _ M A S K ) ) )   = =   ( 1 U   < <   ( ( _ _ F L A G _ _ )   &   C A N _ F L A G _ M A S K ) ) ) :   0 U )  
  
 / * *   @ b r i e f     C l e a r   t h e   s p e c i f i e d   C A N   p e n d i n g   f l a g .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   C A N   H a n d l e .  
     *   @ p a r a m     _ _ F L A G _ _   s p e c i f i e s   t h e   f l a g   t o   c h e c k .  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   C A N _ F L A G _ R Q C P 0 :   R e q u e s t   c o m p l e t e   M a i l B o x   0   F l a g  
     *                         @ a r g   C A N _ F L A G _ T X O K 0 :   T r a n s m i s s i o n   O K   M a i l B o x   0   F l a g  
     *                         @ a r g   C A N _ F L A G _ A L S T 0 :   A r b i t r a t i o n   L o s t   M a i l B o x   0   F l a g  
     *                         @ a r g   C A N _ F L A G _ T E R R 0 :   T r a n s m i s s i o n   e r r o r   M a i l B o x   0   F l a g  
     *                         @ a r g   C A N _ F L A G _ R Q C P 1 :   R e q u e s t   c o m p l e t e   M a i l B o x   1   F l a g  
     *                         @ a r g   C A N _ F L A G _ T X O K 1 :   T r a n s m i s s i o n   O K   M a i l B o x   1   F l a g  
     *                         @ a r g   C A N _ F L A G _ A L S T 1 :   A r b i t r a t i o n   L o s t   M a i l B o x   1   F l a g  
     *                         @ a r g   C A N _ F L A G _ T E R R 1 :   T r a n s m i s s i o n   e r r o r   M a i l B o x   1   F l a g  
     *                         @ a r g   C A N _ F L A G _ R Q C P 2 :   R e q u e s t   c o m p l e t e   M a i l B o x   2   F l a g  
     *                         @ a r g   C A N _ F L A G _ T X O K 2 :   T r a n s m i s s i o n   O K   M a i l B o x   2   F l a g  
     *                         @ a r g   C A N _ F L A G _ A L S T 2 :   A r b i t r a t i o n   L o s t   M a i l B o x   2   F l a g  
     *                         @ a r g   C A N _ F L A G _ T E R R 2 :   T r a n s m i s s i o n   e r r o r   M a i l B o x   2   F l a g  
     *                         @ a r g   C A N _ F L A G _ F F 0 :       R X   F I F O   0   F u l l   F l a g  
     *                         @ a r g   C A N _ F L A G _ F O V 0 :     R X   F I F O   0   O v e r r u n   F l a g  
     *                         @ a r g   C A N _ F L A G _ F F 1 :       R X   F I F O   1   F u l l   F l a g  
     *                         @ a r g   C A N _ F L A G _ F O V 1 :     R X   F I F O   1   O v e r r u n   F l a g  
     *                         @ a r g   C A N _ F L A G _ W K U I :     W a k e   u p   I n t e r r u p t   F l a g  
     *                         @ a r g   C A N _ F L A G _ S L A K I :   S l e e p   a c k n o w l e d g e   I n t e r r u p t   F l a g  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ C A N _ C L E A R _ F L A G ( _ _ H A N D L E _ _ ,   _ _ F L A G _ _ )   \  
     ( ( ( ( _ _ F L A G _ _ )   > >   8 U )   = =   5 U ) ?   ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > T S R )   =   ( 1 U   < <   ( ( _ _ F L A G _ _ )   &   C A N _ F L A G _ M A S K ) ) ) :   \  
       ( ( ( _ _ F L A G _ _ )   > >   8 U )   = =   2 U ) ?   ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > R F 0 R )   =   ( 1 U   < <   ( ( _ _ F L A G _ _ )   &   C A N _ F L A G _ M A S K ) ) ) :   \  
       ( ( ( _ _ F L A G _ _ )   > >   8 U )   = =   4 U ) ?   ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > R F 1 R )   =   ( 1 U   < <   ( ( _ _ F L A G _ _ )   &   C A N _ F L A G _ M A S K ) ) ) :   \  
       ( ( ( _ _ F L A G _ _ )   > >   8 U )   = =   1 U ) ?   ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > M S R )   =   ( 1 U   < <   ( ( _ _ F L A G _ _ )   &   C A N _ F L A G _ M A S K ) ) ) :   0 U )  
  
 / * *  
   *   @ }  
   * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   C A N _ E x p o r t e d _ F u n c t i o n s   C A N   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   C A N _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
   *     @ b r i e f         I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s  
   *   @ {  
   * /  
  
 / *   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C A N _ I n i t ( C A N _ H a n d l e T y p e D e f   * h c a n ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ C A N _ D e I n i t ( C A N _ H a n d l e T y p e D e f   * h c a n ) ;  
 v o i d   H A L _ C A N _ M s p I n i t ( C A N _ H a n d l e T y p e D e f   * h c a n ) ;  
 v o i d   H A L _ C A N _ M s p D e I n i t ( C A N _ H a n d l e T y p e D e f   * h c a n ) ;  
  
 # i f   U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S   = =   1  
 / *   C a l l b a c k s   R e g i s t e r / U n R e g i s t e r   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C A N _ R e g i s t e r C a l l b a c k ( C A N _ H a n d l e T y p e D e f   * h c a n ,   H A L _ C A N _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ,   v o i d   ( *   p C a l l b a c k ) ( C A N _ H a n d l e T y p e D e f   * _ h c a n ) ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ C A N _ U n R e g i s t e r C a l l b a c k ( C A N _ H a n d l e T y p e D e f   * h c a n ,   H A L _ C A N _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ) ;  
  
 # e n d i f   / *   ( U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S )   * /  
 / * *  
   *   @ }  
   * /  
  
 / * *   @ a d d t o g r o u p   C A N _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   C o n f i g u r a t i o n   f u n c t i o n s  
   *     @ b r i e f         C o n f i g u r a t i o n   f u n c t i o n s  
   *   @ {  
   * /  
  
 / *   C o n f i g u r a t i o n   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C A N _ C o n f i g F i l t e r ( C A N _ H a n d l e T y p e D e f   * h c a n ,   C A N _ F i l t e r T y p e D e f   * s F i l t e r C o n f i g ) ;  
  
 / * *  
   *   @ }  
   * /  
  
 / * *   @ a d d t o g r o u p   C A N _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   C o n t r o l   f u n c t i o n s  
   *     @ b r i e f         C o n t r o l   f u n c t i o n s  
   *   @ {  
   * /  
  
 / *   C o n t r o l   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C A N _ S t a r t ( C A N _ H a n d l e T y p e D e f   * h c a n ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ C A N _ S t o p ( C A N _ H a n d l e T y p e D e f   * h c a n ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ C A N _ R e q u e s t S l e e p ( C A N _ H a n d l e T y p e D e f   * h c a n ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ C A N _ W a k e U p ( C A N _ H a n d l e T y p e D e f   * h c a n ) ;  
 u i n t 3 2 _ t   H A L _ C A N _ I s S l e e p A c t i v e ( C A N _ H a n d l e T y p e D e f   * h c a n ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ C A N _ A d d T x M e s s a g e ( C A N _ H a n d l e T y p e D e f   * h c a n ,   C A N _ T x H e a d e r T y p e D e f   * p H e a d e r ,   u i n t 8 _ t   a D a t a [ ] ,   u i n t 3 2 _ t   * p T x M a i l b o x ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ C A N _ A b o r t T x R e q u e s t ( C A N _ H a n d l e T y p e D e f   * h c a n ,   u i n t 3 2 _ t   T x M a i l b o x e s ) ;  
 u i n t 3 2 _ t   H A L _ C A N _ G e t T x M a i l b o x e s F r e e L e v e l ( C A N _ H a n d l e T y p e D e f   * h c a n ) ;  
 u i n t 3 2 _ t   H A L _ C A N _ I s T x M e s s a g e P e n d i n g ( C A N _ H a n d l e T y p e D e f   * h c a n ,   u i n t 3 2 _ t   T x M a i l b o x e s ) ;  
 u i n t 3 2 _ t   H A L _ C A N _ G e t T x T i m e s t a m p ( C A N _ H a n d l e T y p e D e f   * h c a n ,   u i n t 3 2 _ t   T x M a i l b o x ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ C A N _ G e t R x M e s s a g e ( C A N _ H a n d l e T y p e D e f   * h c a n ,   u i n t 3 2 _ t   R x F i f o ,   C A N _ R x H e a d e r T y p e D e f   * p H e a d e r ,   u i n t 8 _ t   a D a t a [ ] ) ;  
 u i n t 3 2 _ t   H A L _ C A N _ G e t R x F i f o F i l l L e v e l ( C A N _ H a n d l e T y p e D e f   * h c a n ,   u i n t 3 2 _ t   R x F i f o ) ;  
  
 / * *  
   *   @ }  
   * /  
  
 / * *   @ a d d t o g r o u p   C A N _ E x p o r t e d _ F u n c t i o n s _ G r o u p 4   I n t e r r u p t s   m a n a g e m e n t  
   *     @ b r i e f         I n t e r r u p t s   m a n a g e m e n t  
   *   @ {  
   * /  
 / *   I n t e r r u p t s   m a n a g e m e n t   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C A N _ A c t i v a t e N o t i f i c a t i o n ( C A N _ H a n d l e T y p e D e f   * h c a n ,   u i n t 3 2 _ t   A c t i v e I T s ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ C A N _ D e a c t i v a t e N o t i f i c a t i o n ( C A N _ H a n d l e T y p e D e f   * h c a n ,   u i n t 3 2 _ t   I n a c t i v e I T s ) ;  
 v o i d   H A L _ C A N _ I R Q H a n d l e r ( C A N _ H a n d l e T y p e D e f   * h c a n ) ;  
  
 / * *  
   *   @ }  
   * /  
  
 / * *   @ a d d t o g r o u p   C A N _ E x p o r t e d _ F u n c t i o n s _ G r o u p 5   C a l l b a c k   f u n c t i o n s  
   *     @ b r i e f         C a l l b a c k   f u n c t i o n s  
   *   @ {  
   * /  
 / *   C a l l b a c k s   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
  
 v o i d   H A L _ C A N _ T x M a i l b o x 0 C o m p l e t e C a l l b a c k ( C A N _ H a n d l e T y p e D e f   * h c a n ) ;  
 v o i d   H A L _ C A N _ T x M a i l b o x 1 C o m p l e t e C a l l b a c k ( C A N _ H a n d l e T y p e D e f   * h c a n ) ;  
 v o i d   H A L _ C A N _ T x M a i l b o x 2 C o m p l e t e C a l l b a c k ( C A N _ H a n d l e T y p e D e f   * h c a n ) ;  
 v o i d   H A L _ C A N _ T x M a i l b o x 0 A b o r t C a l l b a c k ( C A N _ H a n d l e T y p e D e f   * h c a n ) ;  
 v o i d   H A L _ C A N _ T x M a i l b o x 1 A b o r t C a l l b a c k ( C A N _ H a n d l e T y p e D e f   * h c a n ) ;  
 v o i d   H A L _ C A N _ T x M a i l b o x 2 A b o r t C a l l b a c k ( C A N _ H a n d l e T y p e D e f   * h c a n ) ;  
 v o i d   H A L _ C A N _ R x F i f o 0 M s g P e n d i n g C a l l b a c k ( C A N _ H a n d l e T y p e D e f   * h c a n ) ;  
 v o i d   H A L _ C A N _ R x F i f o 0 F u l l C a l l b a c k ( C A N _ H a n d l e T y p e D e f   * h c a n ) ;  
 v o i d   H A L _ C A N _ R x F i f o 1 M s g P e n d i n g C a l l b a c k ( C A N _ H a n d l e T y p e D e f   * h c a n ) ;  
 v o i d   H A L _ C A N _ R x F i f o 1 F u l l C a l l b a c k ( C A N _ H a n d l e T y p e D e f   * h c a n ) ;  
 v o i d   H A L _ C A N _ S l e e p C a l l b a c k ( C A N _ H a n d l e T y p e D e f   * h c a n ) ;  
 v o i d   H A L _ C A N _ W a k e U p F r o m R x M s g C a l l b a c k ( C A N _ H a n d l e T y p e D e f   * h c a n ) ;  
 v o i d   H A L _ C A N _ E r r o r C a l l b a c k ( C A N _ H a n d l e T y p e D e f   * h c a n ) ;  
  
 / * *  
   *   @ }  
   * /  
  
 / * *   @ a d d t o g r o u p   C A N _ E x p o r t e d _ F u n c t i o n s _ G r o u p 6   P e r i p h e r a l   S t a t e   a n d   E r r o r   f u n c t i o n s  
   *     @ b r i e f       C A N   P e r i p h e r a l   S t a t e   f u n c t i o n s  
   *   @ {  
   * /  
 / *   P e r i p h e r a l   S t a t e   a n d   E r r o r   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ C A N _ S t a t e T y p e D e f   H A L _ C A N _ G e t S t a t e ( C A N _ H a n d l e T y p e D e f   * h c a n ) ;  
 u i n t 3 2 _ t   H A L _ C A N _ G e t E r r o r ( C A N _ H a n d l e T y p e D e f   * h c a n ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ C A N _ R e s e t E r r o r ( C A N _ H a n d l e T y p e D e f   * h c a n ) ;  
  
 / * *  
   *   @ }  
   * /  
  
 / * *  
   *   @ }  
   * /  
  
 / *   P r i v a t e   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   C A N _ P r i v a t e _ T y p e s   C A N   P r i v a t e   T y p e s  
     *   @ {  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   C A N _ P r i v a t e _ V a r i a b l e s   C A N   P r i v a t e   V a r i a b l e s  
     *   @ {  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   C A N _ P r i v a t e _ C o n s t a n t s   C A N   P r i v a t e   C o n s t a n t s  
     *   @ {  
     * /  
 # d e f i n e   C A N _ F L A G _ M A S K     ( 0 x 0 0 0 0 0 0 F F U )  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   M a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   C A N _ P r i v a t e _ M a c r o s   C A N   P r i v a t e   M a c r o s  
     *   @ {  
     * /  
  
 # d e f i n e   I S _ C A N _ M O D E ( M O D E )   ( ( ( M O D E )   = =   C A N _ M O D E _ N O R M A L )   | |   \  
                                                       ( ( M O D E )   = =   C A N _ M O D E _ L O O P B A C K ) | |   \  
                                                       ( ( M O D E )   = =   C A N _ M O D E _ S I L E N T )   | |   \  
                                                       ( ( M O D E )   = =   C A N _ M O D E _ S I L E N T _ L O O P B A C K ) )  
 # d e f i n e   I S _ C A N _ S J W ( S J W )   ( ( ( S J W )   = =   C A N _ S J W _ 1 T Q )   | |   ( ( S J W )   = =   C A N _ S J W _ 2 T Q )   | |   \  
                                                   ( ( S J W )   = =   C A N _ S J W _ 3 T Q )   | |   ( ( S J W )   = =   C A N _ S J W _ 4 T Q ) )  
 # d e f i n e   I S _ C A N _ B S 1 ( B S 1 )   ( ( ( B S 1 )   = =   C A N _ B S 1 _ 1 T Q )   | |   ( ( B S 1 )   = =   C A N _ B S 1 _ 2 T Q )   | |   \  
                                                   ( ( B S 1 )   = =   C A N _ B S 1 _ 3 T Q )   | |   ( ( B S 1 )   = =   C A N _ B S 1 _ 4 T Q )   | |   \  
                                                   ( ( B S 1 )   = =   C A N _ B S 1 _ 5 T Q )   | |   ( ( B S 1 )   = =   C A N _ B S 1 _ 6 T Q )   | |   \  
                                                   ( ( B S 1 )   = =   C A N _ B S 1 _ 7 T Q )   | |   ( ( B S 1 )   = =   C A N _ B S 1 _ 8 T Q )   | |   \  
                                                   ( ( B S 1 )   = =   C A N _ B S 1 _ 9 T Q )   | |   ( ( B S 1 )   = =   C A N _ B S 1 _ 1 0 T Q ) | |   \  
                                                   ( ( B S 1 )   = =   C A N _ B S 1 _ 1 1 T Q ) | |   ( ( B S 1 )   = =   C A N _ B S 1 _ 1 2 T Q ) | |   \  
                                                   ( ( B S 1 )   = =   C A N _ B S 1 _ 1 3 T Q ) | |   ( ( B S 1 )   = =   C A N _ B S 1 _ 1 4 T Q ) | |   \  
                                                   ( ( B S 1 )   = =   C A N _ B S 1 _ 1 5 T Q ) | |   ( ( B S 1 )   = =   C A N _ B S 1 _ 1 6 T Q ) )  
 # d e f i n e   I S _ C A N _ B S 2 ( B S 2 )   ( ( ( B S 2 )   = =   C A N _ B S 2 _ 1 T Q )   | |   ( ( B S 2 )   = =   C A N _ B S 2 _ 2 T Q )   | |   \  
                                                   ( ( B S 2 )   = =   C A N _ B S 2 _ 3 T Q )   | |   ( ( B S 2 )   = =   C A N _ B S 2 _ 4 T Q )   | |   \  
                                                   ( ( B S 2 )   = =   C A N _ B S 2 _ 5 T Q )   | |   ( ( B S 2 )   = =   C A N _ B S 2 _ 6 T Q )   | |   \  
                                                   ( ( B S 2 )   = =   C A N _ B S 2 _ 7 T Q )   | |   ( ( B S 2 )   = =   C A N _ B S 2 _ 8 T Q ) )  
 # d e f i n e   I S _ C A N _ P R E S C A L E R ( P R E S C A L E R )   ( ( ( P R E S C A L E R )   > =   1 U )   & &   ( ( P R E S C A L E R )   < =   1 0 2 4 U ) )  
 # d e f i n e   I S _ C A N _ F I L T E R _ I D _ H A L F W O R D ( H A L F W O R D )   ( ( H A L F W O R D )   < =   0 x F F F F U )  
 # i f       d e f i n e d ( C A N 2 )  
 # d e f i n e   I S _ C A N _ F I L T E R _ B A N K _ D U A L ( B A N K )   ( ( B A N K )   < =   2 7 U )  
 # e n d i f  
 # d e f i n e   I S _ C A N _ F I L T E R _ B A N K _ S I N G L E ( B A N K )   ( ( B A N K )   < =   1 3 U )  
 # d e f i n e   I S _ C A N _ F I L T E R _ M O D E ( M O D E )   ( ( ( M O D E )   = =   C A N _ F I L T E R M O D E _ I D M A S K )   | |   \  
                                                                     ( ( M O D E )   = =   C A N _ F I L T E R M O D E _ I D L I S T ) )  
 # d e f i n e   I S _ C A N _ F I L T E R _ S C A L E ( S C A L E )   ( ( ( S C A L E )   = =   C A N _ F I L T E R S C A L E _ 1 6 B I T )   | |   \  
                                                                         ( ( S C A L E )   = =   C A N _ F I L T E R S C A L E _ 3 2 B I T ) )  
 # d e f i n e   I S _ C A N _ F I L T E R _ A C T I V A T I O N ( A C T I V A T I O N )   ( ( ( A C T I V A T I O N )   = =   C A N _ F I L T E R _ D I S A B L E )   | |   \  
                                                                                             ( ( A C T I V A T I O N )   = =   C A N _ F I L T E R _ E N A B L E ) )  
 # d e f i n e   I S _ C A N _ F I L T E R _ F I F O ( F I F O )   ( ( ( F I F O )   = =   C A N _ F I L T E R _ F I F O 0 )   | |   \  
                                                                     ( ( F I F O )   = =   C A N _ F I L T E R _ F I F O 1 ) )  
 # d e f i n e   I S _ C A N _ T X _ M A I L B O X ( T R A N S M I T M A I L B O X )   ( ( ( T R A N S M I T M A I L B O X )   = =   C A N _ T X _ M A I L B O X 0   )   | |   \  
                                                                                         ( ( T R A N S M I T M A I L B O X )   = =   C A N _ T X _ M A I L B O X 1   )   | |   \  
                                                                                         ( ( T R A N S M I T M A I L B O X )   = =   C A N _ T X _ M A I L B O X 2   ) )  
 # d e f i n e   I S _ C A N _ T X _ M A I L B O X _ L I S T ( T R A N S M I T M A I L B O X )   ( ( T R A N S M I T M A I L B O X )   < =   ( C A N _ T X _ M A I L B O X 0   |   C A N _ T X _ M A I L B O X 1   |   C A N _ T X _ M A I L B O X 2 ) )  
 # d e f i n e   I S _ C A N _ S T D I D ( S T D I D )       ( ( S T D I D )   < =   0 x 7 F F U )  
 # d e f i n e   I S _ C A N _ E X T I D ( E X T I D )       ( ( E X T I D )   < =   0 x 1 F F F F F F F U )  
 # d e f i n e   I S _ C A N _ D L C ( D L C )               ( ( D L C )   < =   8 U )  
 # d e f i n e   I S _ C A N _ I D T Y P E ( I D T Y P E )     ( ( ( I D T Y P E )   = =   C A N _ I D _ S T D )   | |   \  
                                                                 ( ( I D T Y P E )   = =   C A N _ I D _ E X T ) )  
 # d e f i n e   I S _ C A N _ R T R ( R T R )   ( ( ( R T R )   = =   C A N _ R T R _ D A T A )   | |   ( ( R T R )   = =   C A N _ R T R _ R E M O T E ) )  
 # d e f i n e   I S _ C A N _ R X _ F I F O ( F I F O )   ( ( ( F I F O )   = =   C A N _ R X _ F I F O 0 )   | |   ( ( F I F O )   = =   C A N _ R X _ F I F O 1 ) )  
 # d e f i n e   I S _ C A N _ I T ( I T )   ( ( I T )   < =   ( C A N _ I T _ T X _ M A I L B O X _ E M P T Y           |   C A N _ I T _ R X _ F I F O 0 _ M S G _ P E N D I N G             |   \  
                                                                 C A N _ I T _ R X _ F I F O 0 _ F U L L                 |   C A N _ I T _ R X _ F I F O 0 _ O V E R R U N                     |   \  
                                                                 C A N _ I T _ R X _ F I F O 1 _ M S G _ P E N D I N G   |   C A N _ I T _ R X _ F I F O 1 _ F U L L                           |   \  
                                                                 C A N _ I T _ R X _ F I F O 1 _ O V E R R U N           |   C A N _ I T _ W A K E U P                                         |   \  
                                                                 C A N _ I T _ S L E E P _ A C K                         |   C A N _ I T _ E R R O R _ W A R N I N G                           |   \  
                                                                 C A N _ I T _ E R R O R _ P A S S I V E                 |   C A N _ I T _ B U S O F F                                         |   \  
                                                                 C A N _ I T _ L A S T _ E R R O R _ C O D E             |   C A N _ I T _ E R R O R ) )  
  
 / * *  
     *   @ }  
     * /  
 / *   E n d   o f   p r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *  
     *   @ }  
     * /  
  
  
 # e n d i f   / *   C A N 1   * /  
 / * *  
     *   @ }  
     * /  
  
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
 # e n d i f   / *   S T M 3 2 F 1 x x _ H A L _ C A N _ H   * /  
  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  