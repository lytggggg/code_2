??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ l l _ w w d g . h  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H e a d e r   f i l e   o f   W W D G   L L   m o d u l e .  
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
 # i f n d e f   S T M 3 2 F 1 x x _ L L _ W W D G _ H  
 # d e f i n e   S T M 3 2 F 1 x x _ L L _ W W D G _ H  
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
 # i f   d e f i n e d   ( W W D G )  
  
 / * *   @ d e f g r o u p   W W D G _ L L   W W D G  
     *   @ {  
     * /  
  
 / *   P r i v a t e   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   W W D G _ L L _ E x p o r t e d _ C o n s t a n t s   W W D G   E x p o r t e d   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   W W D G _ L L _ E C _ I T   I T   D e f i n e s  
     *   @ b r i e f         I T   d e f i n e s   w h i c h   c a n   b e   u s e d   w i t h   L L _ W W D G _ R e a d R e g   a n d     L L _ W W D G _ W r i t e R e g   f u n c t i o n s  
     *   @ {  
     * /  
 # d e f i n e   L L _ W W D G _ C F R _ E W I                                           W W D G _ C F R _ E W I  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   W W D G _ L L _ E C _ P R E S C A L E R     P R E S C A L E R  
     *   @ {  
     * /  
 # d e f i n e   L L _ W W D G _ P R E S C A L E R _ 1                                   0 x 0 0 0 0 0 0 0 0 u                                                                                               / * ! <   W W D G   c o u n t e r   c l o c k   =   ( P C L K 1 / 4 0 9 6 ) / 1   * /  
 # d e f i n e   L L _ W W D G _ P R E S C A L E R _ 2                                   W W D G _ C F R _ W D G T B _ 0                                                                                     / * ! <   W W D G   c o u n t e r   c l o c k   =   ( P C L K 1 / 4 0 9 6 ) / 2   * /  
 # d e f i n e   L L _ W W D G _ P R E S C A L E R _ 4                                   W W D G _ C F R _ W D G T B _ 1                                                                                     / * ! <   W W D G   c o u n t e r   c l o c k   =   ( P C L K 1 / 4 0 9 6 ) / 4   * /  
 # d e f i n e   L L _ W W D G _ P R E S C A L E R _ 8                                   ( W W D G _ C F R _ W D G T B _ 0   |   W W D G _ C F R _ W D G T B _ 1 )                                           / * ! <   W W D G   c o u n t e r   c l o c k   =   ( P C L K 1 / 4 0 9 6 ) / 8   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   W W D G _ L L _ E x p o r t e d _ M a c r o s   W W D G   E x p o r t e d   M a c r o s  
     *   @ {  
     * /  
 / * *   @ d e f g r o u p   W W D G _ L L _ E M _ W R I T E _ R E A D   C o m m o n   W r i t e   a n d   r e a d   r e g i s t e r s   m a c r o s  
     *   @ {  
     * /  
 / * *  
     *   @ b r i e f     W r i t e   a   v a l u e   i n   W W D G   r e g i s t e r  
     *   @ p a r a m     _ _ I N S T A N C E _ _   W W D G   I n s t a n c e  
     *   @ p a r a m     _ _ R E G _ _   R e g i s t e r   t o   b e   w r i t t e n  
     *   @ p a r a m     _ _ V A L U E _ _   V a l u e   t o   b e   w r i t t e n   i n   t h e   r e g i s t e r  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   L L _ W W D G _ W r i t e R e g ( _ _ I N S T A N C E _ _ ,   _ _ R E G _ _ ,   _ _ V A L U E _ _ )   W R I T E _ R E G ( _ _ I N S T A N C E _ _ - > _ _ R E G _ _ ,   ( _ _ V A L U E _ _ ) )  
  
 / * *  
     *   @ b r i e f     R e a d   a   v a l u e   i n   W W D G   r e g i s t e r  
     *   @ p a r a m     _ _ I N S T A N C E _ _   W W D G   I n s t a n c e  
     *   @ p a r a m     _ _ R E G _ _   R e g i s t e r   t o   b e   r e a d  
     *   @ r e t v a l   R e g i s t e r   v a l u e  
     * /  
 # d e f i n e   L L _ W W D G _ R e a d R e g ( _ _ I N S T A N C E _ _ ,   _ _ R E G _ _ )   R E A D _ R E G ( _ _ I N S T A N C E _ _ - > _ _ R E G _ _ )  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   W W D G _ L L _ E x p o r t e d _ F u n c t i o n s   W W D G   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   W W D G _ L L _ E F _ C o n f i g u r a t i o n   C o n f i g u r a t i o n  
     *   @ {  
     * /  
 / * *  
     *   @ b r i e f     E n a b l e   W i n d o w   W a t c h d o g .   T h e   w a t c h d o g   i s   a l w a y s   d i s a b l e d   a f t e r   a   r e s e t .  
     *   @ n o t e       I t   i s   e n a b l e d   b y   s e t t i n g   t h e   W D G A   b i t   i n   t h e   W W D G _ C R   r e g i s t e r ,  
     *                   t h e n   i t   c a n n o t   b e   d i s a b l e d   a g a i n   e x c e p t   b y   a   r e s e t .  
     *                   T h i s   b i t   i s   s e t   b y   s o f t w a r e   a n d   o n l y   c l e a r e d   b y   h a r d w a r e   a f t e r   a   r e s e t .  
     *                   W h e n   W D G A   =   1 ,   t h e   w a t c h d o g   c a n   g e n e r a t e   a   r e s e t .  
     *   @ r m t o l l   C R                       W D G A                     L L _ W W D G _ E n a b l e  
     *   @ p a r a m     W W D G x   W W D G   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ W W D G _ E n a b l e ( W W D G _ T y p e D e f   * W W D G x )  
 {  
     S E T _ B I T ( W W D G x - > C R ,   W W D G _ C R _ W D G A ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k s   i f   W i n d o w   W a t c h d o g   i s   e n a b l e d  
     *   @ r m t o l l   C R                       W D G A                     L L _ W W D G _ I s E n a b l e d  
     *   @ p a r a m     W W D G x   W W D G   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ W W D G _ I s E n a b l e d ( W W D G _ T y p e D e f   * W W D G x )  
 {  
     r e t u r n   ( ( R E A D _ B I T ( W W D G x - > C R ,   W W D G _ C R _ W D G A )   = =   ( W W D G _ C R _ W D G A ) )   ?   1 U L   :   0 U L ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   t h e   W a t c h d o g   c o u n t e r   v a l u e   t o   p r o v i d e d   v a l u e   ( 7 - b i t s   T [ 6 : 0 ] )  
     *   @ n o t e       W h e n   w r i t i n g   t o   t h e   W W D G _ C R   r e g i s t e r ,   a l w a y s   w r i t e   1   i n   t h e   M S B   b 6   t o   a v o i d   g e n e r a t i n g   a n   i m m e d i a t e   r e s e t  
     *                   T h i s   c o u n t e r   i s   d e c r e m e n t e d   e v e r y   ( 4 0 9 6   x   2 e x p W D G T B )   P C L K   c y c l e s  
     *                   A   r e s e t   i s   p r o d u c e d   w h e n   i t   r o l l s   o v e r   f r o m   0 x 4 0   t o   0 x 3 F   ( b i t   T 6   b e c o m e s   c l e a r e d )  
     *                   S e t t i n g   t h e   c o u n t e r   l o w e r   t h e n   0 x 4 0   c a u s e s   a n   i m m e d i a t e   r e s e t   ( i f   W W D G   e n a b l e d )  
     *   @ r m t o l l   C R                       T                           L L _ W W D G _ S e t C o u n t e r  
     *   @ p a r a m     W W D G x   W W D G   I n s t a n c e  
     *   @ p a r a m     C o u n t e r   0 . . 0 x 7 F   ( 7   b i t   c o u n t e r   v a l u e )  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ W W D G _ S e t C o u n t e r ( W W D G _ T y p e D e f   * W W D G x ,   u i n t 3 2 _ t   C o u n t e r )  
 {  
     M O D I F Y _ R E G ( W W D G x - > C R ,   W W D G _ C R _ T ,   C o u n t e r ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   c u r r e n t   W a t c h d o g   C o u n t e r   V a l u e   ( 7   b i t s   c o u n t e r   v a l u e )  
     *   @ r m t o l l   C R                       T                           L L _ W W D G _ G e t C o u n t e r  
     *   @ p a r a m     W W D G x   W W D G   I n s t a n c e  
     *   @ r e t v a l   7   b i t   W a t c h d o g   C o u n t e r   v a l u e  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ W W D G _ G e t C o u n t e r ( W W D G _ T y p e D e f   * W W D G x )  
 {  
     r e t u r n   ( R E A D _ B I T ( W W D G x - > C R ,   W W D G _ C R _ T ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   t h e   t i m e   b a s e   o f   t h e   p r e s c a l e r   ( W D G T B ) .  
     *   @ n o t e       P r e s c a l e r   i s   u s e d   t o   a p p l y   r a t i o   o n   P C L K   c l o c k ,   s o   t h a t   W a t c h d o g   c o u n t e r  
     *                   i s   d e c r e m e n t e d   e v e r y   ( 4 0 9 6   x   2 e x p W D G T B )   P C L K   c y c l e s  
     *   @ r m t o l l   C F R                     W D G T B                   L L _ W W D G _ S e t P r e s c a l e r  
     *   @ p a r a m     W W D G x   W W D G   I n s t a n c e  
     *   @ p a r a m     P r e s c a l e r   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ W W D G _ P R E S C A L E R _ 1  
     *                   @ a r g   @ r e f   L L _ W W D G _ P R E S C A L E R _ 2  
     *                   @ a r g   @ r e f   L L _ W W D G _ P R E S C A L E R _ 4  
     *                   @ a r g   @ r e f   L L _ W W D G _ P R E S C A L E R _ 8  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ W W D G _ S e t P r e s c a l e r ( W W D G _ T y p e D e f   * W W D G x ,   u i n t 3 2 _ t   P r e s c a l e r )  
 {  
     M O D I F Y _ R E G ( W W D G x - > C F R ,   W W D G _ C F R _ W D G T B ,   P r e s c a l e r ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   c u r r e n t   W a t c h d o g   P r e s c a l e r   V a l u e  
     *   @ r m t o l l   C F R                     W D G T B                   L L _ W W D G _ G e t P r e s c a l e r  
     *   @ p a r a m     W W D G x   W W D G   I n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ W W D G _ P R E S C A L E R _ 1  
     *                   @ a r g   @ r e f   L L _ W W D G _ P R E S C A L E R _ 2  
     *                   @ a r g   @ r e f   L L _ W W D G _ P R E S C A L E R _ 4  
     *                   @ a r g   @ r e f   L L _ W W D G _ P R E S C A L E R _ 8  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ W W D G _ G e t P r e s c a l e r ( W W D G _ T y p e D e f   * W W D G x )  
 {  
     r e t u r n   ( R E A D _ B I T ( W W D G x - > C F R ,   W W D G _ C F R _ W D G T B ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   t h e   W a t c h d o g   W i n d o w   v a l u e   t o   b e   c o m p a r e d   t o   t h e   d o w n c o u n t e r   ( 7 - b i t s   W [ 6 : 0 ] ) .  
     *   @ n o t e       T h i s   w i n d o w   v a l u e   d e f i n e s   w h e n   w r i t e   i n   t h e   W W D G _ C R   r e g i s t e r  
     *                   t o   p r o g r a m   W a t c h d o g   c o u n t e r   i s   a l l o w e d .  
     *                   W a t c h d o g   c o u n t e r   v a l u e   u p d a t e   m u s t   o c c u r   o n l y   w h e n   t h e   c o u n t e r   v a l u e  
     *                   i s   l o w e r   t h a n   t h e   W a t c h d o g   w i n d o w   r e g i s t e r   v a l u e .  
     *                   O t h e r w i s e ,   a   M C U   r e s e t   i s   g e n e r a t e d   i f   t h e   7 - b i t   W a t c h d o g   c o u n t e r   v a l u e  
     *                   ( i n   t h e   c o n t r o l   r e g i s t e r )   i s   r e f r e s h e d   b e f o r e   t h e   d o w n c o u n t e r   h a s   r e a c h e d  
     *                   t h e   w a t c h d o g   w i n d o w   r e g i s t e r   v a l u e .  
     *                   P h y s i c a l l y   i s   p o s s i b l e   t o   s e t   t h e   W i n d o w   l o w e r   t h e n   0 x 4 0   b u t   i t   i s   n o t   r e c o m m e n d e d .  
     *                   T o   g e n e r a t e   a n   i m m e d i a t e   r e s e t ,   i t   i s   p o s s i b l e   t o   s e t   t h e   C o u n t e r   l o w e r   t h a n   0 x 4 0 .  
     *   @ r m t o l l   C F R                     W                           L L _ W W D G _ S e t W i n d o w  
     *   @ p a r a m     W W D G x   W W D G   I n s t a n c e  
     *   @ p a r a m     W i n d o w   0 x 0 0 . . 0 x 7 F   ( 7   b i t   W i n d o w   v a l u e )  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ W W D G _ S e t W i n d o w ( W W D G _ T y p e D e f   * W W D G x ,   u i n t 3 2 _ t   W i n d o w )  
 {  
     M O D I F Y _ R E G ( W W D G x - > C F R ,   W W D G _ C F R _ W ,   W i n d o w ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   c u r r e n t   W a t c h d o g   W i n d o w   V a l u e   ( 7   b i t s   v a l u e )  
     *   @ r m t o l l   C F R                     W                           L L _ W W D G _ G e t W i n d o w  
     *   @ p a r a m     W W D G x   W W D G   I n s t a n c e  
     *   @ r e t v a l   7   b i t   W a t c h d o g   W i n d o w   v a l u e  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ W W D G _ G e t W i n d o w ( W W D G _ T y p e D e f   * W W D G x )  
 {  
     r e t u r n   ( R E A D _ B I T ( W W D G x - > C F R ,   W W D G _ C F R _ W ) ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   W W D G _ L L _ E F _ F L A G _ M a n a g e m e n t   F L A G _ M a n a g e m e n t  
     *   @ {  
     * /  
 / * *  
     *   @ b r i e f     I n d i c a t e s   i f   t h e   W W D G   E a r l y   W a k e u p   I n t e r r u p t   F l a g   i s   s e t   o r   n o t .  
     *   @ n o t e       T h i s   b i t   i s   s e t   b y   h a r d w a r e   w h e n   t h e   c o u n t e r   h a s   r e a c h e d   t h e   v a l u e   0 x 4 0 .  
     *                   I t   m u s t   b e   c l e a r e d   b y   s o f t w a r e   b y   w r i t i n g   0 .  
     *                   A   w r i t e   o f   1   h a s   n o   e f f e c t .   T h i s   b i t   i s   a l s o   s e t   i f   t h e   i n t e r r u p t   i s   n o t   e n a b l e d .  
     *   @ r m t o l l   S R                       E W I F                     L L _ W W D G _ I s A c t i v e F l a g _ E W K U P  
     *   @ p a r a m     W W D G x   W W D G   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ W W D G _ I s A c t i v e F l a g _ E W K U P ( W W D G _ T y p e D e f   * W W D G x )  
 {  
     r e t u r n   ( ( R E A D _ B I T ( W W D G x - > S R ,   W W D G _ S R _ E W I F )   = =   ( W W D G _ S R _ E W I F ) )   ?   1 U L   :   0 U L ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   W W D G   E a r l y   W a k e u p   I n t e r r u p t   F l a g   ( E W I F )  
     *   @ r m t o l l   S R                       E W I F                     L L _ W W D G _ C l e a r F l a g _ E W K U P  
     *   @ p a r a m     W W D G x   W W D G   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ W W D G _ C l e a r F l a g _ E W K U P ( W W D G _ T y p e D e f   * W W D G x )  
 {  
     W R I T E _ R E G ( W W D G x - > S R ,   ~ W W D G _ S R _ E W I F ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   W W D G _ L L _ E F _ I T _ M a n a g e m e n t   I T _ M a n a g e m e n t  
     *   @ {  
     * /  
 / * *  
     *   @ b r i e f     E n a b l e   t h e   E a r l y   W a k e u p   I n t e r r u p t .  
     *   @ n o t e       W h e n   s e t ,   a n   i n t e r r u p t   o c c u r s   w h e n e v e r   t h e   c o u n t e r   r e a c h e s   v a l u e   0 x 4 0 .  
     *                   T h i s   i n t e r r u p t   i s   o n l y   c l e a r e d   b y   h a r d w a r e   a f t e r   a   r e s e t  
     *   @ r m t o l l   C F R                     E W I                       L L _ W W D G _ E n a b l e I T _ E W K U P  
     *   @ p a r a m     W W D G x   W W D G   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ W W D G _ E n a b l e I T _ E W K U P ( W W D G _ T y p e D e f   * W W D G x )  
 {  
     S E T _ B I T ( W W D G x - > C F R ,   W W D G _ C F R _ E W I ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   E a r l y   W a k e u p   I n t e r r u p t   i s   e n a b l e d  
     *   @ r m t o l l   C F R                     E W I                       L L _ W W D G _ I s E n a b l e d I T _ E W K U P  
     *   @ p a r a m     W W D G x   W W D G   I n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ W W D G _ I s E n a b l e d I T _ E W K U P ( W W D G _ T y p e D e f   * W W D G x )  
 {  
     r e t u r n   ( ( R E A D _ B I T ( W W D G x - > C F R ,   W W D G _ C F R _ E W I )   = =   ( W W D G _ C F R _ E W I ) )   ?   1 U L   :   0 U L ) ;  
 }  
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
 # e n d i f   / *   W W D G   * /  
  
 / * *  
     *   @ }  
     * /  
  
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
 # e n d i f   / *   S T M 3 2 F 1 x x _ L L _ W W D G _ H   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  