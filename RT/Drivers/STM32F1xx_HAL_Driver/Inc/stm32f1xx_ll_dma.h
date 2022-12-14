??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ l l _ d m a . h  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H e a d e r   f i l e   o f   D M A   L L   m o d u l e .  
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
 # i f n d e f   _ _ S T M 3 2 F 1 x x _ L L _ D M A _ H  
 # d e f i n e   _ _ S T M 3 2 F 1 x x _ L L _ D M A _ H  
  
 # i f d e f   _ _ c p l u s p l u s  
 e x t e r n   " C "   {  
 # e n d i f  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x . h "  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ L L _ D r i v e r  
     *   @ {  
     * /  
  
 # i f   d e f i n e d   ( D M A 1 )   | |   d e f i n e d   ( D M A 2 )  
  
 / * *   @ d e f g r o u p   D M A _ L L   D M A  
     *   @ {  
     * /  
  
 / *   P r i v a t e   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   D M A _ L L _ P r i v a t e _ V a r i a b l e s   D M A   P r i v a t e   V a r i a b l e s  
     *   @ {  
     * /  
 / *   A r r a y   u s e d   t o   g e t   t h e   D M A   c h a n n e l   r e g i s t e r   o f f s e t   v e r s u s   c h a n n e l   i n d e x   L L _ D M A _ C H A N N E L _ x   * /  
 s t a t i c   c o n s t   u i n t 8 _ t   C H A N N E L _ O F F S E T _ T A B [ ]   =  
 {  
     ( u i n t 8 _ t ) ( D M A 1 _ C h a n n e l 1 _ B A S E   -   D M A 1 _ B A S E ) ,  
     ( u i n t 8 _ t ) ( D M A 1 _ C h a n n e l 2 _ B A S E   -   D M A 1 _ B A S E ) ,  
     ( u i n t 8 _ t ) ( D M A 1 _ C h a n n e l 3 _ B A S E   -   D M A 1 _ B A S E ) ,  
     ( u i n t 8 _ t ) ( D M A 1 _ C h a n n e l 4 _ B A S E   -   D M A 1 _ B A S E ) ,  
     ( u i n t 8 _ t ) ( D M A 1 _ C h a n n e l 5 _ B A S E   -   D M A 1 _ B A S E ) ,  
     ( u i n t 8 _ t ) ( D M A 1 _ C h a n n e l 6 _ B A S E   -   D M A 1 _ B A S E ) ,  
     ( u i n t 8 _ t ) ( D M A 1 _ C h a n n e l 7 _ B A S E   -   D M A 1 _ B A S E )  
 } ;  
 / * *  
     *   @ }  
     * /  
 / *   P r i v a t e   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i f   d e f i n e d ( U S E _ F U L L _ L L _ D R I V E R )  
 / * *   @ d e f g r o u p   D M A _ L L _ P r i v a t e _ M a c r o s   D M A   P r i v a t e   M a c r o s  
     *   @ {  
     * /  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / * U S E _ F U L L _ L L _ D R I V E R * /  
  
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i f   d e f i n e d ( U S E _ F U L L _ L L _ D R I V E R )  
 / * *   @ d e f g r o u p   D M A _ L L _ E S _ I N I T   D M A   E x p o r t e d   I n i t   s t r u c t u r e  
     *   @ {  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   P e r i p h O r M 2 M S r c A d d r e s s ;     / * ! <   S p e c i f i e s   t h e   p e r i p h e r a l   b a s e   a d d r e s s   f o r   D M A   t r a n s f e r  
                                                                                 o r   a s   S o u r c e   b a s e   a d d r e s s   i n   c a s e   o f   m e m o r y   t o   m e m o r y   t r a n s f e r   d i r e c t i o n .  
  
                                                                                 T h i s   p a r a m e t e r   m u s t   b e   a   v a l u e   b e t w e e n   M i n _ D a t a   =   0   a n d   M a x _ D a t a   =   0 x F F F F F F F F .   * /  
  
     u i n t 3 2 _ t   M e m o r y O r M 2 M D s t A d d r e s s ;     / * ! <   S p e c i f i e s   t h e   m e m o r y   b a s e   a d d r e s s   f o r   D M A   t r a n s f e r  
                                                                                 o r   a s   D e s t i n a t i o n   b a s e   a d d r e s s   i n   c a s e   o f   m e m o r y   t o   m e m o r y   t r a n s f e r   d i r e c t i o n .  
  
                                                                                 T h i s   p a r a m e t e r   m u s t   b e   a   v a l u e   b e t w e e n   M i n _ D a t a   =   0   a n d   M a x _ D a t a   =   0 x F F F F F F F F .   * /  
  
     u i n t 3 2 _ t   D i r e c t i o n ;                             / * ! <   S p e c i f i e s   i f   t h e   d a t a   w i l l   b e   t r a n s f e r r e d   f r o m   m e m o r y   t o   p e r i p h e r a l ,  
                                                                                 f r o m   m e m o r y   t o   m e m o r y   o r   f r o m   p e r i p h e r a l   t o   m e m o r y .  
                                                                                 T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   D M A _ L L _ E C _ D I R E C T I O N  
  
                                                                                 T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ D M A _ S e t D a t a T r a n s f e r D i r e c t i o n ( ) .   * /  
  
     u i n t 3 2 _ t   M o d e ;                                       / * ! <   S p e c i f i e s   t h e   n o r m a l   o r   c i r c u l a r   o p e r a t i o n   m o d e .  
                                                                                 T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   D M A _ L L _ E C _ M O D E  
                                                                                 @ n o t e :   T h e   c i r c u l a r   b u f f e r   m o d e   c a n n o t   b e   u s e d   i f   t h e   m e m o r y   t o   m e m o r y  
                                                                                               d a t a   t r a n s f e r   d i r e c t i o n   i s   c o n f i g u r e d   o n   t h e   s e l e c t e d   C h a n n e l  
  
                                                                                 T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ D M A _ S e t M o d e ( ) .   * /  
  
     u i n t 3 2 _ t   P e r i p h O r M 2 M S r c I n c M o d e ;     / * ! <   S p e c i f i e s   w h e t h e r   t h e   P e r i p h e r a l   a d d r e s s   o r   S o u r c e   a d d r e s s   i n   c a s e   o f   m e m o r y   t o   m e m o r y   t r a n s f e r   d i r e c t i o n  
                                                                                 i s   i n c r e m e n t e d   o r   n o t .  
                                                                                 T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   D M A _ L L _ E C _ P E R I P H  
  
                                                                                 T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ D M A _ S e t P e r i p h I n c M o d e ( ) .   * /  
  
     u i n t 3 2 _ t   M e m o r y O r M 2 M D s t I n c M o d e ;     / * ! <   S p e c i f i e s   w h e t h e r   t h e   M e m o r y   a d d r e s s   o r   D e s t i n a t i o n   a d d r e s s   i n   c a s e   o f   m e m o r y   t o   m e m o r y   t r a n s f e r   d i r e c t i o n  
                                                                                 i s   i n c r e m e n t e d   o r   n o t .  
                                                                                 T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   D M A _ L L _ E C _ M E M O R Y  
  
                                                                                 T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ D M A _ S e t M e m o r y I n c M o d e ( ) .   * /  
  
     u i n t 3 2 _ t   P e r i p h O r M 2 M S r c D a t a S i z e ;   / * ! <   S p e c i f i e s   t h e   P e r i p h e r a l   d a t a   s i z e   a l i g n m e n t   o r   S o u r c e   d a t a   s i z e   a l i g n m e n t   ( b y t e ,   h a l f   w o r d ,   w o r d )  
                                                                                 i n   c a s e   o f   m e m o r y   t o   m e m o r y   t r a n s f e r   d i r e c t i o n .  
                                                                                 T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   D M A _ L L _ E C _ P D A T A A L I G N  
  
                                                                                 T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ D M A _ S e t P e r i p h S i z e ( ) .   * /  
  
     u i n t 3 2 _ t   M e m o r y O r M 2 M D s t D a t a S i z e ;   / * ! <   S p e c i f i e s   t h e   M e m o r y   d a t a   s i z e   a l i g n m e n t   o r   D e s t i n a t i o n   d a t a   s i z e   a l i g n m e n t   ( b y t e ,   h a l f   w o r d ,   w o r d )  
                                                                                 i n   c a s e   o f   m e m o r y   t o   m e m o r y   t r a n s f e r   d i r e c t i o n .  
                                                                                 T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   D M A _ L L _ E C _ M D A T A A L I G N  
  
                                                                                 T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ D M A _ S e t M e m o r y S i z e ( ) .   * /  
  
     u i n t 3 2 _ t   N b D a t a ;                                   / * ! <   S p e c i f i e s   t h e   n u m b e r   o f   d a t a   t o   t r a n s f e r ,   i n   d a t a   u n i t .  
                                                                                 T h e   d a t a   u n i t   i s   e q u a l   t o   t h e   s o u r c e   b u f f e r   c o n f i g u r a t i o n   s e t   i n   P e r i p h e r a l S i z e  
                                                                                 o r   M e m o r y S i z e   p a r a m e t e r s   d e p e n d i n g   i n   t h e   t r a n s f e r   d i r e c t i o n .  
                                                                                 T h i s   p a r a m e t e r   m u s t   b e   a   v a l u e   b e t w e e n   M i n _ D a t a   =   0   a n d   M a x _ D a t a   =   0 x 0 0 0 0 F F F F  
  
                                                                                 T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ D M A _ S e t D a t a L e n g t h ( ) .   * /  
  
     u i n t 3 2 _ t   P r i o r i t y ;                               / * ! <   S p e c i f i e s   t h e   c h a n n e l   p r i o r i t y   l e v e l .  
                                                                                 T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   D M A _ L L _ E C _ P R I O R I T Y  
  
                                                                                 T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ D M A _ S e t C h a n n e l P r i o r i t y L e v e l ( ) .   * /  
  
 }   L L _ D M A _ I n i t T y p e D e f ;  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / * U S E _ F U L L _ L L _ D R I V E R * /  
  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   D M A _ L L _ E x p o r t e d _ C o n s t a n t s   D M A   E x p o r t e d   C o n s t a n t s  
     *   @ {  
     * /  
 / * *   @ d e f g r o u p   D M A _ L L _ E C _ C L E A R _ F L A G   C l e a r   F l a g s   D e f i n e s  
     *   @ b r i e f         F l a g s   d e f i n e s   w h i c h   c a n   b e   u s e d   w i t h   L L _ D M A _ W r i t e R e g   f u n c t i o n  
     *   @ {  
     * /  
 # d e f i n e   L L _ D M A _ I F C R _ C G I F 1                                   D M A _ I F C R _ C G I F 1                 / * ! <   C h a n n e l   1   g l o b a l   f l a g                         * /  
 # d e f i n e   L L _ D M A _ I F C R _ C T C I F 1                                 D M A _ I F C R _ C T C I F 1               / * ! <   C h a n n e l   1   t r a n s f e r   c o m p l e t e   f l a g   * /  
 # d e f i n e   L L _ D M A _ I F C R _ C H T I F 1                                 D M A _ I F C R _ C H T I F 1               / * ! <   C h a n n e l   1   h a l f   t r a n s f e r   f l a g           * /  
 # d e f i n e   L L _ D M A _ I F C R _ C T E I F 1                                 D M A _ I F C R _ C T E I F 1               / * ! <   C h a n n e l   1   t r a n s f e r   e r r o r   f l a g         * /  
 # d e f i n e   L L _ D M A _ I F C R _ C G I F 2                                   D M A _ I F C R _ C G I F 2                 / * ! <   C h a n n e l   2   g l o b a l   f l a g                         * /  
 # d e f i n e   L L _ D M A _ I F C R _ C T C I F 2                                 D M A _ I F C R _ C T C I F 2               / * ! <   C h a n n e l   2   t r a n s f e r   c o m p l e t e   f l a g   * /  
 # d e f i n e   L L _ D M A _ I F C R _ C H T I F 2                                 D M A _ I F C R _ C H T I F 2               / * ! <   C h a n n e l   2   h a l f   t r a n s f e r   f l a g           * /  
 # d e f i n e   L L _ D M A _ I F C R _ C T E I F 2                                 D M A _ I F C R _ C T E I F 2               / * ! <   C h a n n e l   2   t r a n s f e r   e r r o r   f l a g         * /  
 # d e f i n e   L L _ D M A _ I F C R _ C G I F 3                                   D M A _ I F C R _ C G I F 3                 / * ! <   C h a n n e l   3   g l o b a l   f l a g                         * /  
 # d e f i n e   L L _ D M A _ I F C R _ C T C I F 3                                 D M A _ I F C R _ C T C I F 3               / * ! <   C h a n n e l   3   t r a n s f e r   c o m p l e t e   f l a g   * /  
 # d e f i n e   L L _ D M A _ I F C R _ C H T I F 3                                 D M A _ I F C R _ C H T I F 3               / * ! <   C h a n n e l   3   h a l f   t r a n s f e r   f l a g           * /  
 # d e f i n e   L L _ D M A _ I F C R _ C T E I F 3                                 D M A _ I F C R _ C T E I F 3               / * ! <   C h a n n e l   3   t r a n s f e r   e r r o r   f l a g         * /  
 # d e f i n e   L L _ D M A _ I F C R _ C G I F 4                                   D M A _ I F C R _ C G I F 4                 / * ! <   C h a n n e l   4   g l o b a l   f l a g                         * /  
 # d e f i n e   L L _ D M A _ I F C R _ C T C I F 4                                 D M A _ I F C R _ C T C I F 4               / * ! <   C h a n n e l   4   t r a n s f e r   c o m p l e t e   f l a g   * /  
 # d e f i n e   L L _ D M A _ I F C R _ C H T I F 4                                 D M A _ I F C R _ C H T I F 4               / * ! <   C h a n n e l   4   h a l f   t r a n s f e r   f l a g           * /  
 # d e f i n e   L L _ D M A _ I F C R _ C T E I F 4                                 D M A _ I F C R _ C T E I F 4               / * ! <   C h a n n e l   4   t r a n s f e r   e r r o r   f l a g         * /  
 # d e f i n e   L L _ D M A _ I F C R _ C G I F 5                                   D M A _ I F C R _ C G I F 5                 / * ! <   C h a n n e l   5   g l o b a l   f l a g                         * /  
 # d e f i n e   L L _ D M A _ I F C R _ C T C I F 5                                 D M A _ I F C R _ C T C I F 5               / * ! <   C h a n n e l   5   t r a n s f e r   c o m p l e t e   f l a g   * /  
 # d e f i n e   L L _ D M A _ I F C R _ C H T I F 5                                 D M A _ I F C R _ C H T I F 5               / * ! <   C h a n n e l   5   h a l f   t r a n s f e r   f l a g           * /  
 # d e f i n e   L L _ D M A _ I F C R _ C T E I F 5                                 D M A _ I F C R _ C T E I F 5               / * ! <   C h a n n e l   5   t r a n s f e r   e r r o r   f l a g         * /  
 # d e f i n e   L L _ D M A _ I F C R _ C G I F 6                                   D M A _ I F C R _ C G I F 6                 / * ! <   C h a n n e l   6   g l o b a l   f l a g                         * /  
 # d e f i n e   L L _ D M A _ I F C R _ C T C I F 6                                 D M A _ I F C R _ C T C I F 6               / * ! <   C h a n n e l   6   t r a n s f e r   c o m p l e t e   f l a g   * /  
 # d e f i n e   L L _ D M A _ I F C R _ C H T I F 6                                 D M A _ I F C R _ C H T I F 6               / * ! <   C h a n n e l   6   h a l f   t r a n s f e r   f l a g           * /  
 # d e f i n e   L L _ D M A _ I F C R _ C T E I F 6                                 D M A _ I F C R _ C T E I F 6               / * ! <   C h a n n e l   6   t r a n s f e r   e r r o r   f l a g         * /  
 # d e f i n e   L L _ D M A _ I F C R _ C G I F 7                                   D M A _ I F C R _ C G I F 7                 / * ! <   C h a n n e l   7   g l o b a l   f l a g                         * /  
 # d e f i n e   L L _ D M A _ I F C R _ C T C I F 7                                 D M A _ I F C R _ C T C I F 7               / * ! <   C h a n n e l   7   t r a n s f e r   c o m p l e t e   f l a g   * /  
 # d e f i n e   L L _ D M A _ I F C R _ C H T I F 7                                 D M A _ I F C R _ C H T I F 7               / * ! <   C h a n n e l   7   h a l f   t r a n s f e r   f l a g           * /  
 # d e f i n e   L L _ D M A _ I F C R _ C T E I F 7                                 D M A _ I F C R _ C T E I F 7               / * ! <   C h a n n e l   7   t r a n s f e r   e r r o r   f l a g         * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D M A _ L L _ E C _ G E T _ F L A G   G e t   F l a g s   D e f i n e s  
     *   @ b r i e f         F l a g s   d e f i n e s   w h i c h   c a n   b e   u s e d   w i t h   L L _ D M A _ R e a d R e g   f u n c t i o n  
     *   @ {  
     * /  
 # d e f i n e   L L _ D M A _ I S R _ G I F 1                                       D M A _ I S R _ G I F 1                     / * ! <   C h a n n e l   1   g l o b a l   f l a g                         * /  
 # d e f i n e   L L _ D M A _ I S R _ T C I F 1                                     D M A _ I S R _ T C I F 1                   / * ! <   C h a n n e l   1   t r a n s f e r   c o m p l e t e   f l a g   * /  
 # d e f i n e   L L _ D M A _ I S R _ H T I F 1                                     D M A _ I S R _ H T I F 1                   / * ! <   C h a n n e l   1   h a l f   t r a n s f e r   f l a g           * /  
 # d e f i n e   L L _ D M A _ I S R _ T E I F 1                                     D M A _ I S R _ T E I F 1                   / * ! <   C h a n n e l   1   t r a n s f e r   e r r o r   f l a g         * /  
 # d e f i n e   L L _ D M A _ I S R _ G I F 2                                       D M A _ I S R _ G I F 2                     / * ! <   C h a n n e l   2   g l o b a l   f l a g                         * /  
 # d e f i n e   L L _ D M A _ I S R _ T C I F 2                                     D M A _ I S R _ T C I F 2                   / * ! <   C h a n n e l   2   t r a n s f e r   c o m p l e t e   f l a g   * /  
 # d e f i n e   L L _ D M A _ I S R _ H T I F 2                                     D M A _ I S R _ H T I F 2                   / * ! <   C h a n n e l   2   h a l f   t r a n s f e r   f l a g           * /  
 # d e f i n e   L L _ D M A _ I S R _ T E I F 2                                     D M A _ I S R _ T E I F 2                   / * ! <   C h a n n e l   2   t r a n s f e r   e r r o r   f l a g         * /  
 # d e f i n e   L L _ D M A _ I S R _ G I F 3                                       D M A _ I S R _ G I F 3                     / * ! <   C h a n n e l   3   g l o b a l   f l a g                         * /  
 # d e f i n e   L L _ D M A _ I S R _ T C I F 3                                     D M A _ I S R _ T C I F 3                   / * ! <   C h a n n e l   3   t r a n s f e r   c o m p l e t e   f l a g   * /  
 # d e f i n e   L L _ D M A _ I S R _ H T I F 3                                     D M A _ I S R _ H T I F 3                   / * ! <   C h a n n e l   3   h a l f   t r a n s f e r   f l a g           * /  
 # d e f i n e   L L _ D M A _ I S R _ T E I F 3                                     D M A _ I S R _ T E I F 3                   / * ! <   C h a n n e l   3   t r a n s f e r   e r r o r   f l a g         * /  
 # d e f i n e   L L _ D M A _ I S R _ G I F 4                                       D M A _ I S R _ G I F 4                     / * ! <   C h a n n e l   4   g l o b a l   f l a g                         * /  
 # d e f i n e   L L _ D M A _ I S R _ T C I F 4                                     D M A _ I S R _ T C I F 4                   / * ! <   C h a n n e l   4   t r a n s f e r   c o m p l e t e   f l a g   * /  
 # d e f i n e   L L _ D M A _ I S R _ H T I F 4                                     D M A _ I S R _ H T I F 4                   / * ! <   C h a n n e l   4   h a l f   t r a n s f e r   f l a g           * /  
 # d e f i n e   L L _ D M A _ I S R _ T E I F 4                                     D M A _ I S R _ T E I F 4                   / * ! <   C h a n n e l   4   t r a n s f e r   e r r o r   f l a g         * /  
 # d e f i n e   L L _ D M A _ I S R _ G I F 5                                       D M A _ I S R _ G I F 5                     / * ! <   C h a n n e l   5   g l o b a l   f l a g                         * /  
 # d e f i n e   L L _ D M A _ I S R _ T C I F 5                                     D M A _ I S R _ T C I F 5                   / * ! <   C h a n n e l   5   t r a n s f e r   c o m p l e t e   f l a g   * /  
 # d e f i n e   L L _ D M A _ I S R _ H T I F 5                                     D M A _ I S R _ H T I F 5                   / * ! <   C h a n n e l   5   h a l f   t r a n s f e r   f l a g           * /  
 # d e f i n e   L L _ D M A _ I S R _ T E I F 5                                     D M A _ I S R _ T E I F 5                   / * ! <   C h a n n e l   5   t r a n s f e r   e r r o r   f l a g         * /  
 # d e f i n e   L L _ D M A _ I S R _ G I F 6                                       D M A _ I S R _ G I F 6                     / * ! <   C h a n n e l   6   g l o b a l   f l a g                         * /  
 # d e f i n e   L L _ D M A _ I S R _ T C I F 6                                     D M A _ I S R _ T C I F 6                   / * ! <   C h a n n e l   6   t r a n s f e r   c o m p l e t e   f l a g   * /  
 # d e f i n e   L L _ D M A _ I S R _ H T I F 6                                     D M A _ I S R _ H T I F 6                   / * ! <   C h a n n e l   6   h a l f   t r a n s f e r   f l a g           * /  
 # d e f i n e   L L _ D M A _ I S R _ T E I F 6                                     D M A _ I S R _ T E I F 6                   / * ! <   C h a n n e l   6   t r a n s f e r   e r r o r   f l a g         * /  
 # d e f i n e   L L _ D M A _ I S R _ G I F 7                                       D M A _ I S R _ G I F 7                     / * ! <   C h a n n e l   7   g l o b a l   f l a g                         * /  
 # d e f i n e   L L _ D M A _ I S R _ T C I F 7                                     D M A _ I S R _ T C I F 7                   / * ! <   C h a n n e l   7   t r a n s f e r   c o m p l e t e   f l a g   * /  
 # d e f i n e   L L _ D M A _ I S R _ H T I F 7                                     D M A _ I S R _ H T I F 7                   / * ! <   C h a n n e l   7   h a l f   t r a n s f e r   f l a g           * /  
 # d e f i n e   L L _ D M A _ I S R _ T E I F 7                                     D M A _ I S R _ T E I F 7                   / * ! <   C h a n n e l   7   t r a n s f e r   e r r o r   f l a g         * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D M A _ L L _ E C _ I T   I T   D e f i n e s  
     *   @ b r i e f         I T   d e f i n e s   w h i c h   c a n   b e   u s e d   w i t h   L L _ D M A _ R e a d R e g   a n d     L L _ D M A _ W r i t e R e g   f u n c t i o n s  
     *   @ {  
     * /  
 # d e f i n e   L L _ D M A _ C C R _ T C I E                                       D M A _ C C R _ T C I E                     / * ! <   T r a n s f e r   c o m p l e t e   i n t e r r u p t   * /  
 # d e f i n e   L L _ D M A _ C C R _ H T I E                                       D M A _ C C R _ H T I E                     / * ! <   H a l f   T r a n s f e r   i n t e r r u p t           * /  
 # d e f i n e   L L _ D M A _ C C R _ T E I E                                       D M A _ C C R _ T E I E                     / * ! <   T r a n s f e r   e r r o r   i n t e r r u p t         * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D M A _ L L _ E C _ C H A N N E L   C H A N N E L  
     *   @ {  
     * /  
 # d e f i n e   L L _ D M A _ C H A N N E L _ 1                                     0 x 0 0 0 0 0 0 0 1 U   / * ! <   D M A   C h a n n e l   1   * /  
 # d e f i n e   L L _ D M A _ C H A N N E L _ 2                                     0 x 0 0 0 0 0 0 0 2 U   / * ! <   D M A   C h a n n e l   2   * /  
 # d e f i n e   L L _ D M A _ C H A N N E L _ 3                                     0 x 0 0 0 0 0 0 0 3 U   / * ! <   D M A   C h a n n e l   3   * /  
 # d e f i n e   L L _ D M A _ C H A N N E L _ 4                                     0 x 0 0 0 0 0 0 0 4 U   / * ! <   D M A   C h a n n e l   4   * /  
 # d e f i n e   L L _ D M A _ C H A N N E L _ 5                                     0 x 0 0 0 0 0 0 0 5 U   / * ! <   D M A   C h a n n e l   5   * /  
 # d e f i n e   L L _ D M A _ C H A N N E L _ 6                                     0 x 0 0 0 0 0 0 0 6 U   / * ! <   D M A   C h a n n e l   6   * /  
 # d e f i n e   L L _ D M A _ C H A N N E L _ 7                                     0 x 0 0 0 0 0 0 0 7 U   / * ! <   D M A   C h a n n e l   7   * /  
 # i f   d e f i n e d ( U S E _ F U L L _ L L _ D R I V E R )  
 # d e f i n e   L L _ D M A _ C H A N N E L _ A L L                                 0 x F F F F 0 0 0 0 U   / * ! <   D M A   C h a n n e l   a l l   ( u s e d   o n l y   f o r   f u n c t i o n   @ r e f   L L _ D M A _ D e I n i t ( ) .   * /  
 # e n d i f   / * U S E _ F U L L _ L L _ D R I V E R * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D M A _ L L _ E C _ D I R E C T I O N   T r a n s f e r   D i r e c t i o n  
     *   @ {  
     * /  
 # d e f i n e   L L _ D M A _ D I R E C T I O N _ P E R I P H _ T O _ M E M O R Y   0 x 0 0 0 0 0 0 0 0 U                           / * ! <   P e r i p h e r a l   t o   m e m o r y   d i r e c t i o n   * /  
 # d e f i n e   L L _ D M A _ D I R E C T I O N _ M E M O R Y _ T O _ P E R I P H   D M A _ C C R _ D I R                           / * ! <   M e m o r y   t o   p e r i p h e r a l   d i r e c t i o n   * /  
 # d e f i n e   L L _ D M A _ D I R E C T I O N _ M E M O R Y _ T O _ M E M O R Y   D M A _ C C R _ M E M 2 M E M                   / * ! <   M e m o r y   t o   m e m o r y   d i r e c t i o n           * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D M A _ L L _ E C _ M O D E   T r a n s f e r   m o d e  
     *   @ {  
     * /  
 # d e f i n e   L L _ D M A _ M O D E _ N O R M A L                                 0 x 0 0 0 0 0 0 0 0 U                           / * ! <   N o r m a l   M o d e                                     * /  
 # d e f i n e   L L _ D M A _ M O D E _ C I R C U L A R                             D M A _ C C R _ C I R C                         / * ! <   C i r c u l a r   M o d e                                 * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D M A _ L L _ E C _ P E R I P H   P e r i p h e r a l   i n c r e m e n t   m o d e  
     *   @ {  
     * /  
 # d e f i n e   L L _ D M A _ P E R I P H _ I N C R E M E N T                       D M A _ C C R _ P I N C                         / * ! <   P e r i p h e r a l   i n c r e m e n t   m o d e   E n a b l e   * /  
 # d e f i n e   L L _ D M A _ P E R I P H _ N O I N C R E M E N T                   0 x 0 0 0 0 0 0 0 0 U                           / * ! <   P e r i p h e r a l   i n c r e m e n t   m o d e   D i s a b l e   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D M A _ L L _ E C _ M E M O R Y   M e m o r y   i n c r e m e n t   m o d e  
     *   @ {  
     * /  
 # d e f i n e   L L _ D M A _ M E M O R Y _ I N C R E M E N T                       D M A _ C C R _ M I N C                         / * ! <   M e m o r y   i n c r e m e n t   m o d e   E n a b l e     * /  
 # d e f i n e   L L _ D M A _ M E M O R Y _ N O I N C R E M E N T                   0 x 0 0 0 0 0 0 0 0 U                           / * ! <   M e m o r y   i n c r e m e n t   m o d e   D i s a b l e   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D M A _ L L _ E C _ P D A T A A L I G N   P e r i p h e r a l   d a t a   a l i g n m e n t  
     *   @ {  
     * /  
 # d e f i n e   L L _ D M A _ P D A T A A L I G N _ B Y T E                         0 x 0 0 0 0 0 0 0 0 U                           / * ! <   P e r i p h e r a l   d a t a   a l i g n m e n t   :   B y t e           * /  
 # d e f i n e   L L _ D M A _ P D A T A A L I G N _ H A L F W O R D                 D M A _ C C R _ P S I Z E _ 0                   / * ! <   P e r i p h e r a l   d a t a   a l i g n m e n t   :   H a l f W o r d   * /  
 # d e f i n e   L L _ D M A _ P D A T A A L I G N _ W O R D                         D M A _ C C R _ P S I Z E _ 1                   / * ! <   P e r i p h e r a l   d a t a   a l i g n m e n t   :   W o r d           * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D M A _ L L _ E C _ M D A T A A L I G N   M e m o r y   d a t a   a l i g n m e n t  
     *   @ {  
     * /  
 # d e f i n e   L L _ D M A _ M D A T A A L I G N _ B Y T E                         0 x 0 0 0 0 0 0 0 0 U                           / * ! <   M e m o r y   d a t a   a l i g n m e n t   :   B y t e           * /  
 # d e f i n e   L L _ D M A _ M D A T A A L I G N _ H A L F W O R D                 D M A _ C C R _ M S I Z E _ 0                   / * ! <   M e m o r y   d a t a   a l i g n m e n t   :   H a l f W o r d   * /  
 # d e f i n e   L L _ D M A _ M D A T A A L I G N _ W O R D                         D M A _ C C R _ M S I Z E _ 1                   / * ! <   M e m o r y   d a t a   a l i g n m e n t   :   W o r d           * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D M A _ L L _ E C _ P R I O R I T Y   T r a n s f e r   P r i o r i t y   l e v e l  
     *   @ {  
     * /  
 # d e f i n e   L L _ D M A _ P R I O R I T Y _ L O W                               0 x 0 0 0 0 0 0 0 0 U                           / * ! <   P r i o r i t y   l e v e l   :   L o w               * /  
 # d e f i n e   L L _ D M A _ P R I O R I T Y _ M E D I U M                         D M A _ C C R _ P L _ 0                         / * ! <   P r i o r i t y   l e v e l   :   M e d i u m         * /  
 # d e f i n e   L L _ D M A _ P R I O R I T Y _ H I G H                             D M A _ C C R _ P L _ 1                         / * ! <   P r i o r i t y   l e v e l   :   H i g h             * /  
 # d e f i n e   L L _ D M A _ P R I O R I T Y _ V E R Y H I G H                     D M A _ C C R _ P L                             / * ! <   P r i o r i t y   l e v e l   :   V e r y _ H i g h   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   D M A _ L L _ E x p o r t e d _ M a c r o s   D M A   E x p o r t e d   M a c r o s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   D M A _ L L _ E M _ W R I T E _ R E A D   C o m m o n   W r i t e   a n d   r e a d   r e g i s t e r s   m a c r o s  
     *   @ {  
     * /  
 / * *  
     *   @ b r i e f     W r i t e   a   v a l u e   i n   D M A   r e g i s t e r  
     *   @ p a r a m     _ _ I N S T A N C E _ _   D M A   I n s t a n c e  
     *   @ p a r a m     _ _ R E G _ _   R e g i s t e r   t o   b e   w r i t t e n  
     *   @ p a r a m     _ _ V A L U E _ _   V a l u e   t o   b e   w r i t t e n   i n   t h e   r e g i s t e r  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   L L _ D M A _ W r i t e R e g ( _ _ I N S T A N C E _ _ ,   _ _ R E G _ _ ,   _ _ V A L U E _ _ )   W R I T E _ R E G ( _ _ I N S T A N C E _ _ - > _ _ R E G _ _ ,   ( _ _ V A L U E _ _ ) )  
  
 / * *  
     *   @ b r i e f     R e a d   a   v a l u e   i n   D M A   r e g i s t e r  
     *   @ p a r a m     _ _ I N S T A N C E _ _   D M A   I n s t a n c e  
     *   @ p a r a m     _ _ R E G _ _   R e g i s t e r   t o   b e   r e a d  
     *   @ r e t v a l   R e g i s t e r   v a l u e  
     * /  
 # d e f i n e   L L _ D M A _ R e a d R e g ( _ _ I N S T A N C E _ _ ,   _ _ R E G _ _ )   R E A D _ R E G ( _ _ I N S T A N C E _ _ - > _ _ R E G _ _ )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D M A _ L L _ E M _ C O N V E R T _ D M A x C H A N N E L y   C o n v e r t   D M A x C h a n n e l y  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     C o n v e r t   D M A x _ C h a n n e l y   i n t o   D M A x  
     *   @ p a r a m     _ _ C H A N N E L _ I N S T A N C E _ _   D M A x _ C h a n n e l y  
     *   @ r e t v a l   D M A x  
     * /  
 # i f   d e f i n e d ( D M A 2 )  
 # d e f i n e   _ _ L L _ D M A _ G E T _ I N S T A N C E ( _ _ C H A N N E L _ I N S T A N C E _ _ )       \  
 ( ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ I N S T A N C E _ _ )   >   ( ( u i n t 3 2 _ t ) D M A 1 _ C h a n n e l 7 ) )   ?     D M A 2   :   D M A 1 )  
 # e l s e  
 # d e f i n e   _ _ L L _ D M A _ G E T _ I N S T A N C E ( _ _ C H A N N E L _ I N S T A N C E _ _ )     ( D M A 1 )  
 # e n d i f  
  
 / * *  
     *   @ b r i e f     C o n v e r t   D M A x _ C h a n n e l y   i n t o   L L _ D M A _ C H A N N E L _ y  
     *   @ p a r a m     _ _ C H A N N E L _ I N S T A N C E _ _   D M A x _ C h a n n e l y  
     *   @ r e t v a l   L L _ D M A _ C H A N N E L _ y  
     * /  
 # i f   d e f i n e d   ( D M A 2 )  
 # d e f i n e   _ _ L L _ D M A _ G E T _ C H A N N E L ( _ _ C H A N N E L _ I N S T A N C E _ _ )       \  
 ( ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 1 _ C h a n n e l 1 ) )   ?   L L _ D M A _ C H A N N E L _ 1   :   \  
   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 2 _ C h a n n e l 1 ) )   ?   L L _ D M A _ C H A N N E L _ 1   :   \  
   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 1 _ C h a n n e l 2 ) )   ?   L L _ D M A _ C H A N N E L _ 2   :   \  
   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 2 _ C h a n n e l 2 ) )   ?   L L _ D M A _ C H A N N E L _ 2   :   \  
   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 1 _ C h a n n e l 3 ) )   ?   L L _ D M A _ C H A N N E L _ 3   :   \  
   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 2 _ C h a n n e l 3 ) )   ?   L L _ D M A _ C H A N N E L _ 3   :   \  
   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 1 _ C h a n n e l 4 ) )   ?   L L _ D M A _ C H A N N E L _ 4   :   \  
   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 2 _ C h a n n e l 4 ) )   ?   L L _ D M A _ C H A N N E L _ 4   :   \  
   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 1 _ C h a n n e l 5 ) )   ?   L L _ D M A _ C H A N N E L _ 5   :   \  
   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 2 _ C h a n n e l 5 ) )   ?   L L _ D M A _ C H A N N E L _ 5   :   \  
   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 1 _ C h a n n e l 6 ) )   ?   L L _ D M A _ C H A N N E L _ 6   :   \  
   L L _ D M A _ C H A N N E L _ 7 )  
 # e l s e  
 # d e f i n e   _ _ L L _ D M A _ G E T _ C H A N N E L ( _ _ C H A N N E L _ I N S T A N C E _ _ )       \  
 ( ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 1 _ C h a n n e l 1 ) )   ?   L L _ D M A _ C H A N N E L _ 1   :   \  
   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 1 _ C h a n n e l 2 ) )   ?   L L _ D M A _ C H A N N E L _ 2   :   \  
   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 1 _ C h a n n e l 3 ) )   ?   L L _ D M A _ C H A N N E L _ 3   :   \  
   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 1 _ C h a n n e l 4 ) )   ?   L L _ D M A _ C H A N N E L _ 4   :   \  
   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 1 _ C h a n n e l 5 ) )   ?   L L _ D M A _ C H A N N E L _ 5   :   \  
   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 1 _ C h a n n e l 6 ) )   ?   L L _ D M A _ C H A N N E L _ 6   :   \  
   L L _ D M A _ C H A N N E L _ 7 )  
 # e n d i f  
  
 / * *  
     *   @ b r i e f     C o n v e r t   D M A   I n s t a n c e   D M A x   a n d   L L _ D M A _ C H A N N E L _ y   i n t o   D M A x _ C h a n n e l y  
     *   @ p a r a m     _ _ D M A _ I N S T A N C E _ _   D M A x  
     *   @ p a r a m     _ _ C H A N N E L _ _   L L _ D M A _ C H A N N E L _ y  
     *   @ r e t v a l   D M A x _ C h a n n e l y  
     * /  
 # i f   d e f i n e d   ( D M A 2 )  
 # d e f i n e   _ _ L L _ D M A _ G E T _ C H A N N E L _ I N S T A N C E ( _ _ D M A _ I N S T A N C E _ _ ,   _ _ C H A N N E L _ _ )       \  
 ( ( ( ( u i n t 3 2 _ t ) ( _ _ D M A _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 1 ) )   & &   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ _ )   = =   ( ( u i n t 3 2 _ t ) L L _ D M A _ C H A N N E L _ 1 ) ) )   ?   D M A 1 _ C h a n n e l 1   :   \  
   ( ( ( u i n t 3 2 _ t ) ( _ _ D M A _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 2 ) )   & &   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ _ )   = =   ( ( u i n t 3 2 _ t ) L L _ D M A _ C H A N N E L _ 1 ) ) )   ?   D M A 2 _ C h a n n e l 1   :   \  
   ( ( ( u i n t 3 2 _ t ) ( _ _ D M A _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 1 ) )   & &   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ _ )   = =   ( ( u i n t 3 2 _ t ) L L _ D M A _ C H A N N E L _ 2 ) ) )   ?   D M A 1 _ C h a n n e l 2   :   \  
   ( ( ( u i n t 3 2 _ t ) ( _ _ D M A _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 2 ) )   & &   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ _ )   = =   ( ( u i n t 3 2 _ t ) L L _ D M A _ C H A N N E L _ 2 ) ) )   ?   D M A 2 _ C h a n n e l 2   :   \  
   ( ( ( u i n t 3 2 _ t ) ( _ _ D M A _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 1 ) )   & &   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ _ )   = =   ( ( u i n t 3 2 _ t ) L L _ D M A _ C H A N N E L _ 3 ) ) )   ?   D M A 1 _ C h a n n e l 3   :   \  
   ( ( ( u i n t 3 2 _ t ) ( _ _ D M A _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 2 ) )   & &   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ _ )   = =   ( ( u i n t 3 2 _ t ) L L _ D M A _ C H A N N E L _ 3 ) ) )   ?   D M A 2 _ C h a n n e l 3   :   \  
   ( ( ( u i n t 3 2 _ t ) ( _ _ D M A _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 1 ) )   & &   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ _ )   = =   ( ( u i n t 3 2 _ t ) L L _ D M A _ C H A N N E L _ 4 ) ) )   ?   D M A 1 _ C h a n n e l 4   :   \  
   ( ( ( u i n t 3 2 _ t ) ( _ _ D M A _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 2 ) )   & &   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ _ )   = =   ( ( u i n t 3 2 _ t ) L L _ D M A _ C H A N N E L _ 4 ) ) )   ?   D M A 2 _ C h a n n e l 4   :   \  
   ( ( ( u i n t 3 2 _ t ) ( _ _ D M A _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 1 ) )   & &   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ _ )   = =   ( ( u i n t 3 2 _ t ) L L _ D M A _ C H A N N E L _ 5 ) ) )   ?   D M A 1 _ C h a n n e l 5   :   \  
   ( ( ( u i n t 3 2 _ t ) ( _ _ D M A _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 2 ) )   & &   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ _ )   = =   ( ( u i n t 3 2 _ t ) L L _ D M A _ C H A N N E L _ 5 ) ) )   ?   D M A 2 _ C h a n n e l 5   :   \  
   ( ( ( u i n t 3 2 _ t ) ( _ _ D M A _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 1 ) )   & &   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ _ )   = =   ( ( u i n t 3 2 _ t ) L L _ D M A _ C H A N N E L _ 6 ) ) )   ?   D M A 1 _ C h a n n e l 6   :   \  
   D M A 1 _ C h a n n e l 7 )  
 # e l s e  
 # d e f i n e   _ _ L L _ D M A _ G E T _ C H A N N E L _ I N S T A N C E ( _ _ D M A _ I N S T A N C E _ _ ,   _ _ C H A N N E L _ _ )       \  
 ( ( ( ( u i n t 3 2 _ t ) ( _ _ D M A _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 1 ) )   & &   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ _ )   = =   ( ( u i n t 3 2 _ t ) L L _ D M A _ C H A N N E L _ 1 ) ) )   ?   D M A 1 _ C h a n n e l 1   :   \  
   ( ( ( u i n t 3 2 _ t ) ( _ _ D M A _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 1 ) )   & &   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ _ )   = =   ( ( u i n t 3 2 _ t ) L L _ D M A _ C H A N N E L _ 2 ) ) )   ?   D M A 1 _ C h a n n e l 2   :   \  
   ( ( ( u i n t 3 2 _ t ) ( _ _ D M A _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 1 ) )   & &   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ _ )   = =   ( ( u i n t 3 2 _ t ) L L _ D M A _ C H A N N E L _ 3 ) ) )   ?   D M A 1 _ C h a n n e l 3   :   \  
   ( ( ( u i n t 3 2 _ t ) ( _ _ D M A _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 1 ) )   & &   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ _ )   = =   ( ( u i n t 3 2 _ t ) L L _ D M A _ C H A N N E L _ 4 ) ) )   ?   D M A 1 _ C h a n n e l 4   :   \  
   ( ( ( u i n t 3 2 _ t ) ( _ _ D M A _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 1 ) )   & &   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ _ )   = =   ( ( u i n t 3 2 _ t ) L L _ D M A _ C H A N N E L _ 5 ) ) )   ?   D M A 1 _ C h a n n e l 5   :   \  
   ( ( ( u i n t 3 2 _ t ) ( _ _ D M A _ I N S T A N C E _ _ )   = =   ( ( u i n t 3 2 _ t ) D M A 1 ) )   & &   ( ( u i n t 3 2 _ t ) ( _ _ C H A N N E L _ _ )   = =   ( ( u i n t 3 2 _ t ) L L _ D M A _ C H A N N E L _ 6 ) ) )   ?   D M A 1 _ C h a n n e l 6   :   \  
   D M A 1 _ C h a n n e l 7 )  
 # e n d i f  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   D M A _ L L _ E x p o r t e d _ F u n c t i o n s   D M A   E x p o r t e d   F u n c t i o n s  
   *   @ {  
   * /  
  
 / * *   @ d e f g r o u p   D M A _ L L _ E F _ C o n f i g u r a t i o n   C o n f i g u r a t i o n  
     *   @ {  
     * /  
 / * *  
     *   @ b r i e f     E n a b l e   D M A   c h a n n e l .  
     *   @ r m t o l l   C C R                     E N                         L L _ D M A _ E n a b l e C h a n n e l  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ E n a b l e C h a n n e l ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     S E T _ B I T ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C C R ,   D M A _ C C R _ E N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   D M A   c h a n n e l .  
     *   @ r m t o l l   C C R                     E N                         L L _ D M A _ D i s a b l e C h a n n e l  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ D i s a b l e C h a n n e l ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     C L E A R _ B I T ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C C R ,   D M A _ C C R _ E N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   D M A   c h a n n e l   i s   e n a b l e d   o r   d i s a b l e d .  
     *   @ r m t o l l   C C R                     E N                         L L _ D M A _ I s E n a b l e d C h a n n e l  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s E n a b l e d C h a n n e l ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     r e t u r n   ( R E A D _ B I T ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C C R ,  
                                       D M A _ C C R _ E N )   = =   ( D M A _ C C R _ E N ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   a l l   p a r a m e t e r s   l i n k   t o   D M A   t r a n s f e r .  
     *   @ r m t o l l   C C R                     D I R                       L L _ D M A _ C o n f i g T r a n s f e r \ n  
     *                   C C R                     M E M 2 M E M               L L _ D M A _ C o n f i g T r a n s f e r \ n  
     *                   C C R                     C I R C                     L L _ D M A _ C o n f i g T r a n s f e r \ n  
     *                   C C R                     P I N C                     L L _ D M A _ C o n f i g T r a n s f e r \ n  
     *                   C C R                     M I N C                     L L _ D M A _ C o n f i g T r a n s f e r \ n  
     *                   C C R                     P S I Z E                   L L _ D M A _ C o n f i g T r a n s f e r \ n  
     *                   C C R                     M S I Z E                   L L _ D M A _ C o n f i g T r a n s f e r \ n  
     *                   C C R                     P L                         L L _ D M A _ C o n f i g T r a n s f e r  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ p a r a m     C o n f i g u r a t i o n   T h i s   p a r a m e t e r   m u s t   b e   a   c o m b i n a t i o n   o f   a l l   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ D I R E C T I O N _ P E R I P H _ T O _ M E M O R Y   o r   @ r e f   L L _ D M A _ D I R E C T I O N _ M E M O R Y _ T O _ P E R I P H   o r   @ r e f   L L _ D M A _ D I R E C T I O N _ M E M O R Y _ T O _ M E M O R Y  
     *                   @ a r g   @ r e f   L L _ D M A _ M O D E _ N O R M A L   o r   @ r e f   L L _ D M A _ M O D E _ C I R C U L A R  
     *                   @ a r g   @ r e f   L L _ D M A _ P E R I P H _ I N C R E M E N T   o r   @ r e f   L L _ D M A _ P E R I P H _ N O I N C R E M E N T  
     *                   @ a r g   @ r e f   L L _ D M A _ M E M O R Y _ I N C R E M E N T   o r   @ r e f   L L _ D M A _ M E M O R Y _ N O I N C R E M E N T  
     *                   @ a r g   @ r e f   L L _ D M A _ P D A T A A L I G N _ B Y T E   o r   @ r e f   L L _ D M A _ P D A T A A L I G N _ H A L F W O R D   o r   @ r e f   L L _ D M A _ P D A T A A L I G N _ W O R D  
     *                   @ a r g   @ r e f   L L _ D M A _ M D A T A A L I G N _ B Y T E   o r   @ r e f   L L _ D M A _ M D A T A A L I G N _ H A L F W O R D   o r   @ r e f   L L _ D M A _ M D A T A A L I G N _ W O R D  
     *                   @ a r g   @ r e f   L L _ D M A _ P R I O R I T Y _ L O W   o r   @ r e f   L L _ D M A _ P R I O R I T Y _ M E D I U M   o r   @ r e f   L L _ D M A _ P R I O R I T Y _ H I G H   o r   @ r e f   L L _ D M A _ P R I O R I T Y _ V E R Y H I G H  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ C o n f i g T r a n s f e r ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   C o n f i g u r a t i o n )  
 {  
     M O D I F Y _ R E G ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C C R ,  
                           D M A _ C C R _ D I R   |   D M A _ C C R _ M E M 2 M E M   |   D M A _ C C R _ C I R C   |   D M A _ C C R _ P I N C   |   D M A _ C C R _ M I N C   |   D M A _ C C R _ P S I Z E   |   D M A _ C C R _ M S I Z E   |   D M A _ C C R _ P L ,  
                           C o n f i g u r a t i o n ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   D a t a   t r a n s f e r   d i r e c t i o n   ( r e a d   f r o m   p e r i p h e r a l   o r   f r o m   m e m o r y ) .  
     *   @ r m t o l l   C C R                     D I R                       L L _ D M A _ S e t D a t a T r a n s f e r D i r e c t i o n \ n  
     *                   C C R                     M E M 2 M E M               L L _ D M A _ S e t D a t a T r a n s f e r D i r e c t i o n  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ p a r a m     D i r e c t i o n   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ D I R E C T I O N _ P E R I P H _ T O _ M E M O R Y  
     *                   @ a r g   @ r e f   L L _ D M A _ D I R E C T I O N _ M E M O R Y _ T O _ P E R I P H  
     *                   @ a r g   @ r e f   L L _ D M A _ D I R E C T I O N _ M E M O R Y _ T O _ M E M O R Y  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ S e t D a t a T r a n s f e r D i r e c t i o n ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   D i r e c t i o n )  
 {  
     M O D I F Y _ R E G ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C C R ,  
                           D M A _ C C R _ D I R   |   D M A _ C C R _ M E M 2 M E M ,   D i r e c t i o n ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   D a t a   t r a n s f e r   d i r e c t i o n   ( r e a d   f r o m   p e r i p h e r a l   o r   f r o m   m e m o r y ) .  
     *   @ r m t o l l   C C R                     D I R                       L L _ D M A _ G e t D a t a T r a n s f e r D i r e c t i o n \ n  
     *                   C C R                     M E M 2 M E M               L L _ D M A _ G e t D a t a T r a n s f e r D i r e c t i o n  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ D I R E C T I O N _ P E R I P H _ T O _ M E M O R Y  
     *                   @ a r g   @ r e f   L L _ D M A _ D I R E C T I O N _ M E M O R Y _ T O _ P E R I P H  
     *                   @ a r g   @ r e f   L L _ D M A _ D I R E C T I O N _ M E M O R Y _ T O _ M E M O R Y  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ G e t D a t a T r a n s f e r D i r e c t i o n ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     r e t u r n   ( R E A D _ B I T ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C C R ,  
                                       D M A _ C C R _ D I R   |   D M A _ C C R _ M E M 2 M E M ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   D M A   m o d e   c i r c u l a r   o r   n o r m a l .  
     *   @ n o t e   T h e   c i r c u l a r   b u f f e r   m o d e   c a n n o t   b e   u s e d   i f   t h e   m e m o r y - t o - m e m o r y  
     *   d a t a   t r a n s f e r   i s   c o n f i g u r e d   o n   t h e   s e l e c t e d   C h a n n e l .  
     *   @ r m t o l l   C C R                     C I R C                     L L _ D M A _ S e t M o d e  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ p a r a m     M o d e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ M O D E _ N O R M A L  
     *                   @ a r g   @ r e f   L L _ D M A _ M O D E _ C I R C U L A R  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ S e t M o d e ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   M o d e )  
 {  
     M O D I F Y _ R E G ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C C R ,   D M A _ C C R _ C I R C ,  
                           M o d e ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   D M A   m o d e   c i r c u l a r   o r   n o r m a l .  
     *   @ r m t o l l   C C R                     C I R C                     L L _ D M A _ G e t M o d e  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ M O D E _ N O R M A L  
     *                   @ a r g   @ r e f   L L _ D M A _ M O D E _ C I R C U L A R  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ G e t M o d e ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     r e t u r n   ( R E A D _ B I T ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C C R ,  
                                       D M A _ C C R _ C I R C ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   P e r i p h e r a l   i n c r e m e n t   m o d e .  
     *   @ r m t o l l   C C R                     P I N C                     L L _ D M A _ S e t P e r i p h I n c M o d e  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ p a r a m     P e r i p h O r M 2 M S r c I n c M o d e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ P E R I P H _ I N C R E M E N T  
     *                   @ a r g   @ r e f   L L _ D M A _ P E R I P H _ N O I N C R E M E N T  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ S e t P e r i p h I n c M o d e ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   P e r i p h O r M 2 M S r c I n c M o d e )  
 {  
     M O D I F Y _ R E G ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C C R ,   D M A _ C C R _ P I N C ,  
                           P e r i p h O r M 2 M S r c I n c M o d e ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   P e r i p h e r a l   i n c r e m e n t   m o d e .  
     *   @ r m t o l l   C C R                     P I N C                     L L _ D M A _ G e t P e r i p h I n c M o d e  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ P E R I P H _ I N C R E M E N T  
     *                   @ a r g   @ r e f   L L _ D M A _ P E R I P H _ N O I N C R E M E N T  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ G e t P e r i p h I n c M o d e ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     r e t u r n   ( R E A D _ B I T ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C C R ,  
                                       D M A _ C C R _ P I N C ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   M e m o r y   i n c r e m e n t   m o d e .  
     *   @ r m t o l l   C C R                     M I N C                     L L _ D M A _ S e t M e m o r y I n c M o d e  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ p a r a m     M e m o r y O r M 2 M D s t I n c M o d e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ M E M O R Y _ I N C R E M E N T  
     *                   @ a r g   @ r e f   L L _ D M A _ M E M O R Y _ N O I N C R E M E N T  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ S e t M e m o r y I n c M o d e ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   M e m o r y O r M 2 M D s t I n c M o d e )  
 {  
     M O D I F Y _ R E G ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C C R ,   D M A _ C C R _ M I N C ,  
                           M e m o r y O r M 2 M D s t I n c M o d e ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   M e m o r y   i n c r e m e n t   m o d e .  
     *   @ r m t o l l   C C R                     M I N C                     L L _ D M A _ G e t M e m o r y I n c M o d e  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ M E M O R Y _ I N C R E M E N T  
     *                   @ a r g   @ r e f   L L _ D M A _ M E M O R Y _ N O I N C R E M E N T  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ G e t M e m o r y I n c M o d e ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     r e t u r n   ( R E A D _ B I T ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C C R ,  
                                       D M A _ C C R _ M I N C ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   P e r i p h e r a l   s i z e .  
     *   @ r m t o l l   C C R                     P S I Z E                   L L _ D M A _ S e t P e r i p h S i z e  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ p a r a m     P e r i p h O r M 2 M S r c D a t a S i z e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ P D A T A A L I G N _ B Y T E  
     *                   @ a r g   @ r e f   L L _ D M A _ P D A T A A L I G N _ H A L F W O R D  
     *                   @ a r g   @ r e f   L L _ D M A _ P D A T A A L I G N _ W O R D  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ S e t P e r i p h S i z e ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   P e r i p h O r M 2 M S r c D a t a S i z e )  
 {  
     M O D I F Y _ R E G ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C C R ,   D M A _ C C R _ P S I Z E ,  
                           P e r i p h O r M 2 M S r c D a t a S i z e ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   P e r i p h e r a l   s i z e .  
     *   @ r m t o l l   C C R                     P S I Z E                   L L _ D M A _ G e t P e r i p h S i z e  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ P D A T A A L I G N _ B Y T E  
     *                   @ a r g   @ r e f   L L _ D M A _ P D A T A A L I G N _ H A L F W O R D  
     *                   @ a r g   @ r e f   L L _ D M A _ P D A T A A L I G N _ W O R D  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ G e t P e r i p h S i z e ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     r e t u r n   ( R E A D _ B I T ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C C R ,  
                                       D M A _ C C R _ P S I Z E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   M e m o r y   s i z e .  
     *   @ r m t o l l   C C R                     M S I Z E                   L L _ D M A _ S e t M e m o r y S i z e  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ p a r a m     M e m o r y O r M 2 M D s t D a t a S i z e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ M D A T A A L I G N _ B Y T E  
     *                   @ a r g   @ r e f   L L _ D M A _ M D A T A A L I G N _ H A L F W O R D  
     *                   @ a r g   @ r e f   L L _ D M A _ M D A T A A L I G N _ W O R D  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ S e t M e m o r y S i z e ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   M e m o r y O r M 2 M D s t D a t a S i z e )  
 {  
     M O D I F Y _ R E G ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C C R ,   D M A _ C C R _ M S I Z E ,  
                           M e m o r y O r M 2 M D s t D a t a S i z e ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   M e m o r y   s i z e .  
     *   @ r m t o l l   C C R                     M S I Z E                   L L _ D M A _ G e t M e m o r y S i z e  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ M D A T A A L I G N _ B Y T E  
     *                   @ a r g   @ r e f   L L _ D M A _ M D A T A A L I G N _ H A L F W O R D  
     *                   @ a r g   @ r e f   L L _ D M A _ M D A T A A L I G N _ W O R D  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ G e t M e m o r y S i z e ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     r e t u r n   ( R E A D _ B I T ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C C R ,  
                                       D M A _ C C R _ M S I Z E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   C h a n n e l   p r i o r i t y   l e v e l .  
     *   @ r m t o l l   C C R                     P L                         L L _ D M A _ S e t C h a n n e l P r i o r i t y L e v e l  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ p a r a m     P r i o r i t y   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ P R I O R I T Y _ L O W  
     *                   @ a r g   @ r e f   L L _ D M A _ P R I O R I T Y _ M E D I U M  
     *                   @ a r g   @ r e f   L L _ D M A _ P R I O R I T Y _ H I G H  
     *                   @ a r g   @ r e f   L L _ D M A _ P R I O R I T Y _ V E R Y H I G H  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ S e t C h a n n e l P r i o r i t y L e v e l ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   P r i o r i t y )  
 {  
     M O D I F Y _ R E G ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C C R ,   D M A _ C C R _ P L ,  
                           P r i o r i t y ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   C h a n n e l   p r i o r i t y   l e v e l .  
     *   @ r m t o l l   C C R                     P L                         L L _ D M A _ G e t C h a n n e l P r i o r i t y L e v e l  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ P R I O R I T Y _ L O W  
     *                   @ a r g   @ r e f   L L _ D M A _ P R I O R I T Y _ M E D I U M  
     *                   @ a r g   @ r e f   L L _ D M A _ P R I O R I T Y _ H I G H  
     *                   @ a r g   @ r e f   L L _ D M A _ P R I O R I T Y _ V E R Y H I G H  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ G e t C h a n n e l P r i o r i t y L e v e l ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     r e t u r n   ( R E A D _ B I T ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C C R ,  
                                       D M A _ C C R _ P L ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   N u m b e r   o f   d a t a   t o   t r a n s f e r .  
     *   @ n o t e       T h i s   a c t i o n   h a s   n o   e f f e c t   i f  
     *                   c h a n n e l   i s   e n a b l e d .  
     *   @ r m t o l l   C N D T R                 N D T                       L L _ D M A _ S e t D a t a L e n g t h  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ p a r a m     N b D a t a   B e t w e e n   M i n _ D a t a   =   0   a n d   M a x _ D a t a   =   0 x 0 0 0 0 F F F F  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ S e t D a t a L e n g t h ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   N b D a t a )  
 {  
     M O D I F Y _ R E G ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C N D T R ,  
                           D M A _ C N D T R _ N D T ,   N b D a t a ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   N u m b e r   o f   d a t a   t o   t r a n s f e r .  
     *   @ n o t e       O n c e   t h e   c h a n n e l   i s   e n a b l e d ,   t h e   r e t u r n   v a l u e   i n d i c a t e   t h e  
     *                   r e m a i n i n g   b y t e s   t o   b e   t r a n s m i t t e d .  
     *   @ r m t o l l   C N D T R                 N D T                       L L _ D M A _ G e t D a t a L e n g t h  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ r e t v a l   B e t w e e n   M i n _ D a t a   =   0   a n d   M a x _ D a t a   =   0 x F F F F F F F F  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ G e t D a t a L e n g t h ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     r e t u r n   ( R E A D _ B I T ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C N D T R ,  
                                       D M A _ C N D T R _ N D T ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   t h e   S o u r c e   a n d   D e s t i n a t i o n   a d d r e s s e s .  
     *   @ n o t e       T h i s   A P I   m u s t   n o t   b e   c a l l e d   w h e n   t h e   D M A   c h a n n e l   i s   e n a b l e d .  
     *   @ n o t e       E a c h   I P   u s i n g   D M A   p r o v i d e s   a n   A P I   t o   g e t   d i r e c t l y   t h e   r e g i s t e r   a d r e s s   ( L L _ P P P _ D M A _ G e t R e g A d d r ) .  
     *   @ r m t o l l   C P A R                   P A                         L L _ D M A _ C o n f i g A d d r e s s e s \ n  
     *                   C M A R                   M A                         L L _ D M A _ C o n f i g A d d r e s s e s  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ p a r a m     S r c A d d r e s s   B e t w e e n   M i n _ D a t a   =   0   a n d   M a x _ D a t a   =   0 x F F F F F F F F  
     *   @ p a r a m     D s t A d d r e s s   B e t w e e n   M i n _ D a t a   =   0   a n d   M a x _ D a t a   =   0 x F F F F F F F F  
     *   @ p a r a m     D i r e c t i o n   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ D I R E C T I O N _ P E R I P H _ T O _ M E M O R Y  
     *                   @ a r g   @ r e f   L L _ D M A _ D I R E C T I O N _ M E M O R Y _ T O _ P E R I P H  
     *                   @ a r g   @ r e f   L L _ D M A _ D I R E C T I O N _ M E M O R Y _ T O _ M E M O R Y  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ C o n f i g A d d r e s s e s ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   S r c A d d r e s s ,  
                                                                                         u i n t 3 2 _ t   D s t A d d r e s s ,   u i n t 3 2 _ t   D i r e c t i o n )  
 {  
     / *   D i r e c t i o n   M e m o r y   t o   P e r i p h   * /  
     i f   ( D i r e c t i o n   = =   L L _ D M A _ D I R E C T I O N _ M E M O R Y _ T O _ P E R I P H )  
     {  
         W R I T E _ R E G ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C M A R ,   S r c A d d r e s s ) ;  
         W R I T E _ R E G ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C P A R ,   D s t A d d r e s s ) ;  
     }  
     / *   D i r e c t i o n   P e r i p h   t o   M e m o r y   a n d   M e m o r y   t o   M e m o r y   * /  
     e l s e  
     {  
         W R I T E _ R E G ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C P A R ,   S r c A d d r e s s ) ;  
         W R I T E _ R E G ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C M A R ,   D s t A d d r e s s ) ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     S e t   t h e   M e m o r y   a d d r e s s .  
     *   @ n o t e       I n t e r f a c e   u s e d   f o r   d i r e c t i o n   L L _ D M A _ D I R E C T I O N _ P E R I P H _ T O _ M E M O R Y   o r   L L _ D M A _ D I R E C T I O N _ M E M O R Y _ T O _ P E R I P H   o n l y .  
     *   @ n o t e       T h i s   A P I   m u s t   n o t   b e   c a l l e d   w h e n   t h e   D M A   c h a n n e l   i s   e n a b l e d .  
     *   @ r m t o l l   C M A R                   M A                         L L _ D M A _ S e t M e m o r y A d d r e s s  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ p a r a m     M e m o r y A d d r e s s   B e t w e e n   M i n _ D a t a   =   0   a n d   M a x _ D a t a   =   0 x F F F F F F F F  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ S e t M e m o r y A d d r e s s ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   M e m o r y A d d r e s s )  
 {  
     W R I T E _ R E G ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C M A R ,   M e m o r y A d d r e s s ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   t h e   P e r i p h e r a l   a d d r e s s .  
     *   @ n o t e       I n t e r f a c e   u s e d   f o r   d i r e c t i o n   L L _ D M A _ D I R E C T I O N _ P E R I P H _ T O _ M E M O R Y   o r   L L _ D M A _ D I R E C T I O N _ M E M O R Y _ T O _ P E R I P H   o n l y .  
     *   @ n o t e       T h i s   A P I   m u s t   n o t   b e   c a l l e d   w h e n   t h e   D M A   c h a n n e l   i s   e n a b l e d .  
     *   @ r m t o l l   C P A R                   P A                         L L _ D M A _ S e t P e r i p h A d d r e s s  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ p a r a m     P e r i p h A d d r e s s   B e t w e e n   M i n _ D a t a   =   0   a n d   M a x _ D a t a   =   0 x F F F F F F F F  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ S e t P e r i p h A d d r e s s ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   P e r i p h A d d r e s s )  
 {  
     W R I T E _ R E G ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C P A R ,   P e r i p h A d d r e s s ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   M e m o r y   a d d r e s s .  
     *   @ n o t e       I n t e r f a c e   u s e d   f o r   d i r e c t i o n   L L _ D M A _ D I R E C T I O N _ P E R I P H _ T O _ M E M O R Y   o r   L L _ D M A _ D I R E C T I O N _ M E M O R Y _ T O _ P E R I P H   o n l y .  
     *   @ r m t o l l   C M A R                   M A                         L L _ D M A _ G e t M e m o r y A d d r e s s  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ r e t v a l   B e t w e e n   M i n _ D a t a   =   0   a n d   M a x _ D a t a   =   0 x F F F F F F F F  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ G e t M e m o r y A d d r e s s ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     r e t u r n   ( R E A D _ R E G ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C M A R ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   P e r i p h e r a l   a d d r e s s .  
     *   @ n o t e       I n t e r f a c e   u s e d   f o r   d i r e c t i o n   L L _ D M A _ D I R E C T I O N _ P E R I P H _ T O _ M E M O R Y   o r   L L _ D M A _ D I R E C T I O N _ M E M O R Y _ T O _ P E R I P H   o n l y .  
     *   @ r m t o l l   C P A R                   P A                         L L _ D M A _ G e t P e r i p h A d d r e s s  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ r e t v a l   B e t w e e n   M i n _ D a t a   =   0   a n d   M a x _ D a t a   =   0 x F F F F F F F F  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ G e t P e r i p h A d d r e s s ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     r e t u r n   ( R E A D _ R E G ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C P A R ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   t h e   M e m o r y   t o   M e m o r y   S o u r c e   a d d r e s s .  
     *   @ n o t e       I n t e r f a c e   u s e d   f o r   d i r e c t i o n   L L _ D M A _ D I R E C T I O N _ M E M O R Y _ T O _ M E M O R Y   o n l y .  
     *   @ n o t e       T h i s   A P I   m u s t   n o t   b e   c a l l e d   w h e n   t h e   D M A   c h a n n e l   i s   e n a b l e d .  
     *   @ r m t o l l   C P A R                   P A                         L L _ D M A _ S e t M 2 M S r c A d d r e s s  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ p a r a m     M e m o r y A d d r e s s   B e t w e e n   M i n _ D a t a   =   0   a n d   M a x _ D a t a   =   0 x F F F F F F F F  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ S e t M 2 M S r c A d d r e s s ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   M e m o r y A d d r e s s )  
 {  
     W R I T E _ R E G ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C P A R ,   M e m o r y A d d r e s s ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   t h e   M e m o r y   t o   M e m o r y   D e s t i n a t i o n   a d d r e s s .  
     *   @ n o t e       I n t e r f a c e   u s e d   f o r   d i r e c t i o n   L L _ D M A _ D I R E C T I O N _ M E M O R Y _ T O _ M E M O R Y   o n l y .  
     *   @ n o t e       T h i s   A P I   m u s t   n o t   b e   c a l l e d   w h e n   t h e   D M A   c h a n n e l   i s   e n a b l e d .  
     *   @ r m t o l l   C M A R                   M A                         L L _ D M A _ S e t M 2 M D s t A d d r e s s  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ p a r a m     M e m o r y A d d r e s s   B e t w e e n   M i n _ D a t a   =   0   a n d   M a x _ D a t a   =   0 x F F F F F F F F  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ S e t M 2 M D s t A d d r e s s ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   M e m o r y A d d r e s s )  
 {  
     W R I T E _ R E G ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C M A R ,   M e m o r y A d d r e s s ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   t h e   M e m o r y   t o   M e m o r y   S o u r c e   a d d r e s s .  
     *   @ n o t e       I n t e r f a c e   u s e d   f o r   d i r e c t i o n   L L _ D M A _ D I R E C T I O N _ M E M O R Y _ T O _ M E M O R Y   o n l y .  
     *   @ r m t o l l   C P A R                   P A                         L L _ D M A _ G e t M 2 M S r c A d d r e s s  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ r e t v a l   B e t w e e n   M i n _ D a t a   =   0   a n d   M a x _ D a t a   =   0 x F F F F F F F F  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ G e t M 2 M S r c A d d r e s s ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     r e t u r n   ( R E A D _ R E G ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C P A R ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   t h e   M e m o r y   t o   M e m o r y   D e s t i n a t i o n   a d d r e s s .  
     *   @ n o t e       I n t e r f a c e   u s e d   f o r   d i r e c t i o n   L L _ D M A _ D I R E C T I O N _ M E M O R Y _ T O _ M E M O R Y   o n l y .  
     *   @ r m t o l l   C M A R                   M A                         L L _ D M A _ G e t M 2 M D s t A d d r e s s  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ r e t v a l   B e t w e e n   M i n _ D a t a   =   0   a n d   M a x _ D a t a   =   0 x F F F F F F F F  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ G e t M 2 M D s t A d d r e s s ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     r e t u r n   ( R E A D _ R E G ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C M A R ) ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D M A _ L L _ E F _ F L A G _ M a n a g e m e n t   F L A G _ M a n a g e m e n t  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     G e t   C h a n n e l   1   g l o b a l   i n t e r r u p t   f l a g .  
     *   @ r m t o l l   I S R                     G I F 1                     L L _ D M A _ I s A c t i v e F l a g _ G I 1  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s A c t i v e F l a g _ G I 1 ( D M A _ T y p e D e f   * D M A x )  
 {  
     r e t u r n   ( R E A D _ B I T ( D M A x - > I S R ,   D M A _ I S R _ G I F 1 )   = =   ( D M A _ I S R _ G I F 1 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   C h a n n e l   2   g l o b a l   i n t e r r u p t   f l a g .  
     *   @ r m t o l l   I S R                     G I F 2                     L L _ D M A _ I s A c t i v e F l a g _ G I 2  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s A c t i v e F l a g _ G I 2 ( D M A _ T y p e D e f   * D M A x )  
 {  
     r e t u r n   ( R E A D _ B I T ( D M A x - > I S R ,   D M A _ I S R _ G I F 2 )   = =   ( D M A _ I S R _ G I F 2 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   C h a n n e l   3   g l o b a l   i n t e r r u p t   f l a g .  
     *   @ r m t o l l   I S R                     G I F 3                     L L _ D M A _ I s A c t i v e F l a g _ G I 3  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s A c t i v e F l a g _ G I 3 ( D M A _ T y p e D e f   * D M A x )  
 {  
     r e t u r n   ( R E A D _ B I T ( D M A x - > I S R ,   D M A _ I S R _ G I F 3 )   = =   ( D M A _ I S R _ G I F 3 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   C h a n n e l   4   g l o b a l   i n t e r r u p t   f l a g .  
     *   @ r m t o l l   I S R                     G I F 4                     L L _ D M A _ I s A c t i v e F l a g _ G I 4  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s A c t i v e F l a g _ G I 4 ( D M A _ T y p e D e f   * D M A x )  
 {  
     r e t u r n   ( R E A D _ B I T ( D M A x - > I S R ,   D M A _ I S R _ G I F 4 )   = =   ( D M A _ I S R _ G I F 4 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   C h a n n e l   5   g l o b a l   i n t e r r u p t   f l a g .  
     *   @ r m t o l l   I S R                     G I F 5                     L L _ D M A _ I s A c t i v e F l a g _ G I 5  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s A c t i v e F l a g _ G I 5 ( D M A _ T y p e D e f   * D M A x )  
 {  
     r e t u r n   ( R E A D _ B I T ( D M A x - > I S R ,   D M A _ I S R _ G I F 5 )   = =   ( D M A _ I S R _ G I F 5 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   C h a n n e l   6   g l o b a l   i n t e r r u p t   f l a g .  
     *   @ r m t o l l   I S R                     G I F 6                     L L _ D M A _ I s A c t i v e F l a g _ G I 6  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s A c t i v e F l a g _ G I 6 ( D M A _ T y p e D e f   * D M A x )  
 {  
     r e t u r n   ( R E A D _ B I T ( D M A x - > I S R ,   D M A _ I S R _ G I F 6 )   = =   ( D M A _ I S R _ G I F 6 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   C h a n n e l   7   g l o b a l   i n t e r r u p t   f l a g .  
     *   @ r m t o l l   I S R                     G I F 7                     L L _ D M A _ I s A c t i v e F l a g _ G I 7  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s A c t i v e F l a g _ G I 7 ( D M A _ T y p e D e f   * D M A x )  
 {  
     r e t u r n   ( R E A D _ B I T ( D M A x - > I S R ,   D M A _ I S R _ G I F 7 )   = =   ( D M A _ I S R _ G I F 7 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   C h a n n e l   1   t r a n s f e r   c o m p l e t e   f l a g .  
     *   @ r m t o l l   I S R                     T C I F 1                   L L _ D M A _ I s A c t i v e F l a g _ T C 1  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s A c t i v e F l a g _ T C 1 ( D M A _ T y p e D e f   * D M A x )  
 {  
     r e t u r n   ( R E A D _ B I T ( D M A x - > I S R ,   D M A _ I S R _ T C I F 1 )   = =   ( D M A _ I S R _ T C I F 1 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   C h a n n e l   2   t r a n s f e r   c o m p l e t e   f l a g .  
     *   @ r m t o l l   I S R                     T C I F 2                   L L _ D M A _ I s A c t i v e F l a g _ T C 2  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s A c t i v e F l a g _ T C 2 ( D M A _ T y p e D e f   * D M A x )  
 {  
     r e t u r n   ( R E A D _ B I T ( D M A x - > I S R ,   D M A _ I S R _ T C I F 2 )   = =   ( D M A _ I S R _ T C I F 2 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   C h a n n e l   3   t r a n s f e r   c o m p l e t e   f l a g .  
     *   @ r m t o l l   I S R                     T C I F 3                   L L _ D M A _ I s A c t i v e F l a g _ T C 3  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s A c t i v e F l a g _ T C 3 ( D M A _ T y p e D e f   * D M A x )  
 {  
     r e t u r n   ( R E A D _ B I T ( D M A x - > I S R ,   D M A _ I S R _ T C I F 3 )   = =   ( D M A _ I S R _ T C I F 3 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   C h a n n e l   4   t r a n s f e r   c o m p l e t e   f l a g .  
     *   @ r m t o l l   I S R                     T C I F 4                   L L _ D M A _ I s A c t i v e F l a g _ T C 4  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s A c t i v e F l a g _ T C 4 ( D M A _ T y p e D e f   * D M A x )  
 {  
     r e t u r n   ( R E A D _ B I T ( D M A x - > I S R ,   D M A _ I S R _ T C I F 4 )   = =   ( D M A _ I S R _ T C I F 4 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   C h a n n e l   5   t r a n s f e r   c o m p l e t e   f l a g .  
     *   @ r m t o l l   I S R                     T C I F 5                   L L _ D M A _ I s A c t i v e F l a g _ T C 5  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s A c t i v e F l a g _ T C 5 ( D M A _ T y p e D e f   * D M A x )  
 {  
     r e t u r n   ( R E A D _ B I T ( D M A x - > I S R ,   D M A _ I S R _ T C I F 5 )   = =   ( D M A _ I S R _ T C I F 5 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   C h a n n e l   6   t r a n s f e r   c o m p l e t e   f l a g .  
     *   @ r m t o l l   I S R                     T C I F 6                   L L _ D M A _ I s A c t i v e F l a g _ T C 6  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s A c t i v e F l a g _ T C 6 ( D M A _ T y p e D e f   * D M A x )  
 {  
     r e t u r n   ( R E A D _ B I T ( D M A x - > I S R ,   D M A _ I S R _ T C I F 6 )   = =   ( D M A _ I S R _ T C I F 6 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   C h a n n e l   7   t r a n s f e r   c o m p l e t e   f l a g .  
     *   @ r m t o l l   I S R                     T C I F 7                   L L _ D M A _ I s A c t i v e F l a g _ T C 7  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s A c t i v e F l a g _ T C 7 ( D M A _ T y p e D e f   * D M A x )  
 {  
     r e t u r n   ( R E A D _ B I T ( D M A x - > I S R ,   D M A _ I S R _ T C I F 7 )   = =   ( D M A _ I S R _ T C I F 7 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   C h a n n e l   1   h a l f   t r a n s f e r   f l a g .  
     *   @ r m t o l l   I S R                     H T I F 1                   L L _ D M A _ I s A c t i v e F l a g _ H T 1  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s A c t i v e F l a g _ H T 1 ( D M A _ T y p e D e f   * D M A x )  
 {  
     r e t u r n   ( R E A D _ B I T ( D M A x - > I S R ,   D M A _ I S R _ H T I F 1 )   = =   ( D M A _ I S R _ H T I F 1 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   C h a n n e l   2   h a l f   t r a n s f e r   f l a g .  
     *   @ r m t o l l   I S R                     H T I F 2                   L L _ D M A _ I s A c t i v e F l a g _ H T 2  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s A c t i v e F l a g _ H T 2 ( D M A _ T y p e D e f   * D M A x )  
 {  
     r e t u r n   ( R E A D _ B I T ( D M A x - > I S R ,   D M A _ I S R _ H T I F 2 )   = =   ( D M A _ I S R _ H T I F 2 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   C h a n n e l   3   h a l f   t r a n s f e r   f l a g .  
     *   @ r m t o l l   I S R                     H T I F 3                   L L _ D M A _ I s A c t i v e F l a g _ H T 3  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s A c t i v e F l a g _ H T 3 ( D M A _ T y p e D e f   * D M A x )  
 {  
     r e t u r n   ( R E A D _ B I T ( D M A x - > I S R ,   D M A _ I S R _ H T I F 3 )   = =   ( D M A _ I S R _ H T I F 3 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   C h a n n e l   4   h a l f   t r a n s f e r   f l a g .  
     *   @ r m t o l l   I S R                     H T I F 4                   L L _ D M A _ I s A c t i v e F l a g _ H T 4  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s A c t i v e F l a g _ H T 4 ( D M A _ T y p e D e f   * D M A x )  
 {  
     r e t u r n   ( R E A D _ B I T ( D M A x - > I S R ,   D M A _ I S R _ H T I F 4 )   = =   ( D M A _ I S R _ H T I F 4 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   C h a n n e l   5   h a l f   t r a n s f e r   f l a g .  
     *   @ r m t o l l   I S R                     H T I F 5                   L L _ D M A _ I s A c t i v e F l a g _ H T 5  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s A c t i v e F l a g _ H T 5 ( D M A _ T y p e D e f   * D M A x )  
 {  
     r e t u r n   ( R E A D _ B I T ( D M A x - > I S R ,   D M A _ I S R _ H T I F 5 )   = =   ( D M A _ I S R _ H T I F 5 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   C h a n n e l   6   h a l f   t r a n s f e r   f l a g .  
     *   @ r m t o l l   I S R                     H T I F 6                   L L _ D M A _ I s A c t i v e F l a g _ H T 6  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s A c t i v e F l a g _ H T 6 ( D M A _ T y p e D e f   * D M A x )  
 {  
     r e t u r n   ( R E A D _ B I T ( D M A x - > I S R ,   D M A _ I S R _ H T I F 6 )   = =   ( D M A _ I S R _ H T I F 6 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   C h a n n e l   7   h a l f   t r a n s f e r   f l a g .  
     *   @ r m t o l l   I S R                     H T I F 7                   L L _ D M A _ I s A c t i v e F l a g _ H T 7  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s A c t i v e F l a g _ H T 7 ( D M A _ T y p e D e f   * D M A x )  
 {  
     r e t u r n   ( R E A D _ B I T ( D M A x - > I S R ,   D M A _ I S R _ H T I F 7 )   = =   ( D M A _ I S R _ H T I F 7 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   C h a n n e l   1   t r a n s f e r   e r r o r   f l a g .  
     *   @ r m t o l l   I S R                     T E I F 1                   L L _ D M A _ I s A c t i v e F l a g _ T E 1  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s A c t i v e F l a g _ T E 1 ( D M A _ T y p e D e f   * D M A x )  
 {  
     r e t u r n   ( R E A D _ B I T ( D M A x - > I S R ,   D M A _ I S R _ T E I F 1 )   = =   ( D M A _ I S R _ T E I F 1 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   C h a n n e l   2   t r a n s f e r   e r r o r   f l a g .  
     *   @ r m t o l l   I S R                     T E I F 2                   L L _ D M A _ I s A c t i v e F l a g _ T E 2  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s A c t i v e F l a g _ T E 2 ( D M A _ T y p e D e f   * D M A x )  
 {  
     r e t u r n   ( R E A D _ B I T ( D M A x - > I S R ,   D M A _ I S R _ T E I F 2 )   = =   ( D M A _ I S R _ T E I F 2 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   C h a n n e l   3   t r a n s f e r   e r r o r   f l a g .  
     *   @ r m t o l l   I S R                     T E I F 3                   L L _ D M A _ I s A c t i v e F l a g _ T E 3  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s A c t i v e F l a g _ T E 3 ( D M A _ T y p e D e f   * D M A x )  
 {  
     r e t u r n   ( R E A D _ B I T ( D M A x - > I S R ,   D M A _ I S R _ T E I F 3 )   = =   ( D M A _ I S R _ T E I F 3 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   C h a n n e l   4   t r a n s f e r   e r r o r   f l a g .  
     *   @ r m t o l l   I S R                     T E I F 4                   L L _ D M A _ I s A c t i v e F l a g _ T E 4  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s A c t i v e F l a g _ T E 4 ( D M A _ T y p e D e f   * D M A x )  
 {  
     r e t u r n   ( R E A D _ B I T ( D M A x - > I S R ,   D M A _ I S R _ T E I F 4 )   = =   ( D M A _ I S R _ T E I F 4 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   C h a n n e l   5   t r a n s f e r   e r r o r   f l a g .  
     *   @ r m t o l l   I S R                     T E I F 5                   L L _ D M A _ I s A c t i v e F l a g _ T E 5  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s A c t i v e F l a g _ T E 5 ( D M A _ T y p e D e f   * D M A x )  
 {  
     r e t u r n   ( R E A D _ B I T ( D M A x - > I S R ,   D M A _ I S R _ T E I F 5 )   = =   ( D M A _ I S R _ T E I F 5 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   C h a n n e l   6   t r a n s f e r   e r r o r   f l a g .  
     *   @ r m t o l l   I S R                     T E I F 6                   L L _ D M A _ I s A c t i v e F l a g _ T E 6  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s A c t i v e F l a g _ T E 6 ( D M A _ T y p e D e f   * D M A x )  
 {  
     r e t u r n   ( R E A D _ B I T ( D M A x - > I S R ,   D M A _ I S R _ T E I F 6 )   = =   ( D M A _ I S R _ T E I F 6 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   C h a n n e l   7   t r a n s f e r   e r r o r   f l a g .  
     *   @ r m t o l l   I S R                     T E I F 7                   L L _ D M A _ I s A c t i v e F l a g _ T E 7  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s A c t i v e F l a g _ T E 7 ( D M A _ T y p e D e f   * D M A x )  
 {  
     r e t u r n   ( R E A D _ B I T ( D M A x - > I S R ,   D M A _ I S R _ T E I F 7 )   = =   ( D M A _ I S R _ T E I F 7 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   C h a n n e l   1   g l o b a l   i n t e r r u p t   f l a g .  
     *   @ r m t o l l   I F C R                   C G I F 1                   L L _ D M A _ C l e a r F l a g _ G I 1  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ C l e a r F l a g _ G I 1 ( D M A _ T y p e D e f   * D M A x )  
 {  
     W R I T E _ R E G ( D M A x - > I F C R ,   D M A _ I F C R _ C G I F 1 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   C h a n n e l   2   g l o b a l   i n t e r r u p t   f l a g .  
     *   @ r m t o l l   I F C R                   C G I F 2                   L L _ D M A _ C l e a r F l a g _ G I 2  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ C l e a r F l a g _ G I 2 ( D M A _ T y p e D e f   * D M A x )  
 {  
     W R I T E _ R E G ( D M A x - > I F C R ,   D M A _ I F C R _ C G I F 2 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   C h a n n e l   3   g l o b a l   i n t e r r u p t   f l a g .  
     *   @ r m t o l l   I F C R                   C G I F 3                   L L _ D M A _ C l e a r F l a g _ G I 3  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ C l e a r F l a g _ G I 3 ( D M A _ T y p e D e f   * D M A x )  
 {  
     W R I T E _ R E G ( D M A x - > I F C R ,   D M A _ I F C R _ C G I F 3 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   C h a n n e l   4   g l o b a l   i n t e r r u p t   f l a g .  
     *   @ r m t o l l   I F C R                   C G I F 4                   L L _ D M A _ C l e a r F l a g _ G I 4  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ C l e a r F l a g _ G I 4 ( D M A _ T y p e D e f   * D M A x )  
 {  
     W R I T E _ R E G ( D M A x - > I F C R ,   D M A _ I F C R _ C G I F 4 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   C h a n n e l   5   g l o b a l   i n t e r r u p t   f l a g .  
     *   @ r m t o l l   I F C R                   C G I F 5                   L L _ D M A _ C l e a r F l a g _ G I 5  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ C l e a r F l a g _ G I 5 ( D M A _ T y p e D e f   * D M A x )  
 {  
     W R I T E _ R E G ( D M A x - > I F C R ,   D M A _ I F C R _ C G I F 5 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   C h a n n e l   6   g l o b a l   i n t e r r u p t   f l a g .  
     *   @ r m t o l l   I F C R                   C G I F 6                   L L _ D M A _ C l e a r F l a g _ G I 6  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ C l e a r F l a g _ G I 6 ( D M A _ T y p e D e f   * D M A x )  
 {  
     W R I T E _ R E G ( D M A x - > I F C R ,   D M A _ I F C R _ C G I F 6 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   C h a n n e l   7   g l o b a l   i n t e r r u p t   f l a g .  
     *   @ r m t o l l   I F C R                   C G I F 7                   L L _ D M A _ C l e a r F l a g _ G I 7  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ C l e a r F l a g _ G I 7 ( D M A _ T y p e D e f   * D M A x )  
 {  
     W R I T E _ R E G ( D M A x - > I F C R ,   D M A _ I F C R _ C G I F 7 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   C h a n n e l   1     t r a n s f e r   c o m p l e t e   f l a g .  
     *   @ r m t o l l   I F C R                   C T C I F 1                 L L _ D M A _ C l e a r F l a g _ T C 1  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ C l e a r F l a g _ T C 1 ( D M A _ T y p e D e f   * D M A x )  
 {  
     W R I T E _ R E G ( D M A x - > I F C R ,   D M A _ I F C R _ C T C I F 1 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   C h a n n e l   2     t r a n s f e r   c o m p l e t e   f l a g .  
     *   @ r m t o l l   I F C R                   C T C I F 2                 L L _ D M A _ C l e a r F l a g _ T C 2  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ C l e a r F l a g _ T C 2 ( D M A _ T y p e D e f   * D M A x )  
 {  
     W R I T E _ R E G ( D M A x - > I F C R ,   D M A _ I F C R _ C T C I F 2 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   C h a n n e l   3     t r a n s f e r   c o m p l e t e   f l a g .  
     *   @ r m t o l l   I F C R                   C T C I F 3                 L L _ D M A _ C l e a r F l a g _ T C 3  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ C l e a r F l a g _ T C 3 ( D M A _ T y p e D e f   * D M A x )  
 {  
     W R I T E _ R E G ( D M A x - > I F C R ,   D M A _ I F C R _ C T C I F 3 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   C h a n n e l   4     t r a n s f e r   c o m p l e t e   f l a g .  
     *   @ r m t o l l   I F C R                   C T C I F 4                 L L _ D M A _ C l e a r F l a g _ T C 4  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ C l e a r F l a g _ T C 4 ( D M A _ T y p e D e f   * D M A x )  
 {  
     W R I T E _ R E G ( D M A x - > I F C R ,   D M A _ I F C R _ C T C I F 4 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   C h a n n e l   5     t r a n s f e r   c o m p l e t e   f l a g .  
     *   @ r m t o l l   I F C R                   C T C I F 5                 L L _ D M A _ C l e a r F l a g _ T C 5  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ C l e a r F l a g _ T C 5 ( D M A _ T y p e D e f   * D M A x )  
 {  
     W R I T E _ R E G ( D M A x - > I F C R ,   D M A _ I F C R _ C T C I F 5 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   C h a n n e l   6     t r a n s f e r   c o m p l e t e   f l a g .  
     *   @ r m t o l l   I F C R                   C T C I F 6                 L L _ D M A _ C l e a r F l a g _ T C 6  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ C l e a r F l a g _ T C 6 ( D M A _ T y p e D e f   * D M A x )  
 {  
     W R I T E _ R E G ( D M A x - > I F C R ,   D M A _ I F C R _ C T C I F 6 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   C h a n n e l   7     t r a n s f e r   c o m p l e t e   f l a g .  
     *   @ r m t o l l   I F C R                   C T C I F 7                 L L _ D M A _ C l e a r F l a g _ T C 7  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ C l e a r F l a g _ T C 7 ( D M A _ T y p e D e f   * D M A x )  
 {  
     W R I T E _ R E G ( D M A x - > I F C R ,   D M A _ I F C R _ C T C I F 7 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   C h a n n e l   1     h a l f   t r a n s f e r   f l a g .  
     *   @ r m t o l l   I F C R                   C H T I F 1                 L L _ D M A _ C l e a r F l a g _ H T 1  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ C l e a r F l a g _ H T 1 ( D M A _ T y p e D e f   * D M A x )  
 {  
     W R I T E _ R E G ( D M A x - > I F C R ,   D M A _ I F C R _ C H T I F 1 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   C h a n n e l   2     h a l f   t r a n s f e r   f l a g .  
     *   @ r m t o l l   I F C R                   C H T I F 2                 L L _ D M A _ C l e a r F l a g _ H T 2  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ C l e a r F l a g _ H T 2 ( D M A _ T y p e D e f   * D M A x )  
 {  
     W R I T E _ R E G ( D M A x - > I F C R ,   D M A _ I F C R _ C H T I F 2 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   C h a n n e l   3     h a l f   t r a n s f e r   f l a g .  
     *   @ r m t o l l   I F C R                   C H T I F 3                 L L _ D M A _ C l e a r F l a g _ H T 3  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ C l e a r F l a g _ H T 3 ( D M A _ T y p e D e f   * D M A x )  
 {  
     W R I T E _ R E G ( D M A x - > I F C R ,   D M A _ I F C R _ C H T I F 3 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   C h a n n e l   4     h a l f   t r a n s f e r   f l a g .  
     *   @ r m t o l l   I F C R                   C H T I F 4                 L L _ D M A _ C l e a r F l a g _ H T 4  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ C l e a r F l a g _ H T 4 ( D M A _ T y p e D e f   * D M A x )  
 {  
     W R I T E _ R E G ( D M A x - > I F C R ,   D M A _ I F C R _ C H T I F 4 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   C h a n n e l   5     h a l f   t r a n s f e r   f l a g .  
     *   @ r m t o l l   I F C R                   C H T I F 5                 L L _ D M A _ C l e a r F l a g _ H T 5  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ C l e a r F l a g _ H T 5 ( D M A _ T y p e D e f   * D M A x )  
 {  
     W R I T E _ R E G ( D M A x - > I F C R ,   D M A _ I F C R _ C H T I F 5 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   C h a n n e l   6     h a l f   t r a n s f e r   f l a g .  
     *   @ r m t o l l   I F C R                   C H T I F 6                 L L _ D M A _ C l e a r F l a g _ H T 6  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ C l e a r F l a g _ H T 6 ( D M A _ T y p e D e f   * D M A x )  
 {  
     W R I T E _ R E G ( D M A x - > I F C R ,   D M A _ I F C R _ C H T I F 6 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   C h a n n e l   7     h a l f   t r a n s f e r   f l a g .  
     *   @ r m t o l l   I F C R                   C H T I F 7                 L L _ D M A _ C l e a r F l a g _ H T 7  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ C l e a r F l a g _ H T 7 ( D M A _ T y p e D e f   * D M A x )  
 {  
     W R I T E _ R E G ( D M A x - > I F C R ,   D M A _ I F C R _ C H T I F 7 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   C h a n n e l   1   t r a n s f e r   e r r o r   f l a g .  
     *   @ r m t o l l   I F C R                   C T E I F 1                 L L _ D M A _ C l e a r F l a g _ T E 1  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ C l e a r F l a g _ T E 1 ( D M A _ T y p e D e f   * D M A x )  
 {  
     W R I T E _ R E G ( D M A x - > I F C R ,   D M A _ I F C R _ C T E I F 1 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   C h a n n e l   2   t r a n s f e r   e r r o r   f l a g .  
     *   @ r m t o l l   I F C R                   C T E I F 2                 L L _ D M A _ C l e a r F l a g _ T E 2  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ C l e a r F l a g _ T E 2 ( D M A _ T y p e D e f   * D M A x )  
 {  
     W R I T E _ R E G ( D M A x - > I F C R ,   D M A _ I F C R _ C T E I F 2 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   C h a n n e l   3   t r a n s f e r   e r r o r   f l a g .  
     *   @ r m t o l l   I F C R                   C T E I F 3                 L L _ D M A _ C l e a r F l a g _ T E 3  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ C l e a r F l a g _ T E 3 ( D M A _ T y p e D e f   * D M A x )  
 {  
     W R I T E _ R E G ( D M A x - > I F C R ,   D M A _ I F C R _ C T E I F 3 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   C h a n n e l   4   t r a n s f e r   e r r o r   f l a g .  
     *   @ r m t o l l   I F C R                   C T E I F 4                 L L _ D M A _ C l e a r F l a g _ T E 4  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ C l e a r F l a g _ T E 4 ( D M A _ T y p e D e f   * D M A x )  
 {  
     W R I T E _ R E G ( D M A x - > I F C R ,   D M A _ I F C R _ C T E I F 4 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   C h a n n e l   5   t r a n s f e r   e r r o r   f l a g .  
     *   @ r m t o l l   I F C R                   C T E I F 5                 L L _ D M A _ C l e a r F l a g _ T E 5  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ C l e a r F l a g _ T E 5 ( D M A _ T y p e D e f   * D M A x )  
 {  
     W R I T E _ R E G ( D M A x - > I F C R ,   D M A _ I F C R _ C T E I F 5 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   C h a n n e l   6   t r a n s f e r   e r r o r   f l a g .  
     *   @ r m t o l l   I F C R                   C T E I F 6                 L L _ D M A _ C l e a r F l a g _ T E 6  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ C l e a r F l a g _ T E 6 ( D M A _ T y p e D e f   * D M A x )  
 {  
     W R I T E _ R E G ( D M A x - > I F C R ,   D M A _ I F C R _ C T E I F 6 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   C h a n n e l   7   t r a n s f e r   e r r o r   f l a g .  
     *   @ r m t o l l   I F C R                   C T E I F 7                 L L _ D M A _ C l e a r F l a g _ T E 7  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ C l e a r F l a g _ T E 7 ( D M A _ T y p e D e f   * D M A x )  
 {  
     W R I T E _ R E G ( D M A x - > I F C R ,   D M A _ I F C R _ C T E I F 7 ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D M A _ L L _ E F _ I T _ M a n a g e m e n t   I T _ M a n a g e m e n t  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   T r a n s f e r   c o m p l e t e   i n t e r r u p t .  
     *   @ r m t o l l   C C R                     T C I E                     L L _ D M A _ E n a b l e I T _ T C  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ E n a b l e I T _ T C ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     S E T _ B I T ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C C R ,   D M A _ C C R _ T C I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   H a l f   t r a n s f e r   i n t e r r u p t .  
     *   @ r m t o l l   C C R                     H T I E                     L L _ D M A _ E n a b l e I T _ H T  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ E n a b l e I T _ H T ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     S E T _ B I T ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C C R ,   D M A _ C C R _ H T I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   T r a n s f e r   e r r o r   i n t e r r u p t .  
     *   @ r m t o l l   C C R                     T E I E                     L L _ D M A _ E n a b l e I T _ T E  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ E n a b l e I T _ T E ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     S E T _ B I T ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C C R ,   D M A _ C C R _ T E I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   T r a n s f e r   c o m p l e t e   i n t e r r u p t .  
     *   @ r m t o l l   C C R                     T C I E                     L L _ D M A _ D i s a b l e I T _ T C  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ D i s a b l e I T _ T C ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     C L E A R _ B I T ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C C R ,   D M A _ C C R _ T C I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   H a l f   t r a n s f e r   i n t e r r u p t .  
     *   @ r m t o l l   C C R                     H T I E                     L L _ D M A _ D i s a b l e I T _ H T  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ D i s a b l e I T _ H T ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     C L E A R _ B I T ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C C R ,   D M A _ C C R _ H T I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   T r a n s f e r   e r r o r   i n t e r r u p t .  
     *   @ r m t o l l   C C R                     T E I E                     L L _ D M A _ D i s a b l e I T _ T E  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ D M A _ D i s a b l e I T _ T E ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     C L E A R _ B I T ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C C R ,   D M A _ C C R _ T E I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   T r a n s f e r   c o m p l e t e   I n t e r r u p t   i s   e n a b l e d .  
     *   @ r m t o l l   C C R                     T C I E                     L L _ D M A _ I s E n a b l e d I T _ T C  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s E n a b l e d I T _ T C ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     r e t u r n   ( R E A D _ B I T ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C C R ,  
                                       D M A _ C C R _ T C I E )   = =   ( D M A _ C C R _ T C I E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   H a l f   t r a n s f e r   I n t e r r u p t   i s   e n a b l e d .  
     *   @ r m t o l l   C C R                     H T I E                     L L _ D M A _ I s E n a b l e d I T _ H T  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s E n a b l e d I T _ H T ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     r e t u r n   ( R E A D _ B I T ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C C R ,  
                                       D M A _ C C R _ H T I E )   = =   ( D M A _ C C R _ H T I E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   T r a n s f e r   e r r o r   I n t e r r u p t   i s   e n a b l e d .  
     *   @ r m t o l l   C C R                     T E I E                     L L _ D M A _ I s E n a b l e d I T _ T E  
     *   @ p a r a m     D M A x   D M A x   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ D M A _ C H A N N E L _ 7  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ D M A _ I s E n a b l e d I T _ T E ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     r e t u r n   ( R E A D _ B I T ( ( ( D M A _ C h a n n e l _ T y p e D e f   * ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) D M A x   +   C H A N N E L _ O F F S E T _ T A B [ C h a n n e l   -   1 U ] ) ) ) - > C C R ,  
                                       D M A _ C C R _ T E I E )   = =   ( D M A _ C C R _ T E I E ) ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 # i f   d e f i n e d ( U S E _ F U L L _ L L _ D R I V E R )  
 / * *   @ d e f g r o u p   D M A _ L L _ E F _ I n i t   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *   @ {  
     * /  
  
 u i n t 3 2 _ t   L L _ D M A _ I n i t ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l ,   L L _ D M A _ I n i t T y p e D e f   * D M A _ I n i t S t r u c t ) ;  
 u i n t 3 2 _ t   L L _ D M A _ D e I n i t ( D M A _ T y p e D e f   * D M A x ,   u i n t 3 2 _ t   C h a n n e l ) ;  
 v o i d   L L _ D M A _ S t r u c t I n i t ( L L _ D M A _ I n i t T y p e D e f   * D M A _ I n i t S t r u c t ) ;  
  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / *   U S E _ F U L L _ L L _ D R I V E R   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   D M A 1   | |   D M A 2   * /  
  
 / * *  
     *   @ }  
     * /  
  
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
 # e n d i f   / *   _ _ S T M 3 2 F 1 x x _ L L _ D M A _ H   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  