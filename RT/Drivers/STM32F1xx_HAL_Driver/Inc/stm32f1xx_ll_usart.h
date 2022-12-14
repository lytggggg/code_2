??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ l l _ u s a r t . h  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H e a d e r   f i l e   o f   U S A R T   L L   m o d u l e .  
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
 # i f n d e f   _ _ S T M 3 2 F 1 x x _ L L _ U S A R T _ H  
 # d e f i n e   _ _ S T M 3 2 F 1 x x _ L L _ U S A R T _ H  
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
 # i f   d e f i n e d   ( U S A R T 1 )   | |   d e f i n e d   ( U S A R T 2 )   | |   d e f i n e d   ( U S A R T 3 )   | |   d e f i n e d   ( U A R T 4 )   | |   d e f i n e d   ( U A R T 5 )  
  
 / * *   @ d e f g r o u p   U S A R T _ L L   U S A R T  
     *   @ {  
     * /  
  
 / *   P r i v a t e   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / *   P r i v a t e   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   U S A R T _ L L _ P r i v a t e _ C o n s t a n t s   U S A R T   P r i v a t e   C o n s t a n t s  
     *   @ {  
     * /  
  
 / *   D e f i n e s   u s e d   f o r   t h e   b i t   p o s i t i o n   i n   t h e   r e g i s t e r   a n d   p e r f o r m   o f f s e t s * /  
 # d e f i n e   U S A R T _ P O S I T I O N _ G T P R _ G T                                     U S A R T _ G T P R _ G T _ P o s  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i f   d e f i n e d ( U S E _ F U L L _ L L _ D R I V E R )  
 / * *   @ d e f g r o u p   U S A R T _ L L _ P r i v a t e _ M a c r o s   U S A R T   P r i v a t e   M a c r o s  
     *   @ {  
     * /  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / * U S E _ F U L L _ L L _ D R I V E R * /  
  
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i f   d e f i n e d ( U S E _ F U L L _ L L _ D R I V E R )  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E S _ I N I T   U S A R T   E x p o r t e d   I n i t   s t r u c t u r e s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f   L L   U S A R T   I n i t   S t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   B a u d R a t e ;                                     / * ! <   T h i s   f i e l d   d e f i n e s   e x p e c t e d   U s a r t   c o m m u n i c a t i o n   b a u d   r a t e .  
  
                                                                                       T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ U S A R T _ S e t B a u d R a t e ( ) . * /  
  
     u i n t 3 2 _ t   D a t a W i d t h ;                                   / * ! <   S p e c i f i e s   t h e   n u m b e r   o f   d a t a   b i t s   t r a n s m i t t e d   o r   r e c e i v e d   i n   a   f r a m e .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   U S A R T _ L L _ E C _ D A T A W I D T H .  
  
                                                                                       T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ U S A R T _ S e t D a t a W i d t h ( ) . * /  
  
     u i n t 3 2 _ t   S t o p B i t s ;                                     / * ! <   S p e c i f i e s   t h e   n u m b e r   o f   s t o p   b i t s   t r a n s m i t t e d .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   U S A R T _ L L _ E C _ S T O P B I T S .  
  
                                                                                       T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ U S A R T _ S e t S t o p B i t s L e n g t h ( ) . * /  
  
     u i n t 3 2 _ t   P a r i t y ;                                         / * ! <   S p e c i f i e s   t h e   p a r i t y   m o d e .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   U S A R T _ L L _ E C _ P A R I T Y .  
  
                                                                                       T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ U S A R T _ S e t P a r i t y ( ) . * /  
  
     u i n t 3 2 _ t   T r a n s f e r D i r e c t i o n ;                   / * ! <   S p e c i f i e s   w h e t h e r   t h e   R e c e i v e   a n d / o r   T r a n s m i t   m o d e   i s   e n a b l e d   o r   d i s a b l e d .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   U S A R T _ L L _ E C _ D I R E C T I O N .  
  
                                                                                       T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ U S A R T _ S e t T r a n s f e r D i r e c t i o n ( ) . * /  
  
     u i n t 3 2 _ t   H a r d w a r e F l o w C o n t r o l ;               / * ! <   S p e c i f i e s   w h e t h e r   t h e   h a r d w a r e   f l o w   c o n t r o l   m o d e   i s   e n a b l e d   o r   d i s a b l e d .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   U S A R T _ L L _ E C _ H W C O N T R O L .  
  
                                                                                       T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ U S A R T _ S e t H W F l o w C t r l ( ) . * /  
  
     u i n t 3 2 _ t   O v e r S a m p l i n g ;                             / * ! <   S p e c i f i e s   w h e t h e r   U S A R T   o v e r s a m p l i n g   m o d e   i s   1 6   o r   8 .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   U S A R T _ L L _ E C _ O V E R S A M P L I N G .  
  
                                                                                       T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ U S A R T _ S e t O v e r S a m p l i n g ( ) . * /  
  
 }   L L _ U S A R T _ I n i t T y p e D e f ;  
  
 / * *  
     *   @ b r i e f   L L   U S A R T   C l o c k   I n i t   S t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   C l o c k O u t p u t ;                               / * ! <   S p e c i f i e s   w h e t h e r   t h e   U S A R T   c l o c k   i s   e n a b l e d   o r   d i s a b l e d .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   U S A R T _ L L _ E C _ C L O C K .  
  
                                                                                       U S A R T   H W   c o n f i g u r a t i o n   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n s  
                                                                                       @ r e f   L L _ U S A R T _ E n a b l e S C L K O u t p u t ( )   o r   @ r e f   L L _ U S A R T _ D i s a b l e S C L K O u t p u t ( ) .  
                                                                                       F o r   m o r e   d e t a i l s ,   r e f e r   t o   d e s c r i p t i o n   o f   t h i s   f u n c t i o n .   * /  
  
     u i n t 3 2 _ t   C l o c k P o l a r i t y ;                           / * ! <   S p e c i f i e s   t h e   s t e a d y   s t a t e   o f   t h e   s e r i a l   c l o c k .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   U S A R T _ L L _ E C _ P O L A R I T Y .  
  
                                                                                       U S A R T   H W   c o n f i g u r a t i o n   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n s   @ r e f   L L _ U S A R T _ S e t C l o c k P o l a r i t y ( ) .  
                                                                                       F o r   m o r e   d e t a i l s ,   r e f e r   t o   d e s c r i p t i o n   o f   t h i s   f u n c t i o n .   * /  
  
     u i n t 3 2 _ t   C l o c k P h a s e ;                                 / * ! <   S p e c i f i e s   t h e   c l o c k   t r a n s i t i o n   o n   w h i c h   t h e   b i t   c a p t u r e   i s   m a d e .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   U S A R T _ L L _ E C _ P H A S E .  
  
                                                                                       U S A R T   H W   c o n f i g u r a t i o n   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n s   @ r e f   L L _ U S A R T _ S e t C l o c k P h a s e ( ) .  
                                                                                       F o r   m o r e   d e t a i l s ,   r e f e r   t o   d e s c r i p t i o n   o f   t h i s   f u n c t i o n .   * /  
  
     u i n t 3 2 _ t   L a s t B i t C l o c k P u l s e ;                   / * ! <   S p e c i f i e s   w h e t h e r   t h e   c l o c k   p u l s e   c o r r e s p o n d i n g   t o   t h e   l a s t   t r a n s m i t t e d  
                                                                                       d a t a   b i t   ( M S B )   h a s   t o   b e   o u t p u t   o n   t h e   S C L K   p i n   i n   s y n c h r o n o u s   m o d e .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   U S A R T _ L L _ E C _ L A S T C L K P U L S E .  
  
                                                                                       U S A R T   H W   c o n f i g u r a t i o n   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n s   @ r e f   L L _ U S A R T _ S e t L a s t C l k P u l s e O u t p u t ( ) .  
                                                                                       F o r   m o r e   d e t a i l s ,   r e f e r   t o   d e s c r i p t i o n   o f   t h i s   f u n c t i o n .   * /  
  
 }   L L _ U S A R T _ C l o c k I n i t T y p e D e f ;  
  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / *   U S E _ F U L L _ L L _ D R I V E R   * /  
  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E x p o r t e d _ C o n s t a n t s   U S A R T   E x p o r t e d   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E C _ G E T _ F L A G   G e t   F l a g s   D e f i n e s  
     *   @ b r i e f         F l a g s   d e f i n e s   w h i c h   c a n   b e   u s e d   w i t h   L L _ U S A R T _ R e a d R e g   f u n c t i o n  
     *   @ {  
     * /  
 # d e f i n e   L L _ U S A R T _ S R _ P E                                                     U S A R T _ S R _ P E                                       / * ! <   P a r i t y   e r r o r   f l a g   * /  
 # d e f i n e   L L _ U S A R T _ S R _ F E                                                     U S A R T _ S R _ F E                                       / * ! <   F r a m i n g   e r r o r   f l a g   * /  
 # d e f i n e   L L _ U S A R T _ S R _ N E                                                     U S A R T _ S R _ N E                                       / * ! <   N o i s e   d e t e c t e d   f l a g   * /  
 # d e f i n e   L L _ U S A R T _ S R _ O R E                                                   U S A R T _ S R _ O R E                                     / * ! <   O v e r r u n   e r r o r   f l a g   * /  
 # d e f i n e   L L _ U S A R T _ S R _ I D L E                                                 U S A R T _ S R _ I D L E                                   / * ! <   I d l e   l i n e   d e t e c t e d   f l a g   * /  
 # d e f i n e   L L _ U S A R T _ S R _ R X N E                                                 U S A R T _ S R _ R X N E                                   / * ! <   R e a d   d a t a   r e g i s t e r   n o t   e m p t y   f l a g   * /  
 # d e f i n e   L L _ U S A R T _ S R _ T C                                                     U S A R T _ S R _ T C                                       / * ! <   T r a n s m i s s i o n   c o m p l e t e   f l a g   * /  
 # d e f i n e   L L _ U S A R T _ S R _ T X E                                                   U S A R T _ S R _ T X E                                     / * ! <   T r a n s m i t   d a t a   r e g i s t e r   e m p t y   f l a g   * /  
 # d e f i n e   L L _ U S A R T _ S R _ L B D                                                   U S A R T _ S R _ L B D                                     / * ! <   L I N   b r e a k   d e t e c t i o n   f l a g   * /  
 # d e f i n e   L L _ U S A R T _ S R _ C T S                                                   U S A R T _ S R _ C T S                                     / * ! <   C T S   f l a g   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E C _ I T   I T   D e f i n e s  
     *   @ b r i e f         I T   d e f i n e s   w h i c h   c a n   b e   u s e d   w i t h   L L _ U S A R T _ R e a d R e g   a n d     L L _ U S A R T _ W r i t e R e g   f u n c t i o n s  
     *   @ {  
     * /  
 # d e f i n e   L L _ U S A R T _ C R 1 _ I D L E I E                                           U S A R T _ C R 1 _ I D L E I E                             / * ! <   I D L E   i n t e r r u p t   e n a b l e   * /  
 # d e f i n e   L L _ U S A R T _ C R 1 _ R X N E I E                                           U S A R T _ C R 1 _ R X N E I E                             / * ! <   R e a d   d a t a   r e g i s t e r   n o t   e m p t y   i n t e r r u p t   e n a b l e   * /  
 # d e f i n e   L L _ U S A R T _ C R 1 _ T C I E                                               U S A R T _ C R 1 _ T C I E                                 / * ! <   T r a n s m i s s i o n   c o m p l e t e   i n t e r r u p t   e n a b l e   * /  
 # d e f i n e   L L _ U S A R T _ C R 1 _ T X E I E                                             U S A R T _ C R 1 _ T X E I E                               / * ! <   T r a n s m i t   d a t a   r e g i s t e r   e m p t y   i n t e r r u p t   e n a b l e   * /  
 # d e f i n e   L L _ U S A R T _ C R 1 _ P E I E                                               U S A R T _ C R 1 _ P E I E                                 / * ! <   P a r i t y   e r r o r   * /  
 # d e f i n e   L L _ U S A R T _ C R 2 _ L B D I E                                             U S A R T _ C R 2 _ L B D I E                               / * ! <   L I N   b r e a k   d e t e c t i o n   i n t e r r u p t   e n a b l e   * /  
 # d e f i n e   L L _ U S A R T _ C R 3 _ E I E                                                 U S A R T _ C R 3 _ E I E                                   / * ! <   E r r o r   i n t e r r u p t   e n a b l e   * /  
 # d e f i n e   L L _ U S A R T _ C R 3 _ C T S I E                                             U S A R T _ C R 3 _ C T S I E                               / * ! <   C T S   i n t e r r u p t   e n a b l e   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E C _ D I R E C T I O N   C o m m u n i c a t i o n   D i r e c t i o n  
     *   @ {  
     * /  
 # d e f i n e   L L _ U S A R T _ D I R E C T I O N _ N O N E                                   0 x 0 0 0 0 0 0 0 0 U                                                 / * ! <   T r a n s m i t t e r   a n d   R e c e i v e r   a r e   d i s a b l e d   * /  
 # d e f i n e   L L _ U S A R T _ D I R E C T I O N _ R X                                       U S A R T _ C R 1 _ R E                                               / * ! <   T r a n s m i t t e r   i s   d i s a b l e d   a n d   R e c e i v e r   i s   e n a b l e d   * /  
 # d e f i n e   L L _ U S A R T _ D I R E C T I O N _ T X                                       U S A R T _ C R 1 _ T E                                               / * ! <   T r a n s m i t t e r   i s   e n a b l e d   a n d   R e c e i v e r   i s   d i s a b l e d   * /  
 # d e f i n e   L L _ U S A R T _ D I R E C T I O N _ T X _ R X                                 ( U S A R T _ C R 1 _ T E   | U S A R T _ C R 1 _ R E )               / * ! <   T r a n s m i t t e r   a n d   R e c e i v e r   a r e   e n a b l e d   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E C _ P A R I T Y   P a r i t y   C o n t r o l  
     *   @ {  
     * /  
 # d e f i n e   L L _ U S A R T _ P A R I T Y _ N O N E                                         0 x 0 0 0 0 0 0 0 0 U                                                     / * ! <   P a r i t y   c o n t r o l   d i s a b l e d   * /  
 # d e f i n e   L L _ U S A R T _ P A R I T Y _ E V E N                                         U S A R T _ C R 1 _ P C E                                                 / * ! <   P a r i t y   c o n t r o l   e n a b l e d   a n d   E v e n   P a r i t y   i s   s e l e c t e d   * /  
 # d e f i n e   L L _ U S A R T _ P A R I T Y _ O D D                                           ( U S A R T _ C R 1 _ P C E   |   U S A R T _ C R 1 _ P S )               / * ! <   P a r i t y   c o n t r o l   e n a b l e d   a n d   O d d   P a r i t y   i s   s e l e c t e d   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E C _ W A K E U P   W a k e u p  
     *   @ {  
     * /  
 # d e f i n e   L L _ U S A R T _ W A K E U P _ I D L E L I N E                                 0 x 0 0 0 0 0 0 0 0 U                       / * ! <     U S A R T   w a k e   u p   f r o m   M u t e   m o d e   o n   I d l e   L i n e   * /  
 # d e f i n e   L L _ U S A R T _ W A K E U P _ A D D R E S S M A R K                           U S A R T _ C R 1 _ W A K E                 / * ! <     U S A R T   w a k e   u p   f r o m   M u t e   m o d e   o n   A d d r e s s   M a r k   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E C _ D A T A W I D T H   D a t a w i d t h  
     *   @ {  
     * /  
 # d e f i n e   L L _ U S A R T _ D A T A W I D T H _ 8 B                                       0 x 0 0 0 0 0 0 0 0 U                           / * ! <   8   b i t s   w o r d   l e n g t h   :   S t a r t   b i t ,   8   d a t a   b i t s ,   n   s t o p   b i t s   * /  
 # d e f i n e   L L _ U S A R T _ D A T A W I D T H _ 9 B                                       U S A R T _ C R 1 _ M                           / * ! <   9   b i t s   w o r d   l e n g t h   :   S t a r t   b i t ,   9   d a t a   b i t s ,   n   s t o p   b i t s   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E C _ O V E R S A M P L I N G   O v e r s a m p l i n g  
     *   @ {  
     * /  
 # d e f i n e   L L _ U S A R T _ O V E R S A M P L I N G _ 1 6                                 0 x 0 0 0 0 0 0 0 0 U                         / * ! <   O v e r s a m p l i n g   b y   1 6   * /  
 # i f     d e f i n e d ( U S A R T _ C R 1 _ O V E R 8 )  
 # d e f i n e   L L _ U S A R T _ O V E R S A M P L I N G _ 8                                   U S A R T _ C R 1 _ O V E R 8                 / * ! <   O v e r s a m p l i n g   b y   8   * /  
 # e n d i f   / *   U S A R T _ O v e r S a m p l i n g _ F e a t u r e   * /  
 / * *  
     *   @ }  
     * /  
  
 # i f   d e f i n e d ( U S E _ F U L L _ L L _ D R I V E R )  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E C _ C L O C K   C l o c k   S i g n a l  
     *   @ {  
     * /  
  
 # d e f i n e   L L _ U S A R T _ C L O C K _ D I S A B L E                                     0 x 0 0 0 0 0 0 0 0 U                         / * ! <   C l o c k   s i g n a l   n o t   p r o v i d e d   * /  
 # d e f i n e   L L _ U S A R T _ C L O C K _ E N A B L E                                       U S A R T _ C R 2 _ C L K E N                 / * ! <   C l o c k   s i g n a l   p r o v i d e d   * /  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / * U S E _ F U L L _ L L _ D R I V E R * /  
  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E C _ L A S T C L K P U L S E   L a s t   C l o c k   P u l s e  
     *   @ {  
     * /  
 # d e f i n e   L L _ U S A R T _ L A S T C L K P U L S E _ N O _ O U T P U T                   0 x 0 0 0 0 0 0 0 0 U                       / * ! <   T h e   c l o c k   p u l s e   o f   t h e   l a s t   d a t a   b i t   i s   n o t   o u t p u t   t o   t h e   S C L K   p i n   * /  
 # d e f i n e   L L _ U S A R T _ L A S T C L K P U L S E _ O U T P U T                         U S A R T _ C R 2 _ L B C L                 / * ! <   T h e   c l o c k   p u l s e   o f   t h e   l a s t   d a t a   b i t   i s   o u t p u t   t o   t h e   S C L K   p i n   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E C _ P H A S E   C l o c k   P h a s e  
     *   @ {  
     * /  
 # d e f i n e   L L _ U S A R T _ P H A S E _ 1 E D G E                                         0 x 0 0 0 0 0 0 0 0 U                       / * ! <   T h e   f i r s t   c l o c k   t r a n s i t i o n   i s   t h e   f i r s t   d a t a   c a p t u r e   e d g e   * /  
 # d e f i n e   L L _ U S A R T _ P H A S E _ 2 E D G E                                         U S A R T _ C R 2 _ C P H A                 / * ! <   T h e   s e c o n d   c l o c k   t r a n s i t i o n   i s   t h e   f i r s t   d a t a   c a p t u r e   e d g e   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E C _ P O L A R I T Y   C l o c k   P o l a r i t y  
     *   @ {  
     * /  
 # d e f i n e   L L _ U S A R T _ P O L A R I T Y _ L O W                                       0 x 0 0 0 0 0 0 0 0 U                       / * ! <   S t e a d y   l o w   v a l u e   o n   S C L K   p i n   o u t s i d e   t r a n s m i s s i o n   w i n d o w * /  
 # d e f i n e   L L _ U S A R T _ P O L A R I T Y _ H I G H                                     U S A R T _ C R 2 _ C P O L                 / * ! <   S t e a d y   h i g h   v a l u e   o n   S C L K   p i n   o u t s i d e   t r a n s m i s s i o n   w i n d o w   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E C _ S T O P B I T S   S t o p   B i t s  
     *   @ {  
     * /  
 # d e f i n e   L L _ U S A R T _ S T O P B I T S _ 0 _ 5                                       U S A R T _ C R 2 _ S T O P _ 0                                                       / * ! <   0 . 5   s t o p   b i t   * /  
 # d e f i n e   L L _ U S A R T _ S T O P B I T S _ 1                                           0 x 0 0 0 0 0 0 0 0 U                                                                 / * ! <   1   s t o p   b i t   * /  
 # d e f i n e   L L _ U S A R T _ S T O P B I T S _ 1 _ 5                                       ( U S A R T _ C R 2 _ S T O P _ 0   |   U S A R T _ C R 2 _ S T O P _ 1 )             / * ! <   1 . 5   s t o p   b i t s   * /  
 # d e f i n e   L L _ U S A R T _ S T O P B I T S _ 2                                           U S A R T _ C R 2 _ S T O P _ 1                                                       / * ! <   2   s t o p   b i t s   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E C _ H W C O N T R O L   H a r d w a r e   C o n t r o l  
     *   @ {  
     * /  
 # d e f i n e   L L _ U S A R T _ H W C O N T R O L _ N O N E                                   0 x 0 0 0 0 0 0 0 0 U                                                     / * ! <   C T S   a n d   R T S   h a r d w a r e   f l o w   c o n t r o l   d i s a b l e d   * /  
 # d e f i n e   L L _ U S A R T _ H W C O N T R O L _ R T S                                     U S A R T _ C R 3 _ R T S E                                               / * ! <   R T S   o u t p u t   e n a b l e d ,   d a t a   i s   o n l y   r e q u e s t e d   w h e n   t h e r e   i s   s p a c e   i n   t h e   r e c e i v e   b u f f e r   * /  
 # d e f i n e   L L _ U S A R T _ H W C O N T R O L _ C T S                                     U S A R T _ C R 3 _ C T S E                                               / * ! <   C T S   m o d e   e n a b l e d ,   d a t a   i s   o n l y   t r a n s m i t t e d   w h e n   t h e   n C T S   i n p u t   i s   a s s e r t e d   ( t i e d   t o   0 )   * /  
 # d e f i n e   L L _ U S A R T _ H W C O N T R O L _ R T S _ C T S                             ( U S A R T _ C R 3 _ R T S E   |   U S A R T _ C R 3 _ C T S E )         / * ! <   C T S   a n d   R T S   h a r d w a r e   f l o w   c o n t r o l   e n a b l e d   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E C _ I R D A _ P O W E R   I r D A   P o w e r  
     *   @ {  
     * /  
 # d e f i n e   L L _ U S A R T _ I R D A _ P O W E R _ N O R M A L                             0 x 0 0 0 0 0 0 0 0 U                       / * ! <   I r D A   n o r m a l   p o w e r   m o d e   * /  
 # d e f i n e   L L _ U S A R T _ I R D A _ P O W E R _ L O W                                   U S A R T _ C R 3 _ I R L P                 / * ! <   I r D A   l o w   p o w e r   m o d e   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E C _ L I N B R E A K _ D E T E C T   L I N   B r e a k   D e t e c t i o n   L e n g t h  
     *   @ {  
     * /  
 # d e f i n e   L L _ U S A R T _ L I N B R E A K _ D E T E C T _ 1 0 B                         0 x 0 0 0 0 0 0 0 0 U                       / * ! <   1 0 - b i t   b r e a k   d e t e c t i o n   m e t h o d   s e l e c t e d   * /  
 # d e f i n e   L L _ U S A R T _ L I N B R E A K _ D E T E C T _ 1 1 B                         U S A R T _ C R 2 _ L B D L                 / * ! <   1 1 - b i t   b r e a k   d e t e c t i o n   m e t h o d   s e l e c t e d   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E x p o r t e d _ M a c r o s   U S A R T   E x p o r t e d   M a c r o s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E M _ W R I T E _ R E A D   C o m m o n   W r i t e   a n d   r e a d   r e g i s t e r s   M a c r o s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     W r i t e   a   v a l u e   i n   U S A R T   r e g i s t e r  
     *   @ p a r a m     _ _ I N S T A N C E _ _   U S A R T   I n s t a n c e  
     *   @ p a r a m     _ _ R E G _ _   R e g i s t e r   t o   b e   w r i t t e n  
     *   @ p a r a m     _ _ V A L U E _ _   V a l u e   t o   b e   w r i t t e n   i n   t h e   r e g i s t e r  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   L L _ U S A R T _ W r i t e R e g ( _ _ I N S T A N C E _ _ ,   _ _ R E G _ _ ,   _ _ V A L U E _ _ )   W R I T E _ R E G ( _ _ I N S T A N C E _ _ - > _ _ R E G _ _ ,   ( _ _ V A L U E _ _ ) )  
  
 / * *  
     *   @ b r i e f     R e a d   a   v a l u e   i n   U S A R T   r e g i s t e r  
     *   @ p a r a m     _ _ I N S T A N C E _ _   U S A R T   I n s t a n c e  
     *   @ p a r a m     _ _ R E G _ _   R e g i s t e r   t o   b e   r e a d  
     *   @ r e t v a l   R e g i s t e r   v a l u e  
     * /  
 # d e f i n e   L L _ U S A R T _ R e a d R e g ( _ _ I N S T A N C E _ _ ,   _ _ R E G _ _ )   R E A D _ R E G ( _ _ I N S T A N C E _ _ - > _ _ R E G _ _ )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E M _ E x p o r t e d _ M a c r o s _ H e l p e r   E x p o r t e d _ M a c r o s _ H e l p e r  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     C o m p u t e   U S A R T D I V   v a l u e   a c c o r d i n g   t o   P e r i p h e r a l   C l o c k   a n d  
     *                   e x p e c t e d   B a u d   R a t e   i n   8   b i t s   s a m p l i n g   m o d e   ( 3 2   b i t s   v a l u e   o f   U S A R T D I V   i s   r e t u r n e d )  
     *   @ p a r a m     _ _ P E R I P H C L K _ _   P e r i p h e r a l   C l o c k   f r e q u e n c y   u s e d   f o r   U S A R T   i n s t a n c e  
     *   @ p a r a m     _ _ B A U D R A T E _ _   B a u d   r a t e   v a l u e   t o   a c h i e v e  
     *   @ r e t v a l   U S A R T D I V   v a l u e   t o   b e   u s e d   f o r   B R R   r e g i s t e r   f i l l i n g   i n   O v e r S a m p l i n g _ 8   c a s e  
     * /  
 # d e f i n e   _ _ L L _ U S A R T _ D I V _ S A M P L I N G 8 _ 1 0 0 ( _ _ P E R I P H C L K _ _ ,   _ _ B A U D R A T E _ _ )             ( ( ( _ _ P E R I P H C L K _ _ ) * 2 5 ) / ( 2 * ( _ _ B A U D R A T E _ _ ) ) )  
 # d e f i n e   _ _ L L _ U S A R T _ D I V M A N T _ S A M P L I N G 8 ( _ _ P E R I P H C L K _ _ ,   _ _ B A U D R A T E _ _ )             ( _ _ L L _ U S A R T _ D I V _ S A M P L I N G 8 _ 1 0 0 ( ( _ _ P E R I P H C L K _ _ ) ,   ( _ _ B A U D R A T E _ _ ) ) / 1 0 0 )  
 # d e f i n e   _ _ L L _ U S A R T _ D I V F R A Q _ S A M P L I N G 8 ( _ _ P E R I P H C L K _ _ ,   _ _ B A U D R A T E _ _ )             ( ( ( _ _ L L _ U S A R T _ D I V _ S A M P L I N G 8 _ 1 0 0 ( ( _ _ P E R I P H C L K _ _ ) ,   ( _ _ B A U D R A T E _ _ ) )   -   ( _ _ L L _ U S A R T _ D I V M A N T _ S A M P L I N G 8 ( ( _ _ P E R I P H C L K _ _ ) ,   ( _ _ B A U D R A T E _ _ ) )   *   1 0 0 ) )   *   8   +   5 0 )   /   1 0 0 )  
 / *   U A R T   B R R   =   m a n t i s s a   +   o v e r f l o w   +   f r a c t i o n  
                         =   ( U A R T   D I V M A N T   < <   4 )   +   ( ( U A R T   D I V F R A Q   &   0 x F 8 )   < <   1 )   +   ( U A R T   D I V F R A Q   &   0 x 0 7 )   * /  
 # d e f i n e   _ _ L L _ U S A R T _ D I V _ S A M P L I N G 8 ( _ _ P E R I P H C L K _ _ ,   _ _ B A U D R A T E _ _ )                           ( ( ( _ _ L L _ U S A R T _ D I V M A N T _ S A M P L I N G 8 ( ( _ _ P E R I P H C L K _ _ ) ,   ( _ _ B A U D R A T E _ _ ) )   < <   4 )   +   \  
                                                                                                                                                       ( ( _ _ L L _ U S A R T _ D I V F R A Q _ S A M P L I N G 8 ( ( _ _ P E R I P H C L K _ _ ) ,   ( _ _ B A U D R A T E _ _ ) )   &   0 x F 8 )   < <   1 ) )   +   \  
                                                                                                                                                       ( _ _ L L _ U S A R T _ D I V F R A Q _ S A M P L I N G 8 ( ( _ _ P E R I P H C L K _ _ ) ,   ( _ _ B A U D R A T E _ _ ) )   &   0 x 0 7 ) )  
  
 / * *  
     *   @ b r i e f     C o m p u t e   U S A R T D I V   v a l u e   a c c o r d i n g   t o   P e r i p h e r a l   C l o c k   a n d  
     *                   e x p e c t e d   B a u d   R a t e   i n   1 6   b i t s   s a m p l i n g   m o d e   ( 3 2   b i t s   v a l u e   o f   U S A R T D I V   i s   r e t u r n e d )  
     *   @ p a r a m     _ _ P E R I P H C L K _ _   P e r i p h e r a l   C l o c k   f r e q u e n c y   u s e d   f o r   U S A R T   i n s t a n c e  
     *   @ p a r a m     _ _ B A U D R A T E _ _   B a u d   r a t e   v a l u e   t o   a c h i e v e  
     *   @ r e t v a l   U S A R T D I V   v a l u e   t o   b e   u s e d   f o r   B R R   r e g i s t e r   f i l l i n g   i n   O v e r S a m p l i n g _ 1 6   c a s e  
     * /  
 # d e f i n e   _ _ L L _ U S A R T _ D I V _ S A M P L I N G 1 6 _ 1 0 0 ( _ _ P E R I P H C L K _ _ ,   _ _ B A U D R A T E _ _ )           ( ( ( _ _ P E R I P H C L K _ _ ) * 2 5 ) / ( 4 * ( _ _ B A U D R A T E _ _ ) ) )  
 # d e f i n e   _ _ L L _ U S A R T _ D I V M A N T _ S A M P L I N G 1 6 ( _ _ P E R I P H C L K _ _ ,   _ _ B A U D R A T E _ _ )           ( _ _ L L _ U S A R T _ D I V _ S A M P L I N G 1 6 _ 1 0 0 ( ( _ _ P E R I P H C L K _ _ ) ,   ( _ _ B A U D R A T E _ _ ) ) / 1 0 0 )  
 # d e f i n e   _ _ L L _ U S A R T _ D I V F R A Q _ S A M P L I N G 1 6 ( _ _ P E R I P H C L K _ _ ,   _ _ B A U D R A T E _ _ )           ( ( ( ( _ _ L L _ U S A R T _ D I V _ S A M P L I N G 1 6 _ 1 0 0 ( ( _ _ P E R I P H C L K _ _ ) ,   ( _ _ B A U D R A T E _ _ ) )   -   ( _ _ L L _ U S A R T _ D I V M A N T _ S A M P L I N G 1 6 ( ( _ _ P E R I P H C L K _ _ ) ,   ( _ _ B A U D R A T E _ _ ) )   *   1 0 0 ) )   *   1 6 )   +   5 0 )   /   1 0 0 )  
 / *   U S A R T   B R R   =   m a n t i s s a   +   o v e r f l o w   +   f r a c t i o n  
                         =   ( U S A R T   D I V M A N T   < <   4 )   +   ( U S A R T   D I V F R A Q   &   0 x F 0 )   +   ( U S A R T   D I V F R A Q   &   0 x 0 F )   * /  
 # d e f i n e   _ _ L L _ U S A R T _ D I V _ S A M P L I N G 1 6 ( _ _ P E R I P H C L K _ _ ,   _ _ B A U D R A T E _ _ )                         ( ( ( _ _ L L _ U S A R T _ D I V M A N T _ S A M P L I N G 1 6 ( ( _ _ P E R I P H C L K _ _ ) ,   ( _ _ B A U D R A T E _ _ ) )   < <   4 )   +   \  
                                                                                                                                                       ( _ _ L L _ U S A R T _ D I V F R A Q _ S A M P L I N G 1 6 ( ( _ _ P E R I P H C L K _ _ ) ,   ( _ _ B A U D R A T E _ _ ) )   &   0 x F 0 ) )   +   \  
                                                                                                                                                       ( _ _ L L _ U S A R T _ D I V F R A Q _ S A M P L I N G 1 6 ( ( _ _ P E R I P H C L K _ _ ) ,   ( _ _ B A U D R A T E _ _ ) )   &   0 x 0 F ) )  
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
  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E x p o r t e d _ F u n c t i o n s   U S A R T   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E F _ C o n f i g u r a t i o n   C o n f i g u r a t i o n   f u n c t i o n s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     U S A R T   E n a b l e  
     *   @ r m t o l l   C R 1                     U E                         L L _ U S A R T _ E n a b l e  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ E n a b l e ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     S E T _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ U E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     U S A R T   D i s a b l e   ( a l l   U S A R T   p r e s c a l e r s   a n d   o u t p u t s   a r e   d i s a b l e d )  
     *   @ n o t e       W h e n   U S A R T   i s   d i s a b l e d ,   U S A R T   p r e s c a l e r s   a n d   o u t p u t s   a r e   s t o p p e d   i m m e d i a t e l y ,  
     *                   a n d   c u r r e n t   o p e r a t i o n s   a r e   d i s c a r d e d .   T h e   c o n f i g u r a t i o n   o f   t h e   U S A R T   i s   k e p t ,   b u t   a l l   t h e   s t a t u s  
     *                   f l a g s ,   i n   t h e   U S A R T x _ S R   a r e   s e t   t o   t h e i r   d e f a u l t   v a l u e s .  
     *   @ r m t o l l   C R 1                     U E                         L L _ U S A R T _ D i s a b l e  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ D i s a b l e ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     C L E A R _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ U E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     I n d i c a t e   i f   U S A R T   i s   e n a b l e d  
     *   @ r m t o l l   C R 1                     U E                         L L _ U S A R T _ I s E n a b l e d  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ I s E n a b l e d ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( R E A D _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ U E )   = =   ( U S A R T _ C R 1 _ U E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e c e i v e r   E n a b l e   ( R e c e i v e r   i s   e n a b l e d   a n d   b e g i n s   s e a r c h i n g   f o r   a   s t a r t   b i t )  
     *   @ r m t o l l   C R 1                     R E                         L L _ U S A R T _ E n a b l e D i r e c t i o n R x  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ E n a b l e D i r e c t i o n R x ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     S E T _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ R E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e c e i v e r   D i s a b l e  
     *   @ r m t o l l   C R 1                     R E                         L L _ U S A R T _ D i s a b l e D i r e c t i o n R x  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ D i s a b l e D i r e c t i o n R x ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     C L E A R _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ R E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     T r a n s m i t t e r   E n a b l e  
     *   @ r m t o l l   C R 1                     T E                         L L _ U S A R T _ E n a b l e D i r e c t i o n T x  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ E n a b l e D i r e c t i o n T x ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     S E T _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ T E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     T r a n s m i t t e r   D i s a b l e  
     *   @ r m t o l l   C R 1                     T E                         L L _ U S A R T _ D i s a b l e D i r e c t i o n T x  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ D i s a b l e D i r e c t i o n T x ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     C L E A R _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ T E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   s i m u l t a n e o u s l y   e n a b l e d / d i s a b l e d   s t a t e s  
     *                   o f   T r a n s m i t t e r   a n d   R e c e i v e r  
     *   @ r m t o l l   C R 1                     R E                         L L _ U S A R T _ S e t T r a n s f e r D i r e c t i o n \ n  
     *                   C R 1                     T E                         L L _ U S A R T _ S e t T r a n s f e r D i r e c t i o n  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ p a r a m     T r a n s f e r D i r e c t i o n   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ D I R E C T I O N _ N O N E  
     *                   @ a r g   @ r e f   L L _ U S A R T _ D I R E C T I O N _ R X  
     *                   @ a r g   @ r e f   L L _ U S A R T _ D I R E C T I O N _ T X  
     *                   @ a r g   @ r e f   L L _ U S A R T _ D I R E C T I O N _ T X _ R X  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ S e t T r a n s f e r D i r e c t i o n ( U S A R T _ T y p e D e f   * U S A R T x ,   u i n t 3 2 _ t   T r a n s f e r D i r e c t i o n )  
 {  
     M O D I F Y _ R E G ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ R E   |   U S A R T _ C R 1 _ T E ,   T r a n s f e r D i r e c t i o n ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   e n a b l e d / d i s a b l e d   s t a t e s   o f   T r a n s m i t t e r   a n d   R e c e i v e r  
     *   @ r m t o l l   C R 1                     R E                         L L _ U S A R T _ G e t T r a n s f e r D i r e c t i o n \ n  
     *                   C R 1                     T E                         L L _ U S A R T _ G e t T r a n s f e r D i r e c t i o n  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ D I R E C T I O N _ N O N E  
     *                   @ a r g   @ r e f   L L _ U S A R T _ D I R E C T I O N _ R X  
     *                   @ a r g   @ r e f   L L _ U S A R T _ D I R E C T I O N _ T X  
     *                   @ a r g   @ r e f   L L _ U S A R T _ D I R E C T I O N _ T X _ R X  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ G e t T r a n s f e r D i r e c t i o n ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ R E   |   U S A R T _ C R 1 _ T E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   P a r i t y   ( e n a b l e d / d i s a b l e d   a n d   p a r i t y   m o d e   i f   e n a b l e d ) .  
     *   @ n o t e       T h i s   f u n c t i o n   s e l e c t s   i f   h a r d w a r e   p a r i t y   c o n t r o l   ( g e n e r a t i o n   a n d   d e t e c t i o n )   i s   e n a b l e d   o r   d i s a b l e d .  
     *                   W h e n   t h e   p a r i t y   c o n t r o l   i s   e n a b l e d   ( O d d   o r   E v e n ) ,   c o m p u t e d   p a r i t y   b i t   i s   i n s e r t e d   a t   t h e   M S B   p o s i t i o n  
     *                   ( 9 t h   o r   8 t h   b i t   d e p e n d i n g   o n   d a t a   w i d t h )   a n d   p a r i t y   i s   c h e c k e d   o n   t h e   r e c e i v e d   d a t a .  
     *   @ r m t o l l   C R 1                     P S                         L L _ U S A R T _ S e t P a r i t y \ n  
     *                   C R 1                     P C E                       L L _ U S A R T _ S e t P a r i t y  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ p a r a m     P a r i t y   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ P A R I T Y _ N O N E  
     *                   @ a r g   @ r e f   L L _ U S A R T _ P A R I T Y _ E V E N  
     *                   @ a r g   @ r e f   L L _ U S A R T _ P A R I T Y _ O D D  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ S e t P a r i t y ( U S A R T _ T y p e D e f   * U S A R T x ,   u i n t 3 2 _ t   P a r i t y )  
 {  
     M O D I F Y _ R E G ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ P S   |   U S A R T _ C R 1 _ P C E ,   P a r i t y ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   P a r i t y   c o n f i g u r a t i o n   ( e n a b l e d / d i s a b l e d   a n d   p a r i t y   m o d e   i f   e n a b l e d )  
     *   @ r m t o l l   C R 1                     P S                         L L _ U S A R T _ G e t P a r i t y \ n  
     *                   C R 1                     P C E                       L L _ U S A R T _ G e t P a r i t y  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ P A R I T Y _ N O N E  
     *                   @ a r g   @ r e f   L L _ U S A R T _ P A R I T Y _ E V E N  
     *                   @ a r g   @ r e f   L L _ U S A R T _ P A R I T Y _ O D D  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ G e t P a r i t y ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ P S   |   U S A R T _ C R 1 _ P C E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   R e c e i v e r   W a k e   U p   m e t h o d   f r o m   M u t e   m o d e .  
     *   @ r m t o l l   C R 1                     W A K E                     L L _ U S A R T _ S e t W a k e U p M e t h o d  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ p a r a m     M e t h o d   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ W A K E U P _ I D L E L I N E  
     *                   @ a r g   @ r e f   L L _ U S A R T _ W A K E U P _ A D D R E S S M A R K  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ S e t W a k e U p M e t h o d ( U S A R T _ T y p e D e f   * U S A R T x ,   u i n t 3 2 _ t   M e t h o d )  
 {  
     M O D I F Y _ R E G ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ W A K E ,   M e t h o d ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   R e c e i v e r   W a k e   U p   m e t h o d   f r o m   M u t e   m o d e  
     *   @ r m t o l l   C R 1                     W A K E                     L L _ U S A R T _ G e t W a k e U p M e t h o d  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ W A K E U P _ I D L E L I N E  
     *                   @ a r g   @ r e f   L L _ U S A R T _ W A K E U P _ A D D R E S S M A R K  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ G e t W a k e U p M e t h o d ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ W A K E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   W o r d   l e n g t h   ( i . e .   n b   o f   d a t a   b i t s ,   e x c l u d i n g   s t a r t   a n d   s t o p   b i t s )  
     *   @ r m t o l l   C R 1                     M                           L L _ U S A R T _ S e t D a t a W i d t h  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ p a r a m     D a t a W i d t h   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ D A T A W I D T H _ 8 B  
     *                   @ a r g   @ r e f   L L _ U S A R T _ D A T A W I D T H _ 9 B  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ S e t D a t a W i d t h ( U S A R T _ T y p e D e f   * U S A R T x ,   u i n t 3 2 _ t   D a t a W i d t h )  
 {  
     M O D I F Y _ R E G ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ M ,   D a t a W i d t h ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   W o r d   l e n g t h   ( i . e .   n b   o f   d a t a   b i t s ,   e x c l u d i n g   s t a r t   a n d   s t o p   b i t s )  
     *   @ r m t o l l   C R 1                     M                           L L _ U S A R T _ G e t D a t a W i d t h  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ D A T A W I D T H _ 8 B  
     *                   @ a r g   @ r e f   L L _ U S A R T _ D A T A W I D T H _ 9 B  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ G e t D a t a W i d t h ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ M ) ) ;  
 }  
  
 # i f   d e f i n e d ( U S A R T _ C R 1 _ O V E R 8 )  
 / * *  
     *   @ b r i e f     S e t   O v e r s a m p l i n g   t o   8 - b i t   o r   1 6 - b i t   m o d e  
     *   @ r m t o l l   C R 1                     O V E R 8                   L L _ U S A R T _ S e t O v e r S a m p l i n g  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ p a r a m     O v e r S a m p l i n g   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ O V E R S A M P L I N G _ 1 6  
     *                   @ a r g   @ r e f   L L _ U S A R T _ O V E R S A M P L I N G _ 8  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ S e t O v e r S a m p l i n g ( U S A R T _ T y p e D e f   * U S A R T x ,   u i n t 3 2 _ t   O v e r S a m p l i n g )  
 {  
     M O D I F Y _ R E G ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ O V E R 8 ,   O v e r S a m p l i n g ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   O v e r s a m p l i n g   m o d e  
     *   @ r m t o l l   C R 1                     O V E R 8                   L L _ U S A R T _ G e t O v e r S a m p l i n g  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ O V E R S A M P L I N G _ 1 6  
     *                   @ a r g   @ r e f   L L _ U S A R T _ O V E R S A M P L I N G _ 8  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ G e t O v e r S a m p l i n g ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ O V E R 8 ) ) ;  
 }  
  
 # e n d i f   / *   U S A R T _ O v e r S a m p l i n g _ F e a t u r e   * /  
 / * *  
     *   @ b r i e f     C o n f i g u r e   i f   C l o c k   p u l s e   o f   t h e   l a s t   d a t a   b i t   i s   o u t p u t   t o   t h e   S C L K   p i n   o r   n o t  
     *   @ n o t e       M a c r o   @ r e f   I S _ U S A R T _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   S y n c h r o n o u s   m o d e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 2                     L B C L                     L L _ U S A R T _ S e t L a s t C l k P u l s e O u t p u t  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ p a r a m     L a s t B i t C l o c k P u l s e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ L A S T C L K P U L S E _ N O _ O U T P U T  
     *                   @ a r g   @ r e f   L L _ U S A R T _ L A S T C L K P U L S E _ O U T P U T  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ S e t L a s t C l k P u l s e O u t p u t ( U S A R T _ T y p e D e f   * U S A R T x ,   u i n t 3 2 _ t   L a s t B i t C l o c k P u l s e )  
 {  
     M O D I F Y _ R E G ( U S A R T x - > C R 2 ,   U S A R T _ C R 2 _ L B C L ,   L a s t B i t C l o c k P u l s e ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t r i e v e   C l o c k   p u l s e   o f   t h e   l a s t   d a t a   b i t   o u t p u t   c o n f i g u r a t i o n  
     *                   ( L a s t   b i t   C l o c k   p u l s e   o u t p u t   t o   t h e   S C L K   p i n   o r   n o t )  
     *   @ n o t e       M a c r o   @ r e f   I S _ U S A R T _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   S y n c h r o n o u s   m o d e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 2                     L B C L                     L L _ U S A R T _ G e t L a s t C l k P u l s e O u t p u t  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ L A S T C L K P U L S E _ N O _ O U T P U T  
     *                   @ a r g   @ r e f   L L _ U S A R T _ L A S T C L K P U L S E _ O U T P U T  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ G e t L a s t C l k P u l s e O u t p u t ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( U S A R T x - > C R 2 ,   U S A R T _ C R 2 _ L B C L ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e l e c t   t h e   p h a s e   o f   t h e   c l o c k   o u t p u t   o n   t h e   S C L K   p i n   i n   s y n c h r o n o u s   m o d e  
     *   @ n o t e       M a c r o   @ r e f   I S _ U S A R T _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   S y n c h r o n o u s   m o d e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 2                     C P H A                     L L _ U S A R T _ S e t C l o c k P h a s e  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ p a r a m     C l o c k P h a s e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ P H A S E _ 1 E D G E  
     *                   @ a r g   @ r e f   L L _ U S A R T _ P H A S E _ 2 E D G E  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ S e t C l o c k P h a s e ( U S A R T _ T y p e D e f   * U S A R T x ,   u i n t 3 2 _ t   C l o c k P h a s e )  
 {  
     M O D I F Y _ R E G ( U S A R T x - > C R 2 ,   U S A R T _ C R 2 _ C P H A ,   C l o c k P h a s e ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   p h a s e   o f   t h e   c l o c k   o u t p u t   o n   t h e   S C L K   p i n   i n   s y n c h r o n o u s   m o d e  
     *   @ n o t e       M a c r o   @ r e f   I S _ U S A R T _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   S y n c h r o n o u s   m o d e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 2                     C P H A                     L L _ U S A R T _ G e t C l o c k P h a s e  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ P H A S E _ 1 E D G E  
     *                   @ a r g   @ r e f   L L _ U S A R T _ P H A S E _ 2 E D G E  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ G e t C l o c k P h a s e ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( U S A R T x - > C R 2 ,   U S A R T _ C R 2 _ C P H A ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e l e c t   t h e   p o l a r i t y   o f   t h e   c l o c k   o u t p u t   o n   t h e   S C L K   p i n   i n   s y n c h r o n o u s   m o d e  
     *   @ n o t e       M a c r o   @ r e f   I S _ U S A R T _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   S y n c h r o n o u s   m o d e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 2                     C P O L                     L L _ U S A R T _ S e t C l o c k P o l a r i t y  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ p a r a m     C l o c k P o l a r i t y   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ P O L A R I T Y _ L O W  
     *                   @ a r g   @ r e f   L L _ U S A R T _ P O L A R I T Y _ H I G H  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ S e t C l o c k P o l a r i t y ( U S A R T _ T y p e D e f   * U S A R T x ,   u i n t 3 2 _ t   C l o c k P o l a r i t y )  
 {  
     M O D I F Y _ R E G ( U S A R T x - > C R 2 ,   U S A R T _ C R 2 _ C P O L ,   C l o c k P o l a r i t y ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   p o l a r i t y   o f   t h e   c l o c k   o u t p u t   o n   t h e   S C L K   p i n   i n   s y n c h r o n o u s   m o d e  
     *   @ n o t e       M a c r o   @ r e f   I S _ U S A R T _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   S y n c h r o n o u s   m o d e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 2                     C P O L                     L L _ U S A R T _ G e t C l o c k P o l a r i t y  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ P O L A R I T Y _ L O W  
     *                   @ a r g   @ r e f   L L _ U S A R T _ P O L A R I T Y _ H I G H  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ G e t C l o c k P o l a r i t y ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( U S A R T x - > C R 2 ,   U S A R T _ C R 2 _ C P O L ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   C l o c k   s i g n a l   f o r m a t   ( P h a s e   P o l a r i t y   a n d   c h o i c e   a b o u t   o u t p u t   o f   l a s t   b i t   c l o c k   p u l s e )  
     *   @ n o t e       M a c r o   @ r e f   I S _ U S A R T _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   S y n c h r o n o u s   m o d e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ n o t e       C a l l   o f   t h i s   f u n c t i o n   i s   e q u i v a l e n t   t o   f o l l o w i n g   f u n c t i o n   c a l l   s e q u e n c e   :  
     *                   -   C l o c k   P h a s e   c o n f i g u r a t i o n   u s i n g   @ r e f   L L _ U S A R T _ S e t C l o c k P h a s e ( )   f u n c t i o n  
     *                   -   C l o c k   P o l a r i t y   c o n f i g u r a t i o n   u s i n g   @ r e f   L L _ U S A R T _ S e t C l o c k P o l a r i t y ( )   f u n c t i o n  
     *                   -   O u t p u t   o f   L a s t   b i t   C l o c k   p u l s e   c o n f i g u r a t i o n   u s i n g   @ r e f   L L _ U S A R T _ S e t L a s t C l k P u l s e O u t p u t ( )   f u n c t i o n  
     *   @ r m t o l l   C R 2                     C P H A                     L L _ U S A R T _ C o n f i g C l o c k \ n  
     *                   C R 2                     C P O L                     L L _ U S A R T _ C o n f i g C l o c k \ n  
     *                   C R 2                     L B C L                     L L _ U S A R T _ C o n f i g C l o c k  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ p a r a m     P h a s e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ P H A S E _ 1 E D G E  
     *                   @ a r g   @ r e f   L L _ U S A R T _ P H A S E _ 2 E D G E  
     *   @ p a r a m     P o l a r i t y   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ P O L A R I T Y _ L O W  
     *                   @ a r g   @ r e f   L L _ U S A R T _ P O L A R I T Y _ H I G H  
     *   @ p a r a m     L B C P O u t p u t   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ L A S T C L K P U L S E _ N O _ O U T P U T  
     *                   @ a r g   @ r e f   L L _ U S A R T _ L A S T C L K P U L S E _ O U T P U T  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ C o n f i g C l o c k ( U S A R T _ T y p e D e f   * U S A R T x ,   u i n t 3 2 _ t   P h a s e ,   u i n t 3 2 _ t   P o l a r i t y ,   u i n t 3 2 _ t   L B C P O u t p u t )  
 {  
     M O D I F Y _ R E G ( U S A R T x - > C R 2 ,   U S A R T _ C R 2 _ C P H A   |   U S A R T _ C R 2 _ C P O L   |   U S A R T _ C R 2 _ L B C L ,   P h a s e   |   P o l a r i t y   |   L B C P O u t p u t ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   C l o c k   o u t p u t   o n   S C L K   p i n  
     *   @ n o t e       M a c r o   @ r e f   I S _ U S A R T _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   S y n c h r o n o u s   m o d e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 2                     C L K E N                   L L _ U S A R T _ E n a b l e S C L K O u t p u t  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ E n a b l e S C L K O u t p u t ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     S E T _ B I T ( U S A R T x - > C R 2 ,   U S A R T _ C R 2 _ C L K E N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   C l o c k   o u t p u t   o n   S C L K   p i n  
     *   @ n o t e       M a c r o   @ r e f   I S _ U S A R T _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   S y n c h r o n o u s   m o d e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 2                     C L K E N                   L L _ U S A R T _ D i s a b l e S C L K O u t p u t  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ D i s a b l e S C L K O u t p u t ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     C L E A R _ B I T ( U S A R T x - > C R 2 ,   U S A R T _ C R 2 _ C L K E N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     I n d i c a t e   i f   C l o c k   o u t p u t   o n   S C L K   p i n   i s   e n a b l e d  
     *   @ n o t e       M a c r o   @ r e f   I S _ U S A R T _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   S y n c h r o n o u s   m o d e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 2                     C L K E N                   L L _ U S A R T _ I s E n a b l e d S C L K O u t p u t  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ I s E n a b l e d S C L K O u t p u t ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( R E A D _ B I T ( U S A R T x - > C R 2 ,   U S A R T _ C R 2 _ C L K E N )   = =   ( U S A R T _ C R 2 _ C L K E N ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   t h e   l e n g t h   o f   t h e   s t o p   b i t s  
     *   @ r m t o l l   C R 2                     S T O P                     L L _ U S A R T _ S e t S t o p B i t s L e n g t h  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ p a r a m     S t o p B i t s   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ S T O P B I T S _ 0 _ 5  
     *                   @ a r g   @ r e f   L L _ U S A R T _ S T O P B I T S _ 1  
     *                   @ a r g   @ r e f   L L _ U S A R T _ S T O P B I T S _ 1 _ 5  
     *                   @ a r g   @ r e f   L L _ U S A R T _ S T O P B I T S _ 2  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ S e t S t o p B i t s L e n g t h ( U S A R T _ T y p e D e f   * U S A R T x ,   u i n t 3 2 _ t   S t o p B i t s )  
 {  
     M O D I F Y _ R E G ( U S A R T x - > C R 2 ,   U S A R T _ C R 2 _ S T O P ,   S t o p B i t s ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t r i e v e   t h e   l e n g t h   o f   t h e   s t o p   b i t s  
     *   @ r m t o l l   C R 2                     S T O P                     L L _ U S A R T _ G e t S t o p B i t s L e n g t h  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ S T O P B I T S _ 0 _ 5  
     *                   @ a r g   @ r e f   L L _ U S A R T _ S T O P B I T S _ 1  
     *                   @ a r g   @ r e f   L L _ U S A R T _ S T O P B I T S _ 1 _ 5  
     *                   @ a r g   @ r e f   L L _ U S A R T _ S T O P B I T S _ 2  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ G e t S t o p B i t s L e n g t h ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( U S A R T x - > C R 2 ,   U S A R T _ C R 2 _ S T O P ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   C h a r a c t e r   f r a m e   f o r m a t   ( D a t a w i d t h ,   P a r i t y   c o n t r o l ,   S t o p   B i t s )  
     *   @ n o t e       C a l l   o f   t h i s   f u n c t i o n   i s   e q u i v a l e n t   t o   f o l l o w i n g   f u n c t i o n   c a l l   s e q u e n c e   :  
     *                   -   D a t a   W i d t h   c o n f i g u r a t i o n   u s i n g   @ r e f   L L _ U S A R T _ S e t D a t a W i d t h ( )   f u n c t i o n  
     *                   -   P a r i t y   C o n t r o l   a n d   m o d e   c o n f i g u r a t i o n   u s i n g   @ r e f   L L _ U S A R T _ S e t P a r i t y ( )   f u n c t i o n  
     *                   -   S t o p   b i t s   c o n f i g u r a t i o n   u s i n g   @ r e f   L L _ U S A R T _ S e t S t o p B i t s L e n g t h ( )   f u n c t i o n  
     *   @ r m t o l l   C R 1                     P S                         L L _ U S A R T _ C o n f i g C h a r a c t e r \ n  
     *                   C R 1                     P C E                       L L _ U S A R T _ C o n f i g C h a r a c t e r \ n  
     *                   C R 1                     M                           L L _ U S A R T _ C o n f i g C h a r a c t e r \ n  
     *                   C R 2                     S T O P                     L L _ U S A R T _ C o n f i g C h a r a c t e r  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ p a r a m     D a t a W i d t h   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ D A T A W I D T H _ 8 B  
     *                   @ a r g   @ r e f   L L _ U S A R T _ D A T A W I D T H _ 9 B  
     *   @ p a r a m     P a r i t y   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ P A R I T Y _ N O N E  
     *                   @ a r g   @ r e f   L L _ U S A R T _ P A R I T Y _ E V E N  
     *                   @ a r g   @ r e f   L L _ U S A R T _ P A R I T Y _ O D D  
     *   @ p a r a m     S t o p B i t s   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ S T O P B I T S _ 0 _ 5  
     *                   @ a r g   @ r e f   L L _ U S A R T _ S T O P B I T S _ 1  
     *                   @ a r g   @ r e f   L L _ U S A R T _ S T O P B I T S _ 1 _ 5  
     *                   @ a r g   @ r e f   L L _ U S A R T _ S T O P B I T S _ 2  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ C o n f i g C h a r a c t e r ( U S A R T _ T y p e D e f   * U S A R T x ,   u i n t 3 2 _ t   D a t a W i d t h ,   u i n t 3 2 _ t   P a r i t y ,  
                                                                                             u i n t 3 2 _ t   S t o p B i t s )  
 {  
     M O D I F Y _ R E G ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ P S   |   U S A R T _ C R 1 _ P C E   |   U S A R T _ C R 1 _ M ,   P a r i t y   |   D a t a W i d t h ) ;  
     M O D I F Y _ R E G ( U S A R T x - > C R 2 ,   U S A R T _ C R 2 _ S T O P ,   S t o p B i t s ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   A d d r e s s   o f   t h e   U S A R T   n o d e .  
     *   @ n o t e       T h i s   i s   u s e d   i n   m u l t i p r o c e s s o r   c o m m u n i c a t i o n   d u r i n g   M u t e   m o d e   o r   S t o p   m o d e ,  
     *                   f o r   w a k e   u p   w i t h   a d d r e s s   m a r k   d e t e c t i o n .  
     *   @ r m t o l l   C R 2                     A D D                       L L _ U S A R T _ S e t N o d e A d d r e s s  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ p a r a m     N o d e A d d r e s s   4   b i t   A d d r e s s   o f   t h e   U S A R T   n o d e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ S e t N o d e A d d r e s s ( U S A R T _ T y p e D e f   * U S A R T x ,   u i n t 3 2 _ t   N o d e A d d r e s s )  
 {  
     M O D I F Y _ R E G ( U S A R T x - > C R 2 ,   U S A R T _ C R 2 _ A D D ,   ( N o d e A d d r e s s   &   U S A R T _ C R 2 _ A D D ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   4   b i t   A d d r e s s   o f   t h e   U S A R T   n o d e   a s   s e t   i n   A D D   f i e l d   o f   C R 2 .  
     *   @ n o t e       o n l y   4 b i t s   ( b 3 - b 0 )   o f   r e t u r n e d   v a l u e   a r e   r e l e v a n t   ( b 3 1 - b 4   a r e   n o t   r e l e v a n t )  
     *   @ r m t o l l   C R 2                     A D D                       L L _ U S A R T _ G e t N o d e A d d r e s s  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   A d d r e s s   o f   t h e   U S A R T   n o d e   ( V a l u e   b e t w e e n   M i n _ D a t a = 0   a n d   M a x _ D a t a = 2 5 5 )  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ G e t N o d e A d d r e s s ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( U S A R T x - > C R 2 ,   U S A R T _ C R 2 _ A D D ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   R T S   H W   F l o w   C o n t r o l  
     *   @ n o t e       M a c r o   @ r e f   I S _ U A R T _ H W F L O W _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   H a r d w a r e   F l o w   c o n t r o l   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 3                     R T S E                     L L _ U S A R T _ E n a b l e R T S H W F l o w C t r l  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ E n a b l e R T S H W F l o w C t r l ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     S E T _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ R T S E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   R T S   H W   F l o w   C o n t r o l  
     *   @ n o t e       M a c r o   @ r e f   I S _ U A R T _ H W F L O W _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   H a r d w a r e   F l o w   c o n t r o l   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 3                     R T S E                     L L _ U S A R T _ D i s a b l e R T S H W F l o w C t r l  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ D i s a b l e R T S H W F l o w C t r l ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     C L E A R _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ R T S E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   C T S   H W   F l o w   C o n t r o l  
     *   @ n o t e       M a c r o   @ r e f   I S _ U A R T _ H W F L O W _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   H a r d w a r e   F l o w   c o n t r o l   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 3                     C T S E                     L L _ U S A R T _ E n a b l e C T S H W F l o w C t r l  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ E n a b l e C T S H W F l o w C t r l ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     S E T _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ C T S E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   C T S   H W   F l o w   C o n t r o l  
     *   @ n o t e       M a c r o   @ r e f   I S _ U A R T _ H W F L O W _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   H a r d w a r e   F l o w   c o n t r o l   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 3                     C T S E                     L L _ U S A R T _ D i s a b l e C T S H W F l o w C t r l  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ D i s a b l e C T S H W F l o w C t r l ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     C L E A R _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ C T S E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   H W   F l o w   C o n t r o l   m o d e   ( b o t h   C T S   a n d   R T S )  
     *   @ n o t e       M a c r o   @ r e f   I S _ U A R T _ H W F L O W _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   H a r d w a r e   F l o w   c o n t r o l   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 3                     R T S E                     L L _ U S A R T _ S e t H W F l o w C t r l \ n  
     *                   C R 3                     C T S E                     L L _ U S A R T _ S e t H W F l o w C t r l  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ p a r a m     H a r d w a r e F l o w C o n t r o l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ H W C O N T R O L _ N O N E  
     *                   @ a r g   @ r e f   L L _ U S A R T _ H W C O N T R O L _ R T S  
     *                   @ a r g   @ r e f   L L _ U S A R T _ H W C O N T R O L _ C T S  
     *                   @ a r g   @ r e f   L L _ U S A R T _ H W C O N T R O L _ R T S _ C T S  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ S e t H W F l o w C t r l ( U S A R T _ T y p e D e f   * U S A R T x ,   u i n t 3 2 _ t   H a r d w a r e F l o w C o n t r o l )  
 {  
     M O D I F Y _ R E G ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ R T S E   |   U S A R T _ C R 3 _ C T S E ,   H a r d w a r e F l o w C o n t r o l ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   H W   F l o w   C o n t r o l   c o n f i g u r a t i o n   ( b o t h   C T S   a n d   R T S )  
     *   @ n o t e       M a c r o   @ r e f   I S _ U A R T _ H W F L O W _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   H a r d w a r e   F l o w   c o n t r o l   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 3                     R T S E                     L L _ U S A R T _ G e t H W F l o w C t r l \ n  
     *                   C R 3                     C T S E                     L L _ U S A R T _ G e t H W F l o w C t r l  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ H W C O N T R O L _ N O N E  
     *                   @ a r g   @ r e f   L L _ U S A R T _ H W C O N T R O L _ R T S  
     *                   @ a r g   @ r e f   L L _ U S A R T _ H W C O N T R O L _ C T S  
     *                   @ a r g   @ r e f   L L _ U S A R T _ H W C O N T R O L _ R T S _ C T S  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ G e t H W F l o w C t r l ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ R T S E   |   U S A R T _ C R 3 _ C T S E ) ) ;  
 }  
  
 # i f   d e f i n e d ( U S A R T _ C R 3 _ O N E B I T )  
 / * *  
     *   @ b r i e f     E n a b l e   O n e   b i t   s a m p l i n g   m e t h o d  
     *   @ r m t o l l   C R 3                     O N E B I T                 L L _ U S A R T _ E n a b l e O n e B i t S a m p  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ E n a b l e O n e B i t S a m p ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     S E T _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ O N E B I T ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   O n e   b i t   s a m p l i n g   m e t h o d  
     *   @ r m t o l l   C R 3                     O N E B I T                 L L _ U S A R T _ D i s a b l e O n e B i t S a m p  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ D i s a b l e O n e B i t S a m p ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     C L E A R _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ O N E B I T ) ;  
 }  
  
 / * *  
     *   @ b r i e f     I n d i c a t e   i f   O n e   b i t   s a m p l i n g   m e t h o d   i s   e n a b l e d  
     *   @ r m t o l l   C R 3                     O N E B I T                 L L _ U S A R T _ I s E n a b l e d O n e B i t S a m p  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ I s E n a b l e d O n e B i t S a m p ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( R E A D _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ O N E B I T )   = =   ( U S A R T _ C R 3 _ O N E B I T ) ) ;  
 }  
 # e n d i f   / *   U S A R T _ O n e B i t S a m p l i n g _ F e a t u r e   * /  
  
 # i f   d e f i n e d ( U S A R T _ C R 1 _ O V E R 8 )  
 / * *  
     *   @ b r i e f     C o n f i g u r e   U S A R T   B R R   r e g i s t e r   f o r   a c h i e v i n g   e x p e c t e d   B a u d   R a t e   v a l u e .  
     *   @ n o t e       C o m p u t e   a n d   s e t   U S A R T D I V   v a l u e   i n   B R R   R e g i s t e r   ( f u l l   B R R   c o n t e n t )  
     *                   a c c o r d i n g   t o   u s e d   P e r i p h e r a l   C l o c k ,   O v e r s a m p l i n g   m o d e ,   a n d   e x p e c t e d   B a u d   R a t e   v a l u e s  
     *   @ n o t e       P e r i p h e r a l   c l o c k   a n d   B a u d   r a t e   v a l u e s   p r o v i d e d   a s   f u n c t i o n   p a r a m e t e r s   s h o u l d   b e   v a l i d  
     *                   ( B a u d   r a t e   v a l u e   ! =   0 )  
     *   @ r m t o l l   B R R                     B R R                       L L _ U S A R T _ S e t B a u d R a t e  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ p a r a m     P e r i p h C l k   P e r i p h e r a l   C l o c k  
     *   @ p a r a m     O v e r S a m p l i n g   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ O V E R S A M P L I N G _ 1 6  
     *                   @ a r g   @ r e f   L L _ U S A R T _ O V E R S A M P L I N G _ 8  
     *   @ p a r a m     B a u d R a t e   B a u d   R a t e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ S e t B a u d R a t e ( U S A R T _ T y p e D e f   * U S A R T x ,   u i n t 3 2 _ t   P e r i p h C l k ,   u i n t 3 2 _ t   O v e r S a m p l i n g ,  
                                                                                     u i n t 3 2 _ t   B a u d R a t e )  
 {  
     i f   ( O v e r S a m p l i n g   = =   L L _ U S A R T _ O V E R S A M P L I N G _ 8 )  
     {  
         U S A R T x - > B R R   =   ( u i n t 1 6 _ t ) ( _ _ L L _ U S A R T _ D I V _ S A M P L I N G 8 ( P e r i p h C l k ,   B a u d R a t e ) ) ;  
     }  
     e l s e  
     {  
         U S A R T x - > B R R   =   ( u i n t 1 6 _ t ) ( _ _ L L _ U S A R T _ D I V _ S A M P L I N G 1 6 ( P e r i p h C l k ,   B a u d R a t e ) ) ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   c u r r e n t   B a u d   R a t e   v a l u e ,   a c c o r d i n g   t o   U S A R T D I V   p r e s e n t   i n   B R R   r e g i s t e r  
     *                   ( f u l l   B R R   c o n t e n t ) ,   a n d   t o   u s e d   P e r i p h e r a l   C l o c k   a n d   O v e r s a m p l i n g   m o d e   v a l u e s  
     *   @ n o t e       I n   c a s e   o f   n o n - i n i t i a l i z e d   o r   i n v a l i d   v a l u e   s t o r e d   i n   B R R   r e g i s t e r ,   v a l u e   0   w i l l   b e   r e t u r n e d .  
     *   @ r m t o l l   B R R                     B R R                       L L _ U S A R T _ G e t B a u d R a t e  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ p a r a m     P e r i p h C l k   P e r i p h e r a l   C l o c k  
     *   @ p a r a m     O v e r S a m p l i n g   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ O V E R S A M P L I N G _ 1 6  
     *                   @ a r g   @ r e f   L L _ U S A R T _ O V E R S A M P L I N G _ 8  
     *   @ r e t v a l   B a u d   R a t e  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ G e t B a u d R a t e ( U S A R T _ T y p e D e f   * U S A R T x ,   u i n t 3 2 _ t   P e r i p h C l k ,   u i n t 3 2 _ t   O v e r S a m p l i n g )  
 {  
     u i n t 3 2 _ t   u s a r t d i v   =   0 x 0 U ;  
     u i n t 3 2 _ t   b r r r e s u l t   =   0 x 0 U ;  
  
     u s a r t d i v   =   U S A R T x - > B R R ;  
  
     i f   ( O v e r S a m p l i n g   = =   L L _ U S A R T _ O V E R S A M P L I N G _ 8 )  
     {  
         i f   ( ( u s a r t d i v   &   0 x F F F 7 U )   ! =   0 U )  
         {  
             u s a r t d i v   =   ( u i n t 1 6 _ t ) ( ( u s a r t d i v   &   0 x F F F 0 U )   |   ( ( u s a r t d i v   &   0 x 0 0 0 7 U )   < <   1 U ) )   ;  
             b r r r e s u l t   =   ( P e r i p h C l k   *   2 U )   /   u s a r t d i v ;  
         }  
     }  
     e l s e  
     {  
         i f   ( ( u s a r t d i v   &   0 x F F F F U )   ! =   0 U )  
         {  
             b r r r e s u l t   =   P e r i p h C l k   /   u s a r t d i v ;  
         }  
     }  
     r e t u r n   ( b r r r e s u l t ) ;  
 }  
 # e l s e  
 / * *  
     *   @ b r i e f     C o n f i g u r e   U S A R T   B R R   r e g i s t e r   f o r   a c h i e v i n g   e x p e c t e d   B a u d   R a t e   v a l u e .  
     *   @ n o t e       C o m p u t e   a n d   s e t   U S A R T D I V   v a l u e   i n   B R R   R e g i s t e r   ( f u l l   B R R   c o n t e n t )  
     *                   a c c o r d i n g   t o   u s e d   P e r i p h e r a l   C l o c k ,   O v e r s a m p l i n g   m o d e ,   a n d   e x p e c t e d   B a u d   R a t e   v a l u e s  
     *   @ n o t e       P e r i p h e r a l   c l o c k   a n d   B a u d   r a t e   v a l u e s   p r o v i d e d   a s   f u n c t i o n   p a r a m e t e r s   s h o u l d   b e   v a l i d  
     *                   ( B a u d   r a t e   v a l u e   ! =   0 )  
     *   @ r m t o l l   B R R                     B R R                       L L _ U S A R T _ S e t B a u d R a t e  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ p a r a m     P e r i p h C l k   P e r i p h e r a l   C l o c k  
     *   @ p a r a m     B a u d R a t e   B a u d   R a t e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ S e t B a u d R a t e ( U S A R T _ T y p e D e f   * U S A R T x ,   u i n t 3 2 _ t   P e r i p h C l k ,   u i n t 3 2 _ t   B a u d R a t e )  
 {  
     U S A R T x - > B R R   =   ( u i n t 1 6 _ t ) ( _ _ L L _ U S A R T _ D I V _ S A M P L I N G 1 6 ( P e r i p h C l k ,   B a u d R a t e ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   c u r r e n t   B a u d   R a t e   v a l u e ,   a c c o r d i n g   t o   U S A R T D I V   p r e s e n t   i n   B R R   r e g i s t e r  
     *                   ( f u l l   B R R   c o n t e n t ) ,   a n d   t o   u s e d   P e r i p h e r a l   C l o c k   a n d   O v e r s a m p l i n g   m o d e   v a l u e s  
     *   @ n o t e       I n   c a s e   o f   n o n - i n i t i a l i z e d   o r   i n v a l i d   v a l u e   s t o r e d   i n   B R R   r e g i s t e r ,   v a l u e   0   w i l l   b e   r e t u r n e d .  
     *   @ r m t o l l   B R R                     B R R                       L L _ U S A R T _ G e t B a u d R a t e  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ p a r a m     P e r i p h C l k   P e r i p h e r a l   C l o c k  
     *   @ r e t v a l   B a u d   R a t e  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ G e t B a u d R a t e ( U S A R T _ T y p e D e f   * U S A R T x ,   u i n t 3 2 _ t   P e r i p h C l k )  
 {  
     u i n t 3 2 _ t   u s a r t d i v   =   0 x 0 U ;  
     u i n t 3 2 _ t   b r r r e s u l t   =   0 x 0 U ;  
  
     u s a r t d i v   =   U S A R T x - > B R R ;  
  
     i f   ( ( u s a r t d i v   &   0 x F F F F U )   ! =   0 U )  
     {  
         b r r r e s u l t   =   P e r i p h C l k   /   u s a r t d i v ;  
     }  
     r e t u r n   ( b r r r e s u l t ) ;  
 }  
 # e n d i f   / *   U S A R T _ O v e r S a m p l i n g _ F e a t u r e   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E F _ C o n f i g u r a t i o n _ I R D A   C o n f i g u r a t i o n   f u n c t i o n s   r e l a t e d   t o   I r d a   f e a t u r e  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   I r D A   m o d e  
     *   @ n o t e       M a c r o   @ r e f   I S _ I R D A _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   I r D A   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 3                     I R E N                     L L _ U S A R T _ E n a b l e I r d a  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ E n a b l e I r d a ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     S E T _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ I R E N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   I r D A   m o d e  
     *   @ n o t e       M a c r o   @ r e f   I S _ I R D A _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   I r D A   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 3                     I R E N                     L L _ U S A R T _ D i s a b l e I r d a  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ D i s a b l e I r d a ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     C L E A R _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ I R E N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     I n d i c a t e   i f   I r D A   m o d e   i s   e n a b l e d  
     *   @ n o t e       M a c r o   @ r e f   I S _ I R D A _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   I r D A   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 3                     I R E N                     L L _ U S A R T _ I s E n a b l e d I r d a  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ I s E n a b l e d I r d a ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( R E A D _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ I R E N )   = =   ( U S A R T _ C R 3 _ I R E N ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   I r D A   P o w e r   M o d e   ( N o r m a l   o r   L o w   P o w e r )  
     *   @ n o t e       M a c r o   @ r e f   I S _ I R D A _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   I r D A   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 3                     I R L P                     L L _ U S A R T _ S e t I r d a P o w e r M o d e  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ p a r a m     P o w e r M o d e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ I R D A _ P O W E R _ N O R M A L  
     *                   @ a r g   @ r e f   L L _ U S A R T _ I R D A _ P O W E R _ L O W  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ S e t I r d a P o w e r M o d e ( U S A R T _ T y p e D e f   * U S A R T x ,   u i n t 3 2 _ t   P o w e r M o d e )  
 {  
     M O D I F Y _ R E G ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ I R L P ,   P o w e r M o d e ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t r i e v e   I r D A   P o w e r   M o d e   c o n f i g u r a t i o n   ( N o r m a l   o r   L o w   P o w e r )  
     *   @ n o t e       M a c r o   @ r e f   I S _ I R D A _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   I r D A   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 3                     I R L P                     L L _ U S A R T _ G e t I r d a P o w e r M o d e  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ I R D A _ P O W E R _ N O R M A L  
     *                   @ a r g   @ r e f   L L _ U S A R T _ P H A S E _ 2 E D G E  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ G e t I r d a P o w e r M o d e ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ I R L P ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   I r d a   p r e s c a l e r   v a l u e ,   u s e d   f o r   d i v i d i n g   t h e   U S A R T   c l o c k   s o u r c e  
     *                   t o   a c h i e v e   t h e   I r d a   L o w   P o w e r   f r e q u e n c y   ( 8   b i t s   v a l u e )  
     *   @ n o t e       M a c r o   @ r e f   I S _ I R D A _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   I r D A   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   G T P R                   P S C                       L L _ U S A R T _ S e t I r d a P r e s c a l e r  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ p a r a m     P r e s c a l e r V a l u e   V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 0   a n d   M a x _ D a t a = 0 x F F  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ S e t I r d a P r e s c a l e r ( U S A R T _ T y p e D e f   * U S A R T x ,   u i n t 3 2 _ t   P r e s c a l e r V a l u e )  
 {  
     M O D I F Y _ R E G ( U S A R T x - > G T P R ,   U S A R T _ G T P R _ P S C ,   P r e s c a l e r V a l u e ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   I r d a   p r e s c a l e r   v a l u e ,   u s e d   f o r   d i v i d i n g   t h e   U S A R T   c l o c k   s o u r c e  
     *                   t o   a c h i e v e   t h e   I r d a   L o w   P o w e r   f r e q u e n c y   ( 8   b i t s   v a l u e )  
     *   @ n o t e       M a c r o   @ r e f   I S _ I R D A _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   I r D A   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   G T P R                   P S C                       L L _ U S A R T _ G e t I r d a P r e s c a l e r  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   I r d a   p r e s c a l e r   v a l u e   ( V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 0   a n d   M a x _ D a t a = 0 x F F )  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ G e t I r d a P r e s c a l e r ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( U S A R T x - > G T P R ,   U S A R T _ G T P R _ P S C ) ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E F _ C o n f i g u r a t i o n _ S m a r t c a r d   C o n f i g u r a t i o n   f u n c t i o n s   r e l a t e d   t o   S m a r t c a r d   f e a t u r e  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   S m a r t c a r d   N A C K   t r a n s m i s s i o n  
     *   @ n o t e       M a c r o   @ r e f   I S _ S M A R T C A R D _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   S m a r t c a r d   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 3                     N A C K                     L L _ U S A R T _ E n a b l e S m a r t c a r d N A C K  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ E n a b l e S m a r t c a r d N A C K ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     S E T _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ N A C K ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   S m a r t c a r d   N A C K   t r a n s m i s s i o n  
     *   @ n o t e       M a c r o   @ r e f   I S _ S M A R T C A R D _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   S m a r t c a r d   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 3                     N A C K                     L L _ U S A R T _ D i s a b l e S m a r t c a r d N A C K  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ D i s a b l e S m a r t c a r d N A C K ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     C L E A R _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ N A C K ) ;  
 }  
  
 / * *  
     *   @ b r i e f     I n d i c a t e   i f   S m a r t c a r d   N A C K   t r a n s m i s s i o n   i s   e n a b l e d  
     *   @ n o t e       M a c r o   @ r e f   I S _ S M A R T C A R D _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   S m a r t c a r d   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 3                     N A C K                     L L _ U S A R T _ I s E n a b l e d S m a r t c a r d N A C K  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ I s E n a b l e d S m a r t c a r d N A C K ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( R E A D _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ N A C K )   = =   ( U S A R T _ C R 3 _ N A C K ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   S m a r t c a r d   m o d e  
     *   @ n o t e       M a c r o   @ r e f   I S _ S M A R T C A R D _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   S m a r t c a r d   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 3                     S C E N                     L L _ U S A R T _ E n a b l e S m a r t c a r d  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ E n a b l e S m a r t c a r d ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     S E T _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ S C E N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   S m a r t c a r d   m o d e  
     *   @ n o t e       M a c r o   @ r e f   I S _ S M A R T C A R D _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   S m a r t c a r d   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 3                     S C E N                     L L _ U S A R T _ D i s a b l e S m a r t c a r d  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ D i s a b l e S m a r t c a r d ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     C L E A R _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ S C E N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     I n d i c a t e   i f   S m a r t c a r d   m o d e   i s   e n a b l e d  
     *   @ n o t e       M a c r o   @ r e f   I S _ S M A R T C A R D _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   S m a r t c a r d   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 3                     S C E N                     L L _ U S A R T _ I s E n a b l e d S m a r t c a r d  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ I s E n a b l e d S m a r t c a r d ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( R E A D _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ S C E N )   = =   ( U S A R T _ C R 3 _ S C E N ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   S m a r t c a r d   p r e s c a l e r   v a l u e ,   u s e d   f o r   d i v i d i n g   t h e   U S A R T   c l o c k  
     *                   s o u r c e   t o   p r o v i d e   t h e   S M A R T C A R D   C l o c k   ( 5   b i t s   v a l u e )  
     *   @ n o t e       M a c r o   @ r e f   I S _ S M A R T C A R D _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   S m a r t c a r d   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   G T P R                   P S C                       L L _ U S A R T _ S e t S m a r t c a r d P r e s c a l e r  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ p a r a m     P r e s c a l e r V a l u e   V a l u e   b e t w e e n   M i n _ D a t a = 0   a n d   M a x _ D a t a = 3 1  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ S e t S m a r t c a r d P r e s c a l e r ( U S A R T _ T y p e D e f   * U S A R T x ,   u i n t 3 2 _ t   P r e s c a l e r V a l u e )  
 {  
     M O D I F Y _ R E G ( U S A R T x - > G T P R ,   U S A R T _ G T P R _ P S C ,   P r e s c a l e r V a l u e ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   S m a r t c a r d   p r e s c a l e r   v a l u e ,   u s e d   f o r   d i v i d i n g   t h e   U S A R T   c l o c k  
     *                   s o u r c e   t o   p r o v i d e   t h e   S M A R T C A R D   C l o c k   ( 5   b i t s   v a l u e )  
     *   @ n o t e       M a c r o   @ r e f   I S _ S M A R T C A R D _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   S m a r t c a r d   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   G T P R                   P S C                       L L _ U S A R T _ G e t S m a r t c a r d P r e s c a l e r  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S m a r t c a r d   p r e s c a l e r   v a l u e   ( V a l u e   b e t w e e n   M i n _ D a t a = 0   a n d   M a x _ D a t a = 3 1 )  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ G e t S m a r t c a r d P r e s c a l e r ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( U S A R T x - > G T P R ,   U S A R T _ G T P R _ P S C ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   S m a r t c a r d   G u a r d   t i m e   v a l u e ,   e x p r e s s e d   i n   n b   o f   b a u d   c l o c k s   p e r i o d s  
     *                   ( G T [ 7 : 0 ]   b i t s   :   G u a r d   t i m e   v a l u e )  
     *   @ n o t e       M a c r o   @ r e f   I S _ S M A R T C A R D _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   S m a r t c a r d   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   G T P R                   G T                         L L _ U S A R T _ S e t S m a r t c a r d G u a r d T i m e  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ p a r a m     G u a r d T i m e   V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 0   a n d   M a x _ D a t a = 0 x F F  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ S e t S m a r t c a r d G u a r d T i m e ( U S A R T _ T y p e D e f   * U S A R T x ,   u i n t 3 2 _ t   G u a r d T i m e )  
 {  
     M O D I F Y _ R E G ( U S A R T x - > G T P R ,   U S A R T _ G T P R _ G T ,   G u a r d T i m e   < <   U S A R T _ P O S I T I O N _ G T P R _ G T ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   S m a r t c a r d   G u a r d   t i m e   v a l u e ,   e x p r e s s e d   i n   n b   o f   b a u d   c l o c k s   p e r i o d s  
     *                   ( G T [ 7 : 0 ]   b i t s   :   G u a r d   t i m e   v a l u e )  
     *   @ n o t e       M a c r o   @ r e f   I S _ S M A R T C A R D _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   S m a r t c a r d   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   G T P R                   G T                         L L _ U S A R T _ G e t S m a r t c a r d G u a r d T i m e  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S m a r t c a r d   G u a r d   t i m e   v a l u e   ( V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 0   a n d   M a x _ D a t a = 0 x F F )  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ G e t S m a r t c a r d G u a r d T i m e ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( U S A R T x - > G T P R ,   U S A R T _ G T P R _ G T )   > >   U S A R T _ P O S I T I O N _ G T P R _ G T ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E F _ C o n f i g u r a t i o n _ H a l f D u p l e x   C o n f i g u r a t i o n   f u n c t i o n s   r e l a t e d   t o   H a l f   D u p l e x   f e a t u r e  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   S i n g l e   W i r e   H a l f - D u p l e x   m o d e  
     *   @ n o t e       M a c r o   @ r e f   I S _ U A R T _ H A L F D U P L E X _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   H a l f - D u p l e x   m o d e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 3                     H D S E L                   L L _ U S A R T _ E n a b l e H a l f D u p l e x  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ E n a b l e H a l f D u p l e x ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     S E T _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ H D S E L ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   S i n g l e   W i r e   H a l f - D u p l e x   m o d e  
     *   @ n o t e       M a c r o   @ r e f   I S _ U A R T _ H A L F D U P L E X _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   H a l f - D u p l e x   m o d e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 3                     H D S E L                   L L _ U S A R T _ D i s a b l e H a l f D u p l e x  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ D i s a b l e H a l f D u p l e x ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     C L E A R _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ H D S E L ) ;  
 }  
  
 / * *  
     *   @ b r i e f     I n d i c a t e   i f   S i n g l e   W i r e   H a l f - D u p l e x   m o d e   i s   e n a b l e d  
     *   @ n o t e       M a c r o   @ r e f   I S _ U A R T _ H A L F D U P L E X _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   H a l f - D u p l e x   m o d e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 3                     H D S E L                   L L _ U S A R T _ I s E n a b l e d H a l f D u p l e x  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ I s E n a b l e d H a l f D u p l e x ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( R E A D _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ H D S E L )   = =   ( U S A R T _ C R 3 _ H D S E L ) ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E F _ C o n f i g u r a t i o n _ L I N   C o n f i g u r a t i o n   f u n c t i o n s   r e l a t e d   t o   L I N   f e a t u r e  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S e t   L I N   B r e a k   D e t e c t i o n   L e n g t h  
     *   @ n o t e       M a c r o   @ r e f   I S _ U A R T _ L I N _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   L I N   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 2                     L B D L                     L L _ U S A R T _ S e t L I N B r k D e t e c t i o n L e n  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ p a r a m     L I N B D L e n g t h   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ L I N B R E A K _ D E T E C T _ 1 0 B  
     *                   @ a r g   @ r e f   L L _ U S A R T _ L I N B R E A K _ D E T E C T _ 1 1 B  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ S e t L I N B r k D e t e c t i o n L e n ( U S A R T _ T y p e D e f   * U S A R T x ,   u i n t 3 2 _ t   L I N B D L e n g t h )  
 {  
     M O D I F Y _ R E G ( U S A R T x - > C R 2 ,   U S A R T _ C R 2 _ L B D L ,   L I N B D L e n g t h ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   L I N   B r e a k   D e t e c t i o n   L e n g t h  
     *   @ n o t e       M a c r o   @ r e f   I S _ U A R T _ L I N _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   L I N   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 2                     L B D L                     L L _ U S A R T _ G e t L I N B r k D e t e c t i o n L e n  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ U S A R T _ L I N B R E A K _ D E T E C T _ 1 0 B  
     *                   @ a r g   @ r e f   L L _ U S A R T _ L I N B R E A K _ D E T E C T _ 1 1 B  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ G e t L I N B r k D e t e c t i o n L e n ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( U S A R T x - > C R 2 ,   U S A R T _ C R 2 _ L B D L ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   L I N   m o d e  
     *   @ n o t e       M a c r o   @ r e f   I S _ U A R T _ L I N _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   L I N   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 2                     L I N E N                   L L _ U S A R T _ E n a b l e L I N  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ E n a b l e L I N ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     S E T _ B I T ( U S A R T x - > C R 2 ,   U S A R T _ C R 2 _ L I N E N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   L I N   m o d e  
     *   @ n o t e       M a c r o   @ r e f   I S _ U A R T _ L I N _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   L I N   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 2                     L I N E N                   L L _ U S A R T _ D i s a b l e L I N  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ D i s a b l e L I N ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     C L E A R _ B I T ( U S A R T x - > C R 2 ,   U S A R T _ C R 2 _ L I N E N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     I n d i c a t e   i f   L I N   m o d e   i s   e n a b l e d  
     *   @ n o t e       M a c r o   @ r e f   I S _ U A R T _ L I N _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   L I N   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 2                     L I N E N                   L L _ U S A R T _ I s E n a b l e d L I N  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ I s E n a b l e d L I N ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( R E A D _ B I T ( U S A R T x - > C R 2 ,   U S A R T _ C R 2 _ L I N E N )   = =   ( U S A R T _ C R 2 _ L I N E N ) ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E F _ A d v a n c e d C o n f i g u r a t i o n   A d v a n c e d   C o n f i g u r a t i o n s   s e r v i c e s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     P e r f o r m   b a s i c   c o n f i g u r a t i o n   o f   U S A R T   f o r   e n a b l i n g   u s e   i n   A s y n c h r o n o u s   M o d e   ( U A R T )  
     *   @ n o t e       I n   U A R T   m o d e ,   t h e   f o l l o w i n g   b i t s   m u s t   b e   k e p t   c l e a r e d :  
     *                       -   L I N E N   b i t   i n   t h e   U S A R T _ C R 2   r e g i s t e r ,  
     *                       -   C L K E N   b i t   i n   t h e   U S A R T _ C R 2   r e g i s t e r ,  
     *                       -   S C E N   b i t   i n   t h e   U S A R T _ C R 3   r e g i s t e r ,  
     *                       -   I R E N   b i t   i n   t h e   U S A R T _ C R 3   r e g i s t e r ,  
     *                       -   H D S E L   b i t   i n   t h e   U S A R T _ C R 3   r e g i s t e r .  
     *   @ n o t e       C a l l   o f   t h i s   f u n c t i o n   i s   e q u i v a l e n t   t o   f o l l o w i n g   f u n c t i o n   c a l l   s e q u e n c e   :  
     *                   -   C l e a r   L I N E N   i n   C R 2   u s i n g   @ r e f   L L _ U S A R T _ D i s a b l e L I N ( )   f u n c t i o n  
     *                   -   C l e a r   C L K E N   i n   C R 2   u s i n g   @ r e f   L L _ U S A R T _ D i s a b l e S C L K O u t p u t ( )   f u n c t i o n  
     *                   -   C l e a r   S C E N   i n   C R 3   u s i n g   @ r e f   L L _ U S A R T _ D i s a b l e S m a r t c a r d ( )   f u n c t i o n  
     *                   -   C l e a r   I R E N   i n   C R 3   u s i n g   @ r e f   L L _ U S A R T _ D i s a b l e I r d a ( )   f u n c t i o n  
     *                   -   C l e a r   H D S E L   i n   C R 3   u s i n g   @ r e f   L L _ U S A R T _ D i s a b l e H a l f D u p l e x ( )   f u n c t i o n  
     *   @ n o t e       O t h e r   r e m a i n i n g   c o n f i g u r a t i o n s   i t e m s   r e l a t e d   t o   A s y n c h r o n o u s   M o d e  
     *                   ( a s   B a u d   R a t e ,   W o r d   l e n g t h ,   P a r i t y ,   . . . )   s h o u l d   b e   s e t   u s i n g  
     *                   d e d i c a t e d   f u n c t i o n s  
     *   @ r m t o l l   C R 2                     L I N E N                   L L _ U S A R T _ C o n f i g A s y n c M o d e \ n  
     *                   C R 2                     C L K E N                   L L _ U S A R T _ C o n f i g A s y n c M o d e \ n  
     *                   C R 3                     S C E N                     L L _ U S A R T _ C o n f i g A s y n c M o d e \ n  
     *                   C R 3                     I R E N                     L L _ U S A R T _ C o n f i g A s y n c M o d e \ n  
     *                   C R 3                     H D S E L                   L L _ U S A R T _ C o n f i g A s y n c M o d e  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ C o n f i g A s y n c M o d e ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     / *   I n   A s y n c h r o n o u s   m o d e ,   t h e   f o l l o w i n g   b i t s   m u s t   b e   k e p t   c l e a r e d :  
     -   L I N E N ,   C L K E N   b i t s   i n   t h e   U S A R T _ C R 2   r e g i s t e r ,  
     -   S C E N ,   I R E N   a n d   H D S E L   b i t s   i n   t h e   U S A R T _ C R 3   r e g i s t e r . * /  
     C L E A R _ B I T ( U S A R T x - > C R 2 ,   ( U S A R T _ C R 2 _ L I N E N   |   U S A R T _ C R 2 _ C L K E N ) ) ;  
     C L E A R _ B I T ( U S A R T x - > C R 3 ,   ( U S A R T _ C R 3 _ S C E N   |   U S A R T _ C R 3 _ I R E N   |   U S A R T _ C R 3 _ H D S E L ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     P e r f o r m   b a s i c   c o n f i g u r a t i o n   o f   U S A R T   f o r   e n a b l i n g   u s e   i n   S y n c h r o n o u s   M o d e  
     *   @ n o t e       I n   S y n c h r o n o u s   m o d e ,   t h e   f o l l o w i n g   b i t s   m u s t   b e   k e p t   c l e a r e d :  
     *                       -   L I N E N   b i t   i n   t h e   U S A R T _ C R 2   r e g i s t e r ,  
     *                       -   S C E N   b i t   i n   t h e   U S A R T _ C R 3   r e g i s t e r ,  
     *                       -   I R E N   b i t   i n   t h e   U S A R T _ C R 3   r e g i s t e r ,  
     *                       -   H D S E L   b i t   i n   t h e   U S A R T _ C R 3   r e g i s t e r .  
     *                   T h i s   f u n c t i o n   a l s o   s e t s   t h e   U S A R T   i n   S y n c h r o n o u s   m o d e .  
     *   @ n o t e       M a c r o   @ r e f   I S _ U S A R T _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   S y n c h r o n o u s   m o d e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ n o t e       C a l l   o f   t h i s   f u n c t i o n   i s   e q u i v a l e n t   t o   f o l l o w i n g   f u n c t i o n   c a l l   s e q u e n c e   :  
     *                   -   C l e a r   L I N E N   i n   C R 2   u s i n g   @ r e f   L L _ U S A R T _ D i s a b l e L I N ( )   f u n c t i o n  
     *                   -   C l e a r   I R E N   i n   C R 3   u s i n g   @ r e f   L L _ U S A R T _ D i s a b l e I r d a ( )   f u n c t i o n  
     *                   -   C l e a r   S C E N   i n   C R 3   u s i n g   @ r e f   L L _ U S A R T _ D i s a b l e S m a r t c a r d ( )   f u n c t i o n  
     *                   -   C l e a r   H D S E L   i n   C R 3   u s i n g   @ r e f   L L _ U S A R T _ D i s a b l e H a l f D u p l e x ( )   f u n c t i o n  
     *                   -   S e t   C L K E N   i n   C R 2   u s i n g   @ r e f   L L _ U S A R T _ E n a b l e S C L K O u t p u t ( )   f u n c t i o n  
     *   @ n o t e       O t h e r   r e m a i n i n g   c o n f i g u r a t i o n s   i t e m s   r e l a t e d   t o   S y n c h r o n o u s   M o d e  
     *                   ( a s   B a u d   R a t e ,   W o r d   l e n g t h ,   P a r i t y ,   C l o c k   P o l a r i t y ,   . . . )   s h o u l d   b e   s e t   u s i n g  
     *                   d e d i c a t e d   f u n c t i o n s  
     *   @ r m t o l l   C R 2                     L I N E N                   L L _ U S A R T _ C o n f i g S y n c M o d e \ n  
     *                   C R 2                     C L K E N                   L L _ U S A R T _ C o n f i g S y n c M o d e \ n  
     *                   C R 3                     S C E N                     L L _ U S A R T _ C o n f i g S y n c M o d e \ n  
     *                   C R 3                     I R E N                     L L _ U S A R T _ C o n f i g S y n c M o d e \ n  
     *                   C R 3                     H D S E L                   L L _ U S A R T _ C o n f i g S y n c M o d e  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ C o n f i g S y n c M o d e ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     / *   I n   S y n c h r o n o u s   m o d e ,   t h e   f o l l o w i n g   b i t s   m u s t   b e   k e p t   c l e a r e d :  
     -   L I N E N   b i t   i n   t h e   U S A R T _ C R 2   r e g i s t e r ,  
     -   S C E N ,   I R E N   a n d   H D S E L   b i t s   i n   t h e   U S A R T _ C R 3   r e g i s t e r . * /  
     C L E A R _ B I T ( U S A R T x - > C R 2 ,   ( U S A R T _ C R 2 _ L I N E N ) ) ;  
     C L E A R _ B I T ( U S A R T x - > C R 3 ,   ( U S A R T _ C R 3 _ S C E N   |   U S A R T _ C R 3 _ I R E N   |   U S A R T _ C R 3 _ H D S E L ) ) ;  
     / *   s e t   t h e   U A R T / U S A R T   i n   S y n c h r o n o u s   m o d e   * /  
     S E T _ B I T ( U S A R T x - > C R 2 ,   U S A R T _ C R 2 _ C L K E N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     P e r f o r m   b a s i c   c o n f i g u r a t i o n   o f   U S A R T   f o r   e n a b l i n g   u s e   i n   L I N   M o d e  
     *   @ n o t e       I n   L I N   m o d e ,   t h e   f o l l o w i n g   b i t s   m u s t   b e   k e p t   c l e a r e d :  
     *                       -   S T O P   a n d   C L K E N   b i t s   i n   t h e   U S A R T _ C R 2   r e g i s t e r ,  
     *                       -   S C E N   b i t   i n   t h e   U S A R T _ C R 3   r e g i s t e r ,  
     *                       -   I R E N   b i t   i n   t h e   U S A R T _ C R 3   r e g i s t e r ,  
     *                       -   H D S E L   b i t   i n   t h e   U S A R T _ C R 3   r e g i s t e r .  
     *                   T h i s   f u n c t i o n   a l s o   s e t   t h e   U A R T / U S A R T   i n   L I N   m o d e .  
     *   @ n o t e       M a c r o   @ r e f   I S _ U A R T _ L I N _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   L I N   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ n o t e       C a l l   o f   t h i s   f u n c t i o n   i s   e q u i v a l e n t   t o   f o l l o w i n g   f u n c t i o n   c a l l   s e q u e n c e   :  
     *                   -   C l e a r   C L K E N   i n   C R 2   u s i n g   @ r e f   L L _ U S A R T _ D i s a b l e S C L K O u t p u t ( )   f u n c t i o n  
     *                   -   C l e a r   S T O P   i n   C R 2   u s i n g   @ r e f   L L _ U S A R T _ S e t S t o p B i t s L e n g t h ( )   f u n c t i o n  
     *                   -   C l e a r   S C E N   i n   C R 3   u s i n g   @ r e f   L L _ U S A R T _ D i s a b l e S m a r t c a r d ( )   f u n c t i o n  
     *                   -   C l e a r   I R E N   i n   C R 3   u s i n g   @ r e f   L L _ U S A R T _ D i s a b l e I r d a ( )   f u n c t i o n  
     *                   -   C l e a r   H D S E L   i n   C R 3   u s i n g   @ r e f   L L _ U S A R T _ D i s a b l e H a l f D u p l e x ( )   f u n c t i o n  
     *                   -   S e t   L I N E N   i n   C R 2   u s i n g   @ r e f   L L _ U S A R T _ E n a b l e L I N ( )   f u n c t i o n  
     *   @ n o t e       O t h e r   r e m a i n i n g   c o n f i g u r a t i o n s   i t e m s   r e l a t e d   t o   L I N   M o d e  
     *                   ( a s   B a u d   R a t e ,   W o r d   l e n g t h ,   L I N   B r e a k   D e t e c t i o n   L e n g t h ,   . . . )   s h o u l d   b e   s e t   u s i n g  
     *                   d e d i c a t e d   f u n c t i o n s  
     *   @ r m t o l l   C R 2                     C L K E N                   L L _ U S A R T _ C o n f i g L I N M o d e \ n  
     *                   C R 2                     S T O P                     L L _ U S A R T _ C o n f i g L I N M o d e \ n  
     *                   C R 2                     L I N E N                   L L _ U S A R T _ C o n f i g L I N M o d e \ n  
     *                   C R 3                     I R E N                     L L _ U S A R T _ C o n f i g L I N M o d e \ n  
     *                   C R 3                     S C E N                     L L _ U S A R T _ C o n f i g L I N M o d e \ n  
     *                   C R 3                     H D S E L                   L L _ U S A R T _ C o n f i g L I N M o d e  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ C o n f i g L I N M o d e ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     / *   I n   L I N   m o d e ,   t h e   f o l l o w i n g   b i t s   m u s t   b e   k e p t   c l e a r e d :  
     -   S T O P   a n d   C L K E N   b i t s   i n   t h e   U S A R T _ C R 2   r e g i s t e r ,  
     -   I R E N ,   S C E N   a n d   H D S E L   b i t s   i n   t h e   U S A R T _ C R 3   r e g i s t e r . * /  
     C L E A R _ B I T ( U S A R T x - > C R 2 ,   ( U S A R T _ C R 2 _ C L K E N   |   U S A R T _ C R 2 _ S T O P ) ) ;  
     C L E A R _ B I T ( U S A R T x - > C R 3 ,   ( U S A R T _ C R 3 _ I R E N   |   U S A R T _ C R 3 _ S C E N   |   U S A R T _ C R 3 _ H D S E L ) ) ;  
     / *   S e t   t h e   U A R T / U S A R T   i n   L I N   m o d e   * /  
     S E T _ B I T ( U S A R T x - > C R 2 ,   U S A R T _ C R 2 _ L I N E N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     P e r f o r m   b a s i c   c o n f i g u r a t i o n   o f   U S A R T   f o r   e n a b l i n g   u s e   i n   H a l f   D u p l e x   M o d e  
     *   @ n o t e       I n   H a l f   D u p l e x   m o d e ,   t h e   f o l l o w i n g   b i t s   m u s t   b e   k e p t   c l e a r e d :  
     *                       -   L I N E N   b i t   i n   t h e   U S A R T _ C R 2   r e g i s t e r ,  
     *                       -   C L K E N   b i t   i n   t h e   U S A R T _ C R 2   r e g i s t e r ,  
     *                       -   S C E N   b i t   i n   t h e   U S A R T _ C R 3   r e g i s t e r ,  
     *                       -   I R E N   b i t   i n   t h e   U S A R T _ C R 3   r e g i s t e r ,  
     *                   T h i s   f u n c t i o n   a l s o   s e t s   t h e   U A R T / U S A R T   i n   H a l f   D u p l e x   m o d e .  
     *   @ n o t e       M a c r o   @ r e f   I S _ U A R T _ H A L F D U P L E X _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   H a l f - D u p l e x   m o d e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ n o t e       C a l l   o f   t h i s   f u n c t i o n   i s   e q u i v a l e n t   t o   f o l l o w i n g   f u n c t i o n   c a l l   s e q u e n c e   :  
     *                   -   C l e a r   L I N E N   i n   C R 2   u s i n g   @ r e f   L L _ U S A R T _ D i s a b l e L I N ( )   f u n c t i o n  
     *                   -   C l e a r   C L K E N   i n   C R 2   u s i n g   @ r e f   L L _ U S A R T _ D i s a b l e S C L K O u t p u t ( )   f u n c t i o n  
     *                   -   C l e a r   S C E N   i n   C R 3   u s i n g   @ r e f   L L _ U S A R T _ D i s a b l e S m a r t c a r d ( )   f u n c t i o n  
     *                   -   C l e a r   I R E N   i n   C R 3   u s i n g   @ r e f   L L _ U S A R T _ D i s a b l e I r d a ( )   f u n c t i o n  
     *                   -   S e t   H D S E L   i n   C R 3   u s i n g   @ r e f   L L _ U S A R T _ E n a b l e H a l f D u p l e x ( )   f u n c t i o n  
     *   @ n o t e       O t h e r   r e m a i n i n g   c o n f i g u r a t i o n s   i t e m s   r e l a t e d   t o   H a l f   D u p l e x   M o d e  
     *                   ( a s   B a u d   R a t e ,   W o r d   l e n g t h ,   P a r i t y ,   . . . )   s h o u l d   b e   s e t   u s i n g  
     *                   d e d i c a t e d   f u n c t i o n s  
     *   @ r m t o l l   C R 2                     L I N E N                   L L _ U S A R T _ C o n f i g H a l f D u p l e x M o d e \ n  
     *                   C R 2                     C L K E N                   L L _ U S A R T _ C o n f i g H a l f D u p l e x M o d e \ n  
     *                   C R 3                     H D S E L                   L L _ U S A R T _ C o n f i g H a l f D u p l e x M o d e \ n  
     *                   C R 3                     S C E N                     L L _ U S A R T _ C o n f i g H a l f D u p l e x M o d e \ n  
     *                   C R 3                     I R E N                     L L _ U S A R T _ C o n f i g H a l f D u p l e x M o d e  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ C o n f i g H a l f D u p l e x M o d e ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     / *   I n   H a l f   D u p l e x   m o d e ,   t h e   f o l l o w i n g   b i t s   m u s t   b e   k e p t   c l e a r e d :  
     -   L I N E N   a n d   C L K E N   b i t s   i n   t h e   U S A R T _ C R 2   r e g i s t e r ,  
     -   S C E N   a n d   I R E N   b i t s   i n   t h e   U S A R T _ C R 3   r e g i s t e r . * /  
     C L E A R _ B I T ( U S A R T x - > C R 2 ,   ( U S A R T _ C R 2 _ L I N E N   |   U S A R T _ C R 2 _ C L K E N ) ) ;  
     C L E A R _ B I T ( U S A R T x - > C R 3 ,   ( U S A R T _ C R 3 _ S C E N   |   U S A R T _ C R 3 _ I R E N ) ) ;  
     / *   s e t   t h e   U A R T / U S A R T   i n   H a l f   D u p l e x   m o d e   * /  
     S E T _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ H D S E L ) ;  
 }  
  
 / * *  
     *   @ b r i e f     P e r f o r m   b a s i c   c o n f i g u r a t i o n   o f   U S A R T   f o r   e n a b l i n g   u s e   i n   S m a r t c a r d   M o d e  
     *   @ n o t e       I n   S m a r t c a r d   m o d e ,   t h e   f o l l o w i n g   b i t s   m u s t   b e   k e p t   c l e a r e d :  
     *                       -   L I N E N   b i t   i n   t h e   U S A R T _ C R 2   r e g i s t e r ,  
     *                       -   I R E N   b i t   i n   t h e   U S A R T _ C R 3   r e g i s t e r ,  
     *                       -   H D S E L   b i t   i n   t h e   U S A R T _ C R 3   r e g i s t e r .  
     *                   T h i s   f u n c t i o n   a l s o   c o n f i g u r e s   S t o p   b i t s   t o   1 . 5   b i t s   a n d  
     *                   s e t s   t h e   U S A R T   i n   S m a r t c a r d   m o d e   ( S C E N   b i t ) .  
     *                   C l o c k   O u t p u t   i s   a l s o   e n a b l e d   ( C L K E N ) .  
     *   @ n o t e       M a c r o   @ r e f   I S _ S M A R T C A R D _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   S m a r t c a r d   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ n o t e       C a l l   o f   t h i s   f u n c t i o n   i s   e q u i v a l e n t   t o   f o l l o w i n g   f u n c t i o n   c a l l   s e q u e n c e   :  
     *                   -   C l e a r   L I N E N   i n   C R 2   u s i n g   @ r e f   L L _ U S A R T _ D i s a b l e L I N ( )   f u n c t i o n  
     *                   -   C l e a r   I R E N   i n   C R 3   u s i n g   @ r e f   L L _ U S A R T _ D i s a b l e I r d a ( )   f u n c t i o n  
     *                   -   C l e a r   H D S E L   i n   C R 3   u s i n g   @ r e f   L L _ U S A R T _ D i s a b l e H a l f D u p l e x ( )   f u n c t i o n  
     *                   -   C o n f i g u r e   S T O P   i n   C R 2   u s i n g   @ r e f   L L _ U S A R T _ S e t S t o p B i t s L e n g t h ( )   f u n c t i o n  
     *                   -   S e t   C L K E N   i n   C R 2   u s i n g   @ r e f   L L _ U S A R T _ E n a b l e S C L K O u t p u t ( )   f u n c t i o n  
     *                   -   S e t   S C E N   i n   C R 3   u s i n g   @ r e f   L L _ U S A R T _ E n a b l e S m a r t c a r d ( )   f u n c t i o n  
     *   @ n o t e       O t h e r   r e m a i n i n g   c o n f i g u r a t i o n s   i t e m s   r e l a t e d   t o   S m a r t c a r d   M o d e  
     *                   ( a s   B a u d   R a t e ,   W o r d   l e n g t h ,   P a r i t y ,   . . . )   s h o u l d   b e   s e t   u s i n g  
     *                   d e d i c a t e d   f u n c t i o n s  
     *   @ r m t o l l   C R 2                     L I N E N                   L L _ U S A R T _ C o n f i g S m a r t c a r d M o d e \ n  
     *                   C R 2                     S T O P                     L L _ U S A R T _ C o n f i g S m a r t c a r d M o d e \ n  
     *                   C R 2                     C L K E N                   L L _ U S A R T _ C o n f i g S m a r t c a r d M o d e \ n  
     *                   C R 3                     H D S E L                   L L _ U S A R T _ C o n f i g S m a r t c a r d M o d e \ n  
     *                   C R 3                     S C E N                     L L _ U S A R T _ C o n f i g S m a r t c a r d M o d e  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ C o n f i g S m a r t c a r d M o d e ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     / *   I n   S m a r t c a r d   m o d e ,   t h e   f o l l o w i n g   b i t s   m u s t   b e   k e p t   c l e a r e d :  
     -   L I N E N   b i t   i n   t h e   U S A R T _ C R 2   r e g i s t e r ,  
     -   I R E N   a n d   H D S E L   b i t s   i n   t h e   U S A R T _ C R 3   r e g i s t e r . * /  
     C L E A R _ B I T ( U S A R T x - > C R 2 ,   ( U S A R T _ C R 2 _ L I N E N ) ) ;  
     C L E A R _ B I T ( U S A R T x - > C R 3 ,   ( U S A R T _ C R 3 _ I R E N   |   U S A R T _ C R 3 _ H D S E L ) ) ;  
     / *   C o n f i g u r e   S t o p   b i t s   t o   1 . 5   b i t s   * /  
     / *   S y n c h r o n o u s   m o d e   i s   a c t i v a t e d   b y   d e f a u l t   * /  
     S E T _ B I T ( U S A R T x - > C R 2 ,   ( U S A R T _ C R 2 _ S T O P _ 0   |   U S A R T _ C R 2 _ S T O P _ 1   |   U S A R T _ C R 2 _ C L K E N ) ) ;  
     / *   s e t   t h e   U A R T / U S A R T   i n   S m a r t c a r d   m o d e   * /  
     S E T _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ S C E N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     P e r f o r m   b a s i c   c o n f i g u r a t i o n   o f   U S A R T   f o r   e n a b l i n g   u s e   i n   I r d a   M o d e  
     *   @ n o t e       I n   I R D A   m o d e ,   t h e   f o l l o w i n g   b i t s   m u s t   b e   k e p t   c l e a r e d :  
     *                       -   L I N E N   b i t   i n   t h e   U S A R T _ C R 2   r e g i s t e r ,  
     *                       -   S T O P   a n d   C L K E N   b i t s   i n   t h e   U S A R T _ C R 2   r e g i s t e r ,  
     *                       -   S C E N   b i t   i n   t h e   U S A R T _ C R 3   r e g i s t e r ,  
     *                       -   H D S E L   b i t   i n   t h e   U S A R T _ C R 3   r e g i s t e r .  
     *                   T h i s   f u n c t i o n   a l s o   s e t s   t h e   U A R T / U S A R T   i n   I R D A   m o d e   ( I R E N   b i t ) .  
     *   @ n o t e       M a c r o   @ r e f   I S _ I R D A _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   I r D A   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ n o t e       C a l l   o f   t h i s   f u n c t i o n   i s   e q u i v a l e n t   t o   f o l l o w i n g   f u n c t i o n   c a l l   s e q u e n c e   :  
     *                   -   C l e a r   L I N E N   i n   C R 2   u s i n g   @ r e f   L L _ U S A R T _ D i s a b l e L I N ( )   f u n c t i o n  
     *                   -   C l e a r   C L K E N   i n   C R 2   u s i n g   @ r e f   L L _ U S A R T _ D i s a b l e S C L K O u t p u t ( )   f u n c t i o n  
     *                   -   C l e a r   S C E N   i n   C R 3   u s i n g   @ r e f   L L _ U S A R T _ D i s a b l e S m a r t c a r d ( )   f u n c t i o n  
     *                   -   C l e a r   H D S E L   i n   C R 3   u s i n g   @ r e f   L L _ U S A R T _ D i s a b l e H a l f D u p l e x ( )   f u n c t i o n  
     *                   -   C o n f i g u r e   S T O P   i n   C R 2   u s i n g   @ r e f   L L _ U S A R T _ S e t S t o p B i t s L e n g t h ( )   f u n c t i o n  
     *                   -   S e t   I R E N   i n   C R 3   u s i n g   @ r e f   L L _ U S A R T _ E n a b l e I r d a ( )   f u n c t i o n  
     *   @ n o t e       O t h e r   r e m a i n i n g   c o n f i g u r a t i o n s   i t e m s   r e l a t e d   t o   I r d a   M o d e  
     *                   ( a s   B a u d   R a t e ,   W o r d   l e n g t h ,   P o w e r   m o d e ,   . . . )   s h o u l d   b e   s e t   u s i n g  
     *                   d e d i c a t e d   f u n c t i o n s  
     *   @ r m t o l l   C R 2                     L I N E N                   L L _ U S A R T _ C o n f i g I r d a M o d e \ n  
     *                   C R 2                     C L K E N                   L L _ U S A R T _ C o n f i g I r d a M o d e \ n  
     *                   C R 2                     S T O P                     L L _ U S A R T _ C o n f i g I r d a M o d e \ n  
     *                   C R 3                     S C E N                     L L _ U S A R T _ C o n f i g I r d a M o d e \ n  
     *                   C R 3                     H D S E L                   L L _ U S A R T _ C o n f i g I r d a M o d e \ n  
     *                   C R 3                     I R E N                     L L _ U S A R T _ C o n f i g I r d a M o d e  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ C o n f i g I r d a M o d e ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     / *   I n   I R D A   m o d e ,   t h e   f o l l o w i n g   b i t s   m u s t   b e   k e p t   c l e a r e d :  
     -   L I N E N ,   S T O P   a n d   C L K E N   b i t s   i n   t h e   U S A R T _ C R 2   r e g i s t e r ,  
     -   S C E N   a n d   H D S E L   b i t s   i n   t h e   U S A R T _ C R 3   r e g i s t e r . * /  
     C L E A R _ B I T ( U S A R T x - > C R 2 ,   ( U S A R T _ C R 2 _ L I N E N   |   U S A R T _ C R 2 _ C L K E N   |   U S A R T _ C R 2 _ S T O P ) ) ;  
     C L E A R _ B I T ( U S A R T x - > C R 3 ,   ( U S A R T _ C R 3 _ S C E N   |   U S A R T _ C R 3 _ H D S E L ) ) ;  
     / *   s e t   t h e   U A R T / U S A R T   i n   I R D A   m o d e   * /  
     S E T _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ I R E N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     P e r f o r m   b a s i c   c o n f i g u r a t i o n   o f   U S A R T   f o r   e n a b l i n g   u s e   i n   M u l t i   p r o c e s s o r   M o d e  
     *                   ( s e v e r a l   U S A R T s   c o n n e c t e d   i n   a   n e t w o r k ,   o n e   o f   t h e   U S A R T s   c a n   b e   t h e   m a s t e r ,  
     *                   i t s   T X   o u t p u t   c o n n e c t e d   t o   t h e   R X   i n p u t s   o f   t h e   o t h e r   s l a v e s   U S A R T s ) .  
     *   @ n o t e       I n   M u l t i P r o c e s s o r   m o d e ,   t h e   f o l l o w i n g   b i t s   m u s t   b e   k e p t   c l e a r e d :  
     *                       -   L I N E N   b i t   i n   t h e   U S A R T _ C R 2   r e g i s t e r ,  
     *                       -   C L K E N   b i t   i n   t h e   U S A R T _ C R 2   r e g i s t e r ,  
     *                       -   S C E N   b i t   i n   t h e   U S A R T _ C R 3   r e g i s t e r ,  
     *                       -   I R E N   b i t   i n   t h e   U S A R T _ C R 3   r e g i s t e r ,  
     *                       -   H D S E L   b i t   i n   t h e   U S A R T _ C R 3   r e g i s t e r .  
     *   @ n o t e       C a l l   o f   t h i s   f u n c t i o n   i s   e q u i v a l e n t   t o   f o l l o w i n g   f u n c t i o n   c a l l   s e q u e n c e   :  
     *                   -   C l e a r   L I N E N   i n   C R 2   u s i n g   @ r e f   L L _ U S A R T _ D i s a b l e L I N ( )   f u n c t i o n  
     *                   -   C l e a r   C L K E N   i n   C R 2   u s i n g   @ r e f   L L _ U S A R T _ D i s a b l e S C L K O u t p u t ( )   f u n c t i o n  
     *                   -   C l e a r   S C E N   i n   C R 3   u s i n g   @ r e f   L L _ U S A R T _ D i s a b l e S m a r t c a r d ( )   f u n c t i o n  
     *                   -   C l e a r   I R E N   i n   C R 3   u s i n g   @ r e f   L L _ U S A R T _ D i s a b l e I r d a ( )   f u n c t i o n  
     *                   -   C l e a r   H D S E L   i n   C R 3   u s i n g   @ r e f   L L _ U S A R T _ D i s a b l e H a l f D u p l e x ( )   f u n c t i o n  
     *   @ n o t e       O t h e r   r e m a i n i n g   c o n f i g u r a t i o n s   i t e m s   r e l a t e d   t o   M u l t i   p r o c e s s o r   M o d e  
     *                   ( a s   B a u d   R a t e ,   W a k e   U p   M e t h o d ,   N o d e   a d d r e s s ,   . . . )   s h o u l d   b e   s e t   u s i n g  
     *                   d e d i c a t e d   f u n c t i o n s  
     *   @ r m t o l l   C R 2                     L I N E N                   L L _ U S A R T _ C o n f i g M u l t i P r o c e s s M o d e \ n  
     *                   C R 2                     C L K E N                   L L _ U S A R T _ C o n f i g M u l t i P r o c e s s M o d e \ n  
     *                   C R 3                     S C E N                     L L _ U S A R T _ C o n f i g M u l t i P r o c e s s M o d e \ n  
     *                   C R 3                     H D S E L                   L L _ U S A R T _ C o n f i g M u l t i P r o c e s s M o d e \ n  
     *                   C R 3                     I R E N                     L L _ U S A R T _ C o n f i g M u l t i P r o c e s s M o d e  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ C o n f i g M u l t i P r o c e s s M o d e ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     / *   I n   M u l t i   P r o c e s s o r   m o d e ,   t h e   f o l l o w i n g   b i t s   m u s t   b e   k e p t   c l e a r e d :  
     -   L I N E N   a n d   C L K E N   b i t s   i n   t h e   U S A R T _ C R 2   r e g i s t e r ,  
     -   I R E N ,   S C E N   a n d   H D S E L   b i t s   i n   t h e   U S A R T _ C R 3   r e g i s t e r . * /  
     C L E A R _ B I T ( U S A R T x - > C R 2 ,   ( U S A R T _ C R 2 _ L I N E N   |   U S A R T _ C R 2 _ C L K E N ) ) ;  
     C L E A R _ B I T ( U S A R T x - > C R 3 ,   ( U S A R T _ C R 3 _ S C E N   |   U S A R T _ C R 3 _ H D S E L   |   U S A R T _ C R 3 _ I R E N ) ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E F _ F L A G _ M a n a g e m e n t   F L A G _ M a n a g e m e n t  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   t h e   U S A R T   P a r i t y   E r r o r   F l a g   i s   s e t   o r   n o t  
     *   @ r m t o l l   S R                       P E                         L L _ U S A R T _ I s A c t i v e F l a g _ P E  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ I s A c t i v e F l a g _ P E ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( R E A D _ B I T ( U S A R T x - > S R ,   U S A R T _ S R _ P E )   = =   ( U S A R T _ S R _ P E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   t h e   U S A R T   F r a m i n g   E r r o r   F l a g   i s   s e t   o r   n o t  
     *   @ r m t o l l   S R                       F E                         L L _ U S A R T _ I s A c t i v e F l a g _ F E  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ I s A c t i v e F l a g _ F E ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( R E A D _ B I T ( U S A R T x - > S R ,   U S A R T _ S R _ F E )   = =   ( U S A R T _ S R _ F E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   t h e   U S A R T   N o i s e   e r r o r   d e t e c t e d   F l a g   i s   s e t   o r   n o t  
     *   @ r m t o l l   S R                       N F                         L L _ U S A R T _ I s A c t i v e F l a g _ N E  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ I s A c t i v e F l a g _ N E ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( R E A D _ B I T ( U S A R T x - > S R ,   U S A R T _ S R _ N E )   = =   ( U S A R T _ S R _ N E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   t h e   U S A R T   O v e r R u n   E r r o r   F l a g   i s   s e t   o r   n o t  
     *   @ r m t o l l   S R                       O R E                       L L _ U S A R T _ I s A c t i v e F l a g _ O R E  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ I s A c t i v e F l a g _ O R E ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( R E A D _ B I T ( U S A R T x - > S R ,   U S A R T _ S R _ O R E )   = =   ( U S A R T _ S R _ O R E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   t h e   U S A R T   I D L E   l i n e   d e t e c t e d   F l a g   i s   s e t   o r   n o t  
     *   @ r m t o l l   S R                       I D L E                     L L _ U S A R T _ I s A c t i v e F l a g _ I D L E  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ I s A c t i v e F l a g _ I D L E ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( R E A D _ B I T ( U S A R T x - > S R ,   U S A R T _ S R _ I D L E )   = =   ( U S A R T _ S R _ I D L E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   t h e   U S A R T   R e a d   D a t a   R e g i s t e r   N o t   E m p t y   F l a g   i s   s e t   o r   n o t  
     *   @ r m t o l l   S R                       R X N E                     L L _ U S A R T _ I s A c t i v e F l a g _ R X N E  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ I s A c t i v e F l a g _ R X N E ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( R E A D _ B I T ( U S A R T x - > S R ,   U S A R T _ S R _ R X N E )   = =   ( U S A R T _ S R _ R X N E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   t h e   U S A R T   T r a n s m i s s i o n   C o m p l e t e   F l a g   i s   s e t   o r   n o t  
     *   @ r m t o l l   S R                       T C                         L L _ U S A R T _ I s A c t i v e F l a g _ T C  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ I s A c t i v e F l a g _ T C ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( R E A D _ B I T ( U S A R T x - > S R ,   U S A R T _ S R _ T C )   = =   ( U S A R T _ S R _ T C ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   t h e   U S A R T   T r a n s m i t   D a t a   R e g i s t e r   E m p t y   F l a g   i s   s e t   o r   n o t  
     *   @ r m t o l l   S R                       T X E                       L L _ U S A R T _ I s A c t i v e F l a g _ T X E  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ I s A c t i v e F l a g _ T X E ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( R E A D _ B I T ( U S A R T x - > S R ,   U S A R T _ S R _ T X E )   = =   ( U S A R T _ S R _ T X E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   t h e   U S A R T   L I N   B r e a k   D e t e c t i o n   F l a g   i s   s e t   o r   n o t  
     *   @ n o t e       M a c r o   @ r e f   I S _ U A R T _ L I N _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   L I N   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   S R                       L B D                       L L _ U S A R T _ I s A c t i v e F l a g _ L B D  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ I s A c t i v e F l a g _ L B D ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( R E A D _ B I T ( U S A R T x - > S R ,   U S A R T _ S R _ L B D )   = =   ( U S A R T _ S R _ L B D ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   t h e   U S A R T   C T S   F l a g   i s   s e t   o r   n o t  
     *   @ n o t e       M a c r o   @ r e f   I S _ U A R T _ H W F L O W _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   H a r d w a r e   F l o w   c o n t r o l   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   S R                       C T S                       L L _ U S A R T _ I s A c t i v e F l a g _ n C T S  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ I s A c t i v e F l a g _ n C T S ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( R E A D _ B I T ( U S A R T x - > S R ,   U S A R T _ S R _ C T S )   = =   ( U S A R T _ S R _ C T S ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   t h e   U S A R T   S e n d   B r e a k   F l a g   i s   s e t   o r   n o t  
     *   @ r m t o l l   C R 1                     S B K                       L L _ U S A R T _ I s A c t i v e F l a g _ S B K  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ I s A c t i v e F l a g _ S B K ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( R E A D _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ S B K )   = =   ( U S A R T _ C R 1 _ S B K ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   t h e   U S A R T   R e c e i v e   W a k e   U p   f r o m   m u t e   m o d e   F l a g   i s   s e t   o r   n o t  
     *   @ r m t o l l   C R 1                     R W U                       L L _ U S A R T _ I s A c t i v e F l a g _ R W U  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ I s A c t i v e F l a g _ R W U ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( R E A D _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ R W U )   = =   ( U S A R T _ C R 1 _ R W U ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   P a r i t y   E r r o r   F l a g  
     *   @ n o t e       C l e a r i n g   t h i s   f l a g   i s   d o n e   b y   a   r e a d   a c c e s s   t o   t h e   U S A R T x _ S R  
     *                   r e g i s t e r   f o l l o w e d   b y   a   r e a d   a c c e s s   t o   t h e   U S A R T x _ D R   r e g i s t e r .  
     *   @ n o t e       P l e a s e   a l s o   c o n s i d e r   t h a t   w h e n   c l e a r i n g   t h i s   f l a g ,   o t h e r   f l a g s   a s  
     *                   N E ,   F E ,   O R E ,   I D L E   w o u l d   a l s o   b e   c l e a r e d .  
     *   @ r m t o l l   S R                       P E                         L L _ U S A R T _ C l e a r F l a g _ P E  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ C l e a r F l a g _ P E ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     _ _ I O   u i n t 3 2 _ t   t m p r e g ;  
     t m p r e g   =   U S A R T x - > S R ;  
     ( v o i d )   t m p r e g ;  
     t m p r e g   =   U S A R T x - > D R ;  
     ( v o i d )   t m p r e g ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   F r a m i n g   E r r o r   F l a g  
     *   @ n o t e       C l e a r i n g   t h i s   f l a g   i s   d o n e   b y   a   r e a d   a c c e s s   t o   t h e   U S A R T x _ S R  
     *                   r e g i s t e r   f o l l o w e d   b y   a   r e a d   a c c e s s   t o   t h e   U S A R T x _ D R   r e g i s t e r .  
     *   @ n o t e       P l e a s e   a l s o   c o n s i d e r   t h a t   w h e n   c l e a r i n g   t h i s   f l a g ,   o t h e r   f l a g s   a s  
     *                   P E ,   N E ,   O R E ,   I D L E   w o u l d   a l s o   b e   c l e a r e d .  
     *   @ r m t o l l   S R                       F E                         L L _ U S A R T _ C l e a r F l a g _ F E  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ C l e a r F l a g _ F E ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     _ _ I O   u i n t 3 2 _ t   t m p r e g ;  
     t m p r e g   =   U S A R T x - > S R ;  
     ( v o i d )   t m p r e g ;  
     t m p r e g   =   U S A R T x - > D R ;  
     ( v o i d )   t m p r e g ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   N o i s e   d e t e c t e d   F l a g  
     *   @ n o t e       C l e a r i n g   t h i s   f l a g   i s   d o n e   b y   a   r e a d   a c c e s s   t o   t h e   U S A R T x _ S R  
     *                   r e g i s t e r   f o l l o w e d   b y   a   r e a d   a c c e s s   t o   t h e   U S A R T x _ D R   r e g i s t e r .  
     *   @ n o t e       P l e a s e   a l s o   c o n s i d e r   t h a t   w h e n   c l e a r i n g   t h i s   f l a g ,   o t h e r   f l a g s   a s  
     *                   P E ,   F E ,   O R E ,   I D L E   w o u l d   a l s o   b e   c l e a r e d .  
     *   @ r m t o l l   S R                       N F                         L L _ U S A R T _ C l e a r F l a g _ N E  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ C l e a r F l a g _ N E ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     _ _ I O   u i n t 3 2 _ t   t m p r e g ;  
     t m p r e g   =   U S A R T x - > S R ;  
     ( v o i d )   t m p r e g ;  
     t m p r e g   =   U S A R T x - > D R ;  
     ( v o i d )   t m p r e g ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   O v e r R u n   E r r o r   F l a g  
     *   @ n o t e       C l e a r i n g   t h i s   f l a g   i s   d o n e   b y   a   r e a d   a c c e s s   t o   t h e   U S A R T x _ S R  
     *                   r e g i s t e r   f o l l o w e d   b y   a   r e a d   a c c e s s   t o   t h e   U S A R T x _ D R   r e g i s t e r .  
     *   @ n o t e       P l e a s e   a l s o   c o n s i d e r   t h a t   w h e n   c l e a r i n g   t h i s   f l a g ,   o t h e r   f l a g s   a s  
     *                   P E ,   N E ,   F E ,   I D L E   w o u l d   a l s o   b e   c l e a r e d .  
     *   @ r m t o l l   S R                       O R E                       L L _ U S A R T _ C l e a r F l a g _ O R E  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ C l e a r F l a g _ O R E ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     _ _ I O   u i n t 3 2 _ t   t m p r e g ;  
     t m p r e g   =   U S A R T x - > S R ;  
     ( v o i d )   t m p r e g ;  
     t m p r e g   =   U S A R T x - > D R ;  
     ( v o i d )   t m p r e g ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   I D L E   l i n e   d e t e c t e d   F l a g  
     *   @ n o t e       C l e a r i n g   t h i s   f l a g   i s   d o n e   b y   a   r e a d   a c c e s s   t o   t h e   U S A R T x _ S R  
     *                   r e g i s t e r   f o l l o w e d   b y   a   r e a d   a c c e s s   t o   t h e   U S A R T x _ D R   r e g i s t e r .  
     *   @ n o t e       P l e a s e   a l s o   c o n s i d e r   t h a t   w h e n   c l e a r i n g   t h i s   f l a g ,   o t h e r   f l a g s   a s  
     *                   P E ,   N E ,   F E ,   O R E   w o u l d   a l s o   b e   c l e a r e d .  
     *   @ r m t o l l   S R                       I D L E                     L L _ U S A R T _ C l e a r F l a g _ I D L E  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ C l e a r F l a g _ I D L E ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     _ _ I O   u i n t 3 2 _ t   t m p r e g ;  
     t m p r e g   =   U S A R T x - > S R ;  
     ( v o i d )   t m p r e g ;  
     t m p r e g   =   U S A R T x - > D R ;  
     ( v o i d )   t m p r e g ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   T r a n s m i s s i o n   C o m p l e t e   F l a g  
     *   @ r m t o l l   S R                       T C                         L L _ U S A R T _ C l e a r F l a g _ T C  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ C l e a r F l a g _ T C ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     W R I T E _ R E G ( U S A R T x - > S R ,   ~ ( U S A R T _ S R _ T C ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   R X   N o t   E m p t y   F l a g  
     *   @ r m t o l l   S R                       R X N E                     L L _ U S A R T _ C l e a r F l a g _ R X N E  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ C l e a r F l a g _ R X N E ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     W R I T E _ R E G ( U S A R T x - > S R ,   ~ ( U S A R T _ S R _ R X N E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   L I N   B r e a k   D e t e c t i o n   F l a g  
     *   @ n o t e       M a c r o   @ r e f   I S _ U A R T _ L I N _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   L I N   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   S R                       L B D                       L L _ U S A R T _ C l e a r F l a g _ L B D  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ C l e a r F l a g _ L B D ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     W R I T E _ R E G ( U S A R T x - > S R ,   ~ ( U S A R T _ S R _ L B D ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   C T S   I n t e r r u p t   F l a g  
     *   @ n o t e       M a c r o   @ r e f   I S _ U A R T _ H W F L O W _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   H a r d w a r e   F l o w   c o n t r o l   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   S R                       C T S                       L L _ U S A R T _ C l e a r F l a g _ n C T S  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ C l e a r F l a g _ n C T S ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     W R I T E _ R E G ( U S A R T x - > S R ,   ~ ( U S A R T _ S R _ C T S ) ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E F _ I T _ M a n a g e m e n t   I T _ M a n a g e m e n t  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   I D L E   I n t e r r u p t  
     *   @ r m t o l l   C R 1                     I D L E I E                 L L _ U S A R T _ E n a b l e I T _ I D L E  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ E n a b l e I T _ I D L E ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     S E T _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ I D L E I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   R X   N o t   E m p t y   I n t e r r u p t  
     *   @ r m t o l l   C R 1                     R X N E I E                 L L _ U S A R T _ E n a b l e I T _ R X N E  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ E n a b l e I T _ R X N E ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     S E T _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ R X N E I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   T r a n s m i s s i o n   C o m p l e t e   I n t e r r u p t  
     *   @ r m t o l l   C R 1                     T C I E                     L L _ U S A R T _ E n a b l e I T _ T C  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ E n a b l e I T _ T C ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     S E T _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ T C I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   T X   E m p t y   I n t e r r u p t  
     *   @ r m t o l l   C R 1                     T X E I E                   L L _ U S A R T _ E n a b l e I T _ T X E  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ E n a b l e I T _ T X E ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     S E T _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ T X E I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   P a r i t y   E r r o r   I n t e r r u p t  
     *   @ r m t o l l   C R 1                     P E I E                     L L _ U S A R T _ E n a b l e I T _ P E  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ E n a b l e I T _ P E ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     S E T _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ P E I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   L I N   B r e a k   D e t e c t i o n   I n t e r r u p t  
     *   @ n o t e       M a c r o   @ r e f   I S _ U A R T _ L I N _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   L I N   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 2                     L B D I E                   L L _ U S A R T _ E n a b l e I T _ L B D  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ E n a b l e I T _ L B D ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     S E T _ B I T ( U S A R T x - > C R 2 ,   U S A R T _ C R 2 _ L B D I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   E r r o r   I n t e r r u p t  
     *   @ n o t e       W h e n   s e t ,   E r r o r   I n t e r r u p t   E n a b l e   B i t   i s   e n a b l i n g   i n t e r r u p t   g e n e r a t i o n   i n   c a s e   o f   a   f r a m i n g  
     *                   e r r o r ,   o v e r r u n   e r r o r   o r   n o i s e   f l a g   ( F E = 1   o r   O R E = 1   o r   N F = 1   i n   t h e   U S A R T x _ S R   r e g i s t e r ) .  
     *                       0 :   I n t e r r u p t   i s   i n h i b i t e d  
     *                       1 :   A n   i n t e r r u p t   i s   g e n e r a t e d   w h e n   F E = 1   o r   O R E = 1   o r   N F = 1   i n   t h e   U S A R T x _ S R   r e g i s t e r .  
     *   @ r m t o l l   C R 3                     E I E                       L L _ U S A R T _ E n a b l e I T _ E R R O R  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ E n a b l e I T _ E R R O R ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     S E T _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   C T S   I n t e r r u p t  
     *   @ n o t e       M a c r o   @ r e f   I S _ U A R T _ H W F L O W _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   H a r d w a r e   F l o w   c o n t r o l   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 3                     C T S I E                   L L _ U S A R T _ E n a b l e I T _ C T S  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ E n a b l e I T _ C T S ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     S E T _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ C T S I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   I D L E   I n t e r r u p t  
     *   @ r m t o l l   C R 1                     I D L E I E                 L L _ U S A R T _ D i s a b l e I T _ I D L E  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ D i s a b l e I T _ I D L E ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     C L E A R _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ I D L E I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   R X   N o t   E m p t y   I n t e r r u p t  
     *   @ r m t o l l   C R 1                     R X N E I E                 L L _ U S A R T _ D i s a b l e I T _ R X N E  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ D i s a b l e I T _ R X N E ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     C L E A R _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ R X N E I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   T r a n s m i s s i o n   C o m p l e t e   I n t e r r u p t  
     *   @ r m t o l l   C R 1                     T C I E                     L L _ U S A R T _ D i s a b l e I T _ T C  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ D i s a b l e I T _ T C ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     C L E A R _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ T C I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   T X   E m p t y   I n t e r r u p t  
     *   @ r m t o l l   C R 1                     T X E I E                   L L _ U S A R T _ D i s a b l e I T _ T X E  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ D i s a b l e I T _ T X E ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     C L E A R _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ T X E I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   P a r i t y   E r r o r   I n t e r r u p t  
     *   @ r m t o l l   C R 1                     P E I E                     L L _ U S A R T _ D i s a b l e I T _ P E  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ D i s a b l e I T _ P E ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     C L E A R _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ P E I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   L I N   B r e a k   D e t e c t i o n   I n t e r r u p t  
     *   @ n o t e       M a c r o   @ r e f   I S _ U A R T _ L I N _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   L I N   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 2                     L B D I E                   L L _ U S A R T _ D i s a b l e I T _ L B D  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ D i s a b l e I T _ L B D ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     C L E A R _ B I T ( U S A R T x - > C R 2 ,   U S A R T _ C R 2 _ L B D I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   E r r o r   I n t e r r u p t  
     *   @ n o t e       W h e n   s e t ,   E r r o r   I n t e r r u p t   E n a b l e   B i t   i s   e n a b l i n g   i n t e r r u p t   g e n e r a t i o n   i n   c a s e   o f   a   f r a m i n g  
     *                   e r r o r ,   o v e r r u n   e r r o r   o r   n o i s e   f l a g   ( F E = 1   o r   O R E = 1   o r   N F = 1   i n   t h e   U S A R T x _ S R   r e g i s t e r ) .  
     *                       0 :   I n t e r r u p t   i s   i n h i b i t e d  
     *                       1 :   A n   i n t e r r u p t   i s   g e n e r a t e d   w h e n   F E = 1   o r   O R E = 1   o r   N F = 1   i n   t h e   U S A R T x _ S R   r e g i s t e r .  
     *   @ r m t o l l   C R 3                     E I E                       L L _ U S A R T _ D i s a b l e I T _ E R R O R  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ D i s a b l e I T _ E R R O R ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     C L E A R _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   C T S   I n t e r r u p t  
     *   @ n o t e       M a c r o   @ r e f   I S _ U A R T _ H W F L O W _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   H a r d w a r e   F l o w   c o n t r o l   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 3                     C T S I E                   L L _ U S A R T _ D i s a b l e I T _ C T S  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ D i s a b l e I T _ C T S ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     C L E A R _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ C T S I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   t h e   U S A R T   I D L E   I n t e r r u p t     s o u r c e   i s   e n a b l e d   o r   d i s a b l e d .  
     *   @ r m t o l l   C R 1                     I D L E I E                 L L _ U S A R T _ I s E n a b l e d I T _ I D L E  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ I s E n a b l e d I T _ I D L E ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( R E A D _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ I D L E I E )   = =   ( U S A R T _ C R 1 _ I D L E I E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   t h e   U S A R T   R X   N o t   E m p t y   I n t e r r u p t   i s   e n a b l e d   o r   d i s a b l e d .  
     *   @ r m t o l l   C R 1                     R X N E I E                 L L _ U S A R T _ I s E n a b l e d I T _ R X N E  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ I s E n a b l e d I T _ R X N E ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( R E A D _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ R X N E I E )   = =   ( U S A R T _ C R 1 _ R X N E I E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   t h e   U S A R T   T r a n s m i s s i o n   C o m p l e t e   I n t e r r u p t   i s   e n a b l e d   o r   d i s a b l e d .  
     *   @ r m t o l l   C R 1                     T C I E                     L L _ U S A R T _ I s E n a b l e d I T _ T C  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ I s E n a b l e d I T _ T C ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( R E A D _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ T C I E )   = =   ( U S A R T _ C R 1 _ T C I E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   t h e   U S A R T   T X   E m p t y   I n t e r r u p t   i s   e n a b l e d   o r   d i s a b l e d .  
     *   @ r m t o l l   C R 1                     T X E I E                   L L _ U S A R T _ I s E n a b l e d I T _ T X E  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ I s E n a b l e d I T _ T X E ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( R E A D _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ T X E I E )   = =   ( U S A R T _ C R 1 _ T X E I E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   t h e   U S A R T   P a r i t y   E r r o r   I n t e r r u p t   i s   e n a b l e d   o r   d i s a b l e d .  
     *   @ r m t o l l   C R 1                     P E I E                     L L _ U S A R T _ I s E n a b l e d I T _ P E  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ I s E n a b l e d I T _ P E ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( R E A D _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ P E I E )   = =   ( U S A R T _ C R 1 _ P E I E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   t h e   U S A R T   L I N   B r e a k   D e t e c t i o n   I n t e r r u p t   i s   e n a b l e d   o r   d i s a b l e d .  
     *   @ n o t e       M a c r o   @ r e f   I S _ U A R T _ L I N _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   L I N   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 2                     L B D I E                   L L _ U S A R T _ I s E n a b l e d I T _ L B D  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ I s E n a b l e d I T _ L B D ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( R E A D _ B I T ( U S A R T x - > C R 2 ,   U S A R T _ C R 2 _ L B D I E )   = =   ( U S A R T _ C R 2 _ L B D I E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   t h e   U S A R T   E r r o r   I n t e r r u p t   i s   e n a b l e d   o r   d i s a b l e d .  
     *   @ r m t o l l   C R 3                     E I E                       L L _ U S A R T _ I s E n a b l e d I T _ E R R O R  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ I s E n a b l e d I T _ E R R O R ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( R E A D _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ E I E )   = =   ( U S A R T _ C R 3 _ E I E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   t h e   U S A R T   C T S   I n t e r r u p t   i s   e n a b l e d   o r   d i s a b l e d .  
     *   @ n o t e       M a c r o   @ r e f   I S _ U A R T _ H W F L O W _ I N S T A N C E ( U S A R T x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *                   H a r d w a r e   F l o w   c o n t r o l   f e a t u r e   i s   s u p p o r t e d   b y   t h e   U S A R T x   i n s t a n c e .  
     *   @ r m t o l l   C R 3                     C T S I E                   L L _ U S A R T _ I s E n a b l e d I T _ C T S  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ I s E n a b l e d I T _ C T S ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( R E A D _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ C T S I E )   = =   ( U S A R T _ C R 3 _ C T S I E ) ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E F _ D M A _ M a n a g e m e n t   D M A _ M a n a g e m e n t  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   D M A   M o d e   f o r   r e c e p t i o n  
     *   @ r m t o l l   C R 3                     D M A R                     L L _ U S A R T _ E n a b l e D M A R e q _ R X  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ E n a b l e D M A R e q _ R X ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     S E T _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   D M A   M o d e   f o r   r e c e p t i o n  
     *   @ r m t o l l   C R 3                     D M A R                     L L _ U S A R T _ D i s a b l e D M A R e q _ R X  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ D i s a b l e D M A R e q _ R X ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     C L E A R _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   D M A   M o d e   i s   e n a b l e d   f o r   r e c e p t i o n  
     *   @ r m t o l l   C R 3                     D M A R                     L L _ U S A R T _ I s E n a b l e d D M A R e q _ R X  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ I s E n a b l e d D M A R e q _ R X ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( R E A D _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ D M A R )   = =   ( U S A R T _ C R 3 _ D M A R ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   D M A   M o d e   f o r   t r a n s m i s s i o n  
     *   @ r m t o l l   C R 3                     D M A T                     L L _ U S A R T _ E n a b l e D M A R e q _ T X  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ E n a b l e D M A R e q _ T X ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     S E T _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   D M A   M o d e   f o r   t r a n s m i s s i o n  
     *   @ r m t o l l   C R 3                     D M A T                     L L _ U S A R T _ D i s a b l e D M A R e q _ T X  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ D i s a b l e D M A R e q _ T X ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     C L E A R _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   D M A   M o d e   i s   e n a b l e d   f o r   t r a n s m i s s i o n  
     *   @ r m t o l l   C R 3                     D M A T                     L L _ U S A R T _ I s E n a b l e d D M A R e q _ T X  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ I s E n a b l e d D M A R e q _ T X ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( R E A D _ B I T ( U S A R T x - > C R 3 ,   U S A R T _ C R 3 _ D M A T )   = =   ( U S A R T _ C R 3 _ D M A T ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   t h e   d a t a   r e g i s t e r   a d d r e s s   u s e d   f o r   D M A   t r a n s f e r  
     *   @ r m t o l l   D R                       D R                         L L _ U S A R T _ D M A _ G e t R e g A d d r  
     *   @ n o t e       A d d r e s s   o f   D a t a   R e g i s t e r   i s   v a l i d   f o r   b o t h   T r a n s m i t   a n d   R e c e i v e   t r a n s f e r s .  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   A d d r e s s   o f   d a t a   r e g i s t e r  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ U S A R T _ D M A _ G e t R e g A d d r ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     / *   r e t u r n   a d d r e s s   o f   D R   r e g i s t e r   * /  
     r e t u r n   ( ( u i n t 3 2 _ t )   &   ( U S A R T x - > D R ) ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E F _ D a t a _ M a n a g e m e n t   D a t a _ M a n a g e m e n t  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     R e a d   R e c e i v e r   D a t a   r e g i s t e r   ( R e c e i v e   D a t a   v a l u e ,   8   b i t s )  
     *   @ r m t o l l   D R                       D R                         L L _ U S A R T _ R e c e i v e D a t a 8  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 0   a n d   M a x _ D a t a = 0 x F F  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 8 _ t   L L _ U S A R T _ R e c e i v e D a t a 8 ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( u i n t 8 _ t ) ( R E A D _ B I T ( U S A R T x - > D R ,   U S A R T _ D R _ D R ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e a d   R e c e i v e r   D a t a   r e g i s t e r   ( R e c e i v e   D a t a   v a l u e ,   9   b i t s )  
     *   @ r m t o l l   D R                       D R                         L L _ U S A R T _ R e c e i v e D a t a 9  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 0   a n d   M a x _ D a t a = 0 x 1 F F  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 1 6 _ t   L L _ U S A R T _ R e c e i v e D a t a 9 ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     r e t u r n   ( u i n t 1 6 _ t ) ( R E A D _ B I T ( U S A R T x - > D R ,   U S A R T _ D R _ D R ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     W r i t e   i n   T r a n s m i t t e r   D a t a   R e g i s t e r   ( T r a n s m i t   D a t a   v a l u e ,   8   b i t s )  
     *   @ r m t o l l   D R                       D R                         L L _ U S A R T _ T r a n s m i t D a t a 8  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ p a r a m     V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 0   a n d   M a x _ D a t a = 0 x F F  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ T r a n s m i t D a t a 8 ( U S A R T _ T y p e D e f   * U S A R T x ,   u i n t 8 _ t   V a l u e )  
 {  
     U S A R T x - > D R   =   V a l u e ;  
 }  
  
 / * *  
     *   @ b r i e f     W r i t e   i n   T r a n s m i t t e r   D a t a   R e g i s t e r   ( T r a n s m i t   D a t a   v a l u e ,   9   b i t s )  
     *   @ r m t o l l   D R                       D R                         L L _ U S A R T _ T r a n s m i t D a t a 9  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ p a r a m     V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 0   a n d   M a x _ D a t a = 0 x 1 F F  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ T r a n s m i t D a t a 9 ( U S A R T _ T y p e D e f   * U S A R T x ,   u i n t 1 6 _ t   V a l u e )  
 {  
     U S A R T x - > D R   =   V a l u e   &   0 x 1 F F U ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E F _ E x e c u t i o n   E x e c u t i o n  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     R e q u e s t   B r e a k   s e n d i n g  
     *   @ r m t o l l   C R 1                     S B K                       L L _ U S A R T _ R e q u e s t B r e a k S e n d i n g  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ R e q u e s t B r e a k S e n d i n g ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     S E T _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ S B K ) ;  
 }  
  
 / * *  
     *   @ b r i e f     P u t   U S A R T   i n   M u t e   m o d e  
     *   @ r m t o l l   C R 1                     R W U                       L L _ U S A R T _ R e q u e s t E n t e r M u t e M o d e  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ R e q u e s t E n t e r M u t e M o d e ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     S E T _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ R W U ) ;  
 }  
  
 / * *  
     *   @ b r i e f     P u t   U S A R T   i n   A c t i v e   m o d e  
     *   @ r m t o l l   C R 1                     R W U                       L L _ U S A R T _ R e q u e s t E x i t M u t e M o d e  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ U S A R T _ R e q u e s t E x i t M u t e M o d e ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     C L E A R _ B I T ( U S A R T x - > C R 1 ,   U S A R T _ C R 1 _ R W U ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 # i f   d e f i n e d ( U S E _ F U L L _ L L _ D R I V E R )  
 / * *   @ d e f g r o u p   U S A R T _ L L _ E F _ I n i t   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *   @ {  
     * /  
 E r r o r S t a t u s   L L _ U S A R T _ D e I n i t ( U S A R T _ T y p e D e f   * U S A R T x ) ;  
 E r r o r S t a t u s   L L _ U S A R T _ I n i t ( U S A R T _ T y p e D e f   * U S A R T x ,   L L _ U S A R T _ I n i t T y p e D e f   * U S A R T _ I n i t S t r u c t ) ;  
 v o i d                 L L _ U S A R T _ S t r u c t I n i t ( L L _ U S A R T _ I n i t T y p e D e f   * U S A R T _ I n i t S t r u c t ) ;  
 E r r o r S t a t u s   L L _ U S A R T _ C l o c k I n i t ( U S A R T _ T y p e D e f   * U S A R T x ,   L L _ U S A R T _ C l o c k I n i t T y p e D e f   * U S A R T _ C l o c k I n i t S t r u c t ) ;  
 v o i d                 L L _ U S A R T _ C l o c k S t r u c t I n i t ( L L _ U S A R T _ C l o c k I n i t T y p e D e f   * U S A R T _ C l o c k I n i t S t r u c t ) ;  
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
 # e n d i f   / *   U S A R T 1   | |   U S A R T 2   | |   U S A R T 3   | |   U A R T 4   | |   U A R T 5   * /  
  
 / * *  
     *   @ }  
     * /  
  
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
 # e n d i f   / *   _ _ S T M 3 2 F 1 x x _ L L _ U S A R T _ H   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  