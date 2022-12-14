??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ d a c . h  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H e a d e r   f i l e   o f   D A C   H A L   m o d u l e .  
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
 # i f n d e f   S T M 3 2 F 1 x x _ H A L _ D A C _ H  
 # d e f i n e   S T M 3 2 F 1 x x _ H A L _ D A C _ H  
  
 # i f d e f   _ _ c p l u s p l u s  
 e x t e r n   " C "   {  
 # e n d i f  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ d e f . h "  
  
 # i f   d e f i n e d ( D A C )  
  
 / * *   @ a d d t o g r o u p   D A C  
     *   @ {  
     * /  
  
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   D A C _ E x p o r t e d _ T y p e s   D A C   E x p o r t e d   T y p e s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     H A L   S t a t e   s t r u c t u r e s   d e f i n i t i o n  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ D A C _ S T A T E _ R E S E T                           =   0 x 0 0 U ,     / * ! <   D A C   n o t   y e t   i n i t i a l i z e d   o r   d i s a b l e d     * /  
     H A L _ D A C _ S T A T E _ R E A D Y                           =   0 x 0 1 U ,     / * ! <   D A C   i n i t i a l i z e d   a n d   r e a d y   f o r   u s e         * /  
     H A L _ D A C _ S T A T E _ B U S Y                             =   0 x 0 2 U ,     / * ! <   D A C   i n t e r n a l   p r o c e s s i n g   i s   o n g o i n g       * /  
     H A L _ D A C _ S T A T E _ T I M E O U T                       =   0 x 0 3 U ,     / * ! <   D A C   t i m e o u t   s t a t e                                         * /  
     H A L _ D A C _ S T A T E _ E R R O R                           =   0 x 0 4 U       / * ! <   D A C   e r r o r   s t a t e                                             * /  
  
 }   H A L _ D A C _ S t a t e T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     D A C   h a n d l e   S t r u c t u r e   d e f i n i t i o n  
     * /  
 # i f   ( U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 t y p e d e f   s t r u c t   _ _ D A C _ H a n d l e T y p e D e f  
 # e l s e  
 t y p e d e f   s t r u c t  
 # e n d i f   / *   U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   * /  
 {  
     D A C _ T y p e D e f                                   * I n s t a n c e ;           / * ! <   R e g i s t e r   b a s e   a d d r e s s                           * /  
  
     _ _ I O   H A L _ D A C _ S t a t e T y p e D e f       S t a t e ;                   / * ! <   D A C   c o m m u n i c a t i o n   s t a t e                       * /  
  
     H A L _ L o c k T y p e D e f                           L o c k ;                     / * ! <   D A C   l o c k i n g   o b j e c t                                 * /  
  
     D M A _ H a n d l e T y p e D e f                       * D M A _ H a n d l e 1 ;     / * ! <   P o i n t e r   D M A   h a n d l e r   f o r   c h a n n e l   1   * /  
  
     D M A _ H a n d l e T y p e D e f                       * D M A _ H a n d l e 2 ;     / * ! <   P o i n t e r   D M A   h a n d l e r   f o r   c h a n n e l   2   * /  
  
     _ _ I O   u i n t 3 2 _ t                               E r r o r C o d e ;           / * ! <   D A C   E r r o r   c o d e                                         * /  
  
 # i f   ( U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     v o i d   ( *   C o n v C p l t C a l l b a c k C h 1 )                         ( s t r u c t   _ _ D A C _ H a n d l e T y p e D e f   * h d a c ) ;  
     v o i d   ( *   C o n v H a l f C p l t C a l l b a c k C h 1 )                 ( s t r u c t   _ _ D A C _ H a n d l e T y p e D e f   * h d a c ) ;  
     v o i d   ( *   E r r o r C a l l b a c k C h 1 )                               ( s t r u c t   _ _ D A C _ H a n d l e T y p e D e f   * h d a c ) ;  
     v o i d   ( *   D M A U n d e r r u n C a l l b a c k C h 1 )                   ( s t r u c t   _ _ D A C _ H a n d l e T y p e D e f   * h d a c ) ;  
  
     v o i d   ( *   C o n v C p l t C a l l b a c k C h 2 )                         ( s t r u c t   _ _ D A C _ H a n d l e T y p e D e f   * h d a c ) ;  
     v o i d   ( *   C o n v H a l f C p l t C a l l b a c k C h 2 )                 ( s t r u c t   _ _ D A C _ H a n d l e T y p e D e f   * h d a c ) ;  
     v o i d   ( *   E r r o r C a l l b a c k C h 2 )                               ( s t r u c t   _ _ D A C _ H a n d l e T y p e D e f   * h d a c ) ;  
     v o i d   ( *   D M A U n d e r r u n C a l l b a c k C h 2 )                   ( s t r u c t   _ _ D A C _ H a n d l e T y p e D e f   * h d a c ) ;  
  
  
     v o i d   ( *   M s p I n i t C a l l b a c k )                                 ( s t r u c t   _ _ D A C _ H a n d l e T y p e D e f   * h d a c ) ;  
     v o i d   ( *   M s p D e I n i t C a l l b a c k )                             ( s t r u c t   _ _ D A C _ H a n d l e T y p e D e f   * h d a c ) ;  
 # e n d i f   / *   U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   * /  
  
 }   D A C _ H a n d l e T y p e D e f ;  
  
 / * *  
     *   @ b r i e f       D A C   C o n f i g u r a t i o n   r e g u l a r   C h a n n e l   s t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   D A C _ T r i g g e r ;                                     / * ! <   S p e c i f i e s   t h e   e x t e r n a l   t r i g g e r   f o r   t h e   s e l e c t e d   D A C   c h a n n e l .  
                                                                                             T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   D A C _ t r i g g e r _ s e l e c t i o n   * /  
  
     u i n t 3 2 _ t   D A C _ O u t p u t B u f f e r ;                           / * ! <   S p e c i f i e s   w h e t h e r   t h e   D A C   c h a n n e l   o u t p u t   b u f f e r   i s   e n a b l e d   o r   d i s a b l e d .  
                                                                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   D A C _ o u t p u t _ b u f f e r   * /  
  
 }   D A C _ C h a n n e l C o n f T y p e D e f ;  
  
 # i f   ( U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / * *  
     *   @ b r i e f     H A L   D A C   C a l l b a c k   I D   e n u m e r a t i o n   d e f i n i t i o n  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ D A C _ C H 1 _ C O M P L E T E _ C B _ I D                                   =   0 x 0 0 U ,     / * ! <   D A C   C H 1   C o m p l e t e   C a l l b a c k   I D             * /  
     H A L _ D A C _ C H 1 _ H A L F _ C O M P L E T E _ C B _ I D                         =   0 x 0 1 U ,     / * ! <   D A C   C H 1   h a l f   C o m p l e t e   C a l l b a c k   I D   * /  
     H A L _ D A C _ C H 1 _ E R R O R _ I D                                               =   0 x 0 2 U ,     / * ! <   D A C   C H 1   e r r o r   C a l l b a c k   I D                   * /  
     H A L _ D A C _ C H 1 _ U N D E R R U N _ C B _ I D                                   =   0 x 0 3 U ,     / * ! <   D A C   C H 1   u n d e r r u n   C a l l b a c k   I D             * /  
  
     H A L _ D A C _ C H 2 _ C O M P L E T E _ C B _ I D                                   =   0 x 0 4 U ,     / * ! <   D A C   C H 2   C o m p l e t e   C a l l b a c k   I D             * /  
     H A L _ D A C _ C H 2 _ H A L F _ C O M P L E T E _ C B _ I D                         =   0 x 0 5 U ,     / * ! <   D A C   C H 2   h a l f   C o m p l e t e   C a l l b a c k   I D   * /  
     H A L _ D A C _ C H 2 _ E R R O R _ I D                                               =   0 x 0 6 U ,     / * ! <   D A C   C H 2   e r r o r   C a l l b a c k   I D                   * /  
     H A L _ D A C _ C H 2 _ U N D E R R U N _ C B _ I D                                   =   0 x 0 7 U ,     / * ! <   D A C   C H 2   u n d e r r u n   C a l l b a c k   I D             * /  
  
     H A L _ D A C _ M S P I N I T _ C B _ I D                                             =   0 x 0 8 U ,     / * ! <   D A C   M s p I n i t   C a l l b a c k   I D                       * /  
     H A L _ D A C _ M S P D E I N I T _ C B _ I D                                         =   0 x 0 9 U ,     / * ! <   D A C   M s p D e I n i t   C a l l b a c k   I D                   * /  
     H A L _ D A C _ A L L _ C B _ I D                                                     =   0 x 0 A U       / * ! <   D A C   A l l   I D                                                 * /  
 }   H A L _ D A C _ C a l l b a c k I D T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     H A L   D A C   C a l l b a c k   p o i n t e r   d e f i n i t i o n  
     * /  
 t y p e d e f   v o i d   ( * p D A C _ C a l l b a c k T y p e D e f ) ( D A C _ H a n d l e T y p e D e f   * h d a c ) ;  
 # e n d i f   / *   U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   D A C _ E x p o r t e d _ C o n s t a n t s   D A C   E x p o r t e d   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   D A C _ E r r o r _ C o d e   D A C   E r r o r   C o d e  
     *   @ {  
     * /  
 # d e f i n e     H A L _ D A C _ E R R O R _ N O N E                             0 x 0 0 U         / * ! <   N o   e r r o r                                                     * /  
 # d e f i n e     H A L _ D A C _ E R R O R _ D M A U N D E R R U N C H 1         0 x 0 1 U         / * ! <   D A C   c h a n n e l 1   D M A   u n d e r r u n   e r r o r       * /  
 # d e f i n e     H A L _ D A C _ E R R O R _ D M A U N D E R R U N C H 2         0 x 0 2 U         / * ! <   D A C   c h a n n e l 2   D M A   u n d e r r u n   e r r o r       * /  
 # d e f i n e     H A L _ D A C _ E R R O R _ D M A                               0 x 0 4 U         / * ! <   D M A   e r r o r                                                   * /  
 # d e f i n e     H A L _ D A C _ E R R O R _ T I M E O U T                       0 x 0 8 U         / * ! <   T i m e o u t   e r r o r                                           * /  
 # i f   ( U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 # d e f i n e   H A L _ D A C _ E R R O R _ I N V A L I D _ C A L L B A C K       0 x 1 0 U         / * ! <   I n v a l i d   c a l l b a c k   e r r o r                         * /  
 # e n d i f   / *   U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D A C _ o u t p u t _ b u f f e r   D A C   o u t p u t   b u f f e r  
     *   @ {  
     * /  
 # d e f i n e   D A C _ O U T P U T B U F F E R _ E N A B L E                         0 x 0 0 0 0 0 0 0 0 U  
 # d e f i n e   D A C _ O U T P U T B U F F E R _ D I S A B L E                       ( D A C _ C R _ B O F F 1 )  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D A C _ C h a n n e l _ s e l e c t i o n   D A C   C h a n n e l   s e l e c t i o n  
     *   @ {  
     * /  
 # d e f i n e   D A C _ C H A N N E L _ 1                                             0 x 0 0 0 0 0 0 0 0 U  
  
 # d e f i n e   D A C _ C H A N N E L _ 2                                             0 x 0 0 0 0 0 0 1 0 U  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D A C _ d a t a _ a l i g n m e n t   D A C   d a t a   a l i g n m e n t  
     *   @ {  
     * /  
 # d e f i n e   D A C _ A L I G N _ 1 2 B _ R                                         0 x 0 0 0 0 0 0 0 0 U  
 # d e f i n e   D A C _ A L I G N _ 1 2 B _ L                                         0 x 0 0 0 0 0 0 0 4 U  
 # d e f i n e   D A C _ A L I G N _ 8 B _ R                                           0 x 0 0 0 0 0 0 0 8 U  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D A C _ f l a g s _ d e f i n i t i o n   D A C   f l a g s   d e f i n i t i o n  
     *   @ {  
     * /  
 # d e f i n e   D A C _ F L A G _ D M A U D R 1                                       ( D A C _ S R _ D M A U D R 1 )  
  
 # d e f i n e   D A C _ F L A G _ D M A U D R 2                                       ( D A C _ S R _ D M A U D R 2 )  
  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D A C _ I T _ d e f i n i t i o n     D A C   I T   d e f i n i t i o n  
     *   @ {  
     * /  
 # d e f i n e   D A C _ I T _ D M A U D R 1                                       ( D A C _ S R _ D M A U D R 1 )  
  
 # d e f i n e   D A C _ I T _ D M A U D R 2                                       ( D A C _ S R _ D M A U D R 2 )  
  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   D A C _ E x p o r t e d _ M a c r o s   D A C   E x p o r t e d   M a c r o s  
     *   @ {  
     * /  
  
 / * *   @ b r i e f   R e s e t   D A C   h a n d l e   s t a t e .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   D A C   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 # i f   ( U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 # d e f i n e   _ _ H A L _ D A C _ R E S E T _ H A N D L E _ S T A T E ( _ _ H A N D L E _ _ )   d o   {                                                                                                                 \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > S t a t e                           =   H A L _ D A C _ S T A T E _ R E S E T ;   \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > M s p I n i t C a l l b a c k       =   N U L L ;                                 \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > M s p D e I n i t C a l l b a c k   =   N U L L ;                                 \  
                                                                                                           }   w h i l e ( 0 )  
 # e l s e  
 # d e f i n e   _ _ H A L _ D A C _ R E S E T _ H A N D L E _ S T A T E ( _ _ H A N D L E _ _ )   ( ( _ _ H A N D L E _ _ ) - > S t a t e   =   H A L _ D A C _ S T A T E _ R E S E T )  
 # e n d i f   / *   U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *   @ b r i e f   E n a b l e   t h e   D A C   c h a n n e l .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   D A C   h a n d l e .  
     *   @ p a r a m     _ _ D A C _ C h a n n e l _ _   s p e c i f i e s   t h e   D A C   c h a n n e l  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ D A C _ E N A B L E ( _ _ H A N D L E _ _ ,   _ _ D A C _ C h a n n e l _ _ )   \  
     ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R   | =     ( D A C _ C R _ E N 1   < <   ( ( _ _ D A C _ C h a n n e l _ _ )   &   0 x 1 0 U L ) ) )  
  
 / * *   @ b r i e f   D i s a b l e   t h e   D A C   c h a n n e l .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   D A C   h a n d l e  
     *   @ p a r a m     _ _ D A C _ C h a n n e l _ _   s p e c i f i e s   t h e   D A C   c h a n n e l .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ D A C _ D I S A B L E ( _ _ H A N D L E _ _ ,   _ _ D A C _ C h a n n e l _ _ )   \  
     ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R   & =     ~ ( D A C _ C R _ E N 1   < <   ( ( _ _ D A C _ C h a n n e l _ _ )   &   0 x 1 0 U L ) ) )  
  
 / * *   @ b r i e f   S e t   D H R 1 2 R 1   a l i g n m e n t .  
     *   @ p a r a m     _ _ A L I G N M E N T _ _   s p e c i f i e s   t h e   D A C   a l i g n m e n t  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   D A C _ D H R 1 2 R 1 _ A L I G N M E N T ( _ _ A L I G N M E N T _ _ )   ( 0 x 0 0 0 0 0 0 0 8 U L   +   ( _ _ A L I G N M E N T _ _ ) )  
  
  
 / * *   @ b r i e f     S e t   D H R 1 2 R 2   a l i g n m e n t .  
     *   @ p a r a m     _ _ A L I G N M E N T _ _   s p e c i f i e s   t h e   D A C   a l i g n m e n t  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   D A C _ D H R 1 2 R 2 _ A L I G N M E N T ( _ _ A L I G N M E N T _ _ )   ( 0 x 0 0 0 0 0 0 1 4 U L   +   ( _ _ A L I G N M E N T _ _ ) )  
  
  
 / * *   @ b r i e f     S e t   D H R 1 2 R D   a l i g n m e n t .  
     *   @ p a r a m     _ _ A L I G N M E N T _ _   s p e c i f i e s   t h e   D A C   a l i g n m e n t  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   D A C _ D H R 1 2 R D _ A L I G N M E N T ( _ _ A L I G N M E N T _ _ )   ( 0 x 0 0 0 0 0 0 2 0 U L   +   ( _ _ A L I G N M E N T _ _ ) )  
  
 / * *   @ b r i e f   E n a b l e   t h e   D A C   i n t e r r u p t .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   D A C   h a n d l e  
     *   @ p a r a m     _ _ I N T E R R U P T _ _   s p e c i f i e s   t h e   D A C   i n t e r r u p t .  
     *                     T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   D A C _ I T _ D M A U D R 1   D A C   c h a n n e l   1   D M A   u n d e r r u n   i n t e r r u p t  
     *                         @ a r g   D A C _ I T _ D M A U D R 2   D A C   c h a n n e l   2   D M A   u n d e r r u n   i n t e r r u p t  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ D A C _ E N A B L E _ I T ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )   ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R )   | =   ( _ _ I N T E R R U P T _ _ ) )  
  
 / * *   @ b r i e f   D i s a b l e   t h e   D A C   i n t e r r u p t .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   D A C   h a n d l e  
     *   @ p a r a m     _ _ I N T E R R U P T _ _   s p e c i f i e s   t h e   D A C   i n t e r r u p t .  
     *                     T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   D A C _ I T _ D M A U D R 1   D A C   c h a n n e l   1   D M A   u n d e r r u n   i n t e r r u p t  
     *                         @ a r g   D A C _ I T _ D M A U D R 2   D A C   c h a n n e l   2   D M A   u n d e r r u n   i n t e r r u p t  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ D A C _ D I S A B L E _ I T ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )   ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R )   & =   ~ ( _ _ I N T E R R U P T _ _ ) )  
  
 / * *   @ b r i e f     C h e c k   w h e t h e r   t h e   s p e c i f i e d   D A C   i n t e r r u p t   s o u r c e   i s   e n a b l e d   o r   n o t .  
     *   @ p a r a m   _ _ H A N D L E _ _   D A C   h a n d l e  
     *   @ p a r a m   _ _ I N T E R R U P T _ _   D A C   i n t e r r u p t   s o u r c e   t o   c h e c k  
     *                     T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   D A C _ I T _ D M A U D R 1   D A C   c h a n n e l   1   D M A   u n d e r r u n   i n t e r r u p t  
     *                         @ a r g   D A C _ I T _ D M A U D R 2   D A C   c h a n n e l   2   D M A   u n d e r r u n   i n t e r r u p t  
     *   @ r e t v a l   S t a t e   o f   i n t e r r u p t i o n   ( S E T   o r   R E S E T )  
     * /  
 # d e f i n e   _ _ H A L _ D A C _ G E T _ I T _ S O U R C E ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )   ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R \  
                                                                                                                           &   ( _ _ I N T E R R U P T _ _ ) )   = =   ( _ _ I N T E R R U P T _ _ ) )  
  
 / * *   @ b r i e f     G e t   t h e   s e l e c t e d   D A C ' s   f l a g   s t a t u s .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   D A C   h a n d l e .  
     *   @ p a r a m     _ _ F L A G _ _   s p e c i f i e s   t h e   D A C   f l a g   t o   g e t .  
     *                     T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   D A C _ F L A G _ D M A U D R 1   D A C   c h a n n e l   1   D M A   u n d e r r u n   f l a g  
     *                         @ a r g   D A C _ F L A G _ D M A U D R 2   D A C   c h a n n e l   2   D M A   u n d e r r u n   f l a g  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ D A C _ G E T _ F L A G ( _ _ H A N D L E _ _ ,   _ _ F L A G _ _ )   ( ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > S R )   &   ( _ _ F L A G _ _ ) )   = =   ( _ _ F L A G _ _ ) )  
  
 / * *   @ b r i e f     C l e a r   t h e   D A C ' s   f l a g .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   D A C   h a n d l e .  
     *   @ p a r a m     _ _ F L A G _ _   s p e c i f i e s   t h e   D A C   f l a g   t o   c l e a r .  
     *                     T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   D A C _ F L A G _ D M A U D R 1   D A C   c h a n n e l   1   D M A   u n d e r r u n   f l a g  
     *                         @ a r g   D A C _ F L A G _ D M A U D R 2   D A C   c h a n n e l   2   D M A   u n d e r r u n   f l a g  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ D A C _ C L E A R _ F L A G ( _ _ H A N D L E _ _ ,   _ _ F L A G _ _ )   ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > S R )   =   ( _ _ F L A G _ _ ) )  
  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   D A C _ P r i v a t e _ M a c r o s   D A C   P r i v a t e   M a c r o s  
     *   @ {  
     * /  
 # d e f i n e   I S _ D A C _ O U T P U T _ B U F F E R _ S T A T E ( S T A T E )   ( ( ( S T A T E )   = =   D A C _ O U T P U T B U F F E R _ E N A B L E )   | |   \  
                                                                                       ( ( S T A T E )   = =   D A C _ O U T P U T B U F F E R _ D I S A B L E ) )  
  
 # d e f i n e   I S _ D A C _ C H A N N E L ( C H A N N E L )   ( ( ( C H A N N E L )   = =   D A C _ C H A N N E L _ 1 )   | |   \  
                                                                   ( ( C H A N N E L )   = =   D A C _ C H A N N E L _ 2 ) )  
  
 # d e f i n e   I S _ D A C _ A L I G N ( A L I G N )   ( ( ( A L I G N )   = =   D A C _ A L I G N _ 1 2 B _ R )   | |   \  
                                                           ( ( A L I G N )   = =   D A C _ A L I G N _ 1 2 B _ L )   | |   \  
                                                           ( ( A L I G N )   = =   D A C _ A L I G N _ 8 B _ R ) )  
  
 # d e f i n e   I S _ D A C _ D A T A ( D A T A )   ( ( D A T A )   < =   0 x F F F 0 U L )  
  
 / * *  
     *   @ }  
     * /  
  
 / *   I n c l u d e   D A C   H A L   E x t e n d e d   m o d u l e   * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ d a c _ e x . h "  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ a d d t o g r o u p   D A C _ E x p o r t e d _ F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   D A C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1  
     *   @ {  
     * /  
 / *   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f   H A L _ D A C _ I n i t ( D A C _ H a n d l e T y p e D e f   * h d a c ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ D A C _ D e I n i t ( D A C _ H a n d l e T y p e D e f   * h d a c ) ;  
 v o i d   H A L _ D A C _ M s p I n i t ( D A C _ H a n d l e T y p e D e f   * h d a c ) ;  
 v o i d   H A L _ D A C _ M s p D e I n i t ( D A C _ H a n d l e T y p e D e f   * h d a c ) ;  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   D A C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2  
     *   @ {  
     * /  
 / *   I O   o p e r a t i o n   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f   H A L _ D A C _ S t a r t ( D A C _ H a n d l e T y p e D e f   * h d a c ,   u i n t 3 2 _ t   C h a n n e l ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ D A C _ S t o p ( D A C _ H a n d l e T y p e D e f   * h d a c ,   u i n t 3 2 _ t   C h a n n e l ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ D A C _ S t a r t _ D M A ( D A C _ H a n d l e T y p e D e f   * h d a c ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   * p D a t a ,   u i n t 3 2 _ t   L e n g t h ,  
                                                                         u i n t 3 2 _ t   A l i g n m e n t ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ D A C _ S t o p _ D M A ( D A C _ H a n d l e T y p e D e f   * h d a c ,   u i n t 3 2 _ t   C h a n n e l ) ;  
 v o i d   H A L _ D A C _ I R Q H a n d l e r ( D A C _ H a n d l e T y p e D e f   * h d a c ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ D A C _ S e t V a l u e ( D A C _ H a n d l e T y p e D e f   * h d a c ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   A l i g n m e n t ,   u i n t 3 2 _ t   D a t a ) ;  
  
 v o i d   H A L _ D A C _ C o n v C p l t C a l l b a c k C h 1 ( D A C _ H a n d l e T y p e D e f   * h d a c ) ;  
 v o i d   H A L _ D A C _ C o n v H a l f C p l t C a l l b a c k C h 1 ( D A C _ H a n d l e T y p e D e f   * h d a c ) ;  
 v o i d   H A L _ D A C _ E r r o r C a l l b a c k C h 1 ( D A C _ H a n d l e T y p e D e f   * h d a c ) ;  
 v o i d   H A L _ D A C _ D M A U n d e r r u n C a l l b a c k C h 1 ( D A C _ H a n d l e T y p e D e f   * h d a c ) ;  
  
 # i f   ( U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / *   D A C   c a l l b a c k   r e g i s t e r i n g / u n r e g i s t e r i n g   * /  
 H A L _ S t a t u s T y p e D e f           H A L _ D A C _ R e g i s t e r C a l l b a c k ( D A C _ H a n d l e T y p e D e f   * h d a c ,   H A L _ D A C _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ,  
                                                                                               p D A C _ C a l l b a c k T y p e D e f   p C a l l b a c k ) ;  
 H A L _ S t a t u s T y p e D e f           H A L _ D A C _ U n R e g i s t e r C a l l b a c k ( D A C _ H a n d l e T y p e D e f   * h d a c ,   H A L _ D A C _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ) ;  
 # e n d i f   / *   U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   D A C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3  
     *   @ {  
     * /  
 / *   P e r i p h e r a l   C o n t r o l   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 u i n t 3 2 _ t   H A L _ D A C _ G e t V a l u e ( D A C _ H a n d l e T y p e D e f   * h d a c ,   u i n t 3 2 _ t   C h a n n e l ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ D A C _ C o n f i g C h a n n e l ( D A C _ H a n d l e T y p e D e f   * h d a c ,   D A C _ C h a n n e l C o n f T y p e D e f   * s C o n f i g ,   u i n t 3 2 _ t   C h a n n e l ) ;  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   D A C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 4  
     *   @ {  
     * /  
 / *   P e r i p h e r a l   S t a t e   a n d   E r r o r   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ D A C _ S t a t e T y p e D e f   H A L _ D A C _ G e t S t a t e ( D A C _ H a n d l e T y p e D e f   * h d a c ) ;  
 u i n t 3 2 _ t   H A L _ D A C _ G e t E r r o r ( D A C _ H a n d l e T y p e D e f   * h d a c ) ;  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D A C _ P r i v a t e _ F u n c t i o n s   D A C   P r i v a t e   F u n c t i o n s  
     *   @ {  
     * /  
 v o i d   D A C _ D M A C o n v C p l t C h 1 ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 v o i d   D A C _ D M A E r r o r C h 1 ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 v o i d   D A C _ D M A H a l f C o n v C p l t C h 1 ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   D A C   * /  
  
 / * *  
     *   @ }  
     * /  
  
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
  
 # e n d i f   / *   S T M 3 2 F 1 x x _ H A L _ D A C _ H   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  