??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ l l _ s p i . h  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H e a d e r   f i l e   o f   S P I   L L   m o d u l e .  
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
 # i f n d e f   S T M 3 2 F 1 x x _ L L _ S P I _ H  
 # d e f i n e   S T M 3 2 F 1 x x _ L L _ S P I _ H  
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
 # i f   d e f i n e d   ( S P I 1 )   | |   d e f i n e d   ( S P I 2 )   | |   d e f i n e d   ( S P I 3 )  
  
 / * *   @ d e f g r o u p   S P I _ L L   S P I  
     *   @ {  
     * /  
  
 / *   P r i v a t e   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i f   d e f i n e d ( U S E _ F U L L _ L L _ D R I V E R )  
 / * *   @ d e f g r o u p   S P I _ L L _ E S _ I N I T   S P I   E x p o r t e d   I n i t   s t r u c t u r e  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S P I   I n i t   s t r u c t u r e s   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   T r a n s f e r D i r e c t i o n ;               / * ! <   S p e c i f i e s   t h e   S P I   u n i d i r e c t i o n a l   o r   b i d i r e c t i o n a l   d a t a   m o d e .  
                                                                                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   S P I _ L L _ E C _ T R A N S F E R _ M O D E .  
  
                                                                                   T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ S P I _ S e t T r a n s f e r D i r e c t i o n ( ) . * /  
  
     u i n t 3 2 _ t   M o d e ;                                         / * ! <   S p e c i f i e s   t h e   S P I   m o d e   ( M a s t e r / S l a v e ) .  
                                                                                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   S P I _ L L _ E C _ M O D E .  
  
                                                                                   T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ S P I _ S e t M o d e ( ) . * /  
  
     u i n t 3 2 _ t   D a t a W i d t h ;                               / * ! <   S p e c i f i e s   t h e   S P I   d a t a   w i d t h .  
                                                                                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   S P I _ L L _ E C _ D A T A W I D T H .  
  
                                                                                   T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ S P I _ S e t D a t a W i d t h ( ) . * /  
  
     u i n t 3 2 _ t   C l o c k P o l a r i t y ;                       / * ! <   S p e c i f i e s   t h e   s e r i a l   c l o c k   s t e a d y   s t a t e .  
                                                                                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   S P I _ L L _ E C _ P O L A R I T Y .  
  
                                                                                   T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ S P I _ S e t C l o c k P o l a r i t y ( ) . * /  
  
     u i n t 3 2 _ t   C l o c k P h a s e ;                             / * ! <   S p e c i f i e s   t h e   c l o c k   a c t i v e   e d g e   f o r   t h e   b i t   c a p t u r e .  
                                                                                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   S P I _ L L _ E C _ P H A S E .  
  
                                                                                   T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ S P I _ S e t C l o c k P h a s e ( ) . * /  
  
     u i n t 3 2 _ t   N S S ;                                           / * ! <   S p e c i f i e s   w h e t h e r   t h e   N S S   s i g n a l   i s   m a n a g e d   b y   h a r d w a r e   ( N S S   p i n )   o r   b y   s o f t w a r e   u s i n g   t h e   S S I   b i t .  
                                                                                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   S P I _ L L _ E C _ N S S _ M O D E .  
  
                                                                                   T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ S P I _ S e t N S S M o d e ( ) . * /  
  
     u i n t 3 2 _ t   B a u d R a t e ;                                 / * ! <   S p e c i f i e s   t h e   B a u d R a t e   p r e s c a l e r   v a l u e   w h i c h   w i l l   b e   u s e d   t o   c o n f i g u r e   t h e   t r a n s m i t   a n d   r e c e i v e   S C K   c l o c k .  
                                                                                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   S P I _ L L _ E C _ B A U D R A T E P R E S C A L E R .  
                                                                                   @ n o t e   T h e   c o m m u n i c a t i o n   c l o c k   i s   d e r i v e d   f r o m   t h e   m a s t e r   c l o c k .   T h e   s l a v e   c l o c k   d o e s   n o t   n e e d   t o   b e   s e t .  
  
                                                                                   T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ S P I _ S e t B a u d R a t e P r e s c a l e r ( ) . * /  
  
     u i n t 3 2 _ t   B i t O r d e r ;                                 / * ! <   S p e c i f i e s   w h e t h e r   d a t a   t r a n s f e r s   s t a r t   f r o m   M S B   o r   L S B   b i t .  
                                                                                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   S P I _ L L _ E C _ B I T _ O R D E R .  
  
                                                                                   T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ S P I _ S e t T r a n s f e r B i t O r d e r ( ) . * /  
  
     u i n t 3 2 _ t   C R C C a l c u l a t i o n ;                     / * ! <   S p e c i f i e s   i f   t h e   C R C   c a l c u l a t i o n   i s   e n a b l e d   o r   n o t .  
                                                                                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   S P I _ L L _ E C _ C R C _ C A L C U L A T I O N .  
  
                                                                                   T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n s   @ r e f   L L _ S P I _ E n a b l e C R C ( )   a n d   @ r e f   L L _ S P I _ D i s a b l e C R C ( ) . * /  
  
     u i n t 3 2 _ t   C R C P o l y ;                                   / * ! <   S p e c i f i e s   t h e   p o l y n o m i a l   u s e d   f o r   t h e   C R C   c a l c u l a t i o n .  
                                                                                   T h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 0 0   a n d   M a x _ D a t a   =   0 x F F F F .  
  
                                                                                   T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ S P I _ S e t C R C P o l y n o m i a l ( ) . * /  
  
 }   L L _ S P I _ I n i t T y p e D e f ;  
  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / *   U S E _ F U L L _ L L _ D R I V E R   * /  
  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   S P I _ L L _ E x p o r t e d _ C o n s t a n t s   S P I   E x p o r t e d   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   S P I _ L L _ E C _ G E T _ F L A G   G e t   F l a g s   D e f i n e s  
     *   @ b r i e f         F l a g s   d e f i n e s   w h i c h   c a n   b e   u s e d   w i t h   L L _ S P I _ R e a d R e g   f u n c t i o n  
     *   @ {  
     * /  
 # d e f i n e   L L _ S P I _ S R _ R X N E                                           S P I _ S R _ R X N E                               / * ! <   R x   b u f f e r   n o t   e m p t y   f l a g                   * /  
 # d e f i n e   L L _ S P I _ S R _ T X E                                             S P I _ S R _ T X E                                 / * ! <   T x   b u f f e r   e m p t y   f l a g                           * /  
 # d e f i n e   L L _ S P I _ S R _ B S Y                                             S P I _ S R _ B S Y                                 / * ! <   B u s y   f l a g                                                 * /  
 # d e f i n e   L L _ S P I _ S R _ C R C E R R                                       S P I _ S R _ C R C E R R                           / * ! <   C R C   e r r o r   f l a g                                       * /  
 # d e f i n e   L L _ S P I _ S R _ M O D F                                           S P I _ S R _ M O D F                               / * ! <   M o d e   f a u l t   f l a g                                     * /  
 # d e f i n e   L L _ S P I _ S R _ O V R                                             S P I _ S R _ O V R                                 / * ! <   O v e r r u n   f l a g                                           * /  
 # d e f i n e   L L _ S P I _ S R _ F R E                                             S P I _ S R _ F R E                                 / * ! <   T I   m o d e   f r a m e   f o r m a t   e r r o r   f l a g     * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S P I _ L L _ E C _ I T   I T   D e f i n e s  
     *   @ b r i e f         I T   d e f i n e s   w h i c h   c a n   b e   u s e d   w i t h   L L _ S P I _ R e a d R e g   a n d     L L _ S P I _ W r i t e R e g   f u n c t i o n s  
     *   @ {  
     * /  
 # d e f i n e   L L _ S P I _ C R 2 _ R X N E I E                                     S P I _ C R 2 _ R X N E I E                         / * ! <   R x   b u f f e r   n o t   e m p t y   i n t e r r u p t   e n a b l e   * /  
 # d e f i n e   L L _ S P I _ C R 2 _ T X E I E                                       S P I _ C R 2 _ T X E I E                           / * ! <   T x   b u f f e r   e m p t y   i n t e r r u p t   e n a b l e           * /  
 # d e f i n e   L L _ S P I _ C R 2 _ E R R I E                                       S P I _ C R 2 _ E R R I E                           / * ! <   E r r o r   i n t e r r u p t   e n a b l e                               * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S P I _ L L _ E C _ M O D E   O p e r a t i o n   M o d e  
     *   @ {  
     * /  
 # d e f i n e   L L _ S P I _ M O D E _ M A S T E R                                   ( S P I _ C R 1 _ M S T R   |   S P I _ C R 1 _ S S I )         / * ! <   M a s t e r   c o n f i g u r a t i o n     * /  
 # d e f i n e   L L _ S P I _ M O D E _ S L A V E                                     0 x 0 0 0 0 0 0 0 0 U                                           / * ! <   S l a v e   c o n f i g u r a t i o n       * /  
 / * *  
     *   @ }  
     * /  
  
  
 / * *   @ d e f g r o u p   S P I _ L L _ E C _ P H A S E   C l o c k   P h a s e  
     *   @ {  
     * /  
 # d e f i n e   L L _ S P I _ P H A S E _ 1 E D G E                                   0 x 0 0 0 0 0 0 0 0 U                               / * ! <   F i r s t   c l o c k   t r a n s i t i o n   i s   t h e   f i r s t   d a t a   c a p t u r e   e d g e     * /  
 # d e f i n e   L L _ S P I _ P H A S E _ 2 E D G E                                   ( S P I _ C R 1 _ C P H A )                         / * ! <   S e c o n d   c l o c k   t r a n s i t i o n   i s   t h e   f i r s t   d a t a   c a p t u r e   e d g e   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S P I _ L L _ E C _ P O L A R I T Y   C l o c k   P o l a r i t y  
     *   @ {  
     * /  
 # d e f i n e   L L _ S P I _ P O L A R I T Y _ L O W                                 0 x 0 0 0 0 0 0 0 0 U                               / * ! <   C l o c k   t o   0   w h e n   i d l e   * /  
 # d e f i n e   L L _ S P I _ P O L A R I T Y _ H I G H                               ( S P I _ C R 1 _ C P O L )                         / * ! <   C l o c k   t o   1   w h e n   i d l e   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S P I _ L L _ E C _ B A U D R A T E P R E S C A L E R   B a u d   R a t e   P r e s c a l e r  
     *   @ {  
     * /  
 # d e f i n e   L L _ S P I _ B A U D R A T E P R E S C A L E R _ D I V 2             0 x 0 0 0 0 0 0 0 0 U                                                                         / * ! <   B a u d R a t e   c o n t r o l   e q u a l   t o   f P C L K / 2       * /  
 # d e f i n e   L L _ S P I _ B A U D R A T E P R E S C A L E R _ D I V 4             ( S P I _ C R 1 _ B R _ 0 )                                                                   / * ! <   B a u d R a t e   c o n t r o l   e q u a l   t o   f P C L K / 4       * /  
 # d e f i n e   L L _ S P I _ B A U D R A T E P R E S C A L E R _ D I V 8             ( S P I _ C R 1 _ B R _ 1 )                                                                   / * ! <   B a u d R a t e   c o n t r o l   e q u a l   t o   f P C L K / 8       * /  
 # d e f i n e   L L _ S P I _ B A U D R A T E P R E S C A L E R _ D I V 1 6           ( S P I _ C R 1 _ B R _ 1   |   S P I _ C R 1 _ B R _ 0 )                                     / * ! <   B a u d R a t e   c o n t r o l   e q u a l   t o   f P C L K / 1 6     * /  
 # d e f i n e   L L _ S P I _ B A U D R A T E P R E S C A L E R _ D I V 3 2           ( S P I _ C R 1 _ B R _ 2 )                                                                   / * ! <   B a u d R a t e   c o n t r o l   e q u a l   t o   f P C L K / 3 2     * /  
 # d e f i n e   L L _ S P I _ B A U D R A T E P R E S C A L E R _ D I V 6 4           ( S P I _ C R 1 _ B R _ 2   |   S P I _ C R 1 _ B R _ 0 )                                     / * ! <   B a u d R a t e   c o n t r o l   e q u a l   t o   f P C L K / 6 4     * /  
 # d e f i n e   L L _ S P I _ B A U D R A T E P R E S C A L E R _ D I V 1 2 8         ( S P I _ C R 1 _ B R _ 2   |   S P I _ C R 1 _ B R _ 1 )                                     / * ! <   B a u d R a t e   c o n t r o l   e q u a l   t o   f P C L K / 1 2 8   * /  
 # d e f i n e   L L _ S P I _ B A U D R A T E P R E S C A L E R _ D I V 2 5 6         ( S P I _ C R 1 _ B R _ 2   |   S P I _ C R 1 _ B R _ 1   |   S P I _ C R 1 _ B R _ 0 )       / * ! <   B a u d R a t e   c o n t r o l   e q u a l   t o   f P C L K / 2 5 6   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S P I _ L L _ E C _ B I T _ O R D E R   T r a n s m i s s i o n   B i t   O r d e r  
     *   @ {  
     * /  
 # d e f i n e   L L _ S P I _ L S B _ F I R S T                                       ( S P I _ C R 1 _ L S B F I R S T )                 / * ! <   D a t a   i s   t r a n s m i t t e d / r e c e i v e d   w i t h   t h e   L S B   f i r s t   * /  
 # d e f i n e   L L _ S P I _ M S B _ F I R S T                                       0 x 0 0 0 0 0 0 0 0 U                               / * ! <   D a t a   i s   t r a n s m i t t e d / r e c e i v e d   w i t h   t h e   M S B   f i r s t   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S P I _ L L _ E C _ T R A N S F E R _ M O D E   T r a n s f e r   M o d e  
     *   @ {  
     * /  
 # d e f i n e   L L _ S P I _ F U L L _ D U P L E X                                   0 x 0 0 0 0 0 0 0 0 U                                                     / * ! <   F u l l - D u p l e x   m o d e .   R x   a n d   T x   t r a n s f e r   o n   2   l i n e s   * /  
 # d e f i n e   L L _ S P I _ S I M P L E X _ R X                                     ( S P I _ C R 1 _ R X O N L Y )                                           / * ! <   S i m p l e x   R x   m o d e .     R x   t r a n s f e r   o n l y   o n   1   l i n e         * /  
 # d e f i n e   L L _ S P I _ H A L F _ D U P L E X _ R X                             ( S P I _ C R 1 _ B I D I M O D E )                                       / * ! <   H a l f - D u p l e x   R x   m o d e .   R x   t r a n s f e r   o n   1   l i n e             * /  
 # d e f i n e   L L _ S P I _ H A L F _ D U P L E X _ T X                             ( S P I _ C R 1 _ B I D I M O D E   |   S P I _ C R 1 _ B I D I O E )     / * ! <   H a l f - D u p l e x   T x   m o d e .   T x   t r a n s f e r   o n   1   l i n e             * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S P I _ L L _ E C _ N S S _ M O D E   S l a v e   S e l e c t   P i n   M o d e  
     *   @ {  
     * /  
 # d e f i n e   L L _ S P I _ N S S _ S O F T                                         ( S P I _ C R 1 _ S S M )                                           / * ! <   N S S   m a n a g e d   i n t e r n a l l y .   N S S   p i n   n o t   u s e d   a n d   f r e e                             * /  
 # d e f i n e   L L _ S P I _ N S S _ H A R D _ I N P U T                             0 x 0 0 0 0 0 0 0 0 U                                               / * ! <   N S S   p i n   u s e d   i n   I n p u t .   O n l y   u s e d   i n   M a s t e r   m o d e                                 * /  
 # d e f i n e   L L _ S P I _ N S S _ H A R D _ O U T P U T                           ( ( ( u i n t 3 2 _ t ) S P I _ C R 2 _ S S O E   < <   1 6 U ) )   / * ! <   N S S   p i n   u s e d   i n   O u t p u t .   O n l y   u s e d   i n   S l a v e   m o d e   a s   c h i p   s e l e c t   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S P I _ L L _ E C _ D A T A W I D T H   D a t a w i d t h  
     *   @ {  
     * /  
 # d e f i n e   L L _ S P I _ D A T A W I D T H _ 8 B I T                             0 x 0 0 0 0 0 0 0 0 U                                               / * ! <   D a t a   l e n g t h   f o r   S P I   t r a n s f e r :     8   b i t s   * /  
 # d e f i n e   L L _ S P I _ D A T A W I D T H _ 1 6 B I T                           ( S P I _ C R 1 _ D F F )                                           / * ! <   D a t a   l e n g t h   f o r   S P I   t r a n s f e r :     1 6   b i t s   * /  
 / * *  
     *   @ }  
     * /  
 # i f   d e f i n e d ( U S E _ F U L L _ L L _ D R I V E R )  
  
 / * *   @ d e f g r o u p   S P I _ L L _ E C _ C R C _ C A L C U L A T I O N   C R C   C a l c u l a t i o n  
     *   @ {  
     * /  
 # d e f i n e   L L _ S P I _ C R C C A L C U L A T I O N _ D I S A B L E             0 x 0 0 0 0 0 0 0 0 U                               / * ! <   C R C   c a l c u l a t i o n   d i s a b l e d   * /  
 # d e f i n e   L L _ S P I _ C R C C A L C U L A T I O N _ E N A B L E               ( S P I _ C R 1 _ C R C E N )                       / * ! <   C R C   c a l c u l a t i o n   e n a b l e d     * /  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / *   U S E _ F U L L _ L L _ D R I V E R   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   S P I _ L L _ E x p o r t e d _ M a c r o s   S P I   E x p o r t e d   M a c r o s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   S P I _ L L _ E M _ W R I T E _ R E A D   C o m m o n   W r i t e   a n d   r e a d   r e g i s t e r s   M a c r o s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     W r i t e   a   v a l u e   i n   S P I   r e g i s t e r  
     *   @ p a r a m     _ _ I N S T A N C E _ _   S P I   I n s t a n c e  
     *   @ p a r a m     _ _ R E G _ _   R e g i s t e r   t o   b e   w r i t t e n  
     *   @ p a r a m     _ _ V A L U E _ _   V a l u e   t o   b e   w r i t t e n   i n   t h e   r e g i s t e r  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   L L _ S P I _ W r i t e R e g ( _ _ I N S T A N C E _ _ ,   _ _ R E G _ _ ,   _ _ V A L U E _ _ )   W R I T E _ R E G ( _ _ I N S T A N C E _ _ - > _ _ R E G _ _ ,   ( _ _ V A L U E _ _ ) )  
  
 / * *  
     *   @ b r i e f     R e a d   a   v a l u e   i n   S P I   r e g i s t e r  
     *   @ p a r a m     _ _ I N S T A N C E _ _   S P I   I n s t a n c e  
     *   @ p a r a m     _ _ R E G _ _   R e g i s t e r   t o   b e   r e a d  
     *   @ r e t v a l   R e g i s t e r   v a l u e  
     * /  
 # d e f i n e   L L _ S P I _ R e a d R e g ( _ _ I N S T A N C E _ _ ,   _ _ R E G _ _ )   R E A D _ R E G ( _ _ I N S T A N C E _ _ - > _ _ R E G _ _ )  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   S P I _ L L _ E x p o r t e d _ F u n c t i o n s   S P I   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   S P I _ L L _ E F _ C o n f i g u r a t i o n   C o n f i g u r a t i o n  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   S P I   p e r i p h e r a l  
     *   @ r m t o l l   C R 1                     S P E                       L L _ S P I _ E n a b l e  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S P I _ E n a b l e ( S P I _ T y p e D e f   * S P I x )  
 {  
     S E T _ B I T ( S P I x - > C R 1 ,   S P I _ C R 1 _ S P E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   S P I   p e r i p h e r a l  
     *   @ n o t e       W h e n   d i s a b l i n g   t h e   S P I ,   f o l l o w   t h e   p r o c e d u r e   d e s c r i b e d   i n   t h e   R e f e r e n c e   M a n u a l .  
     *   @ r m t o l l   C R 1                     S P E                       L L _ S P I _ D i s a b l e  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S P I _ D i s a b l e ( S P I _ T y p e D e f   * S P I x )  
 {  
     C L E A R _ B I T ( S P I x - > C R 1 ,   S P I _ C R 1 _ S P E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   S P I   p e r i p h e r a l   i s   e n a b l e d  
     *   @ r m t o l l   C R 1                     S P E                       L L _ S P I _ I s E n a b l e d  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ S P I _ I s E n a b l e d ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( ( R E A D _ B I T ( S P I x - > C R 1 ,   S P I _ C R 1 _ S P E )   = =   ( S P I _ C R 1 _ S P E ) )   ?   1 U L   :   0 U L ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   S P I   o p e r a t i o n   m o d e   t o   M a s t e r   o r   S l a v e  
     *   @ n o t e       T h i s   b i t   s h o u l d   n o t   b e   c h a n g e d   w h e n   c o m m u n i c a t i o n   i s   o n g o i n g .  
     *   @ r m t o l l   C R 1                     M S T R                     L L _ S P I _ S e t M o d e \ n  
     *                   C R 1                     S S I                       L L _ S P I _ S e t M o d e  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ p a r a m     M o d e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ S P I _ M O D E _ M A S T E R  
     *                   @ a r g   @ r e f   L L _ S P I _ M O D E _ S L A V E  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S P I _ S e t M o d e ( S P I _ T y p e D e f   * S P I x ,   u i n t 3 2 _ t   M o d e )  
 {  
     M O D I F Y _ R E G ( S P I x - > C R 1 ,   S P I _ C R 1 _ M S T R   |   S P I _ C R 1 _ S S I ,   M o d e ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   S P I   o p e r a t i o n   m o d e   ( M a s t e r   o r   S l a v e )  
     *   @ r m t o l l   C R 1                     M S T R                     L L _ S P I _ G e t M o d e \ n  
     *                   C R 1                     S S I                       L L _ S P I _ G e t M o d e  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ S P I _ M O D E _ M A S T E R  
     *                   @ a r g   @ r e f   L L _ S P I _ M O D E _ S L A V E  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ S P I _ G e t M o d e ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( S P I x - > C R 1 ,   S P I _ C R 1 _ M S T R   |   S P I _ C R 1 _ S S I ) ) ;  
 }  
  
  
 / * *  
     *   @ b r i e f     S e t   c l o c k   p h a s e  
     *   @ n o t e       T h i s   b i t   s h o u l d   n o t   b e   c h a n g e d   w h e n   c o m m u n i c a t i o n   i s   o n g o i n g .  
     *                   T h i s   b i t   i s   n o t   u s e d   i n   S P I   T I   m o d e .  
     *   @ r m t o l l   C R 1                     C P H A                     L L _ S P I _ S e t C l o c k P h a s e  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ p a r a m     C l o c k P h a s e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ S P I _ P H A S E _ 1 E D G E  
     *                   @ a r g   @ r e f   L L _ S P I _ P H A S E _ 2 E D G E  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S P I _ S e t C l o c k P h a s e ( S P I _ T y p e D e f   * S P I x ,   u i n t 3 2 _ t   C l o c k P h a s e )  
 {  
     M O D I F Y _ R E G ( S P I x - > C R 1 ,   S P I _ C R 1 _ C P H A ,   C l o c k P h a s e ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   c l o c k   p h a s e  
     *   @ r m t o l l   C R 1                     C P H A                     L L _ S P I _ G e t C l o c k P h a s e  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ S P I _ P H A S E _ 1 E D G E  
     *                   @ a r g   @ r e f   L L _ S P I _ P H A S E _ 2 E D G E  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ S P I _ G e t C l o c k P h a s e ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( S P I x - > C R 1 ,   S P I _ C R 1 _ C P H A ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   c l o c k   p o l a r i t y  
     *   @ n o t e       T h i s   b i t   s h o u l d   n o t   b e   c h a n g e d   w h e n   c o m m u n i c a t i o n   i s   o n g o i n g .  
     *                   T h i s   b i t   i s   n o t   u s e d   i n   S P I   T I   m o d e .  
     *   @ r m t o l l   C R 1                     C P O L                     L L _ S P I _ S e t C l o c k P o l a r i t y  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ p a r a m     C l o c k P o l a r i t y   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ S P I _ P O L A R I T Y _ L O W  
     *                   @ a r g   @ r e f   L L _ S P I _ P O L A R I T Y _ H I G H  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S P I _ S e t C l o c k P o l a r i t y ( S P I _ T y p e D e f   * S P I x ,   u i n t 3 2 _ t   C l o c k P o l a r i t y )  
 {  
     M O D I F Y _ R E G ( S P I x - > C R 1 ,   S P I _ C R 1 _ C P O L ,   C l o c k P o l a r i t y ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   c l o c k   p o l a r i t y  
     *   @ r m t o l l   C R 1                     C P O L                     L L _ S P I _ G e t C l o c k P o l a r i t y  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ S P I _ P O L A R I T Y _ L O W  
     *                   @ a r g   @ r e f   L L _ S P I _ P O L A R I T Y _ H I G H  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ S P I _ G e t C l o c k P o l a r i t y ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( S P I x - > C R 1 ,   S P I _ C R 1 _ C P O L ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   b a u d   r a t e   p r e s c a l e r  
     *   @ n o t e       T h e s e   b i t s   s h o u l d   n o t   b e   c h a n g e d   w h e n   c o m m u n i c a t i o n   i s   o n g o i n g .   S P I   B a u d R a t e   =   f P C L K / P r e s c a l e r .  
     *   @ r m t o l l   C R 1                     B R                         L L _ S P I _ S e t B a u d R a t e P r e s c a l e r  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ p a r a m     B a u d R a t e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ S P I _ B A U D R A T E P R E S C A L E R _ D I V 2  
     *                   @ a r g   @ r e f   L L _ S P I _ B A U D R A T E P R E S C A L E R _ D I V 4  
     *                   @ a r g   @ r e f   L L _ S P I _ B A U D R A T E P R E S C A L E R _ D I V 8  
     *                   @ a r g   @ r e f   L L _ S P I _ B A U D R A T E P R E S C A L E R _ D I V 1 6  
     *                   @ a r g   @ r e f   L L _ S P I _ B A U D R A T E P R E S C A L E R _ D I V 3 2  
     *                   @ a r g   @ r e f   L L _ S P I _ B A U D R A T E P R E S C A L E R _ D I V 6 4  
     *                   @ a r g   @ r e f   L L _ S P I _ B A U D R A T E P R E S C A L E R _ D I V 1 2 8  
     *                   @ a r g   @ r e f   L L _ S P I _ B A U D R A T E P R E S C A L E R _ D I V 2 5 6  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S P I _ S e t B a u d R a t e P r e s c a l e r ( S P I _ T y p e D e f   * S P I x ,   u i n t 3 2 _ t   B a u d R a t e )  
 {  
     M O D I F Y _ R E G ( S P I x - > C R 1 ,   S P I _ C R 1 _ B R ,   B a u d R a t e ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   b a u d   r a t e   p r e s c a l e r  
     *   @ r m t o l l   C R 1                     B R                         L L _ S P I _ G e t B a u d R a t e P r e s c a l e r  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ S P I _ B A U D R A T E P R E S C A L E R _ D I V 2  
     *                   @ a r g   @ r e f   L L _ S P I _ B A U D R A T E P R E S C A L E R _ D I V 4  
     *                   @ a r g   @ r e f   L L _ S P I _ B A U D R A T E P R E S C A L E R _ D I V 8  
     *                   @ a r g   @ r e f   L L _ S P I _ B A U D R A T E P R E S C A L E R _ D I V 1 6  
     *                   @ a r g   @ r e f   L L _ S P I _ B A U D R A T E P R E S C A L E R _ D I V 3 2  
     *                   @ a r g   @ r e f   L L _ S P I _ B A U D R A T E P R E S C A L E R _ D I V 6 4  
     *                   @ a r g   @ r e f   L L _ S P I _ B A U D R A T E P R E S C A L E R _ D I V 1 2 8  
     *                   @ a r g   @ r e f   L L _ S P I _ B A U D R A T E P R E S C A L E R _ D I V 2 5 6  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ S P I _ G e t B a u d R a t e P r e s c a l e r ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( S P I x - > C R 1 ,   S P I _ C R 1 _ B R ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   t r a n s f e r   b i t   o r d e r  
     *   @ n o t e       T h i s   b i t   s h o u l d   n o t   b e   c h a n g e d   w h e n   c o m m u n i c a t i o n   i s   o n g o i n g .   T h i s   b i t   i s   n o t   u s e d   i n   S P I   T I   m o d e .  
     *   @ r m t o l l   C R 1                     L S B F I R S T             L L _ S P I _ S e t T r a n s f e r B i t O r d e r  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ p a r a m     B i t O r d e r   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ S P I _ L S B _ F I R S T  
     *                   @ a r g   @ r e f   L L _ S P I _ M S B _ F I R S T  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S P I _ S e t T r a n s f e r B i t O r d e r ( S P I _ T y p e D e f   * S P I x ,   u i n t 3 2 _ t   B i t O r d e r )  
 {  
     M O D I F Y _ R E G ( S P I x - > C R 1 ,   S P I _ C R 1 _ L S B F I R S T ,   B i t O r d e r ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   t r a n s f e r   b i t   o r d e r  
     *   @ r m t o l l   C R 1                     L S B F I R S T             L L _ S P I _ G e t T r a n s f e r B i t O r d e r  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ S P I _ L S B _ F I R S T  
     *                   @ a r g   @ r e f   L L _ S P I _ M S B _ F I R S T  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ S P I _ G e t T r a n s f e r B i t O r d e r ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( S P I x - > C R 1 ,   S P I _ C R 1 _ L S B F I R S T ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   t r a n s f e r   d i r e c t i o n   m o d e  
     *   @ n o t e       F o r   H a l f - D u p l e x   m o d e ,   R x   D i r e c t i o n   i s   s e t   b y   d e f a u l t .  
     *                   I n   m a s t e r   m o d e ,   t h e   M O S I   p i n   i s   u s e d   a n d   i n   s l a v e   m o d e ,   t h e   M I S O   p i n   i s   u s e d   f o r   H a l f - D u p l e x .  
     *   @ r m t o l l   C R 1                     R X O N L Y                 L L _ S P I _ S e t T r a n s f e r D i r e c t i o n \ n  
     *                   C R 1                     B I D I M O D E             L L _ S P I _ S e t T r a n s f e r D i r e c t i o n \ n  
     *                   C R 1                     B I D I O E                 L L _ S P I _ S e t T r a n s f e r D i r e c t i o n  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ p a r a m     T r a n s f e r D i r e c t i o n   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ S P I _ F U L L _ D U P L E X  
     *                   @ a r g   @ r e f   L L _ S P I _ S I M P L E X _ R X  
     *                   @ a r g   @ r e f   L L _ S P I _ H A L F _ D U P L E X _ R X  
     *                   @ a r g   @ r e f   L L _ S P I _ H A L F _ D U P L E X _ T X  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S P I _ S e t T r a n s f e r D i r e c t i o n ( S P I _ T y p e D e f   * S P I x ,   u i n t 3 2 _ t   T r a n s f e r D i r e c t i o n )  
 {  
     M O D I F Y _ R E G ( S P I x - > C R 1 ,   S P I _ C R 1 _ R X O N L Y   |   S P I _ C R 1 _ B I D I M O D E   |   S P I _ C R 1 _ B I D I O E ,   T r a n s f e r D i r e c t i o n ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   t r a n s f e r   d i r e c t i o n   m o d e  
     *   @ r m t o l l   C R 1                     R X O N L Y                 L L _ S P I _ G e t T r a n s f e r D i r e c t i o n \ n  
     *                   C R 1                     B I D I M O D E             L L _ S P I _ G e t T r a n s f e r D i r e c t i o n \ n  
     *                   C R 1                     B I D I O E                 L L _ S P I _ G e t T r a n s f e r D i r e c t i o n  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ S P I _ F U L L _ D U P L E X  
     *                   @ a r g   @ r e f   L L _ S P I _ S I M P L E X _ R X  
     *                   @ a r g   @ r e f   L L _ S P I _ H A L F _ D U P L E X _ R X  
     *                   @ a r g   @ r e f   L L _ S P I _ H A L F _ D U P L E X _ T X  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ S P I _ G e t T r a n s f e r D i r e c t i o n ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( S P I x - > C R 1 ,   S P I _ C R 1 _ R X O N L Y   |   S P I _ C R 1 _ B I D I M O D E   |   S P I _ C R 1 _ B I D I O E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   f r a m e   d a t a   w i d t h  
     *   @ r m t o l l   C R 1                     D F F                       L L _ S P I _ S e t D a t a W i d t h  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ p a r a m     D a t a W i d t h   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ S P I _ D A T A W I D T H _ 8 B I T  
     *                   @ a r g   @ r e f   L L _ S P I _ D A T A W I D T H _ 1 6 B I T  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S P I _ S e t D a t a W i d t h ( S P I _ T y p e D e f   * S P I x ,   u i n t 3 2 _ t   D a t a W i d t h )  
 {  
     M O D I F Y _ R E G ( S P I x - > C R 1 ,   S P I _ C R 1 _ D F F ,   D a t a W i d t h ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   f r a m e   d a t a   w i d t h  
     *   @ r m t o l l   C R 1                     D F F                       L L _ S P I _ G e t D a t a W i d t h  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ S P I _ D A T A W I D T H _ 8 B I T  
     *                   @ a r g   @ r e f   L L _ S P I _ D A T A W I D T H _ 1 6 B I T  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ S P I _ G e t D a t a W i d t h ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( S P I x - > C R 1 ,   S P I _ C R 1 _ D F F ) ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S P I _ L L _ E F _ C R C _ M a n a g e m e n t   C R C   M a n a g e m e n t  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   C R C  
     *   @ n o t e       T h i s   b i t   s h o u l d   b e   w r i t t e n   o n l y   w h e n   S P I   i s   d i s a b l e d   ( S P E   =   0 )   f o r   c o r r e c t   o p e r a t i o n .  
     *   @ r m t o l l   C R 1                     C R C E N                   L L _ S P I _ E n a b l e C R C  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S P I _ E n a b l e C R C ( S P I _ T y p e D e f   * S P I x )  
 {  
     S E T _ B I T ( S P I x - > C R 1 ,   S P I _ C R 1 _ C R C E N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   C R C  
     *   @ n o t e       T h i s   b i t   s h o u l d   b e   w r i t t e n   o n l y   w h e n   S P I   i s   d i s a b l e d   ( S P E   =   0 )   f o r   c o r r e c t   o p e r a t i o n .  
     *   @ r m t o l l   C R 1                     C R C E N                   L L _ S P I _ D i s a b l e C R C  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S P I _ D i s a b l e C R C ( S P I _ T y p e D e f   * S P I x )  
 {  
     C L E A R _ B I T ( S P I x - > C R 1 ,   S P I _ C R 1 _ C R C E N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   C R C   i s   e n a b l e d  
     *   @ n o t e       T h i s   b i t   s h o u l d   b e   w r i t t e n   o n l y   w h e n   S P I   i s   d i s a b l e d   ( S P E   =   0 )   f o r   c o r r e c t   o p e r a t i o n .  
     *   @ r m t o l l   C R 1                     C R C E N                   L L _ S P I _ I s E n a b l e d C R C  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ S P I _ I s E n a b l e d C R C ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( ( R E A D _ B I T ( S P I x - > C R 1 ,   S P I _ C R 1 _ C R C E N )   = =   ( S P I _ C R 1 _ C R C E N ) )   ?   1 U L   :   0 U L ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   C R C N e x t   t o   t r a n s f e r   C R C   o n   t h e   l i n e  
     *   @ n o t e       T h i s   b i t   h a s   t o   b e   w r i t t e n   a s   s o o n   a s   t h e   l a s t   d a t a   i s   w r i t t e n   i n   t h e   S P I x _ D R   r e g i s t e r .  
     *   @ r m t o l l   C R 1                     C R C N E X T               L L _ S P I _ S e t C R C N e x t  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S P I _ S e t C R C N e x t ( S P I _ T y p e D e f   * S P I x )  
 {  
     S E T _ B I T ( S P I x - > C R 1 ,   S P I _ C R 1 _ C R C N E X T ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   p o l y n o m i a l   f o r   C R C   c a l c u l a t i o n  
     *   @ r m t o l l   C R C P R                 C R C P O L Y               L L _ S P I _ S e t C R C P o l y n o m i a l  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ p a r a m     C R C P o l y   T h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 0 0   a n d   M a x _ D a t a   =   0 x F F F F  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S P I _ S e t C R C P o l y n o m i a l ( S P I _ T y p e D e f   * S P I x ,   u i n t 3 2 _ t   C R C P o l y )  
 {  
     W R I T E _ R E G ( S P I x - > C R C P R ,   ( u i n t 1 6 _ t ) C R C P o l y ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   p o l y n o m i a l   f o r   C R C   c a l c u l a t i o n  
     *   @ r m t o l l   C R C P R                 C R C P O L Y               L L _ S P I _ G e t C R C P o l y n o m i a l  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   i s   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 0 0   a n d   M a x _ D a t a   =   0 x F F F F  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ S P I _ G e t C R C P o l y n o m i a l ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ R E G ( S P I x - > C R C P R ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   R x   C R C  
     *   @ r m t o l l   R X C R C R               R X C R C                   L L _ S P I _ G e t R x C R C  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   i s   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 0 0   a n d   M a x _ D a t a   =   0 x F F F F  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ S P I _ G e t R x C R C ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ R E G ( S P I x - > R X C R C R ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   T x   C R C  
     *   @ r m t o l l   T X C R C R               T X C R C                   L L _ S P I _ G e t T x C R C  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   i s   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 0 0   a n d   M a x _ D a t a   =   0 x F F F F  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ S P I _ G e t T x C R C ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ R E G ( S P I x - > T X C R C R ) ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S P I _ L L _ E F _ N S S _ M a n a g e m e n t   S l a v e   S e l e c t   P i n   M a n a g e m e n t  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S e t   N S S   m o d e  
     *   @ n o t e       L L _ S P I _ N S S _ S O F T   M o d e   i s   n o t   u s e d   i n   S P I   T I   m o d e .  
     *   @ r m t o l l   C R 1                     S S M                       L L _ S P I _ S e t N S S M o d e \ n  
     *   @ r m t o l l   C R 2                     S S O E                     L L _ S P I _ S e t N S S M o d e  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ p a r a m     N S S   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ S P I _ N S S _ S O F T  
     *                   @ a r g   @ r e f   L L _ S P I _ N S S _ H A R D _ I N P U T  
     *                   @ a r g   @ r e f   L L _ S P I _ N S S _ H A R D _ O U T P U T  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S P I _ S e t N S S M o d e ( S P I _ T y p e D e f   * S P I x ,   u i n t 3 2 _ t   N S S )  
 {  
     M O D I F Y _ R E G ( S P I x - > C R 1 ,   S P I _ C R 1 _ S S M ,     N S S ) ;  
     M O D I F Y _ R E G ( S P I x - > C R 2 ,   S P I _ C R 2 _ S S O E ,   ( ( u i n t 3 2 _ t ) ( N S S   > >   1 6 U ) ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   N S S   m o d e  
     *   @ r m t o l l   C R 1                     S S M                       L L _ S P I _ G e t N S S M o d e \ n  
     *   @ r m t o l l   C R 2                     S S O E                     L L _ S P I _ G e t N S S M o d e  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ S P I _ N S S _ S O F T  
     *                   @ a r g   @ r e f   L L _ S P I _ N S S _ H A R D _ I N P U T  
     *                   @ a r g   @ r e f   L L _ S P I _ N S S _ H A R D _ O U T P U T  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ S P I _ G e t N S S M o d e ( S P I _ T y p e D e f   * S P I x )  
 {  
     u i n t 3 2 _ t   S s m     =   ( R E A D _ B I T ( S P I x - > C R 1 ,   S P I _ C R 1 _ S S M ) ) ;  
     u i n t 3 2 _ t   S s o e   =   ( R E A D _ B I T ( S P I x - > C R 2 ,     S P I _ C R 2 _ S S O E )   < <   1 6 U ) ;  
     r e t u r n   ( S s m   |   S s o e ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S P I _ L L _ E F _ F L A G _ M a n a g e m e n t   F L A G   M a n a g e m e n t  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   R x   b u f f e r   i s   n o t   e m p t y  
     *   @ r m t o l l   S R                       R X N E                     L L _ S P I _ I s A c t i v e F l a g _ R X N E  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ S P I _ I s A c t i v e F l a g _ R X N E ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( ( R E A D _ B I T ( S P I x - > S R ,   S P I _ S R _ R X N E )   = =   ( S P I _ S R _ R X N E ) )   ?   1 U L   :   0 U L ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   T x   b u f f e r   i s   e m p t y  
     *   @ r m t o l l   S R                       T X E                       L L _ S P I _ I s A c t i v e F l a g _ T X E  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ S P I _ I s A c t i v e F l a g _ T X E ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( ( R E A D _ B I T ( S P I x - > S R ,   S P I _ S R _ T X E )   = =   ( S P I _ S R _ T X E ) )   ?   1 U L   :   0 U L ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   C R C   e r r o r   f l a g  
     *   @ r m t o l l   S R                       C R C E R R                 L L _ S P I _ I s A c t i v e F l a g _ C R C E R R  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ S P I _ I s A c t i v e F l a g _ C R C E R R ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( ( R E A D _ B I T ( S P I x - > S R ,   S P I _ S R _ C R C E R R )   = =   ( S P I _ S R _ C R C E R R ) )   ?   1 U L   :   0 U L ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   m o d e   f a u l t   e r r o r   f l a g  
     *   @ r m t o l l   S R                       M O D F                     L L _ S P I _ I s A c t i v e F l a g _ M O D F  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ S P I _ I s A c t i v e F l a g _ M O D F ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( ( R E A D _ B I T ( S P I x - > S R ,   S P I _ S R _ M O D F )   = =   ( S P I _ S R _ M O D F ) )   ?   1 U L   :   0 U L ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   o v e r r u n   e r r o r   f l a g  
     *   @ r m t o l l   S R                       O V R                       L L _ S P I _ I s A c t i v e F l a g _ O V R  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ S P I _ I s A c t i v e F l a g _ O V R ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( ( R E A D _ B I T ( S P I x - > S R ,   S P I _ S R _ O V R )   = =   ( S P I _ S R _ O V R ) )   ?   1 U L   :   0 U L ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   b u s y   f l a g  
     *   @ n o t e       T h e   B S Y   f l a g   i s   c l e a r e d   u n d e r   a n y   o n e   o f   t h e   f o l l o w i n g   c o n d i t i o n s :  
     *   - W h e n   t h e   S P I   i s   c o r r e c t l y   d i s a b l e d  
     *   - W h e n   a   f a u l t   i s   d e t e c t e d   i n   M a s t e r   m o d e   ( M O D F   b i t   s e t   t o   1 )  
     *   - I n   M a s t e r   m o d e ,   w h e n   i t   f i n i s h e s   a   d a t a   t r a n s m i s s i o n   a n d   n o   n e w   d a t a   i s   r e a d y   t o   b e  
     *   s e n t  
     *   - I n   S l a v e   m o d e ,   w h e n   t h e   B S Y   f l a g   i s   s e t   t o   ' 0 '   f o r   a t   l e a s t   o n e   S P I   c l o c k   c y c l e   b e t w e e n  
     *   e a c h   d a t a   t r a n s f e r .  
     *   @ r m t o l l   S R                       B S Y                       L L _ S P I _ I s A c t i v e F l a g _ B S Y  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ S P I _ I s A c t i v e F l a g _ B S Y ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( ( R E A D _ B I T ( S P I x - > S R ,   S P I _ S R _ B S Y )   = =   ( S P I _ S R _ B S Y ) )   ?   1 U L   :   0 U L ) ;  
 }  
  
  
 / * *  
     *   @ b r i e f     C l e a r   C R C   e r r o r   f l a g  
     *   @ r m t o l l   S R                       C R C E R R                 L L _ S P I _ C l e a r F l a g _ C R C E R R  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S P I _ C l e a r F l a g _ C R C E R R ( S P I _ T y p e D e f   * S P I x )  
 {  
     C L E A R _ B I T ( S P I x - > S R ,   S P I _ S R _ C R C E R R ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   m o d e   f a u l t   e r r o r   f l a g  
     *   @ n o t e       C l e a r i n g   t h i s   f l a g   i s   d o n e   b y   a   r e a d   a c c e s s   t o   t h e   S P I x _ S R  
     *                   r e g i s t e r   f o l l o w e d   b y   a   w r i t e   a c c e s s   t o   t h e   S P I x _ C R 1   r e g i s t e r  
     *   @ r m t o l l   S R                       M O D F                     L L _ S P I _ C l e a r F l a g _ M O D F  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S P I _ C l e a r F l a g _ M O D F ( S P I _ T y p e D e f   * S P I x )  
 {  
     _ _ I O   u i n t 3 2 _ t   t m p r e g _ s r ;  
     t m p r e g _ s r   =   S P I x - > S R ;  
     ( v o i d )   t m p r e g _ s r ;  
     C L E A R _ B I T ( S P I x - > C R 1 ,   S P I _ C R 1 _ S P E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   o v e r r u n   e r r o r   f l a g  
     *   @ n o t e       C l e a r i n g   t h i s   f l a g   i s   d o n e   b y   a   r e a d   a c c e s s   t o   t h e   S P I x _ D R  
     *                   r e g i s t e r   f o l l o w e d   b y   a   r e a d   a c c e s s   t o   t h e   S P I x _ S R   r e g i s t e r  
     *   @ r m t o l l   S R                       O V R                       L L _ S P I _ C l e a r F l a g _ O V R  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S P I _ C l e a r F l a g _ O V R ( S P I _ T y p e D e f   * S P I x )  
 {  
     _ _ I O   u i n t 3 2 _ t   t m p r e g ;  
     t m p r e g   =   S P I x - > D R ;  
     ( v o i d )   t m p r e g ;  
     t m p r e g   =   S P I x - > S R ;  
     ( v o i d )   t m p r e g ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   f r a m e   f o r m a t   e r r o r   f l a g  
     *   @ n o t e       C l e a r i n g   t h i s   f l a g   i s   d o n e   b y   r e a d i n g   S P I x _ S R   r e g i s t e r  
     *   @ r m t o l l   S R                       F R E                       L L _ S P I _ C l e a r F l a g _ F R E  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S P I _ C l e a r F l a g _ F R E ( S P I _ T y p e D e f   * S P I x )  
 {  
     _ _ I O   u i n t 3 2 _ t   t m p r e g ;  
     t m p r e g   =   S P I x - > S R ;  
     ( v o i d )   t m p r e g ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S P I _ L L _ E F _ I T _ M a n a g e m e n t   I n t e r r u p t   M a n a g e m e n t  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   e r r o r   i n t e r r u p t  
     *   @ n o t e       T h i s   b i t   c o n t r o l s   t h e   g e n e r a t i o n   o f   a n   i n t e r r u p t   w h e n   a n   e r r o r   c o n d i t i o n   o c c u r s   ( C R C E R R ,   O V R ,   M O D F   i n   S P I   m o d e ,   F R E   a t   T I   m o d e ) .  
     *   @ r m t o l l   C R 2                     E R R I E                   L L _ S P I _ E n a b l e I T _ E R R  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S P I _ E n a b l e I T _ E R R ( S P I _ T y p e D e f   * S P I x )  
 {  
     S E T _ B I T ( S P I x - > C R 2 ,   S P I _ C R 2 _ E R R I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   R x   b u f f e r   n o t   e m p t y   i n t e r r u p t  
     *   @ r m t o l l   C R 2                     R X N E I E                 L L _ S P I _ E n a b l e I T _ R X N E  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S P I _ E n a b l e I T _ R X N E ( S P I _ T y p e D e f   * S P I x )  
 {  
     S E T _ B I T ( S P I x - > C R 2 ,   S P I _ C R 2 _ R X N E I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   T x   b u f f e r   e m p t y   i n t e r r u p t  
     *   @ r m t o l l   C R 2                     T X E I E                   L L _ S P I _ E n a b l e I T _ T X E  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S P I _ E n a b l e I T _ T X E ( S P I _ T y p e D e f   * S P I x )  
 {  
     S E T _ B I T ( S P I x - > C R 2 ,   S P I _ C R 2 _ T X E I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   e r r o r   i n t e r r u p t  
     *   @ n o t e       T h i s   b i t   c o n t r o l s   t h e   g e n e r a t i o n   o f   a n   i n t e r r u p t   w h e n   a n   e r r o r   c o n d i t i o n   o c c u r s   ( C R C E R R ,   O V R ,   M O D F   i n   S P I   m o d e ,   F R E   a t   T I   m o d e ) .  
     *   @ r m t o l l   C R 2                     E R R I E                   L L _ S P I _ D i s a b l e I T _ E R R  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S P I _ D i s a b l e I T _ E R R ( S P I _ T y p e D e f   * S P I x )  
 {  
     C L E A R _ B I T ( S P I x - > C R 2 ,   S P I _ C R 2 _ E R R I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   R x   b u f f e r   n o t   e m p t y   i n t e r r u p t  
     *   @ r m t o l l   C R 2                     R X N E I E                 L L _ S P I _ D i s a b l e I T _ R X N E  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S P I _ D i s a b l e I T _ R X N E ( S P I _ T y p e D e f   * S P I x )  
 {  
     C L E A R _ B I T ( S P I x - > C R 2 ,   S P I _ C R 2 _ R X N E I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   T x   b u f f e r   e m p t y   i n t e r r u p t  
     *   @ r m t o l l   C R 2                     T X E I E                   L L _ S P I _ D i s a b l e I T _ T X E  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S P I _ D i s a b l e I T _ T X E ( S P I _ T y p e D e f   * S P I x )  
 {  
     C L E A R _ B I T ( S P I x - > C R 2 ,   S P I _ C R 2 _ T X E I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   e r r o r   i n t e r r u p t   i s   e n a b l e d  
     *   @ r m t o l l   C R 2                     E R R I E                   L L _ S P I _ I s E n a b l e d I T _ E R R  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ S P I _ I s E n a b l e d I T _ E R R ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( ( R E A D _ B I T ( S P I x - > C R 2 ,   S P I _ C R 2 _ E R R I E )   = =   ( S P I _ C R 2 _ E R R I E ) )   ?   1 U L   :   0 U L ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   R x   b u f f e r   n o t   e m p t y   i n t e r r u p t   i s   e n a b l e d  
     *   @ r m t o l l   C R 2                     R X N E I E                 L L _ S P I _ I s E n a b l e d I T _ R X N E  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ S P I _ I s E n a b l e d I T _ R X N E ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( ( R E A D _ B I T ( S P I x - > C R 2 ,   S P I _ C R 2 _ R X N E I E )   = =   ( S P I _ C R 2 _ R X N E I E ) )   ?   1 U L   :   0 U L ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   T x   b u f f e r   e m p t y   i n t e r r u p t  
     *   @ r m t o l l   C R 2                     T X E I E                   L L _ S P I _ I s E n a b l e d I T _ T X E  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ S P I _ I s E n a b l e d I T _ T X E ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( ( R E A D _ B I T ( S P I x - > C R 2 ,   S P I _ C R 2 _ T X E I E )   = =   ( S P I _ C R 2 _ T X E I E ) )   ?   1 U L   :   0 U L ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S P I _ L L _ E F _ D M A _ M a n a g e m e n t   D M A   M a n a g e m e n t  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   D M A   R x  
     *   @ r m t o l l   C R 2                     R X D M A E N               L L _ S P I _ E n a b l e D M A R e q _ R X  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S P I _ E n a b l e D M A R e q _ R X ( S P I _ T y p e D e f   * S P I x )  
 {  
     S E T _ B I T ( S P I x - > C R 2 ,   S P I _ C R 2 _ R X D M A E N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   D M A   R x  
     *   @ r m t o l l   C R 2                     R X D M A E N               L L _ S P I _ D i s a b l e D M A R e q _ R X  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S P I _ D i s a b l e D M A R e q _ R X ( S P I _ T y p e D e f   * S P I x )  
 {  
     C L E A R _ B I T ( S P I x - > C R 2 ,   S P I _ C R 2 _ R X D M A E N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   D M A   R x   i s   e n a b l e d  
     *   @ r m t o l l   C R 2                     R X D M A E N               L L _ S P I _ I s E n a b l e d D M A R e q _ R X  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ S P I _ I s E n a b l e d D M A R e q _ R X ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( ( R E A D _ B I T ( S P I x - > C R 2 ,   S P I _ C R 2 _ R X D M A E N )   = =   ( S P I _ C R 2 _ R X D M A E N ) )   ?   1 U L   :   0 U L ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   D M A   T x  
     *   @ r m t o l l   C R 2                     T X D M A E N               L L _ S P I _ E n a b l e D M A R e q _ T X  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S P I _ E n a b l e D M A R e q _ T X ( S P I _ T y p e D e f   * S P I x )  
 {  
     S E T _ B I T ( S P I x - > C R 2 ,   S P I _ C R 2 _ T X D M A E N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   D M A   T x  
     *   @ r m t o l l   C R 2                     T X D M A E N               L L _ S P I _ D i s a b l e D M A R e q _ T X  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S P I _ D i s a b l e D M A R e q _ T X ( S P I _ T y p e D e f   * S P I x )  
 {  
     C L E A R _ B I T ( S P I x - > C R 2 ,   S P I _ C R 2 _ T X D M A E N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   D M A   T x   i s   e n a b l e d  
     *   @ r m t o l l   C R 2                     T X D M A E N               L L _ S P I _ I s E n a b l e d D M A R e q _ T X  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ S P I _ I s E n a b l e d D M A R e q _ T X ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( ( R E A D _ B I T ( S P I x - > C R 2 ,   S P I _ C R 2 _ T X D M A E N )   = =   ( S P I _ C R 2 _ T X D M A E N ) )   ?   1 U L   :   0 U L ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   t h e   d a t a   r e g i s t e r   a d d r e s s   u s e d   f o r   D M A   t r a n s f e r  
     *   @ r m t o l l   D R                       D R                         L L _ S P I _ D M A _ G e t R e g A d d r  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   A d d r e s s   o f   d a t a   r e g i s t e r  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ S P I _ D M A _ G e t R e g A d d r ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t )   & ( S P I x - > D R ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S P I _ L L _ E F _ D A T A _ M a n a g e m e n t   D A T A   M a n a g e m e n t  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     R e a d   8 - B i t s   i n   t h e   d a t a   r e g i s t e r  
     *   @ r m t o l l   D R                       D R                         L L _ S P I _ R e c e i v e D a t a 8  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   R x D a t a   V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 0   a n d   M a x _ D a t a = 0 x F F  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 8 _ t   L L _ S P I _ R e c e i v e D a t a 8 ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( * ( ( _ _ I O   u i n t 8 _ t   * ) & S P I x - > D R ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e a d   1 6 - B i t s   i n   t h e   d a t a   r e g i s t e r  
     *   @ r m t o l l   D R                       D R                         L L _ S P I _ R e c e i v e D a t a 1 6  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   R x D a t a   V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 0   a n d   M a x _ D a t a = 0 x F F F F  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 1 6 _ t   L L _ S P I _ R e c e i v e D a t a 1 6 ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( u i n t 1 6 _ t ) ( R E A D _ R E G ( S P I x - > D R ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     W r i t e   8 - B i t s   i n   t h e   d a t a   r e g i s t e r  
     *   @ r m t o l l   D R                       D R                         L L _ S P I _ T r a n s m i t D a t a 8  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ p a r a m     T x D a t a   V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 0   a n d   M a x _ D a t a = 0 x F F  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S P I _ T r a n s m i t D a t a 8 ( S P I _ T y p e D e f   * S P I x ,   u i n t 8 _ t   T x D a t a )  
 {  
 # i f   d e f i n e d   ( _ _ G N U C _ _ )  
     _ _ I O   u i n t 8 _ t   * s p i d r   =   ( ( _ _ I O   u i n t 8 _ t   * ) & S P I x - > D R ) ;  
     * s p i d r   =   T x D a t a ;  
 # e l s e  
     * ( ( _ _ I O   u i n t 8 _ t   * ) & S P I x - > D R )   =   T x D a t a ;  
 # e n d i f   / *   _ _ G N U C _ _   * /  
 }  
  
 / * *  
     *   @ b r i e f     W r i t e   1 6 - B i t s   i n   t h e   d a t a   r e g i s t e r  
     *   @ r m t o l l   D R                       D R                         L L _ S P I _ T r a n s m i t D a t a 1 6  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ p a r a m     T x D a t a   V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 0   a n d   M a x _ D a t a = 0 x F F F F  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ S P I _ T r a n s m i t D a t a 1 6 ( S P I _ T y p e D e f   * S P I x ,   u i n t 1 6 _ t   T x D a t a )  
 {  
 # i f   d e f i n e d   ( _ _ G N U C _ _ )  
     _ _ I O   u i n t 1 6 _ t   * s p i d r   =   ( ( _ _ I O   u i n t 1 6 _ t   * ) & S P I x - > D R ) ;  
     * s p i d r   =   T x D a t a ;  
 # e l s e  
     S P I x - > D R   =   T x D a t a ;  
 # e n d i f   / *   _ _ G N U C _ _   * /  
 }  
  
 / * *  
     *   @ }  
     * /  
 # i f   d e f i n e d ( U S E _ F U L L _ L L _ D R I V E R )  
 / * *   @ d e f g r o u p   S P I _ L L _ E F _ I n i t   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *   @ {  
     * /  
  
 E r r o r S t a t u s   L L _ S P I _ D e I n i t ( S P I _ T y p e D e f   * S P I x ) ;  
 E r r o r S t a t u s   L L _ S P I _ I n i t ( S P I _ T y p e D e f   * S P I x ,   L L _ S P I _ I n i t T y p e D e f   * S P I _ I n i t S t r u c t ) ;  
 v o i d                 L L _ S P I _ S t r u c t I n i t ( L L _ S P I _ I n i t T y p e D e f   * S P I _ I n i t S t r u c t ) ;  
  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / *   U S E _ F U L L _ L L _ D R I V E R   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 # i f   d e f i n e d ( S P I _ I 2 S _ S U P P O R T )  
 / * *   @ d e f g r o u p   I 2 S _ L L   I 2 S  
     *   @ {  
     * /  
  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i f   d e f i n e d ( U S E _ F U L L _ L L _ D R I V E R )  
 / * *   @ d e f g r o u p   I 2 S _ L L _ E S _ I N I T   I 2 S   E x p o r t e d   I n i t   s t r u c t u r e  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     I 2 S   I n i t   s t r u c t u r e   d e f i n i t i o n  
     * /  
  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   M o d e ;                                         / * ! <   S p e c i f i e s   t h e   I 2 S   o p e r a t i n g   m o d e .  
                                                                                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   I 2 S _ L L _ E C _ M O D E  
  
                                                                                   T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ I 2 S _ S e t T r a n s f e r M o d e ( ) . * /  
  
     u i n t 3 2 _ t   S t a n d a r d ;                                 / * ! <   S p e c i f i e s   t h e   s t a n d a r d   u s e d   f o r   t h e   I 2 S   c o m m u n i c a t i o n .  
                                                                                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   I 2 S _ L L _ E C _ S T A N D A R D  
  
                                                                                   T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ I 2 S _ S e t S t a n d a r d ( ) . * /  
  
  
     u i n t 3 2 _ t   D a t a F o r m a t ;                             / * ! <   S p e c i f i e s   t h e   d a t a   f o r m a t   f o r   t h e   I 2 S   c o m m u n i c a t i o n .  
                                                                                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   I 2 S _ L L _ E C _ D A T A _ F O R M A T  
  
                                                                                   T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ I 2 S _ S e t D a t a F o r m a t ( ) . * /  
  
  
     u i n t 3 2 _ t   M C L K O u t p u t ;                             / * ! <   S p e c i f i e s   w h e t h e r   t h e   I 2 S   M C L K   o u t p u t   i s   e n a b l e d   o r   n o t .  
                                                                                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   I 2 S _ L L _ E C _ M C L K _ O U T P U T  
  
                                                                                   T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n s   @ r e f   L L _ I 2 S _ E n a b l e M a s t e r C l o c k ( )   o r   @ r e f   L L _ I 2 S _ D i s a b l e M a s t e r C l o c k . * /  
  
  
     u i n t 3 2 _ t   A u d i o F r e q ;                               / * ! <   S p e c i f i e s   t h e   f r e q u e n c y   s e l e c t e d   f o r   t h e   I 2 S   c o m m u n i c a t i o n .  
                                                                                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   I 2 S _ L L _ E C _ A U D I O _ F R E Q  
  
                                                                                   A u d i o   F r e q u e n c y   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   R e f e r e n c e   m a n u a l   f o r m u l a s   t o   c a l c u l a t e   P r e s c a l e r   L i n e a r ,   P a r i t y  
                                                                                   a n d   u n i t a r y   f u n c t i o n s   @ r e f   L L _ I 2 S _ S e t P r e s c a l e r L i n e a r ( )   a n d   @ r e f   L L _ I 2 S _ S e t P r e s c a l e r P a r i t y ( )   t o   s e t   i t . * /  
  
  
     u i n t 3 2 _ t   C l o c k P o l a r i t y ;                       / * ! <   S p e c i f i e s   t h e   i d l e   s t a t e   o f   t h e   I 2 S   c l o c k .  
                                                                                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   I 2 S _ L L _ E C _ P O L A R I T Y  
  
                                                                                   T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ I 2 S _ S e t C l o c k P o l a r i t y ( ) . * /  
  
 }   L L _ I 2 S _ I n i t T y p e D e f ;  
  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / * U S E _ F U L L _ L L _ D R I V E R * /  
  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   I 2 S _ L L _ E x p o r t e d _ C o n s t a n t s   I 2 S   E x p o r t e d   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   I 2 S _ L L _ E C _ G E T _ F L A G   G e t   F l a g s   D e f i n e s  
     *   @ b r i e f         F l a g s   d e f i n e s   w h i c h   c a n   b e   u s e d   w i t h   L L _ I 2 S _ R e a d R e g   f u n c t i o n  
     *   @ {  
     * /  
 # d e f i n e   L L _ I 2 S _ S R _ R X N E                                           L L _ S P I _ S R _ R X N E                         / * ! <   R x   b u f f e r   n o t   e m p t y   f l a g                   * /  
 # d e f i n e   L L _ I 2 S _ S R _ T X E                                             L L _ S P I _ S R _ T X E                           / * ! <   T x   b u f f e r   e m p t y   f l a g                           * /  
 # d e f i n e   L L _ I 2 S _ S R _ B S Y                                             L L _ S P I _ S R _ B S Y                           / * ! <   B u s y   f l a g                                                 * /  
 # d e f i n e   L L _ I 2 S _ S R _ U D R                                             S P I _ S R _ U D R                                 / * ! <   U n d e r r u n   f l a g                                         * /  
 # d e f i n e   L L _ I 2 S _ S R _ O V R                                             L L _ S P I _ S R _ O V R                           / * ! <   O v e r r u n   f l a g                                           * /  
 # d e f i n e   L L _ I 2 S _ S R _ F R E                                             L L _ S P I _ S R _ F R E                           / * ! <   T I   m o d e   f r a m e   f o r m a t   e r r o r   f l a g     * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S P I _ L L _ E C _ I T   I T   D e f i n e s  
     *   @ b r i e f         I T   d e f i n e s   w h i c h   c a n   b e   u s e d   w i t h   L L _ S P I _ R e a d R e g   a n d     L L _ S P I _ W r i t e R e g   f u n c t i o n s  
     *   @ {  
     * /  
 # d e f i n e   L L _ I 2 S _ C R 2 _ R X N E I E                                     L L _ S P I _ C R 2 _ R X N E I E                   / * ! <   R x   b u f f e r   n o t   e m p t y   i n t e r r u p t   e n a b l e   * /  
 # d e f i n e   L L _ I 2 S _ C R 2 _ T X E I E                                       L L _ S P I _ C R 2 _ T X E I E                     / * ! <   T x   b u f f e r   e m p t y   i n t e r r u p t   e n a b l e           * /  
 # d e f i n e   L L _ I 2 S _ C R 2 _ E R R I E                                       L L _ S P I _ C R 2 _ E R R I E                     / * ! <   E r r o r   i n t e r r u p t   e n a b l e                               * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   I 2 S _ L L _ E C _ D A T A _ F O R M A T   D a t a   f o r m a t  
     *   @ {  
     * /  
 # d e f i n e   L L _ I 2 S _ D A T A F O R M A T _ 1 6 B                             0 x 0 0 0 0 0 0 0 0 U                                                                       / * ! <   D a t a   l e n g t h   1 6   b i t s ,   C h a n n e l   l e n g t h   1 6 b i t   * /  
 # d e f i n e   L L _ I 2 S _ D A T A F O R M A T _ 1 6 B _ E X T E N D E D           ( S P I _ I 2 S C F G R _ C H L E N )                                                       / * ! <   D a t a   l e n g t h   1 6   b i t s ,   C h a n n e l   l e n g t h   3 2 b i t   * /  
 # d e f i n e   L L _ I 2 S _ D A T A F O R M A T _ 2 4 B                             ( S P I _ I 2 S C F G R _ C H L E N   |   S P I _ I 2 S C F G R _ D A T L E N _ 0 )         / * ! <   D a t a   l e n g t h   2 4   b i t s ,   C h a n n e l   l e n g t h   3 2 b i t   * /  
 # d e f i n e   L L _ I 2 S _ D A T A F O R M A T _ 3 2 B                             ( S P I _ I 2 S C F G R _ C H L E N   |   S P I _ I 2 S C F G R _ D A T L E N _ 1 )         / * ! <   D a t a   l e n g t h   1 6   b i t s ,   C h a n n e l   l e n g t h   3 2 b i t   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   I 2 S _ L L _ E C _ P O L A R I T Y   C l o c k   P o l a r i t y  
     *   @ {  
     * /  
 # d e f i n e   L L _ I 2 S _ P O L A R I T Y _ L O W                                 0 x 0 0 0 0 0 0 0 0 U                               / * ! <   C l o c k   s t e a d y   s t a t e   i s   l o w   l e v e l     * /  
 # d e f i n e   L L _ I 2 S _ P O L A R I T Y _ H I G H                               ( S P I _ I 2 S C F G R _ C K P O L )               / * ! <   C l o c k   s t e a d y   s t a t e   i s   h i g h   l e v e l   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   I 2 S _ L L _ E C _ S T A N D A R D   I 2 s   S t a n d a r d  
     *   @ {  
     * /  
 # d e f i n e   L L _ I 2 S _ S T A N D A R D _ P H I L I P S                         0 x 0 0 0 0 0 0 0 0 U                                                                                                                   / * ! <   I 2 S   s t a n d a r d   p h i l i p s                                             * /  
 # d e f i n e   L L _ I 2 S _ S T A N D A R D _ M S B                                 ( S P I _ I 2 S C F G R _ I 2 S S T D _ 0 )                                                                                             / * ! <   M S B   j u s t i f i e d   s t a n d a r d   ( l e f t   j u s t i f i e d )       * /  
 # d e f i n e   L L _ I 2 S _ S T A N D A R D _ L S B                                 ( S P I _ I 2 S C F G R _ I 2 S S T D _ 1 )                                                                                             / * ! <   L S B   j u s t i f i e d   s t a n d a r d   ( r i g h t   j u s t i f i e d )     * /  
 # d e f i n e   L L _ I 2 S _ S T A N D A R D _ P C M _ S H O R T                     ( S P I _ I 2 S C F G R _ I 2 S S T D _ 0   |   S P I _ I 2 S C F G R _ I 2 S S T D _ 1 )                                               / * ! <   P C M   s t a n d a r d ,   s h o r t   f r a m e   s y n c h r o n i z a t i o n   * /  
 # d e f i n e   L L _ I 2 S _ S T A N D A R D _ P C M _ L O N G                       ( S P I _ I 2 S C F G R _ I 2 S S T D _ 0   |   S P I _ I 2 S C F G R _ I 2 S S T D _ 1   |   S P I _ I 2 S C F G R _ P C M S Y N C )   / * ! <   P C M   s t a n d a r d ,   l o n g   f r a m e   s y n c h r o n i z a t i o n     * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   I 2 S _ L L _ E C _ M O D E   O p e r a t i o n   M o d e  
     *   @ {  
     * /  
 # d e f i n e   L L _ I 2 S _ M O D E _ S L A V E _ T X                               0 x 0 0 0 0 0 0 0 0 U                                                                       / * ! <   S l a v e   T x   c o n f i g u r a t i o n     * /  
 # d e f i n e   L L _ I 2 S _ M O D E _ S L A V E _ R X                               ( S P I _ I 2 S C F G R _ I 2 S C F G _ 0 )                                                 / * ! <   S l a v e   R x   c o n f i g u r a t i o n     * /  
 # d e f i n e   L L _ I 2 S _ M O D E _ M A S T E R _ T X                             ( S P I _ I 2 S C F G R _ I 2 S C F G _ 1 )                                                 / * ! <   M a s t e r   T x   c o n f i g u r a t i o n   * /  
 # d e f i n e   L L _ I 2 S _ M O D E _ M A S T E R _ R X                             ( S P I _ I 2 S C F G R _ I 2 S C F G _ 0   |   S P I _ I 2 S C F G R _ I 2 S C F G _ 1 )   / * ! <   M a s t e r   R x   c o n f i g u r a t i o n   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   I 2 S _ L L _ E C _ P R E S C A L E R _ F A C T O R   P r e s c a l e r   F a c t o r  
     *   @ {  
     * /  
 # d e f i n e   L L _ I 2 S _ P R E S C A L E R _ P A R I T Y _ E V E N               0 x 0 0 0 0 0 0 0 0 U                               / * ! <   O d d   f a c t o r :   R e a l   d i v i d e r   v a l u e   i s   =     I 2 S D I V   *   2         * /  
 # d e f i n e   L L _ I 2 S _ P R E S C A L E R _ P A R I T Y _ O D D                 ( S P I _ I 2 S P R _ O D D   > >   8 U )           / * ! <   O d d   f a c t o r :   R e a l   d i v i d e r   v a l u e   i s   =   ( I 2 S D I V   *   2 ) + 1   * /  
 / * *  
     *   @ }  
     * /  
  
 # i f   d e f i n e d ( U S E _ F U L L _ L L _ D R I V E R )  
  
 / * *   @ d e f g r o u p   I 2 S _ L L _ E C _ M C L K _ O U T P U T   M C L K   O u t p u t  
     *   @ {  
     * /  
 # d e f i n e   L L _ I 2 S _ M C L K _ O U T P U T _ D I S A B L E                   0 x 0 0 0 0 0 0 0 0 U                               / * ! <   M a s t e r   c l o c k   o u t p u t   i s   d i s a b l e d   * /  
 # d e f i n e   L L _ I 2 S _ M C L K _ O U T P U T _ E N A B L E                     ( S P I _ I 2 S P R _ M C K O E )                   / * ! <   M a s t e r   c l o c k   o u t p u t   i s   e n a b l e d     * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   I 2 S _ L L _ E C _ A U D I O _ F R E Q   A u d i o   F r e q u e n c y  
     *   @ {  
     * /  
  
 # d e f i n e   L L _ I 2 S _ A U D I O F R E Q _ 1 9 2 K                             1 9 2 0 0 0 U               / * ! <   A u d i o   F r e q u e n c y   c o n f i g u r a t i o n   1 9 2 0 0 0   H z               * /  
 # d e f i n e   L L _ I 2 S _ A U D I O F R E Q _ 9 6 K                               9 6 0 0 0 U                 / * ! <   A u d i o   F r e q u e n c y   c o n f i g u r a t i o n     9 6 0 0 0   H z               * /  
 # d e f i n e   L L _ I 2 S _ A U D I O F R E Q _ 4 8 K                               4 8 0 0 0 U                 / * ! <   A u d i o   F r e q u e n c y   c o n f i g u r a t i o n     4 8 0 0 0   H z               * /  
 # d e f i n e   L L _ I 2 S _ A U D I O F R E Q _ 4 4 K                               4 4 1 0 0 U                 / * ! <   A u d i o   F r e q u e n c y   c o n f i g u r a t i o n     4 4 1 0 0   H z               * /  
 # d e f i n e   L L _ I 2 S _ A U D I O F R E Q _ 3 2 K                               3 2 0 0 0 U                 / * ! <   A u d i o   F r e q u e n c y   c o n f i g u r a t i o n     3 2 0 0 0   H z               * /  
 # d e f i n e   L L _ I 2 S _ A U D I O F R E Q _ 2 2 K                               2 2 0 5 0 U                 / * ! <   A u d i o   F r e q u e n c y   c o n f i g u r a t i o n     2 2 0 5 0   H z               * /  
 # d e f i n e   L L _ I 2 S _ A U D I O F R E Q _ 1 6 K                               1 6 0 0 0 U                 / * ! <   A u d i o   F r e q u e n c y   c o n f i g u r a t i o n     1 6 0 0 0   H z               * /  
 # d e f i n e   L L _ I 2 S _ A U D I O F R E Q _ 1 1 K                               1 1 0 2 5 U                 / * ! <   A u d i o   F r e q u e n c y   c o n f i g u r a t i o n     1 1 0 2 5   H z               * /  
 # d e f i n e   L L _ I 2 S _ A U D I O F R E Q _ 8 K                                 8 0 0 0 U                   / * ! <   A u d i o   F r e q u e n c y   c o n f i g u r a t i o n       8 0 0 0   H z               * /  
 # d e f i n e   L L _ I 2 S _ A U D I O F R E Q _ D E F A U L T                       2 U                         / * ! <   A u d i o   F r e q   n o t   s p e c i f i e d .   R e g i s t e r   I 2 S D I V   =   2   * /  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / *   U S E _ F U L L _ L L _ D R I V E R   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   I 2 S _ L L _ E x p o r t e d _ M a c r o s   I 2 S   E x p o r t e d   M a c r o s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   I 2 S _ L L _ E M _ W R I T E _ R E A D   C o m m o n   W r i t e   a n d   r e a d   r e g i s t e r s   M a c r o s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     W r i t e   a   v a l u e   i n   I 2 S   r e g i s t e r  
     *   @ p a r a m     _ _ I N S T A N C E _ _   I 2 S   I n s t a n c e  
     *   @ p a r a m     _ _ R E G _ _   R e g i s t e r   t o   b e   w r i t t e n  
     *   @ p a r a m     _ _ V A L U E _ _   V a l u e   t o   b e   w r i t t e n   i n   t h e   r e g i s t e r  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   L L _ I 2 S _ W r i t e R e g ( _ _ I N S T A N C E _ _ ,   _ _ R E G _ _ ,   _ _ V A L U E _ _ )   W R I T E _ R E G ( _ _ I N S T A N C E _ _ - > _ _ R E G _ _ ,   ( _ _ V A L U E _ _ ) )  
  
 / * *  
     *   @ b r i e f     R e a d   a   v a l u e   i n   I 2 S   r e g i s t e r  
     *   @ p a r a m     _ _ I N S T A N C E _ _   I 2 S   I n s t a n c e  
     *   @ p a r a m     _ _ R E G _ _   R e g i s t e r   t o   b e   r e a d  
     *   @ r e t v a l   R e g i s t e r   v a l u e  
     * /  
 # d e f i n e   L L _ I 2 S _ R e a d R e g ( _ _ I N S T A N C E _ _ ,   _ _ R E G _ _ )   R E A D _ R E G ( _ _ I N S T A N C E _ _ - > _ _ R E G _ _ )  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   I 2 S _ L L _ E x p o r t e d _ F u n c t i o n s   I 2 S   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   I 2 S _ L L _ E F _ C o n f i g u r a t i o n   C o n f i g u r a t i o n  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S e l e c t   I 2 S   m o d e   a n d   E n a b l e   I 2 S   p e r i p h e r a l  
     *   @ r m t o l l   I 2 S C F G R             I 2 S M O D                 L L _ I 2 S _ E n a b l e \ n  
     *                   I 2 S C F G R             I 2 S E                     L L _ I 2 S _ E n a b l e  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ I 2 S _ E n a b l e ( S P I _ T y p e D e f   * S P I x )  
 {  
     S E T _ B I T ( S P I x - > I 2 S C F G R ,   S P I _ I 2 S C F G R _ I 2 S M O D   |   S P I _ I 2 S C F G R _ I 2 S E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   I 2 S   p e r i p h e r a l  
     *   @ r m t o l l   I 2 S C F G R             I 2 S E                     L L _ I 2 S _ D i s a b l e  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ I 2 S _ D i s a b l e ( S P I _ T y p e D e f   * S P I x )  
 {  
     C L E A R _ B I T ( S P I x - > I 2 S C F G R ,   S P I _ I 2 S C F G R _ I 2 S M O D   |   S P I _ I 2 S C F G R _ I 2 S E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   I 2 S   p e r i p h e r a l   i s   e n a b l e d  
     *   @ r m t o l l   I 2 S C F G R             I 2 S E                     L L _ I 2 S _ I s E n a b l e d  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ I 2 S _ I s E n a b l e d ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( ( R E A D _ B I T ( S P I x - > I 2 S C F G R ,   S P I _ I 2 S C F G R _ I 2 S E )   = =   ( S P I _ I 2 S C F G R _ I 2 S E ) )   ?   1 U L   :   0 U L ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   I 2 S   d a t a   f r a m e   l e n g t h  
     *   @ r m t o l l   I 2 S C F G R             D A T L E N                 L L _ I 2 S _ S e t D a t a F o r m a t \ n  
     *                   I 2 S C F G R             C H L E N                   L L _ I 2 S _ S e t D a t a F o r m a t  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ p a r a m     D a t a F o r m a t   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ I 2 S _ D A T A F O R M A T _ 1 6 B  
     *                   @ a r g   @ r e f   L L _ I 2 S _ D A T A F O R M A T _ 1 6 B _ E X T E N D E D  
     *                   @ a r g   @ r e f   L L _ I 2 S _ D A T A F O R M A T _ 2 4 B  
     *                   @ a r g   @ r e f   L L _ I 2 S _ D A T A F O R M A T _ 3 2 B  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ I 2 S _ S e t D a t a F o r m a t ( S P I _ T y p e D e f   * S P I x ,   u i n t 3 2 _ t   D a t a F o r m a t )  
 {  
     M O D I F Y _ R E G ( S P I x - > I 2 S C F G R ,   S P I _ I 2 S C F G R _ D A T L E N   |   S P I _ I 2 S C F G R _ C H L E N ,   D a t a F o r m a t ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   I 2 S   d a t a   f r a m e   l e n g t h  
     *   @ r m t o l l   I 2 S C F G R             D A T L E N                 L L _ I 2 S _ G e t D a t a F o r m a t \ n  
     *                   I 2 S C F G R             C H L E N                   L L _ I 2 S _ G e t D a t a F o r m a t  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ I 2 S _ D A T A F O R M A T _ 1 6 B  
     *                   @ a r g   @ r e f   L L _ I 2 S _ D A T A F O R M A T _ 1 6 B _ E X T E N D E D  
     *                   @ a r g   @ r e f   L L _ I 2 S _ D A T A F O R M A T _ 2 4 B  
     *                   @ a r g   @ r e f   L L _ I 2 S _ D A T A F O R M A T _ 3 2 B  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ I 2 S _ G e t D a t a F o r m a t ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( S P I x - > I 2 S C F G R ,   S P I _ I 2 S C F G R _ D A T L E N   |   S P I _ I 2 S C F G R _ C H L E N ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   I 2 S   c l o c k   p o l a r i t y  
     *   @ r m t o l l   I 2 S C F G R             C K P O L                   L L _ I 2 S _ S e t C l o c k P o l a r i t y  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ p a r a m     C l o c k P o l a r i t y   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ I 2 S _ P O L A R I T Y _ L O W  
     *                   @ a r g   @ r e f   L L _ I 2 S _ P O L A R I T Y _ H I G H  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ I 2 S _ S e t C l o c k P o l a r i t y ( S P I _ T y p e D e f   * S P I x ,   u i n t 3 2 _ t   C l o c k P o l a r i t y )  
 {  
     S E T _ B I T ( S P I x - > I 2 S C F G R ,   C l o c k P o l a r i t y ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   I 2 S   c l o c k   p o l a r i t y  
     *   @ r m t o l l   I 2 S C F G R             C K P O L                   L L _ I 2 S _ G e t C l o c k P o l a r i t y  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ I 2 S _ P O L A R I T Y _ L O W  
     *                   @ a r g   @ r e f   L L _ I 2 S _ P O L A R I T Y _ H I G H  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ I 2 S _ G e t C l o c k P o l a r i t y ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( S P I x - > I 2 S C F G R ,   S P I _ I 2 S C F G R _ C K P O L ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   I 2 S   s t a n d a r d   p r o t o c o l  
     *   @ r m t o l l   I 2 S C F G R             I 2 S S T D                 L L _ I 2 S _ S e t S t a n d a r d \ n  
     *                   I 2 S C F G R             P C M S Y N C               L L _ I 2 S _ S e t S t a n d a r d  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ p a r a m     S t a n d a r d   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ I 2 S _ S T A N D A R D _ P H I L I P S  
     *                   @ a r g   @ r e f   L L _ I 2 S _ S T A N D A R D _ M S B  
     *                   @ a r g   @ r e f   L L _ I 2 S _ S T A N D A R D _ L S B  
     *                   @ a r g   @ r e f   L L _ I 2 S _ S T A N D A R D _ P C M _ S H O R T  
     *                   @ a r g   @ r e f   L L _ I 2 S _ S T A N D A R D _ P C M _ L O N G  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ I 2 S _ S e t S t a n d a r d ( S P I _ T y p e D e f   * S P I x ,   u i n t 3 2 _ t   S t a n d a r d )  
 {  
     M O D I F Y _ R E G ( S P I x - > I 2 S C F G R ,   S P I _ I 2 S C F G R _ I 2 S S T D   |   S P I _ I 2 S C F G R _ P C M S Y N C ,   S t a n d a r d ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   I 2 S   s t a n d a r d   p r o t o c o l  
     *   @ r m t o l l   I 2 S C F G R             I 2 S S T D                 L L _ I 2 S _ G e t S t a n d a r d \ n  
     *                   I 2 S C F G R             P C M S Y N C               L L _ I 2 S _ G e t S t a n d a r d  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ I 2 S _ S T A N D A R D _ P H I L I P S  
     *                   @ a r g   @ r e f   L L _ I 2 S _ S T A N D A R D _ M S B  
     *                   @ a r g   @ r e f   L L _ I 2 S _ S T A N D A R D _ L S B  
     *                   @ a r g   @ r e f   L L _ I 2 S _ S T A N D A R D _ P C M _ S H O R T  
     *                   @ a r g   @ r e f   L L _ I 2 S _ S T A N D A R D _ P C M _ L O N G  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ I 2 S _ G e t S t a n d a r d ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( S P I x - > I 2 S C F G R ,   S P I _ I 2 S C F G R _ I 2 S S T D   |   S P I _ I 2 S C F G R _ P C M S Y N C ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   I 2 S   t r a n s f e r   m o d e  
     *   @ r m t o l l   I 2 S C F G R             I 2 S C F G                 L L _ I 2 S _ S e t T r a n s f e r M o d e  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ p a r a m     M o d e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ I 2 S _ M O D E _ S L A V E _ T X  
     *                   @ a r g   @ r e f   L L _ I 2 S _ M O D E _ S L A V E _ R X  
     *                   @ a r g   @ r e f   L L _ I 2 S _ M O D E _ M A S T E R _ T X  
     *                   @ a r g   @ r e f   L L _ I 2 S _ M O D E _ M A S T E R _ R X  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ I 2 S _ S e t T r a n s f e r M o d e ( S P I _ T y p e D e f   * S P I x ,   u i n t 3 2 _ t   M o d e )  
 {  
     M O D I F Y _ R E G ( S P I x - > I 2 S C F G R ,   S P I _ I 2 S C F G R _ I 2 S C F G ,   M o d e ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   I 2 S   t r a n s f e r   m o d e  
     *   @ r m t o l l   I 2 S C F G R             I 2 S C F G                 L L _ I 2 S _ G e t T r a n s f e r M o d e  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ I 2 S _ M O D E _ S L A V E _ T X  
     *                   @ a r g   @ r e f   L L _ I 2 S _ M O D E _ S L A V E _ R X  
     *                   @ a r g   @ r e f   L L _ I 2 S _ M O D E _ M A S T E R _ T X  
     *                   @ a r g   @ r e f   L L _ I 2 S _ M O D E _ M A S T E R _ R X  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ I 2 S _ G e t T r a n s f e r M o d e ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( S P I x - > I 2 S C F G R ,   S P I _ I 2 S C F G R _ I 2 S C F G ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   I 2 S   l i n e a r   p r e s c a l e r  
     *   @ r m t o l l   I 2 S P R                 I 2 S D I V                 L L _ I 2 S _ S e t P r e s c a l e r L i n e a r  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ p a r a m     P r e s c a l e r L i n e a r   V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 2   a n d   M a x _ D a t a = 0 x F F  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ I 2 S _ S e t P r e s c a l e r L i n e a r ( S P I _ T y p e D e f   * S P I x ,   u i n t 8 _ t   P r e s c a l e r L i n e a r )  
 {  
     M O D I F Y _ R E G ( S P I x - > I 2 S P R ,   S P I _ I 2 S P R _ I 2 S D I V ,   P r e s c a l e r L i n e a r ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   I 2 S   l i n e a r   p r e s c a l e r  
     *   @ r m t o l l   I 2 S P R                 I 2 S D I V                 L L _ I 2 S _ G e t P r e s c a l e r L i n e a r  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   P r e s c a l e r L i n e a r   V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 2   a n d   M a x _ D a t a = 0 x F F  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ I 2 S _ G e t P r e s c a l e r L i n e a r ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( S P I x - > I 2 S P R ,   S P I _ I 2 S P R _ I 2 S D I V ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   I 2 S   p a r i t y   p r e s c a l e r  
     *   @ r m t o l l   I 2 S P R                 O D D                       L L _ I 2 S _ S e t P r e s c a l e r P a r i t y  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ p a r a m     P r e s c a l e r P a r i t y   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ I 2 S _ P R E S C A L E R _ P A R I T Y _ E V E N  
     *                   @ a r g   @ r e f   L L _ I 2 S _ P R E S C A L E R _ P A R I T Y _ O D D  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ I 2 S _ S e t P r e s c a l e r P a r i t y ( S P I _ T y p e D e f   * S P I x ,   u i n t 3 2 _ t   P r e s c a l e r P a r i t y )  
 {  
     M O D I F Y _ R E G ( S P I x - > I 2 S P R ,   S P I _ I 2 S P R _ O D D ,   P r e s c a l e r P a r i t y   < <   8 U ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   I 2 S   p a r i t y   p r e s c a l e r  
     *   @ r m t o l l   I 2 S P R                 O D D                       L L _ I 2 S _ G e t P r e s c a l e r P a r i t y  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ I 2 S _ P R E S C A L E R _ P A R I T Y _ E V E N  
     *                   @ a r g   @ r e f   L L _ I 2 S _ P R E S C A L E R _ P A R I T Y _ O D D  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ I 2 S _ G e t P r e s c a l e r P a r i t y ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( S P I x - > I 2 S P R ,   S P I _ I 2 S P R _ O D D )   > >   8 U ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   t h e   m a s t e r   c l o c k   o u t p u t   ( P i n   M C K )  
     *   @ r m t o l l   I 2 S P R                 M C K O E                   L L _ I 2 S _ E n a b l e M a s t e r C l o c k  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ I 2 S _ E n a b l e M a s t e r C l o c k ( S P I _ T y p e D e f   * S P I x )  
 {  
     S E T _ B I T ( S P I x - > I 2 S P R ,   S P I _ I 2 S P R _ M C K O E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   t h e   m a s t e r   c l o c k   o u t p u t   ( P i n   M C K )  
     *   @ r m t o l l   I 2 S P R                 M C K O E                   L L _ I 2 S _ D i s a b l e M a s t e r C l o c k  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ I 2 S _ D i s a b l e M a s t e r C l o c k ( S P I _ T y p e D e f   * S P I x )  
 {  
     C L E A R _ B I T ( S P I x - > I 2 S P R ,   S P I _ I 2 S P R _ M C K O E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   t h e   m a s t e r   c l o c k   o u t p u t   ( P i n   M C K )   i s   e n a b l e d  
     *   @ r m t o l l   I 2 S P R                 M C K O E                   L L _ I 2 S _ I s E n a b l e d M a s t e r C l o c k  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ I 2 S _ I s E n a b l e d M a s t e r C l o c k ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( ( R E A D _ B I T ( S P I x - > I 2 S P R ,   S P I _ I 2 S P R _ M C K O E )   = =   ( S P I _ I 2 S P R _ M C K O E ) )   ?   1 U L   :   0 U L ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   I 2 S _ L L _ E F _ F L A G   F L A G   M a n a g e m e n t  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   R x   b u f f e r   i s   n o t   e m p t y  
     *   @ r m t o l l   S R                       R X N E                     L L _ I 2 S _ I s A c t i v e F l a g _ R X N E  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ I 2 S _ I s A c t i v e F l a g _ R X N E ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   L L _ S P I _ I s A c t i v e F l a g _ R X N E ( S P I x ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   T x   b u f f e r   i s   e m p t y  
     *   @ r m t o l l   S R                       T X E                       L L _ I 2 S _ I s A c t i v e F l a g _ T X E  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ I 2 S _ I s A c t i v e F l a g _ T X E ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   L L _ S P I _ I s A c t i v e F l a g _ T X E ( S P I x ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   b u s y   f l a g  
     *   @ r m t o l l   S R                       B S Y                       L L _ I 2 S _ I s A c t i v e F l a g _ B S Y  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ I 2 S _ I s A c t i v e F l a g _ B S Y ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   L L _ S P I _ I s A c t i v e F l a g _ B S Y ( S P I x ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   o v e r r u n   e r r o r   f l a g  
     *   @ r m t o l l   S R                       O V R                       L L _ I 2 S _ I s A c t i v e F l a g _ O V R  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ I 2 S _ I s A c t i v e F l a g _ O V R ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   L L _ S P I _ I s A c t i v e F l a g _ O V R ( S P I x ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   u n d e r r u n   e r r o r   f l a g  
     *   @ r m t o l l   S R                       U D R                       L L _ I 2 S _ I s A c t i v e F l a g _ U D R  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ I 2 S _ I s A c t i v e F l a g _ U D R ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( ( R E A D _ B I T ( S P I x - > S R ,   S P I _ S R _ U D R )   = =   ( S P I _ S R _ U D R ) )   ?   1 U L   :   0 U L ) ;  
 }  
  
  
 / * *  
     *   @ b r i e f     G e t   c h a n n e l   s i d e   f l a g .  
     *   @ n o t e       0 :   C h a n n e l   L e f t   h a s   t o   b e   t r a n s m i t t e d   o r   h a s   b e e n   r e c e i v e d \ n  
     *                   1 :   C h a n n e l   R i g h t   h a s   t o   b e   t r a n s m i t t e d   o r   h a s   b e e n   r e c e i v e d \ n  
     *                   I t   h a s   n o   s i g n i f i c a n c e   i n   P C M   m o d e .  
     *   @ r m t o l l   S R                       C H S I D E                 L L _ I 2 S _ I s A c t i v e F l a g _ C H S I D E  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ I 2 S _ I s A c t i v e F l a g _ C H S I D E ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   ( ( R E A D _ B I T ( S P I x - > S R ,   S P I _ S R _ C H S I D E )   = =   ( S P I _ S R _ C H S I D E ) )   ?   1 U L   :   0 U L ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   o v e r r u n   e r r o r   f l a g  
     *   @ r m t o l l   S R                       O V R                       L L _ I 2 S _ C l e a r F l a g _ O V R  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ I 2 S _ C l e a r F l a g _ O V R ( S P I _ T y p e D e f   * S P I x )  
 {  
     L L _ S P I _ C l e a r F l a g _ O V R ( S P I x ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   u n d e r r u n   e r r o r   f l a g  
     *   @ r m t o l l   S R                       U D R                       L L _ I 2 S _ C l e a r F l a g _ U D R  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ I 2 S _ C l e a r F l a g _ U D R ( S P I _ T y p e D e f   * S P I x )  
 {  
     _ _ I O   u i n t 3 2 _ t   t m p r e g ;  
     t m p r e g   =   S P I x - > S R ;  
     ( v o i d ) t m p r e g ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   f r a m e   f o r m a t   e r r o r   f l a g  
     *   @ r m t o l l   S R                       F R E                       L L _ I 2 S _ C l e a r F l a g _ F R E  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ I 2 S _ C l e a r F l a g _ F R E ( S P I _ T y p e D e f   * S P I x )  
 {  
     L L _ S P I _ C l e a r F l a g _ F R E ( S P I x ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   I 2 S _ L L _ E F _ I T   I n t e r r u p t   M a n a g e m e n t  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   e r r o r   I T  
     *   @ n o t e       T h i s   b i t   c o n t r o l s   t h e   g e n e r a t i o n   o f   a n   i n t e r r u p t   w h e n   a n   e r r o r   c o n d i t i o n   o c c u r s   ( O V R ,   U D R   a n d   F R E   i n   I 2 S   m o d e ) .  
     *   @ r m t o l l   C R 2                     E R R I E                   L L _ I 2 S _ E n a b l e I T _ E R R  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ I 2 S _ E n a b l e I T _ E R R ( S P I _ T y p e D e f   * S P I x )  
 {  
     L L _ S P I _ E n a b l e I T _ E R R ( S P I x ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   R x   b u f f e r   n o t   e m p t y   I T  
     *   @ r m t o l l   C R 2                     R X N E I E                 L L _ I 2 S _ E n a b l e I T _ R X N E  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ I 2 S _ E n a b l e I T _ R X N E ( S P I _ T y p e D e f   * S P I x )  
 {  
     L L _ S P I _ E n a b l e I T _ R X N E ( S P I x ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   T x   b u f f e r   e m p t y   I T  
     *   @ r m t o l l   C R 2                     T X E I E                   L L _ I 2 S _ E n a b l e I T _ T X E  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ I 2 S _ E n a b l e I T _ T X E ( S P I _ T y p e D e f   * S P I x )  
 {  
     L L _ S P I _ E n a b l e I T _ T X E ( S P I x ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   e r r o r   I T  
     *   @ n o t e       T h i s   b i t   c o n t r o l s   t h e   g e n e r a t i o n   o f   a n   i n t e r r u p t   w h e n   a n   e r r o r   c o n d i t i o n   o c c u r s   ( O V R ,   U D R   a n d   F R E   i n   I 2 S   m o d e ) .  
     *   @ r m t o l l   C R 2                     E R R I E                   L L _ I 2 S _ D i s a b l e I T _ E R R  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ I 2 S _ D i s a b l e I T _ E R R ( S P I _ T y p e D e f   * S P I x )  
 {  
     L L _ S P I _ D i s a b l e I T _ E R R ( S P I x ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   R x   b u f f e r   n o t   e m p t y   I T  
     *   @ r m t o l l   C R 2                     R X N E I E                 L L _ I 2 S _ D i s a b l e I T _ R X N E  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ I 2 S _ D i s a b l e I T _ R X N E ( S P I _ T y p e D e f   * S P I x )  
 {  
     L L _ S P I _ D i s a b l e I T _ R X N E ( S P I x ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   T x   b u f f e r   e m p t y   I T  
     *   @ r m t o l l   C R 2                     T X E I E                   L L _ I 2 S _ D i s a b l e I T _ T X E  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ I 2 S _ D i s a b l e I T _ T X E ( S P I _ T y p e D e f   * S P I x )  
 {  
     L L _ S P I _ D i s a b l e I T _ T X E ( S P I x ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   E R R   I T   i s   e n a b l e d  
     *   @ r m t o l l   C R 2                     E R R I E                   L L _ I 2 S _ I s E n a b l e d I T _ E R R  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ I 2 S _ I s E n a b l e d I T _ E R R ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   L L _ S P I _ I s E n a b l e d I T _ E R R ( S P I x ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   R X N E   I T   i s   e n a b l e d  
     *   @ r m t o l l   C R 2                     R X N E I E                 L L _ I 2 S _ I s E n a b l e d I T _ R X N E  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ I 2 S _ I s E n a b l e d I T _ R X N E ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   L L _ S P I _ I s E n a b l e d I T _ R X N E ( S P I x ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   T X E   I T   i s   e n a b l e d  
     *   @ r m t o l l   C R 2                     T X E I E                   L L _ I 2 S _ I s E n a b l e d I T _ T X E  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ I 2 S _ I s E n a b l e d I T _ T X E ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   L L _ S P I _ I s E n a b l e d I T _ T X E ( S P I x ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   I 2 S _ L L _ E F _ D M A   D M A   M a n a g e m e n t  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   D M A   R x  
     *   @ r m t o l l   C R 2                     R X D M A E N               L L _ I 2 S _ E n a b l e D M A R e q _ R X  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ I 2 S _ E n a b l e D M A R e q _ R X ( S P I _ T y p e D e f   * S P I x )  
 {  
     L L _ S P I _ E n a b l e D M A R e q _ R X ( S P I x ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   D M A   R x  
     *   @ r m t o l l   C R 2                     R X D M A E N               L L _ I 2 S _ D i s a b l e D M A R e q _ R X  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ I 2 S _ D i s a b l e D M A R e q _ R X ( S P I _ T y p e D e f   * S P I x )  
 {  
     L L _ S P I _ D i s a b l e D M A R e q _ R X ( S P I x ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   D M A   R x   i s   e n a b l e d  
     *   @ r m t o l l   C R 2                     R X D M A E N               L L _ I 2 S _ I s E n a b l e d D M A R e q _ R X  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ I 2 S _ I s E n a b l e d D M A R e q _ R X ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   L L _ S P I _ I s E n a b l e d D M A R e q _ R X ( S P I x ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   D M A   T x  
     *   @ r m t o l l   C R 2                     T X D M A E N               L L _ I 2 S _ E n a b l e D M A R e q _ T X  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ I 2 S _ E n a b l e D M A R e q _ T X ( S P I _ T y p e D e f   * S P I x )  
 {  
     L L _ S P I _ E n a b l e D M A R e q _ T X ( S P I x ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   D M A   T x  
     *   @ r m t o l l   C R 2                     T X D M A E N               L L _ I 2 S _ D i s a b l e D M A R e q _ T X  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ I 2 S _ D i s a b l e D M A R e q _ T X ( S P I _ T y p e D e f   * S P I x )  
 {  
     L L _ S P I _ D i s a b l e D M A R e q _ T X ( S P I x ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   D M A   T x   i s   e n a b l e d  
     *   @ r m t o l l   C R 2                     T X D M A E N               L L _ I 2 S _ I s E n a b l e d D M A R e q _ T X  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ I 2 S _ I s E n a b l e d D M A R e q _ T X ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   L L _ S P I _ I s E n a b l e d D M A R e q _ T X ( S P I x ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   I 2 S _ L L _ E F _ D A T A   D A T A   M a n a g e m e n t  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     R e a d   1 6 - B i t s   i n   d a t a   r e g i s t e r  
     *   @ r m t o l l   D R                       D R                         L L _ I 2 S _ R e c e i v e D a t a 1 6  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ r e t v a l   R x D a t a   V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 0 0 0   a n d   M a x _ D a t a = 0 x F F F F  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 1 6 _ t   L L _ I 2 S _ R e c e i v e D a t a 1 6 ( S P I _ T y p e D e f   * S P I x )  
 {  
     r e t u r n   L L _ S P I _ R e c e i v e D a t a 1 6 ( S P I x ) ;  
 }  
  
 / * *  
     *   @ b r i e f     W r i t e   1 6 - B i t s   i n   d a t a   r e g i s t e r  
     *   @ r m t o l l   D R                       D R                         L L _ I 2 S _ T r a n s m i t D a t a 1 6  
     *   @ p a r a m     S P I x   S P I   I n s t a n c e  
     *   @ p a r a m     T x D a t a   V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 0 0 0   a n d   M a x _ D a t a = 0 x F F F F  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ I 2 S _ T r a n s m i t D a t a 1 6 ( S P I _ T y p e D e f   * S P I x ,   u i n t 1 6 _ t   T x D a t a )  
 {  
     L L _ S P I _ T r a n s m i t D a t a 1 6 ( S P I x ,   T x D a t a ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 # i f   d e f i n e d ( U S E _ F U L L _ L L _ D R I V E R )  
 / * *   @ d e f g r o u p   I 2 S _ L L _ E F _ I n i t   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *   @ {  
     * /  
  
 E r r o r S t a t u s   L L _ I 2 S _ D e I n i t ( S P I _ T y p e D e f   * S P I x ) ;  
 E r r o r S t a t u s   L L _ I 2 S _ I n i t ( S P I _ T y p e D e f   * S P I x ,   L L _ I 2 S _ I n i t T y p e D e f   * I 2 S _ I n i t S t r u c t ) ;  
 v o i d                 L L _ I 2 S _ S t r u c t I n i t ( L L _ I 2 S _ I n i t T y p e D e f   * I 2 S _ I n i t S t r u c t ) ;  
 v o i d                 L L _ I 2 S _ C o n f i g P r e s c a l e r ( S P I _ T y p e D e f   * S P I x ,   u i n t 3 2 _ t   P r e s c a l e r L i n e a r ,   u i n t 3 2 _ t   P r e s c a l e r P a r i t y ) ;  
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
 # e n d i f   / *   S P I _ I 2 S _ S U P P O R T   * /  
  
 # e n d i f   / *   d e f i n e d   ( S P I 1 )   | |   d e f i n e d   ( S P I 2 )   | |   d e f i n e d   ( S P I 3 )   * /  
  
 / * *  
     *   @ }  
     * /  
  
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
 # e n d i f   / *   S T M 3 2 F 1 x x _ L L _ S P I _ H   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  