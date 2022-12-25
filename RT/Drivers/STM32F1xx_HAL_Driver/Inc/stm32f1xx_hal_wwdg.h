�?/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ w w d g . h  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H e a d e r   f i l e   o f   W W D G   H A L   m o d u l e .  
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
 # i f n d e f   S T M 3 2 F 1 x x _ H A L _ W W D G _ H  
 # d e f i n e   S T M 3 2 F 1 x x _ H A L _ W W D G _ H  
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
 / * *   @ a d d t o g r o u p   W W D G  
     *   @ {  
     * /  
  
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   W W D G _ E x p o r t e d _ T y p e s   W W D G   E x p o r t e d   T y p e s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     W W D G   I n i t   s t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   P r e s c a l e r ;           / * ! <   S p e c i f i e s   t h e   p r e s c a l e r   v a l u e   o f   t h e   W W D G .  
                                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   W W D G _ P r e s c a l e r   * /  
  
     u i n t 3 2 _ t   W i n d o w ;                 / * ! <   S p e c i f i e s   t h e   W W D G   w i n d o w   v a l u e   t o   b e   c o m p a r e d   t o   t h e   d o w n c o u n t e r .  
                                                               T h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   M i n _ D a t a   =   0 x 4 0   a n d   M a x _ D a t a   =   0 x 7 F   * /  
  
     u i n t 3 2 _ t   C o u n t e r ;               / * ! <   S p e c i f i e s   t h e   W W D G   f r e e - r u n n i n g   d o w n c o u n t e r     v a l u e .  
                                                               T h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 4 0   a n d   M a x _ D a t a   =   0 x 7 F   * /  
  
     u i n t 3 2 _ t   E W I M o d e   ;             / * ! <   S p e c i f i e s   i f   W W D G   E a r l y   W a k e u p   I n t e r r u p t   i s   e n a b l e   o r   n o t .  
                                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   W W D G _ E W I _ M o d e   * /  
  
 }   W W D G _ I n i t T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     W W D G   h a n d l e   S t r u c t u r e   d e f i n i t i o n  
     * /  
 # i f   ( U S E _ H A L _ W W D G _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 t y p e d e f   s t r u c t   _ _ W W D G _ H a n d l e T y p e D e f  
 # e l s e  
 t y p e d e f   s t r u c t  
 # e n d i f   / *   U S E _ H A L _ W W D G _ R E G I S T E R _ C A L L B A C K S   * /  
 {  
     W W D G _ T y p e D e f             * I n s t a n c e ;     / * ! <   R e g i s t e r   b a s e   a d d r e s s   * /  
  
     W W D G _ I n i t T y p e D e f     I n i t ;               / * ! <   W W D G   r e q u i r e d   p a r a m e t e r s   * /  
  
 # i f   ( U S E _ H A L _ W W D G _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     v o i d   ( *   E w i C a l l b a c k ) ( s t r u c t   _ _ W W D G _ H a n d l e T y p e D e f   * h w w d g ) ;                                     / * ! <   W W D G   E a r l y   W a k e U p   I n t e r r u p t   c a l l b a c k   * /  
  
     v o i d   ( *   M s p I n i t C a l l b a c k ) ( s t r u c t   _ _ W W D G _ H a n d l e T y p e D e f   * h w w d g ) ;                             / * ! <   W W D G   M s p   I n i t   c a l l b a c k   * /  
 # e n d i f   / *   U S E _ H A L _ W W D G _ R E G I S T E R _ C A L L B A C K S   * /  
 }   W W D G _ H a n d l e T y p e D e f ;  
  
 # i f   ( U S E _ H A L _ W W D G _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / * *  
     *   @ b r i e f     H A L   W W D G   c o m m o n   C a l l b a c k   I D   e n u m e r a t i o n   d e f i n i t i o n  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ W W D G _ E W I _ C B _ I D                     =   0 x 0 0 U ,         / * ! <   W W D G   E W I   c a l l b a c k   I D   * /  
     H A L _ W W D G _ M S P I N I T _ C B _ I D             =   0 x 0 1 U ,         / * ! <   W W D G   M s p I n i t   c a l l b a c k   I D   * /  
 }   H A L _ W W D G _ C a l l b a c k I D T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     H A L   W W D G   C a l l b a c k   p o i n t e r   d e f i n i t i o n  
     * /  
 t y p e d e f   v o i d   ( * p W W D G _ C a l l b a c k T y p e D e f ) ( W W D G _ H a n d l e T y p e D e f   * h p p p ) ;     / * ! <   p o i n t e r   t o   a   W W D G   c o m m o n   c a l l b a c k   f u n c t i o n s   * /  
  
 # e n d i f   / *   U S E _ H A L _ W W D G _ R E G I S T E R _ C A L L B A C K S   * /  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   W W D G _ E x p o r t e d _ C o n s t a n t s   W W D G   E x p o r t e d   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   W W D G _ I n t e r r u p t _ d e f i n i t i o n   W W D G   I n t e r r u p t   d e f i n i t i o n  
     *   @ {  
     * /  
 # d e f i n e   W W D G _ I T _ E W I                                                   W W D G _ C F R _ E W I     / * ! <   E a r l y   w a k e u p   i n t e r r u p t   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   W W D G _ F l a g _ d e f i n i t i o n   W W D G   F l a g   d e f i n i t i o n  
     *   @ b r i e f   W W D G   F l a g   d e f i n i t i o n  
     *   @ {  
     * /  
 # d e f i n e   W W D G _ F L A G _ E W I F                                             W W D G _ S R _ E W I F     / * ! <   E a r l y   w a k e u p   i n t e r r u p t   f l a g   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   W W D G _ P r e s c a l e r   W W D G   P r e s c a l e r  
     *   @ {  
     * /  
 # d e f i n e   W W D G _ P R E S C A L E R _ 1                                         0 x 0 0 0 0 0 0 0 0 u                                                             / * ! <   W W D G   c o u n t e r   c l o c k   =   ( P C L K 1 / 4 0 9 6 ) / 1   * /  
 # d e f i n e   W W D G _ P R E S C A L E R _ 2                                         W W D G _ C F R _ W D G T B _ 0                                                   / * ! <   W W D G   c o u n t e r   c l o c k   =   ( P C L K 1 / 4 0 9 6 ) / 2   * /  
 # d e f i n e   W W D G _ P R E S C A L E R _ 4                                         W W D G _ C F R _ W D G T B _ 1                                                   / * ! <   W W D G   c o u n t e r   c l o c k   =   ( P C L K 1 / 4 0 9 6 ) / 4   * /  
 # d e f i n e   W W D G _ P R E S C A L E R _ 8                                         ( W W D G _ C F R _ W D G T B _ 1   |   W W D G _ C F R _ W D G T B _ 0 )         / * ! <   W W D G   c o u n t e r   c l o c k   =   ( P C L K 1 / 4 0 9 6 ) / 8   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   W W D G _ E W I _ M o d e   W W D G   E a r l y   W a k e u p   I n t e r r u p t   M o d e  
     *   @ {  
     * /  
 # d e f i n e   W W D G _ E W I _ D I S A B L E                                         0 x 0 0 0 0 0 0 0 0 u               / * ! <   E W I   D i s a b l e   * /  
 # d e f i n e   W W D G _ E W I _ E N A B L E                                           W W D G _ C F R _ E W I             / * ! <   E W I   E n a b l e   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   W W D G _ P r i v a t e _ M a c r o s   W W D G   P r i v a t e   M a c r o s  
     *   @ {  
     * /  
 # d e f i n e   I S _ W W D G _ P R E S C A L E R ( _ _ P R E S C A L E R _ _ )         ( ( ( _ _ P R E S C A L E R _ _ )   = =   W W D G _ P R E S C A L E R _ 1 )     | |   \  
                                                                                           ( ( _ _ P R E S C A L E R _ _ )   = =   W W D G _ P R E S C A L E R _ 2 )     | |   \  
                                                                                           ( ( _ _ P R E S C A L E R _ _ )   = =   W W D G _ P R E S C A L E R _ 4 )     | |   \  
                                                                                           ( ( _ _ P R E S C A L E R _ _ )   = =   W W D G _ P R E S C A L E R _ 8 ) )  
  
 # d e f i n e   I S _ W W D G _ W I N D O W ( _ _ W I N D O W _ _ )                     ( ( ( _ _ W I N D O W _ _ )   > =   W W D G _ C F R _ W _ 6 )   & &   ( ( _ _ W I N D O W _ _ )   < =   W W D G _ C F R _ W ) )  
  
 # d e f i n e   I S _ W W D G _ C O U N T E R ( _ _ C O U N T E R _ _ )                 ( ( ( _ _ C O U N T E R _ _ )   > =   W W D G _ C R _ T _ 6 )   & &   ( ( _ _ C O U N T E R _ _ )   < =   W W D G _ C R _ T ) )  
  
 # d e f i n e   I S _ W W D G _ E W I _ M O D E ( _ _ M O D E _ _ )                     ( ( ( _ _ M O D E _ _ )   = =   W W D G _ E W I _ E N A B L E )   | |   \  
                                                                                           ( ( _ _ M O D E _ _ )   = =   W W D G _ E W I _ D I S A B L E ) )  
 / * *  
     *   @ }  
     * /  
  
  
 / *   E x p o r t e d   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   W W D G _ E x p o r t e d _ M a c r o s   W W D G   E x p o r t e d   M a c r o s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   t h e   W W D G   p e r i p h e r a l .  
     *   @ p a r a m     _ _ H A N D L E _ _     W W D G   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ W W D G _ E N A B L E ( _ _ H A N D L E _ _ )                                                   S E T _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R ,   W W D G _ C R _ W D G A )  
  
 / * *  
     *   @ b r i e f     E n a b l e   t h e   W W D G   e a r l y   w a k e u p   i n t e r r u p t .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   W W D G   h a n d l e  
     *   @ p a r a m     _ _ I N T E R R U P T _ _     s p e c i f i e s   t h e   i n t e r r u p t   t o   e n a b l e .  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   W W D G _ I T _ E W I :   E a r l y   w a k e u p   i n t e r r u p t  
     *   @ n o t e       O n c e   e n a b l e d   t h i s   i n t e r r u p t   c a n n o t   b e   d i s a b l e d   e x c e p t   b y   a   s y s t e m   r e s e t .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ W W D G _ E N A B L E _ I T ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )               S E T _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C F R ,   ( _ _ I N T E R R U P T _ _ ) )  
  
 / * *  
     *   @ b r i e f     C h e c k   w h e t h e r   t h e   s e l e c t e d   W W D G   i n t e r r u p t   h a s   o c c u r r e d   o r   n o t .  
     *   @ p a r a m     _ _ H A N D L E _ _     W W D G   h a n d l e  
     *   @ p a r a m     _ _ I N T E R R U P T _ _     s p e c i f i e s   t h e   i t   t o   c h e c k .  
     *                 T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   W W D G _ F L A G _ E W I F :   E a r l y   w a k e u p   i n t e r r u p t   I T  
     *   @ r e t v a l   T h e   n e w   s t a t e   o f   W W D G _ F L A G   ( S E T   o r   R E S E T ) .  
     * /  
 # d e f i n e   _ _ H A L _ W W D G _ G E T _ I T ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )                 _ _ H A L _ W W D G _ G E T _ F L A G ( ( _ _ H A N D L E _ _ ) , ( _ _ I N T E R R U P T _ _ ) )  
  
 / * *   @ b r i e f     C l e a r   t h e   W W D G   i n t e r r u p t   p e n d i n g   b i t s .  
     *                   b i t s   t o   c l e a r   t h e   s e l e c t e d   i n t e r r u p t   p e n d i n g   b i t s .  
     *   @ p a r a m     _ _ H A N D L E _ _     W W D G   h a n d l e  
     *   @ p a r a m     _ _ I N T E R R U P T _ _     s p e c i f i e s   t h e   i n t e r r u p t   p e n d i n g   b i t   t o   c l e a r .  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   W W D G _ F L A G _ E W I F :   E a r l y   w a k e u p   i n t e r r u p t   f l a g  
     * /  
 # d e f i n e   _ _ H A L _ W W D G _ C L E A R _ I T ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )             _ _ H A L _ W W D G _ C L E A R _ F L A G ( ( _ _ H A N D L E _ _ ) ,   ( _ _ I N T E R R U P T _ _ ) )  
  
 / * *  
     *   @ b r i e f     C h e c k   w h e t h e r   t h e   s p e c i f i e d   W W D G   f l a g   i s   s e t   o r   n o t .  
     *   @ p a r a m     _ _ H A N D L E _ _     W W D G   h a n d l e  
     *   @ p a r a m     _ _ F L A G _ _     s p e c i f i e s   t h e   f l a g   t o   c h e c k .  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   W W D G _ F L A G _ E W I F :   E a r l y   w a k e u p   i n t e r r u p t   f l a g  
     *   @ r e t v a l   T h e   n e w   s t a t e   o f   W W D G _ F L A G   ( S E T   o r   R E S E T ) .  
     * /  
 # d e f i n e   _ _ H A L _ W W D G _ G E T _ F L A G ( _ _ H A N D L E _ _ ,   _ _ F L A G _ _ )                       ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > S R   &   ( _ _ F L A G _ _ ) )   = =   ( _ _ F L A G _ _ ) )  
  
 / * *  
     *   @ b r i e f     C l e a r   t h e   W W D G ' s   p e n d i n g   f l a g s .  
     *   @ p a r a m     _ _ H A N D L E _ _     W W D G   h a n d l e  
     *   @ p a r a m     _ _ F L A G _ _     s p e c i f i e s   t h e   f l a g   t o   c l e a r .  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   W W D G _ F L A G _ E W I F :   E a r l y   w a k e u p   i n t e r r u p t   f l a g  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ W W D G _ C L E A R _ F L A G ( _ _ H A N D L E _ _ ,   _ _ F L A G _ _ )                   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > S R   =   ~ ( _ _ F L A G _ _ ) )  
  
 / * *   @ b r i e f     C h e c k   w h e t h e r   t h e   s p e c i f i e d   W W D G   i n t e r r u p t   s o u r c e   i s   e n a b l e d   o r   n o t .  
     *   @ p a r a m     _ _ H A N D L E _ _     W W D G   H a n d l e .  
     *   @ p a r a m     _ _ I N T E R R U P T _ _     s p e c i f i e s   t h e   W W D G   i n t e r r u p t   s o u r c e   t o   c h e c k .  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   W W D G _ I T _ E W I :   E a r l y   W a k e u p   I n t e r r u p t  
     *   @ r e t v a l   s t a t e   o f   _ _ I N T E R R U P T _ _   ( T R U E   o r   F A L S E ) .  
     * /  
 # d e f i n e   _ _ H A L _ W W D G _ G E T _ I T _ S O U R C E ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )   ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C F R \  
                                                                                                                             &   ( _ _ I N T E R R U P T _ _ ) )   = =   ( _ _ I N T E R R U P T _ _ ) )  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ a d d t o g r o u p   W W D G _ E x p o r t e d _ F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   W W D G _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1  
     *   @ {  
     * /  
 / *   I n i t i a l i z a t i o n / d e - i n i t i a l i z a t i o n   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f           H A L _ W W D G _ I n i t ( W W D G _ H a n d l e T y p e D e f   * h w w d g ) ;  
 v o i d                                     H A L _ W W D G _ M s p I n i t ( W W D G _ H a n d l e T y p e D e f   * h w w d g ) ;  
 / *   C a l l b a c k s   R e g i s t e r / U n R e g i s t e r   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 # i f   ( U S E _ H A L _ W W D G _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 H A L _ S t a t u s T y p e D e f           H A L _ W W D G _ R e g i s t e r C a l l b a c k ( W W D G _ H a n d l e T y p e D e f   * h w w d g ,   H A L _ W W D G _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ,  
                                                                                                 p W W D G _ C a l l b a c k T y p e D e f   p C a l l b a c k ) ;  
 H A L _ S t a t u s T y p e D e f           H A L _ W W D G _ U n R e g i s t e r C a l l b a c k ( W W D G _ H a n d l e T y p e D e f   * h w w d g ,   H A L _ W W D G _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ) ;  
 # e n d i f   / *   U S E _ H A L _ W W D G _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   W W D G _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2  
     *   @ {  
     * /  
 / *   I / O   o p e r a t i o n   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f           H A L _ W W D G _ R e f r e s h ( W W D G _ H a n d l e T y p e D e f   * h w w d g ) ;  
 v o i d                                     H A L _ W W D G _ I R Q H a n d l e r ( W W D G _ H a n d l e T y p e D e f   * h w w d g ) ;  
 v o i d                                     H A L _ W W D G _ E a r l y W a k e u p C a l l b a c k ( W W D G _ H a n d l e T y p e D e f   * h w w d g ) ;  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
 # e n d i f   / *   S T M 3 2 F 1 x x _ H A L _ W W D G _ H   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  