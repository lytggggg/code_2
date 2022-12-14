??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ s m a r t c a r d . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       S M A R T C A R D   H A L   m o d u l e   d r i v e r .  
     *                     T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g  
     *                     f u n c t i o n a l i t i e s   o f   t h e   S M A R T C A R D   p e r i p h e r a l :  
     *                       +   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *                       +   I O   o p e r a t i o n   f u n c t i o n s  
     *                       +   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *                       +   P e r i p h e r a l   S t a t e   a n d   E r r o r   f u n c t i o n s  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                           # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             T h e   S M A R T C A R D   H A L   d r i v e r   c a n   b e   u s e d   a s   f o l l o w s :  
  
         ( # )   D e c l a r e   a   S M A R T C A R D _ H a n d l e T y p e D e f   h a n d l e   s t r u c t u r e .  
         ( # )   I n i t i a l i z e   t h e   S M A R T C A R D   l o w   l e v e l   r e s o u r c e s   b y   i m p l e m e n t i n g   t h e   H A L _ S M A R T C A R D _ M s p I n i t ( )   A P I :  
                 ( # # )   E n a b l e   t h e   i n t e r f a c e   c l o c k   o f   t h e   U S A R T x   a s s o c i a t e d   t o   t h e   S M A R T C A R D .  
                 ( # # )   S M A R T C A R D   p i n s   c o n f i g u r a t i o n :  
                         ( + + + )   E n a b l e   t h e   c l o c k   f o r   t h e   S M A R T C A R D   G P I O s .  
                         ( + + + )   C o n f i g u r e   S M A R T C A R D   p i n s   a s   a l t e r n a t e   f u n c t i o n   p u l l - u p .  
                 ( # # )   N V I C   c o n f i g u r a t i o n   i f   y o u   n e e d   t o   u s e   i n t e r r u p t   p r o c e s s   ( H A L _ S M A R T C A R D _ T r a n s m i t _ I T ( )  
                           a n d   H A L _ S M A R T C A R D _ R e c e i v e _ I T ( )   A P I s ) :  
                         ( + + + )   C o n f i g u r e   t h e   U S A R T x   i n t e r r u p t   p r i o r i t y .  
                         ( + + + )   E n a b l e   t h e   N V I C   U S A R T   I R Q   h a n d l e .  
                 ( # # )   D M A   C o n f i g u r a t i o n   i f   y o u   n e e d   t o   u s e   D M A   p r o c e s s   ( H A L _ S M A R T C A R D _ T r a n s m i t _ D M A ( )  
                           a n d   H A L _ S M A R T C A R D _ R e c e i v e _ D M A ( )   A P I s ) :  
                         ( + + + )   D e c l a r e   a   D M A   h a n d l e   s t r u c t u r e   f o r   t h e   T x / R x   c h a n n e l .  
                         ( + + + )   E n a b l e   t h e   D M A x   i n t e r f a c e   c l o c k .  
                         ( + + + )   C o n f i g u r e   t h e   d e c l a r e d   D M A   h a n d l e   s t r u c t u r e   w i t h   t h e   r e q u i r e d   T x / R x   p a r a m e t e r s .  
                         ( + + + )   C o n f i g u r e   t h e   D M A   T x / R x   c h a n n e l .  
                         ( + + + )   A s s o c i a t e   t h e   i n i t i a l i z e d   D M A   h a n d l e   t o   t h e   S M A R T C A R D   D M A   T x / R x   h a n d l e .  
                         ( + + + )   C o n f i g u r e   t h e   p r i o r i t y   a n d   e n a b l e   t h e   N V I C   f o r   t h e   t r a n s f e r   c o m p l e t e   i n t e r r u p t   o n   t h e   D M A   T x / R x   c h a n n e l .  
                         ( + + + )   C o n f i g u r e   t h e   U S A R T x   i n t e r r u p t   p r i o r i t y   a n d   e n a b l e   t h e   N V I C   U S A R T   I R Q   h a n d l e  
                                     ( u s e d   f o r   l a s t   b y t e   s e n d i n g   c o m p l e t i o n   d e t e c t i o n   i n   D M A   n o n   c i r c u l a r   m o d e )  
  
         ( # )   P r o g r a m   t h e   B a u d   R a t e ,   W o r d   L e n g t h   ,   S t o p   B i t ,   P a r i t y ,   H a r d w a r e  
                 f l o w   c o n t r o l   a n d   M o d e ( R e c e i v e r / T r a n s m i t t e r )   i n   t h e   S M A R T C A R D   I n i t   s t r u c t u r e .  
  
         ( # )   I n i t i a l i z e   t h e   S M A R T C A R D   r e g i s t e r s   b y   c a l l i n g   t h e   H A L _ S M A R T C A R D _ I n i t ( )   A P I :  
                 ( + + )   T h e s e   A P I s   c o n f i g u r e   a l s o   t h e   l o w   l e v e l   H a r d w a r e   G P I O ,   C L O C K ,   C O R T E X . . . e t c )  
                           b y   c a l l i n g   t h e   c u s t o m i z e d   H A L _ S M A R T C A R D _ M s p I n i t ( )   A P I .  
         [ . . ]  
         ( @ )   T h e   s p e c i f i c   S M A R T C A R D   i n t e r r u p t s   ( T r a n s m i s s i o n   c o m p l e t e   i n t e r r u p t ,  
                 R X N E   i n t e r r u p t   a n d   E r r o r   I n t e r r u p t s )   w i l l   b e   m a n a g e d   u s i n g   t h e   m a c r o s  
                 _ _ H A L _ S M A R T C A R D _ E N A B L E _ I T ( )   a n d   _ _ H A L _ S M A R T C A R D _ D I S A B L E _ I T ( )   i n s i d e   t h e   t r a n s m i t   a n d   r e c e i v e   p r o c e s s .  
  
         [ . . ]  
         T h r e e   o p e r a t i o n   m o d e s   a r e   a v a i l a b l e   w i t h i n   t h i s   d r i v e r   :  
  
         * * *   P o l l i n g   m o d e   I O   o p e r a t i o n   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             ( + )   S e n d   a n   a m o u n t   o f   d a t a   i n   b l o c k i n g   m o d e   u s i n g   H A L _ S M A R T C A R D _ T r a n s m i t ( )  
             ( + )   R e c e i v e   a n   a m o u n t   o f   d a t a   i n   b l o c k i n g   m o d e   u s i n g   H A L _ S M A R T C A R D _ R e c e i v e ( )  
  
         * * *   I n t e r r u p t   m o d e   I O   o p e r a t i o n   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             ( + )   S e n d   a n   a m o u n t   o f   d a t a   i n   n o n   b l o c k i n g   m o d e   u s i n g   H A L _ S M A R T C A R D _ T r a n s m i t _ I T ( )  
             ( + )   A t   t r a n s m i s s i o n   e n d   o f   t r a n s f e r   H A L _ S M A R T C A R D _ T x C p l t C a l l b a c k   i s   e x e c u t e d   a n d   u s e r   c a n  
                     a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ S M A R T C A R D _ T x C p l t C a l l b a c k  
             ( + )   R e c e i v e   a n   a m o u n t   o f   d a t a   i n   n o n   b l o c k i n g   m o d e   u s i n g   H A L _ S M A R T C A R D _ R e c e i v e _ I T ( )  
             ( + )   A t   r e c e p t i o n   e n d   o f   t r a n s f e r   H A L _ S M A R T C A R D _ R x C p l t C a l l b a c k   i s   e x e c u t e d   a n d   u s e r   c a n  
                     a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ S M A R T C A R D _ R x C p l t C a l l b a c k  
             ( + )   I n   c a s e   o f   t r a n s f e r   E r r o r ,   H A L _ S M A R T C A R D _ E r r o r C a l l b a c k ( )   f u n c t i o n   i s   e x e c u t e d   a n d   u s e r   c a n  
                     a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ S M A R T C A R D _ E r r o r C a l l b a c k  
  
         * * *   D M A   m o d e   I O   o p e r a t i o n   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             ( + )   S e n d   a n   a m o u n t   o f   d a t a   i n   n o n   b l o c k i n g   m o d e   ( D M A )   u s i n g   H A L _ S M A R T C A R D _ T r a n s m i t _ D M A ( )  
             ( + )   A t   t r a n s m i s s i o n   e n d   o f   t r a n s f e r   H A L _ S M A R T C A R D _ T x C p l t C a l l b a c k   i s   e x e c u t e d   a n d   u s e r   c a n  
                     a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ S M A R T C A R D _ T x C p l t C a l l b a c k  
             ( + )   R e c e i v e   a n   a m o u n t   o f   d a t a   i n   n o n   b l o c k i n g   m o d e   ( D M A )   u s i n g   H A L _ S M A R T C A R D _ R e c e i v e _ D M A ( )  
             ( + )   A t   r e c e p t i o n   e n d   o f   t r a n s f e r   H A L _ S M A R T C A R D _ R x C p l t C a l l b a c k   i s   e x e c u t e d   a n d   u s e r   c a n  
                     a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ S M A R T C A R D _ R x C p l t C a l l b a c k  
             ( + )   I n   c a s e   o f   t r a n s f e r   E r r o r ,   H A L _ S M A R T C A R D _ E r r o r C a l l b a c k ( )   f u n c t i o n   i s   e x e c u t e d   a n d   u s e r   c a n  
                     a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ S M A R T C A R D _ E r r o r C a l l b a c k  
  
         * * *   S M A R T C A R D   H A L   d r i v e r   m a c r o s   l i s t   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             B e l o w   t h e   l i s t   o f   m o s t   u s e d   m a c r o s   i n   S M A R T C A R D   H A L   d r i v e r .  
  
             ( + )   _ _ H A L _ S M A R T C A R D _ E N A B L E :   E n a b l e   t h e   S M A R T C A R D   p e r i p h e r a l  
             ( + )   _ _ H A L _ S M A R T C A R D _ D I S A B L E :   D i s a b l e   t h e   S M A R T C A R D   p e r i p h e r a l  
             ( + )   _ _ H A L _ S M A R T C A R D _ G E T _ F L A G   :   C h e c k   w h e t h e r   t h e   s p e c i f i e d   S M A R T C A R D   f l a g   i s   s e t   o r   n o t  
             ( + )   _ _ H A L _ S M A R T C A R D _ C L E A R _ F L A G   :   C l e a r   t h e   s p e c i f i e d   S M A R T C A R D   p e n d i n g   f l a g  
             ( + )   _ _ H A L _ S M A R T C A R D _ E N A B L E _ I T :   E n a b l e   t h e   s p e c i f i e d   S M A R T C A R D   i n t e r r u p t  
             ( + )   _ _ H A L _ S M A R T C A R D _ D I S A B L E _ I T :   D i s a b l e   t h e   s p e c i f i e d   S M A R T C A R D   i n t e r r u p t  
  
         [ . . ]  
             ( @ )   Y o u   c a n   r e f e r   t o   t h e   S M A R T C A R D   H A L   d r i v e r   h e a d e r   f i l e   f o r   m o r e   u s e f u l   m a c r o s  
  
         # # # # #   C a l l b a c k   r e g i s t r a t i o n   # # # # #  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
  
         [ . . ]  
         T h e   c o m p i l a t i o n   d e f i n e   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   w h e n   s e t   t o   1  
         a l l o w s   t h e   u s e r   t o   c o n f i g u r e   d y n a m i c a l l y   t h e   d r i v e r   c a l l b a c k s .  
  
         [ . . ]  
         U s e   F u n c t i o n   @ r e f   H A L _ S M A R T C A R D _ R e g i s t e r C a l l b a c k ( )   t o   r e g i s t e r   a   u s e r   c a l l b a c k .  
         F u n c t i o n   @ r e f   H A L _ S M A R T C A R D _ R e g i s t e r C a l l b a c k ( )   a l l o w s   t o   r e g i s t e r   f o l l o w i n g   c a l l b a c k s :  
         ( + )   T x C p l t C a l l b a c k                         :   T x   C o m p l e t e   C a l l b a c k .  
         ( + )   R x C p l t C a l l b a c k                         :   R x   C o m p l e t e   C a l l b a c k .  
         ( + )   E r r o r C a l l b a c k                           :   E r r o r   C a l l b a c k .  
         ( + )   A b o r t C p l t C a l l b a c k                   :   A b o r t   C o m p l e t e   C a l l b a c k .  
         ( + )   A b o r t T r a n s m i t C p l t C a l l b a c k   :   A b o r t   T r a n s m i t   C o m p l e t e   C a l l b a c k .  
         ( + )   A b o r t R e c e i v e C p l t C a l l b a c k     :   A b o r t   R e c e i v e   C o m p l e t e   C a l l b a c k .  
         ( + )   M s p I n i t C a l l b a c k                       :   S M A R T C A R D   M s p I n i t .  
         ( + )   M s p D e I n i t C a l l b a c k                   :   S M A R T C A R D   M s p D e I n i t .  
         T h i s   f u n c t i o n   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e ,   t h e   C a l l b a c k   I D  
         a n d   a   p o i n t e r   t o   t h e   u s e r   c a l l b a c k   f u n c t i o n .  
  
         [ . . ]  
         U s e   f u n c t i o n   @ r e f   H A L _ S M A R T C A R D _ U n R e g i s t e r C a l l b a c k ( )   t o   r e s e t   a   c a l l b a c k   t o   t h e   d e f a u l t  
         w e a k   ( s u r c h a r g e d )   f u n c t i o n .  
         @ r e f   H A L _ S M A R T C A R D _ U n R e g i s t e r C a l l b a c k ( )   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e ,  
         a n d   t h e   C a l l b a c k   I D .  
         T h i s   f u n c t i o n   a l l o w s   t o   r e s e t   f o l l o w i n g   c a l l b a c k s :  
         ( + )   T x C p l t C a l l b a c k                         :   T x   C o m p l e t e   C a l l b a c k .  
         ( + )   R x C p l t C a l l b a c k                         :   R x   C o m p l e t e   C a l l b a c k .  
         ( + )   E r r o r C a l l b a c k                           :   E r r o r   C a l l b a c k .  
         ( + )   A b o r t C p l t C a l l b a c k                   :   A b o r t   C o m p l e t e   C a l l b a c k .  
         ( + )   A b o r t T r a n s m i t C p l t C a l l b a c k   :   A b o r t   T r a n s m i t   C o m p l e t e   C a l l b a c k .  
         ( + )   A b o r t R e c e i v e C p l t C a l l b a c k     :   A b o r t   R e c e i v e   C o m p l e t e   C a l l b a c k .  
         ( + )   M s p I n i t C a l l b a c k                       :   S M A R T C A R D   M s p I n i t .  
         ( + )   M s p D e I n i t C a l l b a c k                   :   S M A R T C A R D   M s p D e I n i t .  
  
         [ . . ]  
         B y   d e f a u l t ,   a f t e r   t h e   @ r e f   H A L _ S M A R T C A R D _ I n i t ( )   a n d   w h e n   t h e   s t a t e   i s   H A L _ S M A R T C A R D _ S T A T E _ R E S E T  
         a l l   c a l l b a c k s   a r e   s e t   t o   t h e   c o r r e s p o n d i n g   w e a k   ( s u r c h a r g e d )   f u n c t i o n s :  
         e x a m p l e s   @ r e f   H A L _ S M A R T C A R D _ T x C p l t C a l l b a c k ( ) ,   @ r e f   H A L _ S M A R T C A R D _ R x C p l t C a l l b a c k ( ) .  
         E x c e p t i o n   d o n e   f o r   M s p I n i t   a n d   M s p D e I n i t   f u n c t i o n s   t h a t   a r e   r e s p e c t i v e l y  
         r e s e t   t o   t h e   l e g a c y   w e a k   ( s u r c h a r g e d )   f u n c t i o n s   i n   t h e   @ r e f   H A L _ S M A R T C A R D _ I n i t ( )  
         a n d   @ r e f   H A L _ S M A R T C A R D _ D e I n i t ( )   o n l y   w h e n   t h e s e   c a l l b a c k s   a r e   n u l l   ( n o t   r e g i s t e r e d   b e f o r e h a n d ) .  
         I f   n o t ,   M s p I n i t   o r   M s p D e I n i t   a r e   n o t   n u l l ,   t h e   @ r e f   H A L _ S M A R T C A R D _ I n i t ( )   a n d   @ r e f   H A L _ S M A R T C A R D _ D e I n i t ( )  
         k e e p   a n d   u s e   t h e   u s e r   M s p I n i t / M s p D e I n i t   c a l l b a c k s   ( r e g i s t e r e d   b e f o r e h a n d ) .  
  
         [ . . ]  
         C a l l b a c k s   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d   i n   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y   s t a t e   o n l y .  
         E x c e p t i o n   d o n e   M s p I n i t / M s p D e I n i t   t h a t   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d  
         i n   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y   o r   H A L _ S M A R T C A R D _ S T A T E _ R E S E T   s t a t e ,   t h u s   r e g i s t e r e d   ( u s e r )  
         M s p I n i t / D e I n i t   c a l l b a c k s   c a n   b e   u s e d   d u r i n g   t h e   I n i t / D e I n i t .  
         I n   t h a t   c a s e   f i r s t   r e g i s t e r   t h e   M s p I n i t / M s p D e I n i t   u s e r   c a l l b a c k s  
         u s i n g   @ r e f   H A L _ S M A R T C A R D _ R e g i s t e r C a l l b a c k ( )   b e f o r e   c a l l i n g   @ r e f   H A L _ S M A R T C A R D _ D e I n i t ( )  
         o r   @ r e f   H A L _ S M A R T C A R D _ I n i t ( )   f u n c t i o n .  
  
         [ . . ]  
         W h e n   T h e   c o m p i l a t i o n   d e f i n e   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   i s   s e t   t o   0   o r  
         n o t   d e f i n e d ,   t h e   c a l l b a c k   r e g i s t r a t i o n   f e a t u r e   i s   n o t   a v a i l a b l e  
         a n d   w e a k   ( s u r c h a r g e d )   c a l l b a c k s   a r e   u s e d .  
  
     @ e n d v e r b a t i m  
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
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l . h "  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   S M A R T C A R D   S M A R T C A R D  
     *   @ b r i e f   H A L   S M A R T C A R D   m o d u l e   d r i v e r  
     *   @ {  
     * /  
 # i f d e f   H A L _ S M A R T C A R D _ M O D U L E _ E N A B L E D  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   S M A R T C A R D _ P r i v a t e _ C o n s t a n t s  
     *   @ {  
     * /  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   S M A R T C A R D _ P r i v a t e _ F u n c t i o n s  
     *   @ {  
     * /  
 # i f   ( U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 v o i d   S M A R T C A R D _ I n i t C a l l b a c k s T o D e f a u l t ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;  
 # e n d i f   / *   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   * /  
 s t a t i c   v o i d   S M A R T C A R D _ E n d T x T r a n s f e r ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;  
 s t a t i c   v o i d   S M A R T C A R D _ E n d R x T r a n s f e r ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;  
 s t a t i c   v o i d   S M A R T C A R D _ S e t C o n f i g   ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f   S M A R T C A R D _ T r a n s m i t _ I T ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f   S M A R T C A R D _ E n d T r a n s m i t _ I T ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f   S M A R T C A R D _ R e c e i v e _ I T ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;  
 s t a t i c   v o i d   S M A R T C A R D _ D M A T r a n s m i t C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   S M A R T C A R D _ D M A R e c e i v e C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   S M A R T C A R D _ D M A E r r o r ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   S M A R T C A R D _ D M A A b o r t O n E r r o r ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   S M A R T C A R D _ D M A T x A b o r t C a l l b a c k ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   S M A R T C A R D _ D M A R x A b o r t C a l l b a c k ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   S M A R T C A R D _ D M A T x O n l y A b o r t C a l l b a c k ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   S M A R T C A R D _ D M A R x O n l y A b o r t C a l l b a c k ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f   S M A R T C A R D _ W a i t O n F l a g U n t i l T i m e o u t ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ,   u i n t 3 2 _ t   F l a g ,   F l a g S t a t u s   S t a t u s ,   u i n t 3 2 _ t   T i c k s t a r t ,   u i n t 3 2 _ t   T i m e o u t ) ;  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   S M A R T C A R D _ E x p o r t e d _ F u n c t i o n s   S M A R T C A R D   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   S M A R T C A R D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   S m a r t C a r d   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *     @ b r i e f         I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s  
     *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                             # # # # #   I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
     T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   i n i t i a l i z e   t h e   U S A R T  
     i n   S m a r t c a r d   m o d e .  
     [ . . ]  
     T h e   S m a r t c a r d   i n t e r f a c e   i s   d e s i g n e d   t o   s u p p o r t   a s y n c h r o n o u s   p r o t o c o l   S m a r t c a r d s   a s  
     d e f i n e d   i n   t h e   I S O   7 8 1 6 - 3   s t a n d a r d .  
     [ . . ]  
     T h e   U S A R T   c a n   p r o v i d e   a   c l o c k   t o   t h e   s m a r t c a r d   t h r o u g h   t h e   S C L K   o u t p u t .  
     I n   s m a r t c a r d   m o d e ,   S C L K   i s   n o t   a s s o c i a t e d   t o   t h e   c o m m u n i c a t i o n   b u t   i s   s i m p l y   d e r i v e d  
     f r o m   t h e   i n t e r n a l   p e r i p h e r a l   i n p u t   c l o c k   t h r o u g h   a   5 - b i t   p r e s c a l e r .  
     [ . . ]  
     ( + )   F o r   t h e   S m a r t c a r d   m o d e   o n l y   t h e s e   p a r a m e t e r s   c a n   b e   c o n f i g u r e d :  
             ( + + )   B a u d   R a t e  
             ( + + )   W o r d   L e n g t h   = >   S h o u l d   b e   9   b i t s   ( 8   b i t s   +   p a r i t y )  
             ( + + )   S t o p   B i t  
             ( + + )   P a r i t y :   = >   S h o u l d   b e   e n a b l e d  
             ( + + )   U S A R T   p o l a r i t y  
             ( + + )   U S A R T   p h a s e  
             ( + + )   U S A R T   L a s t B i t  
             ( + + )   R e c e i v e r / t r a n s m i t t e r   m o d e s  
             ( + + )   P r e s c a l e r  
             ( + + )   G u a r d T i m e  
             ( + + )   N A C K S t a t e :   T h e   S m a r t c a r d   N A C K   s t a t e  
  
           ( + )   R e c o m m e n d e d   S m a r t C a r d   i n t e r f a c e   c o n f i g u r a t i o n   t o   g e t   t h e   A n s w e r   t o   R e s e t   f r o m   t h e   C a r d :  
                 ( + + )   W o r d   L e n g t h   =   9   B i t s  
                 ( + + )   1 . 5   S t o p   B i t  
                 ( + + )   E v e n   p a r i t y  
                 ( + + )   B a u d R a t e   =   1 2 0 9 6   b a u d  
                 ( + + )   T x   a n d   R x   e n a b l e d  
     [ . . ]  
     P l e a s e   r e f e r   t o   t h e   I S O   7 8 1 6 - 3   s p e c i f i c a t i o n   f o r   m o r e   d e t a i l s .  
  
     [ . . ]  
       ( @ )   I t   i s   a l s o   p o s s i b l e   t o   c h o o s e   0 . 5   s t o p   b i t   f o r   r e c e i v i n g   b u t   i t   i s   r e c o m m e n d e d  
               t o   u s e   1 . 5   s t o p   b i t s   f o r   b o t h   t r a n s m i t t i n g   a n d   r e c e i v i n g   t o   a v o i d   s w i t c h i n g  
               b e t w e e n   t h e   t w o   c o n f i g u r a t i o n s .  
     [ . . ]  
         T h e   H A L _ S M A R T C A R D _ I n i t ( )   f u n c t i o n   f o l l o w s   t h e   U S A R T     S m a r t C a r d   c o n f i g u r a t i o n  
         p r o c e d u r e s   ( d e t a i l s   f o r   t h e   p r o c e d u r e s   a r e   a v a i l a b l e   i n   r e f e r e n c e   m a n u a l s  
         ( R M 0 0 0 8   f o r   S T M 3 2 F 1 0 X x x   M C U s   a n d   R M 0 0 4 1   f o r   S T M 3 2 F 1 0 0 x x   M C U s ) ) .  
  
 @ e n d v e r b a t i m  
  
     T h e   S M A R T C A R D   f r a m e   f o r m a t   i s   g i v e n   i n   t h e   f o l l o w i n g   t a b l e :  
               + - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - +  
               |       M   b i t   |     P C E   b i t     |                 S M A R T C A R D   f r a m e                                 |  
               | - - - - - - - - - - - - - - - - - - - - - | - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - |  
               |         1         |         1             |         |   S B   |   8   b i t   d a t a   |   P B   |   S T B   |           |  
               + - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - +  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   S m a r t C a r d   m o d e   a c c o r d i n g   t o   t h e   s p e c i f i e d  
     *                   p a r a m e t e r s   i n   t h e   S M A R T C A R D _ I n i t T y p e D e f   a n d   c r e a t e   t h e   a s s o c i a t e d   h a n d l e .  
     *   @ p a r a m     h s c         P o i n t e r   t o   a   S M A R T C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S M A R T C A R D   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ I n i t ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c )  
 {  
     / *   C h e c k   t h e   S M A R T C A R D   h a n d l e   a l l o c a t i o n   * /  
     i f ( h s c   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ S M A R T C A R D _ I N S T A N C E ( h s c - > I n s t a n c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ S M A R T C A R D _ N A C K _ S T A T E ( h s c - > I n i t . N A C K S t a t e ) ) ;  
  
     i f ( h s c - > g S t a t e   = =   H A L _ S M A R T C A R D _ S T A T E _ R E S E T )  
     {  
         / *   A l l o c a t e   l o c k   r e s o u r c e   a n d   i n i t i a l i z e   i t   * /  
         h s c - > L o c k   =   H A L _ U N L O C K E D ;  
  
 # i f   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1  
         S M A R T C A R D _ I n i t C a l l b a c k s T o D e f a u l t ( h s c ) ;  
  
         i f   ( h s c - > M s p I n i t C a l l b a c k   = =   N U L L )  
         {  
             h s c - > M s p I n i t C a l l b a c k   =   H A L _ S M A R T C A R D _ M s p I n i t ;  
         }  
  
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
         h s c - > M s p I n i t C a l l b a c k ( h s c ) ;  
 # e l s e  
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   :   G P I O ,   C L O C K   * /  
         H A L _ S M A R T C A R D _ M s p I n i t ( h s c ) ;  
 # e n d i f   / *   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   * /  
     }  
  
     h s c - > g S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ B U S Y ;  
  
     / *   S e t   t h e   P r e s c a l e r   * /  
     M O D I F Y _ R E G ( h s c - > I n s t a n c e - > G T P R ,   U S A R T _ G T P R _ P S C ,   h s c - > I n i t . P r e s c a l e r ) ;  
  
     / *   S e t   t h e   G u a r d   T i m e   * /  
     M O D I F Y _ R E G ( h s c - > I n s t a n c e - > G T P R ,   U S A R T _ G T P R _ G T ,   ( ( h s c - > I n i t . G u a r d T i m e ) < < 8 U ) ) ;  
  
     / *   S e t   t h e   S m a r t c a r d   C o m m u n i c a t i o n   p a r a m e t e r s   * /  
     S M A R T C A R D _ S e t C o n f i g ( h s c ) ;  
  
     / *   I n   S m a r t C a r d   m o d e ,   t h e   f o l l o w i n g   b i t s   m u s t   b e   k e p t   c l e a r e d :  
     -   L I N E N   b i t   i n   t h e   U S A R T _ C R 2   r e g i s t e r  
     -   H D S E L   a n d   I R E N   b i t s   i n   t h e   U S A R T _ C R 3   r e g i s t e r . * /  
     C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 2 ,   U S A R T _ C R 2 _ L I N E N ) ;  
     C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 3 ,   ( U S A R T _ C R 3 _ I R E N   |   U S A R T _ C R 3 _ H D S E L ) ) ;  
  
     / *   E n a b l e   t h e   S M A R T C A R D   P a r i t y   E r r o r   I n t e r r u p t   * /  
     S E T _ B I T ( h s c - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ P E I E ) ;  
  
     / *   E n a b l e   t h e   S M A R T C A R D   F r a m i n g   E r r o r   I n t e r r u p t   * /  
     S E T _ B I T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
     / *   E n a b l e   t h e   P e r i p h e r a l   * /  
     _ _ H A L _ S M A R T C A R D _ E N A B L E ( h s c ) ;  
  
     / *   C o n f i g u r e   t h e   S m a r t c a r d   N A C K   s t a t e   * /  
     M O D I F Y _ R E G ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ N A C K ,   h s c - > I n i t . N A C K S t a t e ) ;  
  
     / *   E n a b l e   t h e   S C   m o d e   b y   s e t t i n g   t h e   S C E N   b i t   i n   t h e   C R 3   r e g i s t e r   * /  
     h s c - > I n s t a n c e - > C R 3   | =   ( U S A R T _ C R 3 _ S C E N ) ;  
  
     / *   I n i t i a l i z e   t h e   S M A R T C A R D   s t a t e * /  
     h s c - > E r r o r C o d e   =   H A L _ S M A R T C A R D _ E R R O R _ N O N E ;  
     h s c - > g S t a t e =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y ;  
     h s c - > R x S t a t e =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f   D e I n i t i a l i z e s   t h e   U S A R T   S m a r t C a r d   p e r i p h e r a l  
     *   @ p a r a m     h s c         P o i n t e r   t o   a   S M A R T C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S M A R T C A R D   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ D e I n i t ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c )  
 {  
     / *   C h e c k   t h e   S M A R T C A R D   h a n d l e   a l l o c a t i o n   * /  
     i f ( h s c   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ S M A R T C A R D _ I N S T A N C E ( h s c - > I n s t a n c e ) ) ;  
  
     h s c - > g S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ B U S Y ;  
  
     / *   D i s a b l e   t h e   P e r i p h e r a l   * /  
     _ _ H A L _ S M A R T C A R D _ D I S A B L E ( h s c ) ;  
  
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
 # i f   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1  
     i f   ( h s c - > M s p D e I n i t C a l l b a c k   = =   N U L L )  
     {  
         h s c - > M s p D e I n i t C a l l b a c k   =   H A L _ S M A R T C A R D _ M s p D e I n i t ;  
     }  
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
     h s c - > M s p D e I n i t C a l l b a c k ( h s c ) ;  
 # e l s e  
     H A L _ S M A R T C A R D _ M s p D e I n i t ( h s c ) ;  
 # e n d i f   / *   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   * /  
  
     h s c - > E r r o r C o d e   =   H A L _ S M A R T C A R D _ E R R O R _ N O N E ;  
     h s c - > g S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ R E S E T ;  
     h s c - > R x S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ R E S E T ;  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h s c ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     S M A R T C A R D   M S P   I n i t  
     *   @ p a r a m     h s c         P o i n t e r   t o   a   S M A R T C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S M A R T C A R D   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ S M A R T C A R D _ M s p I n i t ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h s c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ S M A R T C A R D _ M s p I n i t   c a n   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f   S M A R T C A R D   M S P   D e I n i t  
     *   @ p a r a m     h s c         P o i n t e r   t o   a   S M A R T C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S M A R T C A R D   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ S M A R T C A R D _ M s p D e I n i t ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h s c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ S M A R T C A R D _ M s p D e I n i t   c a n   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 # i f   ( U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / * *  
     *   @ b r i e f     R e g i s t e r   a   U s e r   S M A R T C A R D   C a l l b a c k  
     *                   T o   b e   u s e d   i n s t e a d   o f   t h e   w e a k   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h s c   s m a r t c a r d   h a n d l e  
     *   @ p a r a m     C a l l b a c k I D   I D   o f   t h e   c a l l b a c k   t o   b e   r e g i s t e r e d  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                       @ a r g   @ r e f   H A L _ S M A R T C A R D _ T X _ C O M P L E T E _ C B _ I D   T x   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ S M A R T C A R D _ R X _ C O M P L E T E _ C B _ I D   R x   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ S M A R T C A R D _ E R R O R _ C B _ I D   E r r o r   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ S M A R T C A R D _ A B O R T _ C O M P L E T E _ C B _ I D   A b o r t   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ S M A R T C A R D _ A B O R T _ T R A N S M I T _ C O M P L E T E _ C B _ I D   A b o r t   T r a n s m i t   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ S M A R T C A R D _ A B O R T _ R E C E I V E _ C O M P L E T E _ C B _ I D   A b o r t   R e c e i v e   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ S M A R T C A R D _ M S P I N I T _ C B _ I D   M s p I n i t   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ S M A R T C A R D _ M S P D E I N I T _ C B _ I D   M s p D e I n i t   C a l l b a c k   I D  
     *   @ p a r a m     p C a l l b a c k   p o i n t e r   t o   t h e   C a l l b a c k   f u n c t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ R e g i s t e r C a l l b a c k ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ,   H A L _ S M A R T C A R D _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ,   p S M A R T C A R D _ C a l l b a c k T y p e D e f   p C a l l b a c k )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     i f   ( p C a l l b a c k   = =   N U L L )  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h s c - > E r r o r C o d e   | =   H A L _ S M A R T C A R D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h s c ) ;  
  
     i f   ( h s c - > g S t a t e   = =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
  
             c a s e   H A L _ S M A R T C A R D _ T X _ C O M P L E T E _ C B _ I D   :  
                 h s c - > T x C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ S M A R T C A R D _ R X _ C O M P L E T E _ C B _ I D   :  
                 h s c - > R x C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ S M A R T C A R D _ E R R O R _ C B _ I D   :  
                 h s c - > E r r o r C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ S M A R T C A R D _ A B O R T _ C O M P L E T E _ C B _ I D   :  
                 h s c - > A b o r t C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ S M A R T C A R D _ A B O R T _ T R A N S M I T _ C O M P L E T E _ C B _ I D   :  
                 h s c - > A b o r t T r a n s m i t C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ S M A R T C A R D _ A B O R T _ R E C E I V E _ C O M P L E T E _ C B _ I D   :  
                 h s c - > A b o r t R e c e i v e C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
  
             c a s e   H A L _ S M A R T C A R D _ M S P I N I T _ C B _ I D   :  
                 h s c - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ S M A R T C A R D _ M S P D E I N I T _ C B _ I D   :  
                 h s c - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h s c - > E r r o r C o d e   | =   H A L _ S M A R T C A R D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e   i f   ( h s c - > g S t a t e   = =   H A L _ S M A R T C A R D _ S T A T E _ R E S E T )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ S M A R T C A R D _ M S P I N I T _ C B _ I D   :  
                 h s c - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ S M A R T C A R D _ M S P D E I N I T _ C B _ I D   :  
                 h s c - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h s c - > E r r o r C o d e   | =   H A L _ S M A R T C A R D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h s c - > E r r o r C o d e   | =   H A L _ S M A R T C A R D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h s c ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     U n r e g i s t e r   a n   S M A R T C A R D   c a l l b a c k  
     *                   S M A R T C A R D   c a l l b a c k   i s   r e d i r e c t e d   t o   t h e   w e a k   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h s c   s m a r t c a r d   h a n d l e  
     *   @ p a r a m     C a l l b a c k I D   I D   o f   t h e   c a l l b a c k   t o   b e   u n r e g i s t e r e d  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                       @ a r g   @ r e f   H A L _ S M A R T C A R D _ T X _ C O M P L E T E _ C B _ I D   T x   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ S M A R T C A R D _ R X _ C O M P L E T E _ C B _ I D   R x   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ S M A R T C A R D _ E R R O R _ C B _ I D   E r r o r   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ S M A R T C A R D _ A B O R T _ C O M P L E T E _ C B _ I D   A b o r t   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ S M A R T C A R D _ A B O R T _ T R A N S M I T _ C O M P L E T E _ C B _ I D   A b o r t   T r a n s m i t   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ S M A R T C A R D _ A B O R T _ R E C E I V E _ C O M P L E T E _ C B _ I D   A b o r t   R e c e i v e   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ S M A R T C A R D _ M S P I N I T _ C B _ I D   M s p I n i t   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ S M A R T C A R D _ M S P D E I N I T _ C B _ I D   M s p D e I n i t   C a l l b a c k   I D  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ U n R e g i s t e r C a l l b a c k ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ,   H A L _ S M A R T C A R D _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h s c ) ;  
  
     i f   ( H A L _ S M A R T C A R D _ S T A T E _ R E A D Y   = =   h s c - > g S t a t e )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ S M A R T C A R D _ T X _ C O M P L E T E _ C B _ I D   :  
                 h s c - > T x C p l t C a l l b a c k   =   H A L _ S M A R T C A R D _ T x C p l t C a l l b a c k ;                                               / *   L e g a c y   w e a k   T x C p l t C a l l b a c k                         * /  
                 b r e a k ;  
  
             c a s e   H A L _ S M A R T C A R D _ R X _ C O M P L E T E _ C B _ I D   :  
                 h s c - > R x C p l t C a l l b a c k   =   H A L _ S M A R T C A R D _ R x C p l t C a l l b a c k ;                                               / *   L e g a c y   w e a k   R x C p l t C a l l b a c k                         * /  
                 b r e a k ;  
  
             c a s e   H A L _ S M A R T C A R D _ E R R O R _ C B _ I D   :  
                 h s c - > E r r o r C a l l b a c k   =   H A L _ S M A R T C A R D _ E r r o r C a l l b a c k ;                                                   / *   L e g a c y   w e a k   E r r o r C a l l b a c k                           * /  
                 b r e a k ;  
  
             c a s e   H A L _ S M A R T C A R D _ A B O R T _ C O M P L E T E _ C B _ I D   :  
                 h s c - > A b o r t C p l t C a l l b a c k   =   H A L _ S M A R T C A R D _ A b o r t C p l t C a l l b a c k ;                                   / *   L e g a c y   w e a k   A b o r t C p l t C a l l b a c k                   * /  
                 b r e a k ;  
  
             c a s e   H A L _ S M A R T C A R D _ A B O R T _ T R A N S M I T _ C O M P L E T E _ C B _ I D   :  
                 h s c - > A b o r t T r a n s m i t C p l t C a l l b a c k   =   H A L _ S M A R T C A R D _ A b o r t T r a n s m i t C p l t C a l l b a c k ;   / *   L e g a c y   w e a k   A b o r t T r a n s m i t C p l t C a l l b a c k   * /  
                 b r e a k ;  
  
             c a s e   H A L _ S M A R T C A R D _ A B O R T _ R E C E I V E _ C O M P L E T E _ C B _ I D   :  
                 h s c - > A b o r t R e c e i v e C p l t C a l l b a c k   =   H A L _ S M A R T C A R D _ A b o r t R e c e i v e C p l t C a l l b a c k ;       / *   L e g a c y   w e a k   A b o r t R e c e i v e C p l t C a l l b a c k     * /  
                 b r e a k ;  
  
  
             c a s e   H A L _ S M A R T C A R D _ M S P I N I T _ C B _ I D   :  
                 h s c - > M s p I n i t C a l l b a c k   =   H A L _ S M A R T C A R D _ M s p I n i t ;                                                           / *   L e g a c y   w e a k   M s p I n i t C a l l b a c k                       * /  
                 b r e a k ;  
  
             c a s e   H A L _ S M A R T C A R D _ M S P D E I N I T _ C B _ I D   :  
                 h s c - > M s p D e I n i t C a l l b a c k   =   H A L _ S M A R T C A R D _ M s p D e I n i t ;                                                   / *   L e g a c y   w e a k   M s p D e I n i t C a l l b a c k                   * /  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h s c - > E r r o r C o d e   | =   H A L _ S M A R T C A R D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e   i f   ( H A L _ S M A R T C A R D _ S T A T E _ R E S E T   = =   h s c - > g S t a t e )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ S M A R T C A R D _ M S P I N I T _ C B _ I D   :  
                 h s c - > M s p I n i t C a l l b a c k   =   H A L _ S M A R T C A R D _ M s p I n i t ;  
                 b r e a k ;  
  
             c a s e   H A L _ S M A R T C A R D _ M S P D E I N I T _ C B _ I D   :  
                 h s c - > M s p D e I n i t C a l l b a c k   =   H A L _ S M A R T C A R D _ M s p D e I n i t ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h s c - > E r r o r C o d e   | =   H A L _ S M A R T C A R D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h s c - > E r r o r C o d e   | =   H A L _ S M A R T C A R D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h s c ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
 # e n d i f   / *   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S M A R T C A R D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   I O   o p e r a t i o n   f u n c t i o n s  
     *   @ b r i e f         S M A R T C A R D   T r a n s m i t   a n d   R e c e i v e   f u n c t i o n s  
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   I O   o p e r a t i o n   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
   [ . . ]  
       T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   m a n a g e   t h e   S M A R T C A R D   d a t a   t r a n s f e r s .  
  
   [ . . ]  
         ( # )   S m a r t c a r d   i s   a   s i n g l e   w i r e   h a l f   d u p l e x   c o m m u n i c a t i o n   p r o t o c o l .  
         T h e   S m a r t c a r d   i n t e r f a c e   i s   d e s i g n e d   t o   s u p p o r t   a s y n c h r o n o u s   p r o t o c o l   S m a r t c a r d s   a s  
         d e f i n e d   i n   t h e   I S O   7 8 1 6 - 3   s t a n d a r d .  
         ( # )   T h e   U S A R T   s h o u l d   b e   c o n f i g u r e d   a s :  
               ( + + )   8   b i t s   p l u s   p a r i t y :   w h e r e   M = 1   a n d   P C E = 1   i n   t h e   U S A R T _ C R 1   r e g i s t e r  
               ( + + )   1 . 5   s t o p   b i t s   w h e n   t r a n s m i t t i n g   a n d   r e c e i v i n g :   w h e r e   S T O P = 1 1   i n   t h e   U S A R T _ C R 2   r e g i s t e r .  
  
         ( # )   T h e r e   a r e   t w o   m o d e s   o f   t r a n s f e r :  
               ( + + )   B l o c k i n g   m o d e :   T h e   c o m m u n i c a t i o n   i s   p e r f o r m e d   i n   p o l l i n g   m o d e .  
                         T h e   H A L   s t a t u s   o f   a l l   d a t a   p r o c e s s i n g   i s   r e t u r n e d   b y   t h e   s a m e   f u n c t i o n  
                         a f t e r   f i n i s h i n g   t r a n s f e r .  
               ( + + )   N o n   B l o c k i n g   m o d e :   T h e   c o m m u n i c a t i o n   i s   p e r f o r m e d   u s i n g   I n t e r r u p t s  
                       o r   D M A ,   T h e s e   A P I s   r e t u r n   t h e   H A L   s t a t u s .  
                       T h e   e n d   o f   t h e   d a t a   p r o c e s s i n g   w i l l   b e   i n d i c a t e d   t h r o u g h   t h e  
                       d e d i c a t e d   S M A R T C A R D   I R Q   w h e n   u s i n g   I n t e r r u p t   m o d e   o r   t h e   D M A   I R Q   w h e n  
                       u s i n g   D M A   m o d e .  
                       T h e   H A L _ S M A R T C A R D _ T x C p l t C a l l b a c k ( ) ,   H A L _ S M A R T C A R D _ R x C p l t C a l l b a c k ( )   u s e r   c a l l b a c k s  
                       w i l l   b e   e x e c u t e d   r e s p e c t i v e l y   a t   t h e   e n d   o f   t h e   T r a n s m i t   o r   R e c e i v e   p r o c e s s  
                       T h e   H A L _ S M A R T C A R D _ E r r o r C a l l b a c k ( )   u s e r   c a l l b a c k   w i l l   b e   e x e c u t e d   w h e n   a   c o m m u n i c a t i o n   e r r o r   i s   d e t e c t e d  
  
         ( # )   B l o c k i n g   m o d e   A P I s   a r e   :  
                 ( + + )   H A L _ S M A R T C A R D _ T r a n s m i t ( )  
                 ( + + )   H A L _ S M A R T C A R D _ R e c e i v e ( )  
  
         ( # )   N o n   B l o c k i n g   m o d e   A P I s   w i t h   I n t e r r u p t   a r e   :  
                 ( + + )   H A L _ S M A R T C A R D _ T r a n s m i t _ I T ( )  
                 ( + + )   H A L _ S M A R T C A R D _ R e c e i v e _ I T ( )  
                 ( + + )   H A L _ S M A R T C A R D _ I R Q H a n d l e r ( )  
  
         ( # )   N o n   B l o c k i n g   m o d e   f u n c t i o n s   w i t h   D M A   a r e   :  
                 ( + + )   H A L _ S M A R T C A R D _ T r a n s m i t _ D M A ( )  
                 ( + + )   H A L _ S M A R T C A R D _ R e c e i v e _ D M A ( )  
  
         ( # )   A   s e t   o f   T r a n s f e r   C o m p l e t e   C a l l b a c k s   a r e   p r o v i d e d   i n   n o n   B l o c k i n g   m o d e :  
                 ( + + )   H A L _ S M A R T C A R D _ T x C p l t C a l l b a c k ( )  
                 ( + + )   H A L _ S M A R T C A R D _ R x C p l t C a l l b a c k ( )  
                 ( + + )   H A L _ S M A R T C A R D _ E r r o r C a l l b a c k ( )  
  
         ( # )   N o n - B l o c k i n g   m o d e   t r a n s f e r s   c o u l d   b e   a b o r t e d   u s i n g   A b o r t   A P I ' s   :  
                 ( + )   H A L _ S M A R T C A R D _ A b o r t ( )  
                 ( + )   H A L _ S M A R T C A R D _ A b o r t T r a n s m i t ( )  
                 ( + )   H A L _ S M A R T C A R D _ A b o r t R e c e i v e ( )  
                 ( + )   H A L _ S M A R T C A R D _ A b o r t _ I T ( )  
                 ( + )   H A L _ S M A R T C A R D _ A b o r t T r a n s m i t _ I T ( )  
                 ( + )   H A L _ S M A R T C A R D _ A b o r t R e c e i v e _ I T ( )  
  
         ( # )   F o r   A b o r t   s e r v i c e s   b a s e d   o n   i n t e r r u p t s   ( H A L _ S M A R T C A R D _ A b o r t x x x _ I T ) ,   a   s e t   o f   A b o r t   C o m p l e t e   C a l l b a c k s   a r e   p r o v i d e d :  
                 ( + )   H A L _ S M A R T C A R D _ A b o r t C p l t C a l l b a c k ( )  
                 ( + )   H A L _ S M A R T C A R D _ A b o r t T r a n s m i t C p l t C a l l b a c k ( )  
                 ( + )   H A L _ S M A R T C A R D _ A b o r t R e c e i v e C p l t C a l l b a c k ( )  
  
         ( # )   I n   N o n - B l o c k i n g   m o d e   t r a n s f e r s ,   p o s s i b l e   e r r o r s   a r e   s p l i t   i n t o   2   c a t e g o r i e s .  
                 E r r o r s   a r e   h a n d l e d   a s   f o l l o w s   :  
               ( + )   E r r o r   i s   c o n s i d e r e d   a s   R e c o v e r a b l e   a n d   n o n   b l o c k i n g   :   T r a n s f e r   c o u l d   g o   t i l l   e n d ,   b u t   e r r o r   s e v e r i t y   i s  
                       t o   b e   e v a l u a t e d   b y   u s e r   :   t h i s   c o n c e r n s   F r a m e   E r r o r ,   P a r i t y   E r r o r   o r   N o i s e   E r r o r   i n   I n t e r r u p t   m o d e   r e c e p t i o n   .  
                       R e c e i v e d   c h a r a c t e r   i s   t h e n   r e t r i e v e d   a n d   s t o r e d   i n   R x   b u f f e r ,   E r r o r   c o d e   i s   s e t   t o   a l l o w   u s e r   t o   i d e n t i f y   e r r o r   t y p e ,  
                       a n d   H A L _ S M A R T C A R D _ E r r o r C a l l b a c k ( )   u s e r   c a l l b a c k   i s   e x e c u t e d .   T r a n s f e r   i s   k e p t   o n g o i n g   o n   S M A R T C A R D   s i d e .  
                       I f   u s e r   w a n t s   t o   a b o r t   i t ,   A b o r t   s e r v i c e s   s h o u l d   b e   c a l l e d   b y   u s e r .  
               ( + )   E r r o r   i s   c o n s i d e r e d   a s   B l o c k i n g   :   T r a n s f e r   c o u l d   n o t   b e   c o m p l e t e d   p r o p e r l y   a n d   i s   a b o r t e d .  
                       T h i s   c o n c e r n s   F r a m e   E r r o r   i n   I n t e r r u p t   m o d e   t r a n s m i s s i o n ,   O v e r r u n   E r r o r   i n   I n t e r r u p t   m o d e   r e c e p t i o n   a n d   a l l   e r r o r s   i n   D M A   m o d e .  
                       E r r o r   c o d e   i s   s e t   t o   a l l o w   u s e r   t o   i d e n t i f y   e r r o r   t y p e ,   a n d   H A L _ S M A R T C A R D _ E r r o r C a l l b a c k ( )   u s e r   c a l l b a c k   i s   e x e c u t e d .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f   S e n d   a n   a m o u n t   o f   d a t a   i n   b l o c k i n g   m o d e  
     *   @ p a r a m     h s c         P o i n t e r   t o   a   S M A R T C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S M A R T C A R D   m o d u l e .  
     *   @ p a r a m     p D a t a     P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e       A m o u n t   o f   d a t a   t o   b e   s e n t  
     *   @ p a r a m     T i m e o u t   T i m e o u t   d u r a t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ T r a n s m i t ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     u i n t 8 _ t   * t m p   =   p D a t a ;  
     u i n t 3 2 _ t   t i c k s t a r t   =   0 U ;  
  
     i f ( h s c - > g S t a t e   = =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y )  
     {  
         i f ( ( p D a t a   = =   N U L L )   | |   ( S i z e   = =   0 U ) )  
         {  
             r e t u r n     H A L _ E R R O R ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h s c ) ;  
  
         h s c - > E r r o r C o d e   =   H A L _ S M A R T C A R D _ E R R O R _ N O N E ;  
         h s c - > g S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ B U S Y _ T X ;  
  
         / *   I n i t   t i c k s t a r t   f o r   t i m e o u t   m a n a g e m e n t   * /  
         t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
         h s c - > T x X f e r S i z e   =   S i z e ;  
         h s c - > T x X f e r C o u n t   =   S i z e ;  
         w h i l e ( h s c - > T x X f e r C o u n t   >   0 U )  
         {  
             h s c - > T x X f e r C o u n t - - ;  
             i f ( S M A R T C A R D _ W a i t O n F l a g U n t i l T i m e o u t ( h s c ,   S M A R T C A R D _ F L A G _ T X E ,   R E S E T ,   t i c k s t a r t ,   T i m e o u t )   ! =   H A L _ O K )  
             {  
                 r e t u r n   H A L _ T I M E O U T ;  
             }  
             h s c - > I n s t a n c e - > D R   =   ( u i n t 8 _ t ) ( * t m p   &   0 x F F U ) ;  
             t m p + + ;  
         }  
  
         i f ( S M A R T C A R D _ W a i t O n F l a g U n t i l T i m e o u t ( h s c ,   S M A R T C A R D _ F L A G _ T C ,   R E S E T ,   t i c k s t a r t ,   T i m e o u t )   ! =   H A L _ O K )  
         {  
             r e t u r n   H A L _ T I M E O U T ;  
         }  
  
 	 / *   A t   e n d   o f   T x   p r o c e s s ,   r e s t o r e   h s c - > g S t a t e   t o   R e a d y   * /  
         h s c - > g S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h s c ) ;  
  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f   R e c e i v e   a n   a m o u n t   o f   d a t a   i n   b l o c k i n g   m o d e  
     *   @ p a r a m     h s c         P o i n t e r   t o   a   S M A R T C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S M A R T C A R D   m o d u l e .  
     *   @ p a r a m     p D a t a     P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e       A m o u n t   o f   d a t a   t o   b e   r e c e i v e d  
     *   @ p a r a m     T i m e o u t   T i m e o u t   d u r a t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ R e c e i v e ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     u i n t 8 _ t     * t m p   =   p D a t a ;  
     u i n t 3 2 _ t   t i c k s t a r t   =   0 U ;  
  
     i f ( h s c - > R x S t a t e   = =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y )  
     {  
         i f ( ( p D a t a   = =   N U L L )   | |   ( S i z e   = =   0 U ) )  
         {  
             r e t u r n     H A L _ E R R O R ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h s c ) ;  
  
         h s c - > E r r o r C o d e   =   H A L _ S M A R T C A R D _ E R R O R _ N O N E ;  
         h s c - > R x S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ B U S Y _ R X ;  
  
         / *   I n i t   t i c k s t a r t   f o r   t i m e o u t   m a n a g e m e n t   * /  
         t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
         h s c - > R x X f e r S i z e   =   S i z e ;  
         h s c - > R x X f e r C o u n t   =   S i z e ;  
  
         / *   C h e c k   t h e   r e m a i n   d a t a   t o   b e   r e c e i v e d   * /  
         w h i l e ( h s c - > R x X f e r C o u n t   >   0 U )  
         {  
             h s c - > R x X f e r C o u n t - - ;  
             i f ( S M A R T C A R D _ W a i t O n F l a g U n t i l T i m e o u t ( h s c ,   S M A R T C A R D _ F L A G _ R X N E ,   R E S E T ,   t i c k s t a r t ,   T i m e o u t )   ! =   H A L _ O K )  
             {  
                 r e t u r n   H A L _ T I M E O U T ;  
             }  
             * t m p   =   ( u i n t 8 _ t ) ( h s c - > I n s t a n c e - > D R   &   ( u i n t 8 _ t ) 0 x F F U ) ;  
             t m p + + ;  
         }  
  
         / *   A t   e n d   o f   R x   p r o c e s s ,   r e s t o r e   h s c - > R x S t a t e   t o   R e a d y   * /  
         h s c - > R x S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h s c ) ;  
  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f   S e n d   a n   a m o u n t   o f   d a t a   i n   n o n   b l o c k i n g   m o d e  
     *   @ p a r a m     h s c         P o i n t e r   t o   a   S M A R T C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S M A R T C A R D   m o d u l e .  
     *   @ p a r a m     p D a t a     P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e       A m o u n t   o f   d a t a   t o   b e   s e n t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ T r a n s m i t _ I T ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e )  
 {  
     / *   C h e c k   t h a t   a   T x   p r o c e s s   i s   n o t   a l r e a d y   o n g o i n g   * /  
     i f ( h s c - > g S t a t e   = =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y )  
     {  
         i f ( ( p D a t a   = =   N U L L )   | |   ( S i z e   = =   0 U ) )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h s c ) ;  
  
         h s c - > p T x B u f f P t r   =   p D a t a ;  
         h s c - > T x X f e r S i z e   =   S i z e ;  
         h s c - > T x X f e r C o u n t   =   S i z e ;  
  
         h s c - > E r r o r C o d e   =   H A L _ S M A R T C A R D _ E R R O R _ N O N E ;  
         h s c - > g S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ B U S Y _ T X ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h s c ) ;  
  
         / *   E n a b l e   t h e   S M A R T C A R D   P a r i t y   E r r o r   I n t e r r u p t   * /  
         S E T _ B I T ( h s c - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ P E I E ) ;  
  
         / *   D i s a b l e   t h e   S M A R T C A R D   E r r o r   I n t e r r u p t :   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   * /  
         C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
         / *   E n a b l e   t h e   S M A R T C A R D   T r a n s m i t   d a t a   r e g i s t e r   e m p t y   I n t e r r u p t   * /  
         S E T _ B I T ( h s c - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ T X E I E ) ;  
  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f   R e c e i v e   a n   a m o u n t   o f   d a t a   i n   n o n   b l o c k i n g   m o d e  
     *   @ p a r a m     h s c         P o i n t e r   t o   a   S M A R T C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S M A R T C A R D   m o d u l e .  
     *   @ p a r a m     p D a t a     P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e       A m o u n t   o f   d a t a   t o   b e   r e c e i v e d  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ R e c e i v e _ I T ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e )  
 {  
     / *   C h e c k   t h a t   a   R x   p r o c e s s   i s   n o t   a l r e a d y   o n g o i n g   * /  
     i f ( h s c - > R x S t a t e   = =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y )  
     {  
         i f ( ( p D a t a   = =   N U L L )   | |   ( S i z e   = =   0 U ) )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h s c ) ;  
  
         h s c - > p R x B u f f P t r   =   p D a t a ;  
         h s c - > R x X f e r S i z e   =   S i z e ;  
         h s c - > R x X f e r C o u n t   =   S i z e ;  
  
         h s c - > E r r o r C o d e   =   H A L _ S M A R T C A R D _ E R R O R _ N O N E ;  
         h s c - > R x S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ B U S Y _ R X ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h s c ) ;  
  
         / *   E n a b l e   t h e   S M A R T C A R D   P a r i t y   E r r o r   a n d   D a t a   R e g i s t e r   n o t   e m p t y   I n t e r r u p t s   * /  
         S E T _ B I T ( h s c - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ P E I E |   U S A R T _ C R 1 _ R X N E I E ) ;  
  
         / *   E n a b l e   t h e   S M A R T C A R D   E r r o r   I n t e r r u p t :   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   * /  
         S E T _ B I T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f   S e n d   a n   a m o u n t   o f   d a t a   i n   n o n   b l o c k i n g   m o d e  
     *   @ p a r a m     h s c         P o i n t e r   t o   a   S M A R T C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S M A R T C A R D   m o d u l e .  
     *   @ p a r a m     p D a t a     P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e       A m o u n t   o f   d a t a   t o   b e   s e n t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ T r a n s m i t _ D M A ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e )  
 {  
     u i n t 3 2 _ t   * t m p ;  
  
     / *   C h e c k   t h a t   a   T x   p r o c e s s   i s   n o t   a l r e a d y   o n g o i n g   * /  
     i f ( h s c - > g S t a t e   = =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y )  
     {  
         i f ( ( p D a t a   = =   N U L L )   | |   ( S i z e   = =   0 U ) )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h s c ) ;  
  
         h s c - > p T x B u f f P t r   =   p D a t a ;  
         h s c - > T x X f e r S i z e   =   S i z e ;  
         h s c - > T x X f e r C o u n t   =   S i z e ;  
  
         h s c - > E r r o r C o d e   =   H A L _ S M A R T C A R D _ E R R O R _ N O N E ;  
         h s c - > g S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ B U S Y _ T X ;  
  
         / *   S e t   t h e   S M A R T C A R D   D M A   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
         h s c - > h d m a t x - > X f e r C p l t C a l l b a c k   =   S M A R T C A R D _ D M A T r a n s m i t C p l t ;  
  
         / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * /  
         h s c - > h d m a t x - > X f e r E r r o r C a l l b a c k   =   S M A R T C A R D _ D M A E r r o r ;  
  
         / *   S e t   t h e   D M A   a b o r t   c a l l b a c k   * /  
         h s c - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
         / *   E n a b l e   t h e   S M A R T C A R D   t r a n s m i t   D M A   c h a n n e l   * /  
         t m p   =   ( u i n t 3 2 _ t * ) & p D a t a ;  
         H A L _ D M A _ S t a r t _ I T ( h s c - > h d m a t x ,   * ( u i n t 3 2 _ t * ) t m p ,   ( u i n t 3 2 _ t ) & h s c - > I n s t a n c e - > D R ,   S i z e ) ;  
  
           / *   C l e a r   t h e   T C   f l a g   i n   t h e   S R   r e g i s t e r   b y   w r i t i n g   0   t o   i t   * /  
         _ _ H A L _ S M A R T C A R D _ C L E A R _ F L A G ( h s c ,   S M A R T C A R D _ F L A G _ T C ) ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h s c ) ;  
  
         / *   E n a b l e   t h e   D M A   t r a n s f e r   f o r   t r a n s m i t   r e q u e s t   b y   s e t t i n g   t h e   D M A T   b i t  
         i n   t h e   S M A R T C A R D   C R 3   r e g i s t e r   * /  
         S E T _ B I T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f   R e c e i v e   a n   a m o u n t   o f   d a t a   i n   n o n   b l o c k i n g   m o d e  
     *   @ p a r a m     h s c         P o i n t e r   t o   a   S M A R T C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S M A R T C A R D   m o d u l e .  
     *   @ p a r a m     p D a t a     P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e       A m o u n t   o f   d a t a   t o   b e   r e c e i v e d  
     *   @ n o t e       W h e n   t h e   S M A R T C A R D   p a r i t y   i s   e n a b l e d   ( P C E   =   1 )   t h e   d a t a   r e c e i v e d   c o n t a i n   t h e   p a r i t y   b i t . s  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ R e c e i v e _ D M A ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e )  
 {  
     u i n t 3 2 _ t   * t m p ;  
  
     / *   C h e c k   t h a t   a   R x   p r o c e s s   i s   n o t   a l r e a d y   o n g o i n g   * /  
     i f ( h s c - > R x S t a t e   = =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y )  
     {  
         i f ( ( p D a t a   = =   N U L L )   | |   ( S i z e   = =   0 U ) )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h s c ) ;  
  
         h s c - > p R x B u f f P t r   =   p D a t a ;  
         h s c - > R x X f e r S i z e   =   S i z e ;  
  
         h s c - > E r r o r C o d e   =   H A L _ S M A R T C A R D _ E R R O R _ N O N E ;  
         h s c - > R x S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ B U S Y _ R X ;  
  
         / *   S e t   t h e   S M A R T C A R D   D M A   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
         h s c - > h d m a r x - > X f e r C p l t C a l l b a c k   =   S M A R T C A R D _ D M A R e c e i v e C p l t ;  
  
         / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * /  
         h s c - > h d m a r x - > X f e r E r r o r C a l l b a c k   =   S M A R T C A R D _ D M A E r r o r ;  
  
         / *   S e t   t h e   D M A   a b o r t   c a l l b a c k   * /  
         h s c - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
         / *   E n a b l e   t h e   D M A   c h a n n e l   * /  
         t m p   =   ( u i n t 3 2 _ t * ) & p D a t a ;  
         H A L _ D M A _ S t a r t _ I T ( h s c - > h d m a r x ,   ( u i n t 3 2 _ t ) & h s c - > I n s t a n c e - > D R ,   * ( u i n t 3 2 _ t * ) t m p ,   S i z e ) ;  
  
         / *   C l e a r   t h e   O v e r r u n   f l a g   j u s t   b e f o r e   e n a b l i n g   t h e   D M A   R x   r e q u e s t :   c a n   b e   m a n d a t o r y   f o r   t h e   s e c o n d   t r a n s f e r   * /  
         _ _ H A L _ S M A R T C A R D _ C L E A R _ O R E F L A G ( h s c ) ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h s c ) ;  
  
         / *   E n a b l e   t h e   S M A R T C A R D   P a r i t y   E r r o r   I n t e r r u p t   * /  
         S E T _ B I T ( h s c - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ P E I E ) ;  
  
         / *   E n a b l e   t h e   S M A R T C A R D   E r r o r   I n t e r r u p t :   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   * /  
         S E T _ B I T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
         / *   E n a b l e   t h e   D M A   t r a n s f e r   f o r   t h e   r e c e i v e r   r e q u e s t   b y   s e t t i n g   t h e   D M A R   b i t  
         i n   t h e   S M A R T C A R D   C R 3   r e g i s t e r   * /  
         S E T _ B I T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     A b o r t   o n g o i n g   t r a n s f e r s   ( b l o c k i n g   m o d e ) .  
     *   @ p a r a m     h s c   S M A R T C A R D   h a n d l e .  
     *   @ n o t e       T h i s   p r o c e d u r e   c o u l d   b e   u s e d   f o r   a b o r t i n g   a n y   o n g o i n g   t r a n s f e r   s t a r t e d   i n   I n t e r r u p t   o r   D M A   m o d e .  
     *                   T h i s   p r o c e d u r e   p e r f o r m s   f o l l o w i n g   o p e r a t i o n s   :  
     *                       -   D i s a b l e   P P P   I n t e r r u p t s  
     *                       -   D i s a b l e   t h e   D M A   t r a n s f e r   i n   t h e   p e r i p h e r a l   r e g i s t e r   ( i f   e n a b l e d )  
     *                       -   A b o r t   D M A   t r a n s f e r   b y   c a l l i n g   H A L _ D M A _ A b o r t   ( i n   c a s e   o f   t r a n s f e r   i n   D M A   m o d e )  
     *                       -   S e t   h a n d l e   S t a t e   t o   R E A D Y  
     *   @ n o t e       T h i s   p r o c e d u r e   i s   e x e c u t e d   i n   b l o c k i n g   m o d e   :   w h e n   e x i t i n g   f u n c t i o n ,   A b o r t   i s   c o n s i d e r e d   a s   c o m p l e t e d .  
     *   @ r e t v a l   H A L   s t a t u s  
 * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ A b o r t ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c )  
 {  
     / *   D i s a b l e   T X E I E ,   T C I E ,   R X N E ,   P E   a n d   E R R   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   i n t e r r u p t s   * /  
     C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 1 ,   ( U S A R T _ C R 1 _ R X N E I E   |   U S A R T _ C R 1 _ P E I E   |   U S A R T _ C R 1 _ T X E I E   |   U S A R T _ C R 1 _ T C I E ) ) ;  
     C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
     / *   D i s a b l e   t h e   S M A R T C A R D   D M A   T x   r e q u e s t   i f   e n a b l e d   * /  
     i f ( H A L _ I S _ B I T _ S E T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) )  
     {  
         C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
  
         / *   A b o r t   t h e   S M A R T C A R D   D M A   T x   c h a n n e l   :   u s e   b l o c k i n g   D M A   A b o r t   A P I   ( n o   c a l l b a c k )   * /  
         i f ( h s c - > h d m a t x   ! =   N U L L )  
         {  
             / *   S e t   t h e   S M A R T C A R D   D M A   A b o r t   c a l l b a c k   t o   N u l l .  
                   N o   c a l l   b a c k   e x e c u t i o n   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
             h s c - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
             H A L _ D M A _ A b o r t ( h s c - > h d m a t x ) ;  
         }  
     }  
  
     / *   D i s a b l e   t h e   S M A R T C A R D   D M A   R x   r e q u e s t   i f   e n a b l e d   * /  
     i f ( H A L _ I S _ B I T _ S E T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) )  
     {  
         C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
  
         / *   A b o r t   t h e   S M A R T C A R D   D M A   R x   c h a n n e l   :   u s e   b l o c k i n g   D M A   A b o r t   A P I   ( n o   c a l l b a c k )   * /  
         i f ( h s c - > h d m a r x   ! =   N U L L )  
         {  
             / *   S e t   t h e   S M A R T C A R D   D M A   A b o r t   c a l l b a c k   t o   N u l l .  
                   N o   c a l l   b a c k   e x e c u t i o n   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
             h s c - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
             H A L _ D M A _ A b o r t ( h s c - > h d m a r x ) ;  
         }  
     }  
  
     / *   R e s e t   T x   a n d   R x   t r a n s f e r   c o u n t e r s   * /  
     h s c - > T x X f e r C o u n t   =   0 x 0 0 U ;  
     h s c - > R x X f e r C o u n t   =   0 x 0 0 U ;  
  
     / *   R e s e t   E r r o r C o d e   * /  
     h s c - > E r r o r C o d e   =   H A L _ S M A R T C A R D _ E R R O R _ N O N E ;  
  
     / *   R e s t o r e   h s c - > R x S t a t e   a n d   h s c - > g S t a t e   t o   R e a d y   * /  
     h s c - > R x S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y ;  
     h s c - > g S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     A b o r t   o n g o i n g   T r a n s m i t   t r a n s f e r   ( b l o c k i n g   m o d e ) .  
     *   @ p a r a m     h s c   S M A R T C A R D   h a n d l e .  
     *   @ n o t e       T h i s   p r o c e d u r e   c o u l d   b e   u s e d   f o r   a b o r t i n g   a n y   o n g o i n g   t r a n s f e r   s t a r t e d   i n   I n t e r r u p t   o r   D M A   m o d e .  
     *                   T h i s   p r o c e d u r e   p e r f o r m s   f o l l o w i n g   o p e r a t i o n s   :  
     *                       -   D i s a b l e   S M A R T C A R D   I n t e r r u p t s   ( T x )  
     *                       -   D i s a b l e   t h e   D M A   t r a n s f e r   i n   t h e   p e r i p h e r a l   r e g i s t e r   ( i f   e n a b l e d )  
     *                       -   A b o r t   D M A   t r a n s f e r   b y   c a l l i n g   H A L _ D M A _ A b o r t   ( i n   c a s e   o f   t r a n s f e r   i n   D M A   m o d e )  
     *                       -   S e t   h a n d l e   S t a t e   t o   R E A D Y  
     *   @ n o t e       T h i s   p r o c e d u r e   i s   e x e c u t e d   i n   b l o c k i n g   m o d e   :   w h e n   e x i t i n g   f u n c t i o n ,   A b o r t   i s   c o n s i d e r e d   a s   c o m p l e t e d .  
     *   @ r e t v a l   H A L   s t a t u s  
 * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ A b o r t T r a n s m i t ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c )  
 {  
     / *   D i s a b l e   T X E I E   a n d   T C I E   i n t e r r u p t s   * /  
     C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 1 ,   ( U S A R T _ C R 1 _ T X E I E   |   U S A R T _ C R 1 _ T C I E ) ) ;  
  
     / *   D i s a b l e   t h e   S M A R T C A R D   D M A   T x   r e q u e s t   i f   e n a b l e d   * /  
     i f ( H A L _ I S _ B I T _ S E T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) )  
     {  
         C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
  
         / *   A b o r t   t h e   S M A R T C A R D   D M A   T x   c h a n n e l   :   u s e   b l o c k i n g   D M A   A b o r t   A P I   ( n o   c a l l b a c k )   * /  
         i f ( h s c - > h d m a t x   ! =   N U L L )  
         {  
             / *   S e t   t h e   S M A R T C A R D   D M A   A b o r t   c a l l b a c k   t o   N u l l .  
                   N o   c a l l   b a c k   e x e c u t i o n   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
             h s c - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
             H A L _ D M A _ A b o r t ( h s c - > h d m a t x ) ;  
         }  
     }  
  
     / *   R e s e t   T x   t r a n s f e r   c o u n t e r   * /  
     h s c - > T x X f e r C o u n t   =   0 x 0 0 U ;  
  
     / *   R e s t o r e   h s c - > g S t a t e   t o   R e a d y   * /  
     h s c - > g S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     A b o r t   o n g o i n g   R e c e i v e   t r a n s f e r   ( b l o c k i n g   m o d e ) .  
     *   @ p a r a m     h s c   S M A R T C A R D   h a n d l e .  
     *   @ n o t e       T h i s   p r o c e d u r e   c o u l d   b e   u s e d   f o r   a b o r t i n g   a n y   o n g o i n g   t r a n s f e r   s t a r t e d   i n   I n t e r r u p t   o r   D M A   m o d e .  
     *                   T h i s   p r o c e d u r e   p e r f o r m s   f o l l o w i n g   o p e r a t i o n s   :  
     *                       -   D i s a b l e   P P P   I n t e r r u p t s  
     *                       -   D i s a b l e   t h e   D M A   t r a n s f e r   i n   t h e   p e r i p h e r a l   r e g i s t e r   ( i f   e n a b l e d )  
     *                       -   A b o r t   D M A   t r a n s f e r   b y   c a l l i n g   H A L _ D M A _ A b o r t   ( i n   c a s e   o f   t r a n s f e r   i n   D M A   m o d e )  
     *                       -   S e t   h a n d l e   S t a t e   t o   R E A D Y  
     *   @ n o t e       T h i s   p r o c e d u r e   i s   e x e c u t e d   i n   b l o c k i n g   m o d e   :   w h e n   e x i t i n g   f u n c t i o n ,   A b o r t   i s   c o n s i d e r e d   a s   c o m p l e t e d .  
     *   @ r e t v a l   H A L   s t a t u s  
 * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ A b o r t R e c e i v e ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c )  
 {  
     / *   D i s a b l e   R X N E ,   P E   a n d   E R R   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   i n t e r r u p t s   * /  
     C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 1 ,   ( U S A R T _ C R 1 _ R X N E I E   |   U S A R T _ C R 1 _ P E I E ) ) ;  
     C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
     / *   D i s a b l e   t h e   S M A R T C A R D   D M A   R x   r e q u e s t   i f   e n a b l e d   * /  
     i f ( H A L _ I S _ B I T _ S E T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) )  
     {  
         C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
  
         / *   A b o r t   t h e   S M A R T C A R D   D M A   R x   c h a n n e l   :   u s e   b l o c k i n g   D M A   A b o r t   A P I   ( n o   c a l l b a c k )   * /  
         i f ( h s c - > h d m a r x   ! =   N U L L )  
         {  
             / *   S e t   t h e   S M A R T C A R D   D M A   A b o r t   c a l l b a c k   t o   N u l l .  
                   N o   c a l l   b a c k   e x e c u t i o n   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
             h s c - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
             H A L _ D M A _ A b o r t ( h s c - > h d m a r x ) ;  
         }  
     }  
  
     / *   R e s e t   R x   t r a n s f e r   c o u n t e r   * /  
     h s c - > R x X f e r C o u n t   =   0 x 0 0 U ;  
  
     / *   R e s t o r e   h s c - > R x S t a t e   t o   R e a d y   * /  
     h s c - > R x S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     A b o r t   o n g o i n g   t r a n s f e r s   ( I n t e r r u p t   m o d e ) .  
     *   @ p a r a m     h s c   S M A R T C A R D   h a n d l e .  
     *   @ n o t e       T h i s   p r o c e d u r e   c o u l d   b e   u s e d   f o r   a b o r t i n g   a n y   o n g o i n g   t r a n s f e r   s t a r t e d   i n   I n t e r r u p t   o r   D M A   m o d e .  
     *                   T h i s   p r o c e d u r e   p e r f o r m s   f o l l o w i n g   o p e r a t i o n s   :  
     *                       -   D i s a b l e   P P P   I n t e r r u p t s  
     *                       -   D i s a b l e   t h e   D M A   t r a n s f e r   i n   t h e   p e r i p h e r a l   r e g i s t e r   ( i f   e n a b l e d )  
     *                       -   A b o r t   D M A   t r a n s f e r   b y   c a l l i n g   H A L _ D M A _ A b o r t _ I T   ( i n   c a s e   o f   t r a n s f e r   i n   D M A   m o d e )  
     *                       -   S e t   h a n d l e   S t a t e   t o   R E A D Y  
     *                       -   A t   a b o r t   c o m p l e t i o n ,   c a l l   u s e r   a b o r t   c o m p l e t e   c a l l b a c k  
     *   @ n o t e       T h i s   p r o c e d u r e   i s   e x e c u t e d   i n   I n t e r r u p t   m o d e ,   m e a n i n g   t h a t   a b o r t   p r o c e d u r e   c o u l d   b e  
     *                   c o n s i d e r e d   a s   c o m p l e t e d   o n l y   w h e n   u s e r   a b o r t   c o m p l e t e   c a l l b a c k   i s   e x e c u t e d   ( n o t   w h e n   e x i t i n g   f u n c t i o n ) .  
     *   @ r e t v a l   H A L   s t a t u s  
 * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ A b o r t _ I T ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c )  
 {  
     u i n t 3 2 _ t   A b o r t C p l t   =   0 x 0 1 U ;  
  
     / *   D i s a b l e   T X E I E ,   T C I E ,   R X N E ,   P E   a n d   E R R   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   i n t e r r u p t s   * /  
     C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 1 ,   ( U S A R T _ C R 1 _ R X N E I E   |   U S A R T _ C R 1 _ P E I E   |   U S A R T _ C R 1 _ T X E I E   |   U S A R T _ C R 1 _ T C I E ) ) ;  
     C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
     / *   I f   D M A   T x   a n d / o r   D M A   R x   H a n d l e s   a r e   a s s o c i a t e d   t o   S M A R T C A R D   H a n d l e ,   D M A   A b o r t   c o m p l e t e   c a l l b a c k s   s h o u l d   b e   i n i t i a l i s e d  
           b e f o r e   a n y   c a l l   t o   D M A   A b o r t   f u n c t i o n s   * /  
     / *   D M A   T x   H a n d l e   i s   v a l i d   * /  
     i f ( h s c - > h d m a t x   ! =   N U L L )  
     {  
         / *   S e t   D M A   A b o r t   C o m p l e t e   c a l l b a c k   i f   S M A R T C A R D   D M A   T x   r e q u e s t   i f   e n a b l e d .  
               O t h e r w i s e ,   s e t   i t   t o   N U L L   * /  
         i f ( H A L _ I S _ B I T _ S E T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) )  
         {  
             h s c - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   S M A R T C A R D _ D M A T x A b o r t C a l l b a c k ;  
         }  
         e l s e  
         {  
             h s c - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
         }  
     }  
     / *   D M A   R x   H a n d l e   i s   v a l i d   * /  
     i f ( h s c - > h d m a r x   ! =   N U L L )  
     {  
         / *   S e t   D M A   A b o r t   C o m p l e t e   c a l l b a c k   i f   S M A R T C A R D   D M A   R x   r e q u e s t   i f   e n a b l e d .  
               O t h e r w i s e ,   s e t   i t   t o   N U L L   * /  
         i f ( H A L _ I S _ B I T _ S E T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) )  
         {  
             h s c - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   S M A R T C A R D _ D M A R x A b o r t C a l l b a c k ;  
         }  
         e l s e  
         {  
             h s c - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
         }  
     }  
  
     / *   D i s a b l e   t h e   S M A R T C A R D   D M A   T x   r e q u e s t   i f   e n a b l e d   * /  
     i f ( H A L _ I S _ B I T _ S E T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) )  
     {  
         / *   D i s a b l e   D M A   T x   a t   S M A R T C A R D   l e v e l   * /  
         C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
  
         / *   A b o r t   t h e   S M A R T C A R D   D M A   T x   c h a n n e l   :   u s e   n o n   b l o c k i n g   D M A   A b o r t   A P I   ( c a l l b a c k )   * /  
         i f ( h s c - > h d m a t x   ! =   N U L L )  
         {  
             / *   S M A R T C A R D   T x   D M A   A b o r t   c a l l b a c k   h a s   a l r e a d y   b e e n   i n i t i a l i s e d   :  
                   w i l l   l e a d   t o   c a l l   H A L _ S M A R T C A R D _ A b o r t C p l t C a l l b a c k ( )   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
  
             / *   A b o r t   D M A   T X   * /  
             i f ( H A L _ D M A _ A b o r t _ I T ( h s c - > h d m a t x )   ! =   H A L _ O K )  
             {  
                 h s c - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
             }  
             e l s e  
             {  
                 A b o r t C p l t   =   0 x 0 0 U ;  
             }  
         }  
     }  
  
     / *   D i s a b l e   t h e   S M A R T C A R D   D M A   R x   r e q u e s t   i f   e n a b l e d   * /  
     i f ( H A L _ I S _ B I T _ S E T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) )  
     {  
         C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
  
         / *   A b o r t   t h e   S M A R T C A R D   D M A   R x   c h a n n e l   :   u s e   n o n   b l o c k i n g   D M A   A b o r t   A P I   ( c a l l b a c k )   * /  
         i f ( h s c - > h d m a r x   ! =   N U L L )  
         {  
             / *   S M A R T C A R D   R x   D M A   A b o r t   c a l l b a c k   h a s   a l r e a d y   b e e n   i n i t i a l i s e d   :  
                   w i l l   l e a d   t o   c a l l   H A L _ S M A R T C A R D _ A b o r t C p l t C a l l b a c k ( )   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
  
             / *   A b o r t   D M A   R X   * /  
             i f ( H A L _ D M A _ A b o r t _ I T ( h s c - > h d m a r x )   ! =   H A L _ O K )  
             {  
                 h s c - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
                 A b o r t C p l t   =   0 x 0 1 U ;  
             }  
             e l s e  
             {  
                 A b o r t C p l t   =   0 x 0 0 U ;  
             }  
         }  
     }  
  
     / *   i f   n o   D M A   a b o r t   c o m p l e t e   c a l l b a c k   e x e c u t i o n   i s   r e q u i r e d   = >   c a l l   u s e r   A b o r t   C o m p l e t e   c a l l b a c k   * /  
     i f ( A b o r t C p l t   = =   0 x 0 1 U )  
     {  
         / *   R e s e t   T x   a n d   R x   t r a n s f e r   c o u n t e r s   * /  
         h s c - > T x X f e r C o u n t   =   0 x 0 0 U ;  
         h s c - > R x X f e r C o u n t   =   0 x 0 0 U ;  
  
         / *   R e s e t   E r r o r C o d e   * /  
         h s c - > E r r o r C o d e   =   H A L _ S M A R T C A R D _ E R R O R _ N O N E ;  
  
         / *   R e s t o r e   h s c - > g S t a t e   a n d   h s c - > R x S t a t e   t o   R e a d y   * /  
         h s c - > g S t a t e     =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y ;  
         h s c - > R x S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y ;  
  
         / *   A s   n o   D M A   t o   b e   a b o r t e d ,   c a l l   d i r e c t l y   u s e r   A b o r t   c o m p l e t e   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         / *   C a l l   r e g i s t e r e d   A b o r t   c o m p l e t e   c a l l b a c k   * /  
         h s c - > A b o r t C p l t C a l l b a c k ( h s c ) ;  
 # e l s e  
         / *   C a l l   l e g a c y   w e a k   A b o r t   c o m p l e t e   c a l l b a c k   * /  
         H A L _ S M A R T C A R D _ A b o r t C p l t C a l l b a c k ( h s c ) ;  
 # e n d i f   / *   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K   * /  
     }  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     A b o r t   o n g o i n g   T r a n s m i t   t r a n s f e r   ( I n t e r r u p t   m o d e ) .  
     *   @ p a r a m     h s c   S M A R T C A R D   h a n d l e .  
     *   @ n o t e       T h i s   p r o c e d u r e   c o u l d   b e   u s e d   f o r   a b o r t i n g   a n y   o n g o i n g   t r a n s f e r   s t a r t e d   i n   I n t e r r u p t   o r   D M A   m o d e .  
     *                   T h i s   p r o c e d u r e   p e r f o r m s   f o l l o w i n g   o p e r a t i o n s   :  
     *                       -   D i s a b l e   S M A R T C A R D   I n t e r r u p t s   ( T x )  
     *                       -   D i s a b l e   t h e   D M A   t r a n s f e r   i n   t h e   p e r i p h e r a l   r e g i s t e r   ( i f   e n a b l e d )  
     *                       -   A b o r t   D M A   t r a n s f e r   b y   c a l l i n g   H A L _ D M A _ A b o r t _ I T   ( i n   c a s e   o f   t r a n s f e r   i n   D M A   m o d e )  
     *                       -   S e t   h a n d l e   S t a t e   t o   R E A D Y  
     *                       -   A t   a b o r t   c o m p l e t i o n ,   c a l l   u s e r   a b o r t   c o m p l e t e   c a l l b a c k  
     *   @ n o t e       T h i s   p r o c e d u r e   i s   e x e c u t e d   i n   I n t e r r u p t   m o d e ,   m e a n i n g   t h a t   a b o r t   p r o c e d u r e   c o u l d   b e  
     *                   c o n s i d e r e d   a s   c o m p l e t e d   o n l y   w h e n   u s e r   a b o r t   c o m p l e t e   c a l l b a c k   i s   e x e c u t e d   ( n o t   w h e n   e x i t i n g   f u n c t i o n ) .  
     *   @ r e t v a l   H A L   s t a t u s  
 * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ A b o r t T r a n s m i t _ I T ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c )  
 {  
     / *   D i s a b l e   T X E I E   a n d   T C I E   i n t e r r u p t s   * /  
     C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 1 ,   ( U S A R T _ C R 1 _ T X E I E   |   U S A R T _ C R 1 _ T C I E ) ) ;  
  
     / *   D i s a b l e   t h e   S M A R T C A R D   D M A   T x   r e q u e s t   i f   e n a b l e d   * /  
     i f ( H A L _ I S _ B I T _ S E T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) )  
     {  
         C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
  
         / *   A b o r t   t h e   S M A R T C A R D   D M A   T x   c h a n n e l   :   u s e   b l o c k i n g   D M A   A b o r t   A P I   ( n o   c a l l b a c k )   * /  
         i f ( h s c - > h d m a t x   ! =   N U L L )  
         {  
             / *   S e t   t h e   S M A R T C A R D   D M A   A b o r t   c a l l b a c k   :  
                   w i l l   l e a d   t o   c a l l   H A L _ S M A R T C A R D _ A b o r t C p l t C a l l b a c k ( )   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
             h s c - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   S M A R T C A R D _ D M A T x O n l y A b o r t C a l l b a c k ;  
  
             / *   A b o r t   D M A   T X   * /  
             i f ( H A L _ D M A _ A b o r t _ I T ( h s c - > h d m a t x )   ! =   H A L _ O K )  
             {  
                 / *   C a l l   D i r e c t l y   h s c - > h d m a t x - > X f e r A b o r t C a l l b a c k   f u n c t i o n   i n   c a s e   o f   e r r o r   * /  
                 h s c - > h d m a t x - > X f e r A b o r t C a l l b a c k ( h s c - > h d m a t x ) ;  
             }  
         }  
         e l s e  
         {  
             / *   R e s e t   T x   t r a n s f e r   c o u n t e r   * /  
             h s c - > T x X f e r C o u n t   =   0 x 0 0 U ;  
  
             / *   R e s t o r e   h s c - > g S t a t e   t o   R e a d y   * /  
             h s c - > g S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y ;  
  
             / *   A s   n o   D M A   t o   b e   a b o r t e d ,   c a l l   d i r e c t l y   u s e r   A b o r t   c o m p l e t e   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             / *   C a l l   r e g i s t e r e d   A b o r t   T r a n s m i t   C o m p l e t e   C a l l b a c k   * /  
             h s c - > A b o r t T r a n s m i t C p l t C a l l b a c k ( h s c ) ;  
 # e l s e  
             / *   C a l l   l e g a c y   w e a k   A b o r t   T r a n s m i t   C o m p l e t e   C a l l b a c k   * /  
             H A L _ S M A R T C A R D _ A b o r t T r a n s m i t C p l t C a l l b a c k ( h s c ) ;  
 # e n d i f   / *   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K   * /  
         }  
     }  
     e l s e  
     {  
         / *   R e s e t   T x   t r a n s f e r   c o u n t e r   * /  
         h s c - > T x X f e r C o u n t   =   0 x 0 0 U ;  
  
         / *   R e s t o r e   h s c - > g S t a t e   t o   R e a d y   * /  
         h s c - > g S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y ;  
  
         / *   A s   n o   D M A   t o   b e   a b o r t e d ,   c a l l   d i r e c t l y   u s e r   A b o r t   c o m p l e t e   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         / *   C a l l   r e g i s t e r e d   A b o r t   T r a n s m i t   C o m p l e t e   C a l l b a c k   * /  
         h s c - > A b o r t T r a n s m i t C p l t C a l l b a c k ( h s c ) ;  
 # e l s e  
         / *   C a l l   l e g a c y   w e a k   A b o r t   T r a n s m i t   C o m p l e t e   C a l l b a c k   * /  
         H A L _ S M A R T C A R D _ A b o r t T r a n s m i t C p l t C a l l b a c k ( h s c ) ;  
 # e n d i f   / *   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K   * /  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     A b o r t   o n g o i n g   R e c e i v e   t r a n s f e r   ( I n t e r r u p t   m o d e ) .  
     *   @ p a r a m     h s c   S M A R T C A R D   h a n d l e .  
     *   @ n o t e       T h i s   p r o c e d u r e   c o u l d   b e   u s e d   f o r   a b o r t i n g   a n y   o n g o i n g   t r a n s f e r   s t a r t e d   i n   I n t e r r u p t   o r   D M A   m o d e .  
     *                   T h i s   p r o c e d u r e   p e r f o r m s   f o l l o w i n g   o p e r a t i o n s   :  
     *                       -   D i s a b l e   S M A R T C A R D   I n t e r r u p t s   ( R x )  
     *                       -   D i s a b l e   t h e   D M A   t r a n s f e r   i n   t h e   p e r i p h e r a l   r e g i s t e r   ( i f   e n a b l e d )  
     *                       -   A b o r t   D M A   t r a n s f e r   b y   c a l l i n g   H A L _ D M A _ A b o r t _ I T   ( i n   c a s e   o f   t r a n s f e r   i n   D M A   m o d e )  
     *                       -   S e t   h a n d l e   S t a t e   t o   R E A D Y  
     *                       -   A t   a b o r t   c o m p l e t i o n ,   c a l l   u s e r   a b o r t   c o m p l e t e   c a l l b a c k  
     *   @ n o t e       T h i s   p r o c e d u r e   i s   e x e c u t e d   i n   I n t e r r u p t   m o d e ,   m e a n i n g   t h a t   a b o r t   p r o c e d u r e   c o u l d   b e  
     *                   c o n s i d e r e d   a s   c o m p l e t e d   o n l y   w h e n   u s e r   a b o r t   c o m p l e t e   c a l l b a c k   i s   e x e c u t e d   ( n o t   w h e n   e x i t i n g   f u n c t i o n ) .  
     *   @ r e t v a l   H A L   s t a t u s  
 * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ A b o r t R e c e i v e _ I T ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c )  
 {  
     / *   D i s a b l e   R X N E ,   P E   a n d   E R R   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   i n t e r r u p t s   * /  
     C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 1 ,   ( U S A R T _ C R 1 _ R X N E I E   |   U S A R T _ C R 1 _ P E I E ) ) ;  
     C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
     / *   D i s a b l e   t h e   S M A R T C A R D   D M A   R x   r e q u e s t   i f   e n a b l e d   * /  
     i f ( H A L _ I S _ B I T _ S E T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) )  
     {  
         C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
  
         / *   A b o r t   t h e   S M A R T C A R D   D M A   R x   c h a n n e l   :   u s e   b l o c k i n g   D M A   A b o r t   A P I   ( n o   c a l l b a c k )   * /  
         i f ( h s c - > h d m a r x   ! =   N U L L )  
         {  
             / *   S e t   t h e   S M A R T C A R D   D M A   A b o r t   c a l l b a c k   :  
                   w i l l   l e a d   t o   c a l l   H A L _ S M A R T C A R D _ A b o r t C p l t C a l l b a c k ( )   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
             h s c - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   S M A R T C A R D _ D M A R x O n l y A b o r t C a l l b a c k ;  
  
             / *   A b o r t   D M A   R X   * /  
             i f ( H A L _ D M A _ A b o r t _ I T ( h s c - > h d m a r x )   ! =   H A L _ O K )  
             {  
                 / *   C a l l   D i r e c t l y   h s c - > h d m a r x - > X f e r A b o r t C a l l b a c k   f u n c t i o n   i n   c a s e   o f   e r r o r   * /  
                 h s c - > h d m a r x - > X f e r A b o r t C a l l b a c k ( h s c - > h d m a r x ) ;  
             }  
         }  
         e l s e  
         {  
             / *   R e s e t   R x   t r a n s f e r   c o u n t e r   * /  
             h s c - > R x X f e r C o u n t   =   0 x 0 0 U ;  
  
             / *   R e s t o r e   h s c - > R x S t a t e   t o   R e a d y   * /  
             h s c - > R x S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y ;  
  
             / *   A s   n o   D M A   t o   b e   a b o r t e d ,   c a l l   d i r e c t l y   u s e r   A b o r t   c o m p l e t e   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             / *   C a l l   r e g i s t e r e d   A b o r t   R e c e i v e   C o m p l e t e   C a l l b a c k   * /  
             h s c - > A b o r t R e c e i v e C p l t C a l l b a c k ( h s c ) ;  
 # e l s e  
             / *   C a l l   l e g a c y   w e a k   A b o r t   R e c e i v e   C o m p l e t e   C a l l b a c k   * /  
             H A L _ S M A R T C A R D _ A b o r t R e c e i v e C p l t C a l l b a c k ( h s c ) ;  
 # e n d i f   / *   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K   * /  
         }  
     }  
     e l s e  
     {  
         / *   R e s e t   R x   t r a n s f e r   c o u n t e r   * /  
         h s c - > R x X f e r C o u n t   =   0 x 0 0 U ;  
  
         / *   R e s t o r e   h s c - > R x S t a t e   t o   R e a d y   * /  
         h s c - > R x S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y ;  
  
         / *   A s   n o   D M A   t o   b e   a b o r t e d ,   c a l l   d i r e c t l y   u s e r   A b o r t   c o m p l e t e   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         / *   C a l l   r e g i s t e r e d   A b o r t   R e c e i v e   C o m p l e t e   C a l l b a c k   * /  
         h s c - > A b o r t R e c e i v e C p l t C a l l b a c k ( h s c ) ;  
 # e l s e  
         / *   C a l l   l e g a c y   w e a k   A b o r t   R e c e i v e   C o m p l e t e   C a l l b a c k   * /  
         H A L _ S M A R T C A R D _ A b o r t R e c e i v e C p l t C a l l b a c k ( h s c ) ;  
 # e n d i f   / *   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K   * /  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f   T h i s   f u n c t i o n   h a n d l e s   S M A R T C A R D   i n t e r r u p t   r e q u e s t .  
     *   @ p a r a m     h s c         P o i n t e r   t o   a   S M A R T C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S M A R T C A R D   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ S M A R T C A R D _ I R Q H a n d l e r ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c )  
 {  
     u i n t 3 2 _ t   i s r f l a g s       =   R E A D _ R E G ( h s c - > I n s t a n c e - > S R ) ;  
     u i n t 3 2 _ t   c r 1 i t s           =   R E A D _ R E G ( h s c - > I n s t a n c e - > C R 1 ) ;  
     u i n t 3 2 _ t   c r 3 i t s           =   R E A D _ R E G ( h s c - > I n s t a n c e - > C R 3 ) ;  
     u i n t 3 2 _ t   d m a r e q u e s t   =   0 x 0 0 U ;  
     u i n t 3 2 _ t   e r r o r f l a g s   =   0 x 0 0 U ;  
  
     / *   I f   n o   e r r o r   o c c u r s   * /  
     e r r o r f l a g s   =   ( i s r f l a g s   &   ( u i n t 3 2 _ t ) ( U S A R T _ S R _ P E   |   U S A R T _ S R _ F E   |   U S A R T _ S R _ O R E   |   U S A R T _ S R _ N E ) ) ;  
     i f ( e r r o r f l a g s   = =   R E S E T )  
     {  
         / *   S M A R T C A R D   i n   m o d e   R e c e i v e r   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
         i f ( ( ( i s r f l a g s   &   U S A R T _ S R _ R X N E )   ! =   R E S E T )   & &   ( ( c r 1 i t s   &   U S A R T _ C R 1 _ R X N E I E )   ! =   R E S E T ) )  
         {  
             S M A R T C A R D _ R e c e i v e _ I T ( h s c ) ;  
             r e t u r n ;  
         }  
     }  
  
     / *   I f   s o m e   e r r o r s   o c c u r   * /  
     i f ( ( e r r o r f l a g s   ! =   R E S E T )   & &   ( ( ( c r 3 i t s   &   U S A R T _ C R 3 _ E I E )   ! =   R E S E T )   | |   ( ( c r 1 i t s   &   ( U S A R T _ C R 1 _ R X N E I E   |   U S A R T _ C R 1 _ P E I E ) )   ! =   R E S E T ) ) )  
     {  
         / *   S M A R T C A R D   p a r i t y   e r r o r   i n t e r r u p t   o c c u r r e d   - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
         i f ( ( ( i s r f l a g s   &   S M A R T C A R D _ F L A G _ P E )   ! =   R E S E T )   & &   ( ( c r 1 i t s   &   U S A R T _ C R 1 _ P E I E )   ! =   R E S E T ) )  
         {  
             h s c - > E r r o r C o d e   | =   H A L _ S M A R T C A R D _ E R R O R _ P E ;  
         }  
  
         / *   S M A R T C A R D   f r a m e   e r r o r   i n t e r r u p t   o c c u r r e d   - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
         i f ( ( ( i s r f l a g s   &   S M A R T C A R D _ F L A G _ F E )   ! =   R E S E T )   & &   ( ( c r 3 i t s   &   U S A R T _ C R 3 _ E I E )   ! =   R E S E T ) )  
         {  
             h s c - > E r r o r C o d e   | =   H A L _ S M A R T C A R D _ E R R O R _ F E ;  
         }  
  
         / *   S M A R T C A R D   n o i s e   e r r o r   i n t e r r u p t   o c c u r r e d   - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
         i f ( ( ( i s r f l a g s   &   S M A R T C A R D _ F L A G _ N E )   ! =   R E S E T )   & &   ( ( c r 3 i t s   &   U S A R T _ C R 3 _ E I E )   ! =   R E S E T ) )  
         {  
             h s c - > E r r o r C o d e   | =   H A L _ S M A R T C A R D _ E R R O R _ N E ;  
         }  
  
         / *   S M A R T C A R D   O v e r - R u n   i n t e r r u p t   o c c u r r e d   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
         i f ( ( ( i s r f l a g s   &   S M A R T C A R D _ F L A G _ O R E )   ! =   R E S E T )   & &   ( ( ( c r 1 i t s   &   U S A R T _ C R 1 _ R X N E I E )   ! =   R E S E T )   | |   ( ( c r 3 i t s   &   U S A R T _ C R 3 _ E I E )   ! =   R E S E T ) ) )  
         {  
             h s c - > E r r o r C o d e   | =   H A L _ S M A R T C A R D _ E R R O R _ O R E ;  
         }  
         / *   C a l l   t h e   E r r o r   c a l l   B a c k   i n   c a s e   o f   E r r o r s   - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
         i f ( h s c - > E r r o r C o d e   ! =   H A L _ S M A R T C A R D _ E R R O R _ N O N E )  
         {  
             / *   S M A R T C A R D   i n   m o d e   R e c e i v e r   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
             i f ( ( ( i s r f l a g s   &   U S A R T _ S R _ R X N E )   ! =   R E S E T )   & &   ( ( c r 1 i t s   &   U S A R T _ C R 1 _ R X N E I E )   ! =   R E S E T ) )  
             {  
                 S M A R T C A R D _ R e c e i v e _ I T ( h s c ) ;  
             }  
  
             / *   I f   O v e r r u n   e r r o r   o c c u r s ,   o r   i f   a n y   e r r o r   o c c u r s   i n   D M A   m o d e   r e c e p t i o n ,  
                   c o n s i d e r   e r r o r   a s   b l o c k i n g   * /  
             d m a r e q u e s t   =   H A L _ I S _ B I T _ S E T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
             i f ( ( ( h s c - > E r r o r C o d e   &   H A L _ S M A R T C A R D _ E R R O R _ O R E )   ! =   R E S E T )   | |   d m a r e q u e s t )  
             {  
                 / *   B l o c k i n g   e r r o r   :   t r a n s f e r   i s   a b o r t e d  
                     S e t   t h e   S M A R T C A R D   s t a t e   r e a d y   t o   b e   a b l e   t o   s t a r t   a g a i n   t h e   p r o c e s s ,  
                     D i s a b l e   R x   I n t e r r u p t s ,   a n d   d i s a b l e   R x   D M A   r e q u e s t ,   i f   o n g o i n g   * /  
                 S M A R T C A R D _ E n d R x T r a n s f e r ( h s c ) ;  
                 / *   D i s a b l e   t h e   S M A R T C A R D   D M A   R x   r e q u e s t   i f   e n a b l e d   * /  
                 i f ( H A L _ I S _ B I T _ S E T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) )  
                 {  
                     C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
  
                     / *   A b o r t   t h e   S M A R T C A R D   D M A   R x   c h a n n e l   * /  
                     i f ( h s c - > h d m a r x   ! =   N U L L )  
                     {  
                         / *   S e t   t h e   S M A R T C A R D   D M A   A b o r t   c a l l b a c k   :  
                             w i l l   l e a d   t o   c a l l   H A L _ S M A R T C A R D _ E r r o r C a l l b a c k ( )   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
                         h s c - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   S M A R T C A R D _ D M A A b o r t O n E r r o r ;  
  
                       i f ( H A L _ D M A _ A b o r t _ I T ( h s c - > h d m a r x )   ! =   H A L _ O K )  
                         {  
                             / *   C a l l   D i r e c t l y   X f e r A b o r t C a l l b a c k   f u n c t i o n   i n   c a s e   o f   e r r o r   * /  
                             h s c - > h d m a r x - > X f e r A b o r t C a l l b a c k ( h s c - > h d m a r x ) ;  
                         }  
                     }  
                     e l s e  
                     {  
 # i f   ( U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
                         / *   C a l l   r e g i s t e r e d   u s e r   e r r o r   c a l l b a c k   * /  
                         h s c - > E r r o r C a l l b a c k ( h s c ) ;  
 # e l s e  
                         / *   C a l l   l e g a c y   w e a k   u s e r   e r r o r   c a l l b a c k   * /  
                         H A L _ S M A R T C A R D _ E r r o r C a l l b a c k ( h s c ) ;  
 # e n d i f   / *   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K   * /  
                     }  
                 }  
                 e l s e  
                 {  
 # i f   ( U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
                     / *   C a l l   r e g i s t e r e d   u s e r   e r r o r   c a l l b a c k   * /  
                     h s c - > E r r o r C a l l b a c k ( h s c ) ;  
 # e l s e  
                     / *   C a l l   l e g a c y   w e a k   u s e r   e r r o r   c a l l b a c k   * /  
                     H A L _ S M A R T C A R D _ E r r o r C a l l b a c k ( h s c ) ;  
 # e n d i f   / *   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K   * /  
                 }  
             }  
             e l s e  
             {  
                 / *   N o n   B l o c k i n g   e r r o r   :   t r a n s f e r   c o u l d   g o   o n .  
                       E r r o r   i s   n o t i f i e d   t o   u s e r   t h r o u g h   u s e r   e r r o r   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
                 / *   C a l l   r e g i s t e r e d   u s e r   e r r o r   c a l l b a c k   * /  
                 h s c - > E r r o r C a l l b a c k ( h s c ) ;  
 # e l s e  
                 / *   C a l l   l e g a c y   w e a k   u s e r   e r r o r   c a l l b a c k   * /  
                 H A L _ S M A R T C A R D _ E r r o r C a l l b a c k ( h s c ) ;  
 # e n d i f   / *   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K   * /  
                 h s c - > E r r o r C o d e   =   H A L _ S M A R T C A R D _ E R R O R _ N O N E ;  
             }  
         }  
         r e t u r n ;  
     }   / *   E n d   i f   s o m e   e r r o r   o c c u r s   * /  
  
     / *   S M A R T C A R D   i n   m o d e   T r a n s m i t t e r   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f ( ( ( i s r f l a g s   &   S M A R T C A R D _ F L A G _ T X E )   ! =   R E S E T )   & &   ( ( c r 1 i t s   &   U S A R T _ C R 1 _ T X E I E )   ! =   R E S E T ) )  
     {  
         S M A R T C A R D _ T r a n s m i t _ I T ( h s c ) ;  
         r e t u r n ;  
     }  
  
     / *   S M A R T C A R D   i n   m o d e   T r a n s m i t t e r   ( t r a n s m i s s i o n   e n d )   - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f ( ( ( i s r f l a g s   &   S M A R T C A R D _ F L A G _ T C )   ! =   R E S E T )   & &   ( ( c r 1 i t s   &   U S A R T _ C R 1 _ T C I E )   ! =   R E S E T ) )  
     {  
         S M A R T C A R D _ E n d T r a n s m i t _ I T ( h s c ) ;  
         r e t u r n ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f   T x   T r a n s f e r   c o m p l e t e d   c a l l b a c k s  
     *   @ p a r a m     h s c         P o i n t e r   t o   a   S M A R T C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S M A R T C A R D   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ S M A R T C A R D _ T x C p l t C a l l b a c k ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h s c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ S M A R T C A R D _ T x C p l t C a l l b a c k   c a n   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e .  
       * /  
 }  
  
 / * *  
     *   @ b r i e f   R x   T r a n s f e r   c o m p l e t e d   c a l l b a c k  
     *   @ p a r a m     h s c         P o i n t e r   t o   a   S M A R T C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S M A R T C A R D   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ S M A R T C A R D _ R x C p l t C a l l b a c k ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h s c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ S M A R T C A R D _ R x C p l t C a l l b a c k   c a n   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e .  
       * /  
 }  
  
 / * *  
     *   @ b r i e f   S M A R T C A R D   e r r o r   c a l l b a c k  
     *   @ p a r a m     h s c         P o i n t e r   t o   a   S M A R T C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S M A R T C A R D   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ S M A R T C A R D _ E r r o r C a l l b a c k ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h s c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ S M A R T C A R D _ E r r o r C a l l b a c k   c a n   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e .  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     S M A R T C A R D   A b o r t   C o m p l e t e   c a l l b a c k .  
     *   @ p a r a m     h s c   S M A R T C A R D   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ S M A R T C A R D _ A b o r t C p l t C a l l b a c k   ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h s c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ S M A R T C A R D _ A b o r t C p l t C a l l b a c k   c a n   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e .  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     S M A R T C A R D   A b o r t   T r a n s m i t   C o m p l e t e   c a l l b a c k .  
     *   @ p a r a m     h s c   S M A R T C A R D   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ S M A R T C A R D _ A b o r t T r a n s m i t C p l t C a l l b a c k   ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c )  
 {  
         / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
         U N U S E D ( h s c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ S M A R T C A R D _ A b o r t T r a n s m i t C p l t C a l l b a c k   c a n   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e .  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     S M A R T C A R D   A b o r t   R e c e i v e   C o m p l e t e   c a l l b a c k .  
     *   @ p a r a m     h s c   S M A R T C A R D   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ S M A R T C A R D _ A b o r t R e c e i v e C p l t C a l l b a c k   ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c )  
 {  
         / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
         U N U S E D ( h s c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ S M A R T C A R D _ A b o r t R e c e i v e C p l t C a l l b a c k   c a n   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e .  
       * /  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S M A R T C A R D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   P e r i p h e r a l   S t a t e   a n d   E r r o r s   f u n c t i o n s  
     *     @ b r i e f       S M A R T C A R D   S t a t e   a n d   E r r o r s   f u n c t i o n s  
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                 # # # # #   P e r i p h e r a l   S t a t e   a n d   E r r o r s   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   c o n t r o l   t h e   S m a r t C a r d .  
           ( + )   H A L _ S M A R T C A R D _ G e t S t a t e ( )   A P I   c a n   b e   h e l p f u l   t o   c h e c k   i n   r u n - t i m e   t h e   s t a t e   o f   t h e   S m a r t C a r d   p e r i p h e r a l .  
           ( + )   H A L _ S M A R T C A R D _ G e t E r r o r ( )   c h e c k   i n   r u n - t i m e   e r r o r s   t h a t   c o u l d   b e   o c c u r r e d   d u r i n g   c o m m u n i c a t i o n .  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f   R e t u r n   t h e   S M A R T C A R D   h a n d l e   s t a t e  
     *   @ p a r a m     h s c         P o i n t e r   t o   a   S M A R T C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S M A R T C A R D   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t e  
     * /  
 H A L _ S M A R T C A R D _ S t a t e T y p e D e f   H A L _ S M A R T C A R D _ G e t S t a t e ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c )  
 {  
     u i n t 3 2 _ t   t e m p 1 =   0 x 0 0 U ,   t e m p 2   =   0 x 0 0 U ;  
     t e m p 1   =   h s c - > g S t a t e ;  
     t e m p 2   =   h s c - > R x S t a t e ;  
  
     r e t u r n   ( H A L _ S M A R T C A R D _ S t a t e T y p e D e f ) ( t e m p 1   |   t e m p 2 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   t h e   S M A R T C A R D   e r r o r   c o d e  
     *   @ p a r a m     h s c     P o i n t e r   t o   a   S M A R T C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                             t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   S M A R T C A R D .  
     *   @ r e t v a l   S M A R T C A R D   E r r o r   C o d e  
     * /  
 u i n t 3 2 _ t   H A L _ S M A R T C A R D _ G e t E r r o r ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c )  
 {  
     r e t u r n   h s c - > E r r o r C o d e ;  
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
 / * *   @ d e f g r o u p   S M A R T C A R D _ P r i v a t e _ F u n c t i o n s   S M A R T C A R D   P r i v a t e   F u n c t i o n s  
     *   @ {  
     * /  
  
 # i f   ( U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / * *  
     *   @ b r i e f     I n i t i a l i z e   t h e   c a l l b a c k s   t o   t h e i r   d e f a u l t   v a l u e s .  
     *   @ p a r a m     h s c   S M A R T C A R D   h a n d l e .  
     *   @ r e t v a l   n o n e  
     * /  
 v o i d   S M A R T C A R D _ I n i t C a l l b a c k s T o D e f a u l t ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c )  
 {  
     / *   I n i t   t h e   S M A R T C A R D   C a l l b a c k   s e t t i n g s   * /  
     h s c - > T x C p l t C a l l b a c k                         =   H A L _ S M A R T C A R D _ T x C p l t C a l l b a c k ;                         / *   L e g a c y   w e a k   T x C p l t C a l l b a c k                         * /  
     h s c - > R x C p l t C a l l b a c k                         =   H A L _ S M A R T C A R D _ R x C p l t C a l l b a c k ;                         / *   L e g a c y   w e a k   R x C p l t C a l l b a c k                         * /  
     h s c - > E r r o r C a l l b a c k                           =   H A L _ S M A R T C A R D _ E r r o r C a l l b a c k ;                           / *   L e g a c y   w e a k   E r r o r C a l l b a c k                           * /  
     h s c - > A b o r t C p l t C a l l b a c k                   =   H A L _ S M A R T C A R D _ A b o r t C p l t C a l l b a c k ;                   / *   L e g a c y   w e a k   A b o r t C p l t C a l l b a c k                   * /  
     h s c - > A b o r t T r a n s m i t C p l t C a l l b a c k   =   H A L _ S M A R T C A R D _ A b o r t T r a n s m i t C p l t C a l l b a c k ;   / *   L e g a c y   w e a k   A b o r t T r a n s m i t C p l t C a l l b a c k   * /  
     h s c - > A b o r t R e c e i v e C p l t C a l l b a c k     =   H A L _ S M A R T C A R D _ A b o r t R e c e i v e C p l t C a l l b a c k ;     / *   L e g a c y   w e a k   A b o r t R e c e i v e C p l t C a l l b a c k     * /  
  
 }  
 # e n d i f   / *   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ b r i e f   D M A   S M A R T C A R D   t r a n s m i t   p r o c e s s   c o m p l e t e   c a l l b a c k  
     *   @ p a r a m     h d m a       P o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   S M A R T C A R D _ D M A T r a n s m i t C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     S M A R T C A R D _ H a n d l e T y p e D e f *   h s c   =   (   S M A R T C A R D _ H a n d l e T y p e D e f *   ) ( ( D M A _ H a n d l e T y p e D e f *   ) h d m a ) - > P a r e n t ;  
  
     h s c - > T x X f e r C o u n t   =   0 U ;  
  
     / *   D i s a b l e   t h e   D M A   t r a n s f e r   f o r   t r a n s m i t   r e q u e s t   b y   s e t t i n g   t h e   D M A T   b i t  
           i n   t h e   U S A R T   C R 3   r e g i s t e r   * /  
     C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
  
     / *   E n a b l e   t h e   S M A R T C A R D   T r a n s m i t   C o m p l e t e   I n t e r r u p t   * /  
     S E T _ B I T ( h s c - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ T C I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f   D M A   S M A R T C A R D   r e c e i v e   p r o c e s s   c o m p l e t e   c a l l b a c k  
     *   @ p a r a m     h d m a       P o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   S M A R T C A R D _ D M A R e c e i v e C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     S M A R T C A R D _ H a n d l e T y p e D e f *   h s c   =   (   S M A R T C A R D _ H a n d l e T y p e D e f *   ) ( ( D M A _ H a n d l e T y p e D e f *   ) h d m a ) - > P a r e n t ;  
  
     h s c - > R x X f e r C o u n t   =   0 U ;  
  
     / *   D i s a b l e   R X N E ,   P E   a n d   E R R   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   i n t e r r u p t s   * /  
     C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 1 ,   ( U S A R T _ C R 1 _ R X N E I E   |   U S A R T _ C R 1 _ P E I E ) ) ;  
     C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
     / *   D i s a b l e   t h e   D M A   t r a n s f e r   f o r   t h e   r e c e i v e r   r e q u e s t   b y   s e t t i n g   t h e   D M A R   b i t  
           i n   t h e   U S A R T   C R 3   r e g i s t e r   * /  
     C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
  
     / *   A t   e n d   o f   R x   p r o c e s s ,   r e s t o r e   h s c - > R x S t a t e   t o   R e a d y   * /  
     h s c - > R x S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y ;  
  
 # i f   ( U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     / *   C a l l   r e g i s t e r e d   R x   c o m p l e t e   c a l l b a c k   * /  
     h s c - > R x C p l t C a l l b a c k ( h s c ) ;  
 # e l s e  
     / *   C a l l   l e g a c y   w e a k   R x   c o m p l e t e   c a l l b a c k   * /  
     H A L _ S M A R T C A R D _ R x C p l t C a l l b a c k ( h s c ) ;  
 # e n d i f   / *   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K   * /  
 }  
  
 / * *  
     *   @ b r i e f   D M A   S M A R T C A R D   c o m m u n i c a t i o n   e r r o r   c a l l b a c k  
     *   @ p a r a m     h d m a       P o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   S M A R T C A R D _ D M A E r r o r ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     u i n t 3 2 _ t   d m a r e q u e s t   =   0 x 0 0 U ;  
     S M A R T C A R D _ H a n d l e T y p e D e f *   h s c   =   (   S M A R T C A R D _ H a n d l e T y p e D e f *   ) ( ( D M A _ H a n d l e T y p e D e f *   ) h d m a ) - > P a r e n t ;  
     h s c - > R x X f e r C o u n t   =   0 U ;  
     h s c - > T x X f e r C o u n t   =   0 U ;  
     h s c - > E r r o r C o d e   =   H A L _ S M A R T C A R D _ E R R O R _ D M A ;  
  
     / *   S t o p   S M A R T C A R D   D M A   T x   r e q u e s t   i f   o n g o i n g   * /  
     d m a r e q u e s t   =   H A L _ I S _ B I T _ S E T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
     i f ( ( h s c - > g S t a t e   = =   H A L _ S M A R T C A R D _ S T A T E _ B U S Y _ T X )   & &   d m a r e q u e s t )  
     {  
         S M A R T C A R D _ E n d T x T r a n s f e r ( h s c ) ;  
     }  
  
     / *   S t o p   S M A R T C A R D   D M A   R x   r e q u e s t   i f   o n g o i n g   * /  
     d m a r e q u e s t   =   H A L _ I S _ B I T _ S E T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
     i f ( ( h s c - > R x S t a t e   = =   H A L _ S M A R T C A R D _ S T A T E _ B U S Y _ R X )   & &   d m a r e q u e s t )  
     {  
         S M A R T C A R D _ E n d R x T r a n s f e r ( h s c ) ;  
     }  
  
 # i f   ( U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     / *   C a l l   r e g i s t e r e d   u s e r   e r r o r   c a l l b a c k   * /  
     h s c - > E r r o r C a l l b a c k ( h s c ) ;  
 # e l s e  
     / *   C a l l   l e g a c y   w e a k   u s e r   e r r o r   c a l l b a c k   * /  
     H A L _ S M A R T C A R D _ E r r o r C a l l b a c k ( h s c ) ;  
 # e n d i f   / *   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K   * /  
 }  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   S M A R T C A R D   C o m m u n i c a t i o n   T i m e o u t .  
     *   @ p a r a m     h s c         P o i n t e r   t o   a   S M A R T C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S M A R T C A R D   m o d u l e .  
     *   @ p a r a m     F l a g       S p e c i f i e s   t h e   S M A R T C A R D   f l a g   t o   c h e c k .  
     *   @ p a r a m     S t a t u s   T h e   n e w   F l a g   s t a t u s   ( S E T   o r   R E S E T ) .  
     *   @ p a r a m     T i m e o u t   T i m e o u t   d u r a t i o n  
     *   @ p a r a m     T i c k s t a r t   T i c k   s t a r t   v a l u e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   S M A R T C A R D _ W a i t O n F l a g U n t i l T i m e o u t ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ,   u i n t 3 2 _ t   F l a g ,   F l a g S t a t u s   S t a t u s ,   u i n t 3 2 _ t   T i c k s t a r t ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     / *   W a i t   u n t i l   f l a g   i s   s e t   * /  
     w h i l e ( ( _ _ H A L _ S M A R T C A R D _ G E T _ F L A G ( h s c ,   F l a g )   ?   S E T   :   R E S E T )   = =   S t a t u s )  
     {  
         / *   C h e c k   f o r   t h e   T i m e o u t   * /  
         i f ( T i m e o u t   ! =   H A L _ M A X _ D E L A Y )  
         {  
             i f ( ( T i m e o u t   = =   0 U ) | | ( ( H A L _ G e t T i c k ( )   -   T i c k s t a r t   )   >   T i m e o u t ) )  
             {  
                 / *   D i s a b l e   T X E   a n d   R X N E   i n t e r r u p t s   f o r   t h e   i n t e r r u p t   p r o c e s s   * /  
                 C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ T X E I E ) ;  
                 C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ R X N E I E ) ;  
  
                 h s c - > g S t a t e =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y ;  
                 h s c - > R x S t a t e =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h s c ) ;  
  
                 r e t u r n   H A L _ T I M E O U T ;  
             }  
         }  
     }  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     E n d   o n g o i n g   T x   t r a n s f e r   o n   S M A R T C A R D   p e r i p h e r a l   ( f o l l o w i n g   e r r o r   d e t e c t i o n   o r   T r a n s m i t   c o m p l e t i o n ) .  
     *   @ p a r a m     h s c         P o i n t e r   t o   a   S M A R T C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S M A R T C A R D   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   S M A R T C A R D _ E n d T x T r a n s f e r ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c )  
 {  
     / *   A t   e n d   o f   T x   p r o c e s s ,   r e s t o r e   h s c - > g S t a t e   t o   R e a d y   * /  
     h s c - > g S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y ;  
  
     / *   D i s a b l e   T X E I E   a n d   T C I E   i n t e r r u p t s   * /  
     C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 1 ,   ( U S A R T _ C R 1 _ T X E I E   |   U S A R T _ C R 1 _ T C I E ) ) ;  
 }  
  
  
 / * *  
     *   @ b r i e f     E n d   o n g o i n g   R x   t r a n s f e r   o n   S M A R T C A R D   p e r i p h e r a l   ( f o l l o w i n g   e r r o r   d e t e c t i o n   o r   R e c e p t i o n   c o m p l e t i o n ) .  
     *   @ p a r a m     h s c         P o i n t e r   t o   a   S M A R T C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S M A R T C A R D   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   S M A R T C A R D _ E n d R x T r a n s f e r ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c )  
 {  
     / *   A t   e n d   o f   R x   p r o c e s s ,   r e s t o r e   h s c - > R x S t a t e   t o   R e a d y   * /  
     h s c - > R x S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y ;  
  
     / *   D i s a b l e   R X N E ,   P E   a n d   E R R   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   i n t e r r u p t s   * /  
     C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 1 ,   ( U S A R T _ C R 1 _ R X N E I E   |   U S A R T _ C R 1 _ P E I E ) ) ;  
     C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f   S e n d   a n   a m o u n t   o f   d a t a   i n   n o n   b l o c k i n g   m o d e  
     *   @ p a r a m     h s c         P o i n t e r   t o   a   S M A R T C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S M A R T C A R D   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   S M A R T C A R D _ T r a n s m i t _ I T ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c )  
 {  
  
     / *   C h e c k   t h a t   a   T x   p r o c e s s   i s   o n g o i n g   * /  
     i f ( h s c - > g S t a t e   = =   H A L _ S M A R T C A R D _ S T A T E _ B U S Y _ T X )  
     {  
         h s c - > I n s t a n c e - > D R   =   ( u i n t 8 _ t ) ( * h s c - > p T x B u f f P t r   &   0 x F F U ) ;  
         h s c - > p T x B u f f P t r + + ;  
  
         i f ( - - h s c - > T x X f e r C o u n t   = =   0 U )  
         {  
             / *   D i s a b l e   t h e   S M A R T C A R D   T r a n s m i t   d a t a   r e g i s t e r   e m p t y   I n t e r r u p t   * /  
             C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ T X E I E ) ;  
  
             / *   E n a b l e   t h e   S M A R T C A R D   T r a n s m i t   C o m p l e t e   I n t e r r u p t   * /  
             S E T _ B I T ( h s c - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ T C I E ) ;  
         }  
  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     W r a p s   u p   t r a n s m i s s i o n   i n   n o n   b l o c k i n g   m o d e .  
     *   @ p a r a m     h s c         P o i n t e r   t o   a   S M A R T C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   S M A R T C A R D   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   S M A R T C A R D _ E n d T r a n s m i t _ I T ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c )  
 {  
     / *   D i s a b l e   t h e   S M A R T C A R D   T r a n s m i t   C o m p l e t e   I n t e r r u p t   * /  
     C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ T C I E ) ;  
  
     / *   D i s a b l e   t h e   S M A R T C A R D   E r r o r   I n t e r r u p t :   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   * /  
     C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
     / *   T x   p r o c e s s   i s   e n d e d ,   r e s t o r e   h s c - > g S t a t e   t o   R e a d y   * /  
     h s c - > g S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y ;  
  
 # i f   ( U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     / *   C a l l   r e g i s t e r e d   T x   c o m p l e t e   c a l l b a c k   * /  
     h s c - > T x C p l t C a l l b a c k ( h s c ) ;  
 # e l s e  
     / *   C a l l   l e g a c y   w e a k   T x   c o m p l e t e   c a l l b a c k   * /  
     H A L _ S M A R T C A R D _ T x C p l t C a l l b a c k ( h s c ) ;  
 # e n d i f   / *   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K   * /  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f   R e c e i v e   a n   a m o u n t   o f   d a t a   i n   n o n   b l o c k i n g   m o d e  
     *   @ p a r a m     h s c         P o i n t e r   t o   a   S M A R T C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S M A R T C A R D   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   S M A R T C A R D _ R e c e i v e _ I T ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c )  
 {  
  
     / *   C h e c k   t h a t   a   R x   p r o c e s s   i s   o n g o i n g   * /  
     i f ( h s c - > R x S t a t e   = =   H A L _ S M A R T C A R D _ S T A T E _ B U S Y _ R X )  
     {  
         * h s c - > p R x B u f f P t r   =   ( u i n t 8 _ t ) ( h s c - > I n s t a n c e - > D R   &   ( u i n t 8 _ t ) 0 x F F U ) ;  
         h s c - > p R x B u f f P t r + + ;  
  
         i f ( - - h s c - > R x X f e r C o u n t   = =   0 U )  
         {  
             C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ R X N E I E ) ;  
  
             / *   D i s a b l e   t h e   S M A R T C A R D   P a r i t y   E r r o r   I n t e r r u p t   * /  
             C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ P E I E ) ;  
  
             / *   D i s a b l e   t h e   S M A R T C A R D   E r r o r   I n t e r r u p t :   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   * /  
             C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
             / *   R x   p r o c e s s   i s   c o m p l e t e d ,   r e s t o r e   h s c - > R x S t a t e   t o   R e a d y   * /  
             h s c - > R x S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y ;  
  
 # i f   ( U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             / *   C a l l   r e g i s t e r e d   R x   c o m p l e t e   c a l l b a c k   * /  
             h s c - > R x C p l t C a l l b a c k ( h s c ) ;  
 # e l s e  
             / *   C a l l   l e g a c y   w e a k   R x   c o m p l e t e   c a l l b a c k   * /  
             H A L _ S M A R T C A R D _ R x C p l t C a l l b a c k ( h s c ) ;  
 # e n d i f   / *   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K   * /  
  
             r e t u r n   H A L _ O K ;  
         }  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     D M A   S M A R T C A R D   c o m m u n i c a t i o n   a b o r t   c a l l b a c k ,   w h e n   i n i t i a t e d   b y   H A L   s e r v i c e s   o n   E r r o r  
     *                   ( T o   b e   c a l l e d   a t   e n d   o f   D M A   A b o r t   p r o c e d u r e   f o l l o w i n g   e r r o r   o c c u r r e n c e ) .  
     *   @ p a r a m     h d m a   D M A   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   S M A R T C A R D _ D M A A b o r t O n E r r o r ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     S M A R T C A R D _ H a n d l e T y p e D e f *   h s c   =   ( S M A R T C A R D _ H a n d l e T y p e D e f *   ) ( ( D M A _ H a n d l e T y p e D e f *   ) h d m a ) - > P a r e n t ;  
     h s c - > R x X f e r C o u n t   =   0 x 0 0 U ;  
     h s c - > T x X f e r C o u n t   =   0 x 0 0 U ;  
  
 # i f   ( U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     / *   C a l l   r e g i s t e r e d   u s e r   e r r o r   c a l l b a c k   * /  
     h s c - > E r r o r C a l l b a c k ( h s c ) ;  
 # e l s e  
     / *   C a l l   l e g a c y   w e a k   u s e r   e r r o r   c a l l b a c k   * /  
     H A L _ S M A R T C A R D _ E r r o r C a l l b a c k ( h s c ) ;  
 # e n d i f   / *   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K   * /  
 }  
  
 / * *  
     *   @ b r i e f     D M A   S M A R T C A R D   T x   c o m m u n i c a t i o n   a b o r t   c a l l b a c k ,   w h e n   i n i t i a t e d   b y   u s e r  
     *                   ( T o   b e   c a l l e d   a t   e n d   o f   D M A   T x   A b o r t   p r o c e d u r e   f o l l o w i n g   u s e r   a b o r t   r e q u e s t ) .  
     *   @ n o t e       W h e n   t h i s   c a l l b a c k   i s   e x e c u t e d ,   U s e r   A b o r t   c o m p l e t e   c a l l   b a c k   i s   c a l l e d   o n l y   i f   n o  
     *                   A b o r t   s t i l l   o n g o i n g   f o r   R x   D M A   H a n d l e .  
     *   @ p a r a m     h d m a   D M A   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   S M A R T C A R D _ D M A T x A b o r t C a l l b a c k ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     S M A R T C A R D _ H a n d l e T y p e D e f *   h s c   =   (   S M A R T C A R D _ H a n d l e T y p e D e f *   ) ( ( D M A _ H a n d l e T y p e D e f *   ) h d m a ) - > P a r e n t ;  
  
     h s c - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
     / *   C h e c k   i f   a n   A b o r t   p r o c e s s   i s   s t i l l   o n g o i n g   * /  
     i f ( h s c - > h d m a r x   ! =   N U L L )  
     {  
         i f ( h s c - > h d m a r x - > X f e r A b o r t C a l l b a c k   ! =   N U L L )  
         {  
             r e t u r n ;  
         }  
     }  
  
     / *   N o   A b o r t   p r o c e s s   s t i l l   o n g o i n g   :   A l l   D M A   c h a n n e l s   a r e   a b o r t e d ,   c a l l   u s e r   A b o r t   C o m p l e t e   c a l l b a c k   * /  
     h s c - > T x X f e r C o u n t   =   0 x 0 0 U ;  
     h s c - > R x X f e r C o u n t   =   0 x 0 0 U ;  
  
     / *   R e s e t   E r r o r C o d e   * /  
     h s c - > E r r o r C o d e   =   H A L _ S M A R T C A R D _ E R R O R _ N O N E ;  
  
     / *   R e s t o r e   h s c - > g S t a t e   a n d   h s c - > R x S t a t e   t o   R e a d y   * /  
     h s c - > g S t a t e     =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y ;  
     h s c - > R x S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y ;  
  
 # i f   ( U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     / *   C a l l   r e g i s t e r e d   A b o r t   c o m p l e t e   c a l l b a c k   * /  
     h s c - > A b o r t C p l t C a l l b a c k ( h s c ) ;  
 # e l s e  
     / *   C a l l   l e g a c y   w e a k   A b o r t   c o m p l e t e   c a l l b a c k   * /  
     H A L _ S M A R T C A R D _ A b o r t C p l t C a l l b a c k ( h s c ) ;  
 # e n d i f   / *   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K   * /  
 }  
  
 / * *  
     *   @ b r i e f     D M A   S M A R T C A R D   R x   c o m m u n i c a t i o n   a b o r t   c a l l b a c k ,   w h e n   i n i t i a t e d   b y   u s e r  
     *                   ( T o   b e   c a l l e d   a t   e n d   o f   D M A   R x   A b o r t   p r o c e d u r e   f o l l o w i n g   u s e r   a b o r t   r e q u e s t ) .  
     *   @ n o t e       W h e n   t h i s   c a l l b a c k   i s   e x e c u t e d ,   U s e r   A b o r t   c o m p l e t e   c a l l   b a c k   i s   c a l l e d   o n l y   i f   n o  
     *                   A b o r t   s t i l l   o n g o i n g   f o r   T x   D M A   H a n d l e .  
     *   @ p a r a m     h d m a   D M A   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   S M A R T C A R D _ D M A R x A b o r t C a l l b a c k ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     S M A R T C A R D _ H a n d l e T y p e D e f *   h s c   =   (   S M A R T C A R D _ H a n d l e T y p e D e f *   ) ( ( D M A _ H a n d l e T y p e D e f *   ) h d m a ) - > P a r e n t ;  
  
     h s c - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
     / *   C h e c k   i f   a n   A b o r t   p r o c e s s   i s   s t i l l   o n g o i n g   * /  
     i f ( h s c - > h d m a t x   ! =   N U L L )  
     {  
         i f ( h s c - > h d m a t x - > X f e r A b o r t C a l l b a c k   ! =   N U L L )  
         {  
             r e t u r n ;  
         }  
     }  
  
     / *   N o   A b o r t   p r o c e s s   s t i l l   o n g o i n g   :   A l l   D M A   c h a n n e l s   a r e   a b o r t e d ,   c a l l   u s e r   A b o r t   C o m p l e t e   c a l l b a c k   * /  
     h s c - > T x X f e r C o u n t   =   0 x 0 0 U ;  
     h s c - > R x X f e r C o u n t   =   0 x 0 0 U ;  
  
     / *   R e s e t   E r r o r C o d e   * /  
     h s c - > E r r o r C o d e   =   H A L _ S M A R T C A R D _ E R R O R _ N O N E ;  
  
     / *   R e s t o r e   h s c - > g S t a t e   a n d   h s c - > R x S t a t e   t o   R e a d y   * /  
     h s c - > g S t a t e     =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y ;  
     h s c - > R x S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y ;  
  
 # i f   ( U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     / *   C a l l   r e g i s t e r e d   A b o r t   c o m p l e t e   c a l l b a c k   * /  
     h s c - > A b o r t C p l t C a l l b a c k ( h s c ) ;  
 # e l s e  
     / *   C a l l   l e g a c y   w e a k   A b o r t   c o m p l e t e   c a l l b a c k   * /  
     H A L _ S M A R T C A R D _ A b o r t C p l t C a l l b a c k ( h s c ) ;  
 # e n d i f   / *   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K   * /  
 }  
  
 / * *  
     *   @ b r i e f     D M A   S M A R T C A R D   T x   c o m m u n i c a t i o n   a b o r t   c a l l b a c k ,   w h e n   i n i t i a t e d   b y   u s e r   b y   a   c a l l   t o  
     *                   H A L _ S M A R T C A R D _ A b o r t T r a n s m i t _ I T   A P I   ( A b o r t   o n l y   T x   t r a n s f e r )  
     *                   ( T h i s   c a l l b a c k   i s   e x e c u t e d   a t   e n d   o f   D M A   T x   A b o r t   p r o c e d u r e   f o l l o w i n g   u s e r   a b o r t   r e q u e s t ,  
     *                   a n d   l e a d s   t o   u s e r   T x   A b o r t   C o m p l e t e   c a l l b a c k   e x e c u t i o n ) .  
     *   @ p a r a m     h d m a   D M A   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   S M A R T C A R D _ D M A T x O n l y A b o r t C a l l b a c k ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     S M A R T C A R D _ H a n d l e T y p e D e f *   h s c   =   (   S M A R T C A R D _ H a n d l e T y p e D e f *   ) ( ( D M A _ H a n d l e T y p e D e f *   ) h d m a ) - > P a r e n t ;  
  
     h s c - > T x X f e r C o u n t   =   0 x 0 0 U ;  
  
     / *   R e s t o r e   h s c - > g S t a t e   t o   R e a d y   * /  
     h s c - > g S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y ;  
  
 # i f   ( U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     / *   C a l l   r e g i s t e r e d   A b o r t   T r a n s m i t   C o m p l e t e   C a l l b a c k   * /  
     h s c - > A b o r t T r a n s m i t C p l t C a l l b a c k ( h s c ) ;  
 # e l s e  
     / *   C a l l   l e g a c y   w e a k   A b o r t   T r a n s m i t   C o m p l e t e   C a l l b a c k   * /  
     H A L _ S M A R T C A R D _ A b o r t T r a n s m i t C p l t C a l l b a c k ( h s c ) ;  
 # e n d i f   / *   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K   * /  
 }  
  
 / * *  
     *   @ b r i e f     D M A   S M A R T C A R D   R x   c o m m u n i c a t i o n   a b o r t   c a l l b a c k ,   w h e n   i n i t i a t e d   b y   u s e r   b y   a   c a l l   t o  
     *                   H A L _ S M A R T C A R D _ A b o r t R e c e i v e _ I T   A P I   ( A b o r t   o n l y   R x   t r a n s f e r )  
     *                   ( T h i s   c a l l b a c k   i s   e x e c u t e d   a t   e n d   o f   D M A   R x   A b o r t   p r o c e d u r e   f o l l o w i n g   u s e r   a b o r t   r e q u e s t ,  
     *                   a n d   l e a d s   t o   u s e r   R x   A b o r t   C o m p l e t e   c a l l b a c k   e x e c u t i o n ) .  
     *   @ p a r a m     h d m a   D M A   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   S M A R T C A R D _ D M A R x O n l y A b o r t C a l l b a c k ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     S M A R T C A R D _ H a n d l e T y p e D e f *   h s c   =   (   S M A R T C A R D _ H a n d l e T y p e D e f *   ) ( ( D M A _ H a n d l e T y p e D e f *   ) h d m a ) - > P a r e n t ;  
  
     h s c - > R x X f e r C o u n t   =   0 x 0 0 U ;  
  
     / *   R e s t o r e   h s c - > R x S t a t e   t o   R e a d y   * /  
     h s c - > R x S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ R E A D Y ;  
  
 # i f   ( U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     / *   C a l l   r e g i s t e r e d   A b o r t   R e c e i v e   C o m p l e t e   C a l l b a c k   * /  
     h s c - > A b o r t R e c e i v e C p l t C a l l b a c k ( h s c ) ;  
 # e l s e  
     / *   C a l l   l e g a c y   w e a k   A b o r t   R e c e i v e   C o m p l e t e   C a l l b a c k   * /  
     H A L _ S M A R T C A R D _ A b o r t R e c e i v e C p l t C a l l b a c k ( h s c ) ;  
 # e n d i f   / *   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K   * /  
 }  
  
 / * *  
     *   @ b r i e f   C o n f i g u r e   t h e   S M A R T C A R D   p e r i p h e r a l  
     *   @ p a r a m     h s c         P o i n t e r   t o   a   S M A R T C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S M A R T C A R D   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   S M A R T C A R D _ S e t C o n f i g ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c )  
 {  
     u i n t 3 2 _ t   t m p r e g   =   0 x 0 0 U ;  
     u i n t 3 2 _ t   p c l k ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ S M A R T C A R D _ I N S T A N C E ( h s c - > I n s t a n c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ S M A R T C A R D _ P O L A R I T Y ( h s c - > I n i t . C L K P o l a r i t y ) ) ;  
     a s s e r t _ p a r a m ( I S _ S M A R T C A R D _ P H A S E ( h s c - > I n i t . C L K P h a s e ) ) ;  
     a s s e r t _ p a r a m ( I S _ S M A R T C A R D _ L A S T B I T ( h s c - > I n i t . C L K L a s t B i t ) ) ;  
     a s s e r t _ p a r a m ( I S _ S M A R T C A R D _ B A U D R A T E ( h s c - > I n i t . B a u d R a t e ) ) ;  
     a s s e r t _ p a r a m ( I S _ S M A R T C A R D _ W O R D _ L E N G T H ( h s c - > I n i t . W o r d L e n g t h ) ) ;  
     a s s e r t _ p a r a m ( I S _ S M A R T C A R D _ S T O P B I T S ( h s c - > I n i t . S t o p B i t s ) ) ;  
     a s s e r t _ p a r a m ( I S _ S M A R T C A R D _ P A R I T Y ( h s c - > I n i t . P a r i t y ) ) ;  
     a s s e r t _ p a r a m ( I S _ S M A R T C A R D _ M O D E ( h s c - > I n i t . M o d e ) ) ;  
     a s s e r t _ p a r a m ( I S _ S M A R T C A R D _ N A C K _ S T A T E ( h s c - > I n i t . N A C K S t a t e ) ) ;  
  
     / *   T h e   L B C L ,   C P O L   a n d   C P H A   b i t s   h a v e   t o   b e   s e l e c t e d   w h e n   b o t h   t h e   t r a n s m i t t e r   a n d   t h e  
           r e c e i v e r   a r e   d i s a b l e d   ( T E = R E = 0 )   t o   e n s u r e   t h a t   t h e   c l o c k   p u l s e s   f u n c t i o n   c o r r e c t l y .   * /  
     C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 1 ,   ( U S A R T _ C R 1 _ T E   |   U S A R T _ C R 1 _ R E ) ) ;  
  
     / * - - - - - - - - - - - - - - - - - - - - - - - - - - - -   U S A R T   C R 2   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - * /  
     t m p r e g   =   h s c - > I n s t a n c e - > C R 2 ;  
     / *   C l e a r   C L K E N ,   C P O L ,   C P H A   a n d   L B C L   b i t s   * /  
     t m p r e g   & =   ( u i n t 3 2 _ t ) ~ ( ( u i n t 3 2 _ t ) ( U S A R T _ C R 2 _ C P H A   |   U S A R T _ C R 2 _ C P O L   |   U S A R T _ C R 2 _ C L K E N   |   U S A R T _ C R 2 _ L B C L ) ) ;  
     / *   C o n f i g u r e   t h e   S M A R T C A R D   C l o c k ,   C P O L ,   C P H A   a n d   L a s t B i t   - - - - - - - - - - - - - - - - - - - - - - - * /  
     / *   S e t   C P O L   b i t   a c c o r d i n g   t o   h s c - > I n i t . C L K P o l a r i t y   v a l u e   * /  
     / *   S e t   C P H A   b i t   a c c o r d i n g   t o   h s c - > I n i t . C L K P h a s e   v a l u e   * /  
     / *   S e t   L B C L   b i t   a c c o r d i n g   t o   h s c - > I n i t . C L K L a s t B i t   v a l u e   * /  
     / *   S e t   S t o p   B i t s :   S e t   S T O P [ 1 3 : 1 2 ]   b i t s   a c c o r d i n g   t o   h s c - > I n i t . S t o p B i t s   v a l u e   * /  
     t m p r e g   | =   ( u i n t 3 2 _ t ) ( U S A R T _ C R 2 _ C L K E N   |   h s c - > I n i t . C L K P o l a r i t y   |  
                                             h s c - > I n i t . C L K P h a s e |   h s c - > I n i t . C L K L a s t B i t   |   h s c - > I n i t . S t o p B i t s ) ;  
     / *   W r i t e   t o   U S A R T   C R 2   * /  
     W R I T E _ R E G ( h s c - > I n s t a n c e - > C R 2 ,   ( u i n t 3 2 _ t ) t m p r e g ) ;  
  
     t m p r e g   =   h s c - > I n s t a n c e - > C R 2 ;  
  
     / *   C l e a r   S T O P [ 1 3 : 1 2 ]   b i t s   * /  
     t m p r e g   & =   ( u i n t 3 2 _ t ) ~ ( ( u i n t 3 2 _ t ) U S A R T _ C R 2 _ S T O P ) ;  
  
     / *   S e t   S t o p   B i t s :   S e t   S T O P [ 1 3 : 1 2 ]   b i t s   a c c o r d i n g   t o   h s c - > I n i t . S t o p B i t s   v a l u e   * /  
     t m p r e g   | =   ( u i n t 3 2 _ t ) ( h s c - > I n i t . S t o p B i t s ) ;  
  
     / *   W r i t e   t o   U S A R T   C R 2   * /  
     W R I T E _ R E G ( h s c - > I n s t a n c e - > C R 2 ,   ( u i n t 3 2 _ t ) t m p r e g ) ;  
  
     / * - - - - - - - - - - - - - - - - - - - - - - - - - -   U S A R T   C R 1   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - * /  
     t m p r e g   =   h s c - > I n s t a n c e - > C R 1 ;  
  
     / *   C l e a r   M ,   P C E ,   P S ,   T E   a n d   R E   b i t s   * /  
     t m p r e g   & =   ( u i n t 3 2 _ t ) ~ ( ( u i n t 3 2 _ t ) ( U S A R T _ C R 1 _ M   |   U S A R T _ C R 1 _ P C E   |   U S A R T _ C R 1 _ P S   |   U S A R T _ C R 1 _ T E   |   \  
                                                                       U S A R T _ C R 1 _ R E ) ) ;  
  
     / *   C o n f i g u r e   t h e   S M A R T C A R D   W o r d   L e n g t h ,   P a r i t y   a n d   m o d e :  
           S e t   t h e   M   b i t s   a c c o r d i n g   t o   h s c - > I n i t . W o r d L e n g t h   v a l u e  
           S e t   P C E   a n d   P S   b i t s   a c c o r d i n g   t o   h s c - > I n i t . P a r i t y   v a l u e  
           S e t   T E   a n d   R E   b i t s   a c c o r d i n g   t o   h s c - > I n i t . M o d e   v a l u e   * /  
     t m p r e g   | =   ( u i n t 3 2 _ t ) h s c - > I n i t . W o r d L e n g t h   |   h s c - > I n i t . P a r i t y   |   h s c - > I n i t . M o d e ;  
  
     / *   W r i t e   t o   U S A R T   C R 1   * /  
     W R I T E _ R E G ( h s c - > I n s t a n c e - > C R 1 ,   ( u i n t 3 2 _ t ) t m p r e g ) ;  
  
     / * - - - - - - - - - - - - - - - - - - - - - - - - - -   U S A R T   C R 3   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - * /  
     / *   C l e a r   C T S E   a n d   R T S E   b i t s   * /  
     C L E A R _ B I T ( h s c - > I n s t a n c e - > C R 3 ,   ( U S A R T _ C R 3 _ R T S E   |   U S A R T _ C R 3 _ C T S E ) ) ;  
  
     / * - - - - - - - - - - - - - - - - - - - - - - - - - -   U S A R T   B R R   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f ( h s c - > I n s t a n c e   = =   U S A R T 1 )  
     {  
         p c l k   =   H A L _ R C C _ G e t P C L K 2 F r e q ( ) ;  
         h s c - > I n s t a n c e - > B R R   =   S M A R T C A R D _ B R R ( p c l k ,   h s c - > I n i t . B a u d R a t e ) ;  
     }  
     e l s e  
     {  
         p c l k   =   H A L _ R C C _ G e t P C L K 1 F r e q ( ) ;  
         h s c - > I n s t a n c e - > B R R   =   S M A R T C A R D _ B R R ( p c l k ,   h s c - > I n i t . B a u d R a t e ) ;  
     }  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   H A L _ S M A R T C A R D _ M O D U L E _ E N A B L E D   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  