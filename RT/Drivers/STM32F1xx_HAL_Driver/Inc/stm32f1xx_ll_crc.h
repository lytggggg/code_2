�?/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ l l _ c r c . h  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H e a d e r   f i l e   o f   C R C   L L   m o d u l e .  
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
 # i f n d e f   S T M 3 2 F 1 x x _ L L _ C R C _ H  
 # d e f i n e   S T M 3 2 F 1 x x _ L L _ C R C _ H  
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
 # i f   d e f i n e d ( C R C )  
  
 / * *   @ d e f g r o u p   C R C _ L L   C R C  
     *   @ {  
     * /  
  
 / *   P r i v a t e   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   C R C _ L L _ E x p o r t e d _ C o n s t a n t s   C R C   E x p o r t e d   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   C R C _ L L _ E x p o r t e d _ M a c r o s   C R C   E x p o r t e d   M a c r o s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   C R C _ L L _ E M _ W R I T E _ R E A D   C o m m o n   W r i t e   a n d   r e a d   r e g i s t e r s   M a c r o s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     W r i t e   a   v a l u e   i n   C R C   r e g i s t e r  
     *   @ p a r a m     _ _ I N S T A N C E _ _   C R C   I n s t a n c e  
     *   @ p a r a m     _ _ R E G _ _   R e g i s t e r   t o   b e   w r i t t e n  
     *   @ p a r a m     _ _ V A L U E _ _   V a l u e   t o   b e   w r i t t e n   i n   t h e   r e g i s t e r  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   L L _ C R C _ W r i t e R e g ( _ _ I N S T A N C E _ _ ,   _ _ R E G _ _ ,   _ _ V A L U E _ _ )   W R I T E _ R E G ( _ _ I N S T A N C E _ _ - > _ _ R E G _ _ ,   _ _ V A L U E _ _ )  
  
 / * *  
     *   @ b r i e f     R e a d   a   v a l u e   i n   C R C   r e g i s t e r  
     *   @ p a r a m     _ _ I N S T A N C E _ _   C R C   I n s t a n c e  
     *   @ p a r a m     _ _ R E G _ _   R e g i s t e r   t o   b e   r e a d  
     *   @ r e t v a l   R e g i s t e r   v a l u e  
     * /  
 # d e f i n e   L L _ C R C _ R e a d R e g ( _ _ I N S T A N C E _ _ ,   _ _ R E G _ _ )   R E A D _ R E G ( _ _ I N S T A N C E _ _ - > _ _ R E G _ _ )  
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
 / * *   @ d e f g r o u p   C R C _ L L _ E x p o r t e d _ F u n c t i o n s   C R C   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   C R C _ L L _ E F _ C o n f i g u r a t i o n   C R C   C o n f i g u r a t i o n   f u n c t i o n s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     R e s e t   t h e   C R C   c a l c u l a t i o n   u n i t .  
     *   @ n o t e       I f   P r o g r a m m a b l e   I n i t i a l   C R C   v a l u e   f e a t u r e  
     *                   i s   a v a i l a b l e ,   a l s o   s e t   t h e   D a t a   R e g i s t e r   t o   t h e   v a l u e   s t o r e d   i n   t h e  
     *                   C R C _ I N I T   r e g i s t e r ,   o t h e r w i s e ,   r e s e t   D a t a   R e g i s t e r   t o   i t s   d e f a u l t   v a l u e .  
     *   @ r m t o l l   C R                       R E S E T                   L L _ C R C _ R e s e t C R C C a l c u l a t i o n U n i t  
     *   @ p a r a m     C R C x   C R C   I n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ C R C _ R e s e t C R C C a l c u l a t i o n U n i t ( C R C _ T y p e D e f   * C R C x )  
 {  
     S E T _ B I T ( C R C x - > C R ,   C R C _ C R _ R E S E T ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C R C _ L L _ E F _ D a t a _ M a n a g e m e n t   D a t a _ M a n a g e m e n t  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     W r i t e   g i v e n   3 2 - b i t   d a t a   t o   t h e   C R C   c a l c u l a t o r  
     *   @ r m t o l l   D R                       D R                         L L _ C R C _ F e e d D a t a 3 2  
     *   @ p a r a m     C R C x   C R C   I n s t a n c e  
     *   @ p a r a m     I n D a t a   v a l u e   t o   b e   p r o v i d e d   t o   C R C   c a l c u l a t o r   b e t w e e n   b e t w e e n   M i n _ D a t a = 0   a n d   M a x _ D a t a = 0 x F F F F F F F F  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ C R C _ F e e d D a t a 3 2 ( C R C _ T y p e D e f   * C R C x ,   u i n t 3 2 _ t   I n D a t a )  
 {  
     W R I T E _ R E G ( C R C x - > D R ,   I n D a t a ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   c u r r e n t   C R C   c a l c u l a t i o n   r e s u l t .   3 2   b i t s   v a l u e   i s   r e t u r n e d .  
     *   @ r m t o l l   D R                       D R                         L L _ C R C _ R e a d D a t a 3 2  
     *   @ p a r a m     C R C x   C R C   I n s t a n c e  
     *   @ r e t v a l   C u r r e n t   C R C   c a l c u l a t i o n   r e s u l t   a s   s t o r e d   i n   C R C _ D R   r e g i s t e r   ( 3 2   b i t s ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ C R C _ R e a d D a t a 3 2 ( C R C _ T y p e D e f   * C R C x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ R E G ( C R C x - > D R ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   d a t a   s t o r e d   i n   t h e   I n d e p e n d e n t   D a t a ( I D R )   r e g i s t e r .  
     *   @ n o t e       T h i s   r e g i s t e r   c a n   b e   u s e d   a s   a   t e m p o r a r y   s t o r a g e   l o c a t i o n   f o r   o n e   b y t e .  
     *   @ r m t o l l   I D R                     I D R                       L L _ C R C _ R e a d _ I D R  
     *   @ p a r a m     C R C x   C R C   I n s t a n c e  
     *   @ r e t v a l   V a l u e   s t o r e d   i n   C R C _ I D R   r e g i s t e r   ( G e n e r a l - p u r p o s e   8 - b i t   d a t a   r e g i s t e r ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ C R C _ R e a d _ I D R ( C R C _ T y p e D e f   * C R C x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ R E G ( C R C x - > I D R ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S t o r e   d a t a   i n   t h e   I n d e p e n d e n t   D a t a ( I D R )   r e g i s t e r .  
     *   @ n o t e       T h i s   r e g i s t e r   c a n   b e   u s e d   a s   a   t e m p o r a r y   s t o r a g e   l o c a t i o n   f o r   o n e   b y t e .  
     *   @ r m t o l l   I D R                     I D R                       L L _ C R C _ W r i t e _ I D R  
     *   @ p a r a m     C R C x   C R C   I n s t a n c e  
     *   @ p a r a m     I n D a t a   v a l u e   t o   b e   s t o r e d   i n   C R C _ I D R   r e g i s t e r   ( 8 - b i t )   b e t w e e n   M i n _ D a t a = 0   a n d   M a x _ D a t a = 0 x F F  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ C R C _ W r i t e _ I D R ( C R C _ T y p e D e f   * C R C x ,   u i n t 3 2 _ t   I n D a t a )  
 {  
     * ( ( u i n t 8 _ t   _ _ I O   * ) ( & C R C x - > I D R ) )   =   ( u i n t 8 _ t )   I n D a t a ;  
 }  
 / * *  
     *   @ }  
     * /  
  
 # i f   d e f i n e d ( U S E _ F U L L _ L L _ D R I V E R )  
 / * *   @ d e f g r o u p   C R C _ L L _ E F _ I n i t   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *   @ {  
     * /  
  
 E r r o r S t a t u s   L L _ C R C _ D e I n i t ( C R C _ T y p e D e f   * C R C x ) ;  
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
 # e n d i f   / *   d e f i n e d ( C R C )   * /  
  
 / * *  
     *   @ }  
     * /  
  
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
 # e n d i f   / *   S T M 3 2 F 1 x x _ L L _ C R C _ H   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  